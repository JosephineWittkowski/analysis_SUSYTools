#include <iomanip>
#include "TCanvas.h"

#include "TSelector_SusyNtuple_cutflow.hpp"

using namespace std;
using namespace Susy;

/*--------------------------------------------------------------------------------*/
// TSelector_SusyNtuple_cutflow Constructor
/*--------------------------------------------------------------------------------*/
TSelector_SusyNtuple_cutflow::TSelector_SusyNtuple_cutflow() :
        m_selectB   (false),
        m_vetoB     (false),
        m_selectSFOS(false),
        m_vetoSFOS  (false),
        m_writeOut  (false)
{
  setAnaType(Ana_2Lep);

  if(m_writeOut) {
    out.open("event.dump");
  }
}

/*--------------------------------------------------------------------------------*/
// The Begin() function is called at the start of the query.
/*--------------------------------------------------------------------------------*/
void TSelector_SusyNtuple_cutflow::Begin(TTree * /*tree*/)
{

   TString option = GetOption();

}
void TSelector_SusyNtuple_cutflow::SlaveBegin(TTree* /*tree*/)
{
  

  cutflow_EE = new TH1F("cutflow_EE", "cutflow_EE", 80, 0, 79);
  cutflow_EE_ALL = new TH1F("cutflow_EE_ALL", "cutflow_EE_ALL", 80, 0, 79);

  cutflow_MM = new TH1F("cutflow_MM", "cutflow_MM", 80, 0, 79);
  cutflow_MM_ALL = new TH1F("cutflow_MM_ALL", "cutflow_MM_ALL", 80, 0, 79);

  cutflow_EM = new TH1F("cutflow_EM", "cutflow_EM", 80, 0, 79);
  cutflow_EM_ALL = new TH1F("cutflow_EM_ALL", "cutflow_EM_ALL", 80, 0, 79);  

  m_susyObj.initialize(nt.evt()->isMC);

  SusyNtAna::Begin(0);


  setSelectTaus(true);


  m_trigObjWithoutRU = new DilTrigLogic("Moriond",false/*No Reweight Utils!*/); 
  
  cout << "initialize chargeFlip tool" << endl;
  m_chargeFlip.initialize("/data/etp/jwittkowski/analysis_SUSYTools_03_04/ChargeFlip/data/d0_chargeflip_map.root");  
  
  m_matrix = new SusyMatrixMethod::DiLeptonMatrixMethod();
  m_matrix->configure("/data/etp/jwittkowski/analysis_SUSYTools_03_04/SusyMatrixMethod/data/pass3_Summer2013.root", SusyMatrixMethod::PT, SusyMatrixMethod::PT, SusyMatrixMethod::PT, SusyMatrixMethod::PT);

  
}



Bool_t TSelector_SusyNtuple_cutflow::Process(Long64_t entry)
{
  
  
  GetEntry(entry);
  clearObjects();

  
  m_chainEntry++;
  unsigned int mcid;
  if(nt.evt()->isMC) mcid = nt.evt()->mcChannel;
  else mcid = 111111;
  if(m_chainEntry==0){
    sample_identifier = mcid;
//     mcid_of_first_entry = mcid;
//     cout << "entry 0, mcid_of_first_entry= " << mcid_of_first_entry << endl;
    m_kIsData = !nt.evt()->isMC;

    if(m_kIsData){
    cout << " DATA DATA DATA DATA DATA DATA" << endl;
      calcFakeContribution = true;
  }
    else cout << "MC MC MC MC MC MC MC MC" << endl;
    cout << "sample_identifier= " << sample_identifier << endl;
      calcFakeContribution = false;
    
  }
  if(m_dbg || m_chainEntry%50000==0)
  {
    
    unsigned int mcid = nt.evt()->mcChannel;
    float recalc_sumw = 0.;
    map<unsigned int, float>::const_iterator sumwMapIter = m_sumwMap.find(mcid);
    if(sumwMapIter != m_sumwMap.end()) recalc_sumw = sumwMapIter->second;
	
    cout << "**** Processing entry " << setw(6) << m_chainEntry << " run " << setw(6) << nt.evt()->run << " event " << setw(7) << nt.evt()->event << " sumw= " << nt.evt()->sumw << " recalc_sumw= " << recalc_sumw << " ****" << endl;
  }

  runWithPoD = false;
  
  if(runWithPoD && !m_kIsData && (m_chainEntry==0 || (mcid_of_first_entry != mcid))){
//       float recalc_sumw = 0.;
//       map<unsigned int, float>::const_iterator sumwMapIter = m_sumwMap.find(mcid);
//       if(sumwMapIter != m_sumwMap.end()) recalc_sumw = sumwMapIter->second;
//       h_storeSumwMcid->Fill(mcid, recalc_sumw);
      mcid_of_first_entry = mcid;
//       cout << "recalc_sumw= " << recalc_sumw << endl;
      
      TFile *pFileIn_sumw = new TFile("/data/etp/jwittkowski/analysis_SUSYTools_03_04/sumw_file_mcid126892.root");
      TH1F *h_storeSumwMcid_out = (TH1F*)pFileIn_sumw->Get("h_storeSumwMcid_merged");
      sumw_from_histo = h_storeSumwMcid_out->GetBinContent(mcid+1);
      cout << "sumw_from_histo= " << sumw_from_histo << " = " << h_storeSumwMcid_out->GetBinContent(mcid+1) << endl;
      pFileIn_sumw->Close();
    }
    
  
   
			      
// select signal objects
  selectObjects(NtSys_NOM, false, TauID_medium);

  int flag = nt.evt()->cutFlags[NtSys_NOM];
  //   charge flip background contribution in SS channels: for the e^pm e^pm and e^pm mu^pm channels, processes that are opposite-sign in truth but where one electron has undergone a “charge flip”. Contributions from WW, ttbar, Z/gamma* and single top are via charge-flip
  // In previous analysis, it has been observed that the charge flip rate in data is lower than that in the simulation by about 20%. Because of this disagreement, the electron charge flip rate is measured in data as a function of |eta| and combined with the smaller dependence on pT taken from simulation.
  float weight_ALL_EE = nt.evt()->w;
  float weight_ALL_MM = nt.evt()->w;
  float weight_ALL_EM = nt.evt()->w;
  
  float cutnumber = 0.; fillHistos_EE_SRSS1(cutnumber, mcid, weight_ALL_EE); fillHistos_MM_SRSS1(cutnumber, mcid, weight_ALL_MM); fillHistos_EM_SRSS1(cutnumber, mcid, weight_ALL_EM); // all events in the sample

  if( !(flag & ECut_GRL) ) return false; 
  cutnumber = 1.; fillHistos_EE_SRSS1(cutnumber, mcid, weight_ALL_EE); fillHistos_MM_SRSS1(cutnumber, mcid, weight_ALL_MM); fillHistos_EM_SRSS1(cutnumber, mcid, weight_ALL_EM); //grl Cut

  if( !(ECut_TileTrip & flag) ) return false; 
  cutnumber = 2.; fillHistos_EE_SRSS1(cutnumber, mcid, weight_ALL_EE); fillHistos_MM_SRSS1(cutnumber, mcid, weight_ALL_MM); fillHistos_EM_SRSS1(cutnumber, mcid, weight_ALL_EM); //TileTripReader

//   if ( !(flag & ECut_TTC)) return false;
  cutnumber = 3.; fillHistos_EE_SRSS1(cutnumber, mcid, weight_ALL_EE); fillHistos_MM_SRSS1(cutnumber, mcid, weight_ALL_MM); fillHistos_EM_SRSS1(cutnumber, mcid, weight_ALL_EM);//IncompleteEvents Veto

  if(!(ECut_LarErr & flag) || !(ECut_TileErr & flag)) return false;
  cutnumber = 4.; fillHistos_EE_SRSS1(cutnumber, mcid, weight_ALL_EE); fillHistos_MM_SRSS1(cutnumber, mcid, weight_ALL_MM); fillHistos_EM_SRSS1(cutnumber, mcid, weight_ALL_EM); //LAr/TileError

//   if( !(flag & ECut_HotSpot)) return false; //remove event where a jet points into hot TileCal module 
  cutnumber = 5.; fillHistos_EE_SRSS1(cutnumber, mcid, weight_ALL_EE); fillHistos_MM_SRSS1(cutnumber, mcid, weight_ALL_MM); fillHistos_EM_SRSS1(cutnumber, mcid, weight_ALL_EM); //TileCalHotSpot

  // remove event with VeryLooseBad jets with pT>20 GeV. No eta cut. Only consider jets which are not overlapping with electrons or taus:  
  if(hasBadJet(m_baseJets))return kFALSE;
  cutnumber = 6.; fillHistos_EE_SRSS1(cutnumber, mcid, weight_ALL_EE); fillHistos_MM_SRSS1(cutnumber, mcid, weight_ALL_MM); fillHistos_EM_SRSS1(cutnumber, mcid, weight_ALL_EM);//BadJets
    
  //on top of smart veto, veto event with >=1 jets before electron-jet overlap removal with pT>40 GeV, BCH_CORR_JET > 0.05, DeltaPhi(met,jet)<0.3 (Anyes)  
  JetVector prejets = getPreJets(&nt, NtSys_NOM);
  if(!passDeadRegions(prejets, m_met, nt.evt()->run, nt.evt()->isMC)/* || !(flag & ECut_SmartVeto)*/) return false; //   SusyNtTools: passDeadRegions(...)
  cutnumber = 7.; fillHistos_EE_SRSS1(cutnumber, mcid, weight_ALL_EE); fillHistos_MM_SRSS1(cutnumber, mcid, weight_ALL_MM); fillHistos_EM_SRSS1(cutnumber, mcid, weight_ALL_EM); //CaloJets

  if( !(flag & ECut_GoodVtx)) return false;
  cutnumber = 8.; fillHistos_EE_SRSS1(cutnumber, mcid, weight_ALL_EE); fillHistos_MM_SRSS1(cutnumber, mcid, weight_ALL_MM); fillHistos_EM_SRSS1(cutnumber, mcid, weight_ALL_EM);//PrimaryVertex

  MuonVector preMuons = getPreMuons(&nt, NtSys_NOM);
  if( hasBadMuon(preMuons)) return false;
  cutnumber = 9.; fillHistos_EE_SRSS1(cutnumber, mcid, weight_ALL_EE); fillHistos_MM_SRSS1(cutnumber, mcid, weight_ALL_MM); fillHistos_EM_SRSS1(cutnumber, mcid, weight_ALL_EM);//BadMuons
    
  if(hasCosmicMuon(m_baseMuons)) return false; // !(flag & ECut_Cosmic)  - no longer guarantee the event flags that are stored :-(
  preMuons.clear();
  cutnumber = 10.; fillHistos_EE_SRSS1(cutnumber, mcid, weight_ALL_EE); fillHistos_MM_SRSS1(cutnumber, mcid, weight_ALL_MM); fillHistos_EM_SRSS1(cutnumber, mcid, weight_ALL_EM);//Cosmic Muons


  // Sherpa WW fix, remove radiative b-quark processes that overlap with single top: already done upstream in SusyCommon SusyNtMaker

  if(nt.evt()->hfor == 4) return false; //remove events where same heavy flavor final states arise in multiple samples when combining ALPGEN samples
  cutnumber = 11.; fillHistos_EE_SRSS1(cutnumber, mcid, weight_ALL_EE); fillHistos_MM_SRSS1(cutnumber, mcid, weight_ALL_MM); fillHistos_EM_SRSS1(cutnumber, mcid, weight_ALL_EM);//hfor veto

  if(m_baseLeptons.size() < 2) return false;
  cutnumber = 12.; fillHistos_EE_SRSS1(cutnumber, mcid, weight_ALL_EE); fillHistos_MM_SRSS1(cutnumber, mcid, weight_ALL_MM); fillHistos_EM_SRSS1(cutnumber, mcid, weight_ALL_EM);//at least 2 base leptons

  if( !(m_baseLeptons.size()==2) ) return false;
  cutnumber = 13.; fillHistos_EE_SRSS1(cutnumber, mcid, weight_ALL_EE); fillHistos_MM_SRSS1(cutnumber, mcid, weight_ALL_MM); fillHistos_EM_SRSS1(cutnumber, mcid, weight_ALL_EM);//exactly 2 base leptons


//   if(!(m_baseElectrons.size()==2 || m_baseMuons.size()==2 || (m_baseElectrons.size()+m_baseMuons.size())==2)) return false; //only count leptons where no Mll < 20 GeV. Mll < 12 GeV veto ALREADY DONE FOR SELECTING BASELINE LEPTONS in performOverlapRemoval()


  // discard any SFOS baseline lepton pair with M_ll < 12 GeV unnecessary: already done when skimming/slimming ntuples
  // Any lepton pairs are required to have an invariant mass, m``, above 20 GeV such that to remove low-mass dilepton resonances
  if( Mll(m_baseLeptons[0], m_baseLeptons[1]) < 20 )return false;
  cutnumber = 14.; fillHistos_EE_SRSS1(cutnumber, mcid, weight_ALL_EE); fillHistos_MM_SRSS1(cutnumber, mcid, weight_ALL_MM); fillHistos_EM_SRSS1(cutnumber, mcid, weight_ALL_EM);//Mll
  
  bool useForwardJets = true;
  float METrel = getMetRel(m_met, m_signalLeptons, m_signalJets2Lep, useForwardJets);  
  
  Jet* jet0;
  Jet* jet1;
  TLorentzVector signalJet0_TLV, signalJet1_TLV;
  float mjj = 0.;
  
  if(numberOfCLJets(m_signalJets2Lep) >=1){
    jet0 = m_signalJets2Lep.at(0);    

    signalJet0_TLV.SetPtEtaPhiE(jet0->pt, jet0->eta, jet0->phi, jet0->pt*cosh(jet0->eta));
    if(numberOfCLJets(m_signalJets2Lep) >=2){	
      jet1 = m_signalJets2Lep.at(1);
      signalJet1_TLV.SetPtEtaPhiE(jet1->pt, jet1->eta, jet1->phi, jet1->pt*cosh(jet1->eta));
      mjj = (signalJet0_TLV + signalJet1_TLV).M();
      
    }
  }
//   calcJet_variables(signalJet0_TLV, signalJet1_TLV, m_met->lv());

  ////////////////////////////        EE            //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  
  //calculate normal contribution with signal leptons:
  if(m_baseElectrons.size()==2){
    cutnumber = 15.; fillHistos_EE_SRSS1(cutnumber, mcid, weight_ALL_EE); //pass category
    bool passEE = false;
    Electron* el0;
    Electron* el1;
    LeptonVector leptons;
    ElectronVector electrons;
    TLorentzVector el0_TLV, el1_TLV;
    
    if(m_signalElectrons.size()==2){
      passEE = true;
      cutnumber = 16.; fillHistos_EE_SRSS1(cutnumber, mcid, weight_ALL_EE); //pass nlep
     
      el0 = (m_signalElectrons.at(0)->pt > m_signalElectrons.at(1)->pt) ? m_signalElectrons.at(0) : m_signalElectrons.at(1);
      el1 = (m_signalElectrons.at(0)->pt > m_signalElectrons.at(1)->pt) ? m_signalElectrons.at(1) : m_signalElectrons.at(0);
      
      leptons = m_signalLeptons;
      electrons = m_signalElectrons;
      
      el0_TLV.SetPtEtaPhiE(el0->pt, el0->eta ,el0->phi, el0->pt*cosh(el0->eta));
      el1_TLV.SetPtEtaPhiE(el1->pt, el1->eta ,el1->phi, el1->pt*cosh(el1->eta));
    }
      
//       make sure you take the baseline leptons:
      if (calcFakeContribution && m_baseElectrons.size()==2 ){
	passEE = true;
	leptons = m_baseLeptons;
	electrons = m_baseElectrons;
	el0 = (electrons.at(0)->pt > electrons.at(1)->pt) ? electrons.at(0) : electrons.at(1);
	el1 = (electrons.at(0)->pt > electrons.at(1)->pt) ? electrons.at(1) : electrons.at(0);
      }
	
      if(passEE && m_signalTaus.size() == 0){
	
	  cutnumber = 17.; fillHistos_EE_SRSS1(cutnumber, mcid, weight_ALL_EE);
	  if(m_trigObjWithoutRU->passDilEvtTrig(leptons, 0., nt.evt())){ //valid pT region
	    cutnumber = 18.; fillHistos_EE_SRSS1(cutnumber, mcid, weight_ALL_EE);
	
	    if(nt.evt()->isMC || (!nt.evt()->isMC && m_trigObjWithoutRU->passDilTrigMatch(leptons, 0., nt.evt()))){  //match to trigger (in MC not needed bc weighted)
	      cutnumber = 19.; fillHistos_EE_SRSS1(cutnumber, mcid, weight_ALL_EE);
	      if(!nt.evt()->isMC || CheckRealLeptons(electrons, m_signalMuons)){
		cutnumber = 20.; fillHistos_EE_SRSS1(cutnumber, mcid, weight_ALL_EE);
		
		//time to calc weights:
		//------------------------------------------------------------------------------------
		//calc lepton SF:
		float lep_SF_EE = 1.0;
		if(nt.evt()->isMC) lep_SF_EE = el0->effSF * el1->effSF;		
		
		//calc trigger weight:
		float trigW_EE = 1.;
		if(nt.evt()->isMC) trigW_EE = m_trigObjWithoutRU->getTriggerWeight(leptons, nt.evt()->isMC, 0., 0, nt.evt()->nVtx, NtSys_NOM);
		//product of all weights:
		weight_ALL_EE = (nt.evt()->isMC) ? getEventWeight(LUMI_A_L, true) * lep_SF_EE * trigW_EE : 1; //consider pileup, xsec, lumi (as argument), MC eventWeight.
		
		//calc charge flip weights: 
		//Note that the charge flip is only applied in SS region (ee or em) and only for MC events that are true OS.
		//The charge flip changes both the lepton pt of the electron that charge flip and the change needs to be propagated to the met.
		float chargeFlipWeight = 1.0;

		//make a copy of electrons and MET which will eventually be changed by ChargeFlip tool:
		ElectronVector electrons_SS;
		electrons_SS = electrons;
		Electron* el0_SS;
		Electron* el1_SS;
		el0_SS = (electrons.at(0)->pt > electrons.at(1)->pt) ? electrons.at(0) : electrons.at(1);
		el1_SS = (electrons.at(0)->pt > electrons.at(1)->pt) ? electrons.at(1) : electrons.at(0);
		TLorentzVector el0_SS_TLV, el1_SS_TLV;
		el0_SS_TLV.SetPtEtaPhiE(el0_SS->pt, el0_SS->eta ,el0_SS->phi, el0_SS->pt*cosh(el0_SS->eta));
		el1_SS_TLV.SetPtEtaPhiE(el1_SS->pt, el1_SS->eta ,el1_SS->phi, el1_SS->pt*cosh(el1_SS->eta));
		
		TLorentzVector met_SS_TLV;
		TVector2 met_SS_TVector2;
		met_SS_TLV = m_met->lv();
		met_SS_TVector2.Set(met_SS_TLV.Px(), met_SS_TLV.Py());
		if((el0->q * el1->q)<0){		  
		  int pdg0 = 11 * (-1) * el0->q; // Remember 11 = elec which has charge -1
		  int pdg1 = 11 * (-1) * el1->q;
		  
		  chargeFlipWeight = m_chargeFlip.OS2SS(pdg0, &el0_SS_TLV, pdg1, &el1_SS_TLV, &met_SS_TVector2, 0);
// 		  cout << nt.evt()->event << "  chargeFlipWeight= " << chargeFlipWeight << endl;
		  chargeFlipWeight*=  m_chargeFlip.overlapFrac().first;
// 		  cout << nt.evt()->event << " chargeFlipWeight= " << chargeFlipWeight << endl;
		  

		  //get changed MET and fill in TLorentzVector:
		  met_SS_TLV.SetPx(met_SS_TVector2.Px());
		  met_SS_TLV.SetPy(met_SS_TVector2.Py());		  
		  met_SS_TLV.SetE(sqrt(pow(met_SS_TVector2.Px(),2) + pow(met_SS_TVector2.Py(),2)));

		}
		float weight_ALL_SS_EE = 1.0;
		if(!nt.evt()->isMC && calcFakeContribution){
		  weight_ALL_EE = getFakeWeight(m_baseLeptons, SusyMatrixMethod::FR_SRSSInc, METrel, SusyMatrixMethod::SYS_NONE);
		  weight_ALL_SS_EE = getFakeWeight(m_baseLeptons, SusyMatrixMethod::FR_SRSSInc, METrel, SusyMatrixMethod::SYS_NONE);
		}
		weight_ALL_SS_EE = weight_ALL_EE * chargeFlipWeight;
		//------------------------------------------------------------------------------------
		calc_EE_variables(el0, el1, el0_SS_TLV, el1_SS_TLV, met_SS_TLV, signalJet0_TLV, signalJet1_TLV, useForwardJets);
		//------------------------------------------------------------------------------------
		//----------------------------------SR-SS-EE------------------------------------------
		//------------------------------------------------------------------------------------
		cutnumber = 21.; fillHistos_EE_SRSS1(cutnumber, mcid, weight_ALL_SS_EE); //SS cut: applied only on weighted events
		cutnumber = 22.; fillHistos_EE_SRSS1(cutnumber, mcid, weight_ALL_SS_EE);

		bool unbiased = true;
		float d0_el0;
		float d0_el1;
		float err_d0_el0;
		float err_d0_el1;
		if(unbiased){
		  d0_el0 = el0->d0Unbiased;
		  err_d0_el0 = el0->errD0Unbiased;
		  d0_el1 = el1->d0Unbiased;		  
		  err_d0_el1 = el1->errD0Unbiased;
		}
		else{
		  d0_el0 = el0->d0;
		  err_d0_el0 = el0->errD0;
		  d0_el1 = el1->d0;  
		  err_d0_el1 = el1->errD0;
		}
// 		cout << "-----------------------" << endl;
// 		const Jet* closestJet_el0;
// 		float mindR=999;
// 		float mindPhiJMet=999;
// 		for(uint j=0; j<m_signalJets2Lep.size(); j++){
// 		  const Jet* cj = m_signalJets2Lep.at(j);
// 		  float dPhi = fabs(TVector2::Phi_mpi_pi(cj->phi-m_met->lv().Phi()))*TMath::RadToDeg();
// 		  if(dPhi<mindPhiJMet) mindPhiJMet=dPhi;
// 		  if(el0->DeltaR(*cj)>mindR) continue;
// 		  mindR = el0->DeltaR(*cj);
// 		  closestJet_el0 = cj;
// 		}
// 		float qd0_el0 =d0_el0/fabs(d0_el0);
// 		float m_sPhi_el0 = el0->phi + qd0_el0 * TMath::Pi()/2.;
// 		float dPhi_el0 = m_sPhi_el0- closestJet_el0->phi;
// 		float signIP_el0 =  fabs(cos(dPhi_el0))/(cos(dPhi_el0)+1e-32) * fabs(d0_el0); 
// 		float sD0_el0 = signIP_el0 / el0->d0Sig(true);
// 		cout << nt.evt()->event << " d0_el0= " << d0_el0 << " err_d0_el0= " << err_d0_el0 << " j->phi= " << closestJet_el0->phi << " el0->phi= " << el0->phi << " signIP_el0= " << signIP_el0 << endl;
		
		if(fabs(el0->d0Sig(true))<=3.0 && fabs(el1->d0Sig(true))<=3.0){//|d0/sd0|<3   (for electron) (update to latest QFlip)
		  cutnumber = 23.; fillHistos_EE_SRSS1(cutnumber, mcid, weight_ALL_SS_EE);
		  if(numberOfFJets(m_signalJets2Lep) == 0){
		    weight_ALL_SS_EE *= getBTagWeight(nt.evt());
		    cutnumber = 24.; fillHistos_EE_SRSS1(cutnumber, mcid, weight_ALL_SS_EE);
		    if(numberOfCBJets(m_signalJets2Lep) == 0){
		      cutnumber = 25.; fillHistos_EE_SRSS1(cutnumber, mcid, weight_ALL_SS_EE);
		      if(numberOfCLJets(m_signalJets2Lep) >=1){
			cutnumber = 26.; fillHistos_EE_SRSS1(cutnumber, mcid, weight_ALL_SS_EE);
			if(el0_SS_TLV.Pt()>=20. && el1_SS_TLV.Pt()>=20. && ((el0_SS_TLV.Pt()>el1_SS_TLV.Pt() && el0_SS_TLV.Pt() >= 30.) || (el0_SS_TLV.Pt()<el1_SS_TLV.Pt() && el1_SS_TLV.Pt() >= 30.))){
			  
			  cutnumber = 27.; fillHistos_EE_SRSS1(cutnumber, mcid, weight_ALL_SS_EE);
			  if((el0_SS_TLV + el1_SS_TLV).M() > MZ+10. || (el0_SS_TLV + el1_SS_TLV).M() < MZ-10.){
			    cutnumber = 28.; fillHistos_EE_SRSS1(cutnumber, mcid, weight_ALL_SS_EE); //ZVeto
// 			    cout << "EE event " << nt.evt()->event << " el0.Pt()= " << el0_SS_TLV.Pt() << " el1.Pt()= " << el1_SS_TLV.Pt(); 
			    float mtWW_EE = calcMt((el0_SS_TLV + el1_SS_TLV), met_SS_TLV);
// 			     cout << " mtWW= " << mtWW_EE << endl;
			    
			    //SRSS1
			    
			    if(mtWW_EE >= 150.){
// 			      cout << "passed" << endl;
			      
			      cutnumber = 29.; fillHistos_EE_SRSS1(cutnumber, mcid, weight_ALL_SS_EE);
			      float HT_EE = calcHT(el0_SS_TLV, el1_SS_TLV, met_SS_TLV, m_signalJets2Lep);
			      if(HT_EE >= 200.){
				cutnumber = 30.; fillHistos_EE_SRSS1(cutnumber, mcid, weight_ALL_SS_EE);
				float METrel_SS = recalcMetRel(met_SS_TLV, el0_SS_TLV, el1_SS_TLV, m_signalJets2Lep, useForwardJets);
				if(METrel_SS>=50.){
				  cutnumber = 31.; fillHistos_EE_SRSS1(cutnumber, mcid, weight_ALL_SS_EE);
				  //SRSS2
				  float mt2 = calcMT2(met_SS_TLV, el0_SS_TLV, el1_SS_TLV);
				  if(mt2>=90.){
				    cutnumber = 32.; fillHistos_EE_SRSS2(cutnumber, mcid, weight_ALL_SS_EE);
				  }
				}
			      }
			    }
			  }
			}
		      }
		    }
		  }
		}
		//------------------------------------------------------------------------------------
		//----------------------------------SR-OS-EE------------------------------------------
		//------------------------------------------------------------------------------------
		if((el0->q * el1->q)<0){
		  cutnumber = 50.; fillHistos_EE_SROS1(cutnumber, mcid, weight_ALL_EE);
		  cutnumber = 51.; fillHistos_EE_SROS1(cutnumber, mcid, weight_ALL_EE);
		  if(numberOfFJets(m_signalJets2Lep) == 0){
		    weight_ALL_EE *= getBTagWeight(nt.evt());
		    cutnumber = 52.; fillHistos_EE_SROS1(cutnumber, mcid, weight_ALL_EE);
		    if(numberOfCBJets(m_signalJets2Lep) == 0){
		      cutnumber = 53.; fillHistos_EE_SROS1(cutnumber, mcid, weight_ALL_EE);
		      if(numberOfCLJets(m_signalJets2Lep) >=2){
			cutnumber = 54.; fillHistos_EE_SROS1(cutnumber, mcid, weight_ALL_EE);
			TLorentzVector signalJet0_TLV, signalJet1_TLV;
			signalJet0_TLV.SetPtEtaPhiE(jet0->pt, jet0->eta, jet0->phi, jet0->pt*cosh(jet0->eta));
			signalJet1_TLV.SetPtEtaPhiE(jet1->pt, jet1->eta, jet1->phi, jet1->pt*cosh(jet1->eta));
			mjj = Mll(m_signalJets2Lep.at(0), m_signalJets2Lep.at(1));
			if(mjj >= 50. && mjj <= 100.){
			  cutnumber = 55.; fillHistos_EE_SROS1(cutnumber, mcid, weight_ALL_EE);
			  if(el0_TLV.Pt() >= 30 && el1_TLV.Pt() >= 30){
			    cutnumber = 56.; fillHistos_EE_SROS1(cutnumber, mcid, weight_ALL_EE);
			    float DeltaRee = fabs(el0_TLV.DeltaR(el1_TLV));
			    if(DeltaRee<1.5){
			      cutnumber = 57.; fillHistos_EE_SROS1(cutnumber, mcid, weight_ALL_EE);
			      float mTemin = (Mt(el0, m_met) > Mt(el1, m_met)) ? Mt(el1, m_met) : Mt(el0, m_met);
			      if(mTemin >= 60.){
				cutnumber = 58.; fillHistos_EE_SROS1(cutnumber, mcid, weight_ALL_EE);
				float DeltaPhiMETee = fabs((el0_TLV + el1_TLV).DeltaPhi(m_met->lv()));
				if(DeltaPhiMETee>1.5){
				  cutnumber = 59.; fillHistos_EE_SROS1(cutnumber, mcid, weight_ALL_EE);
				  if(m_met->lv().Pt() >= 80.){
				    cutnumber = 60.; fillHistos_EE_SROS1(cutnumber, mcid, weight_ALL_EE);
				  }
				}
			      }
			    }
			  }
			}
		      }
		    }
		  }
		}
	      }
	    }
	  }
	}
      }
  
 
  
  
  ////////////////////////////        MM            //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  if(m_baseMuons.size()==2){
    cutnumber = 15.; fillHistos_MM_SRSS1(cutnumber, mcid, weight_ALL_MM); //pass category
    Muon* mu0;
    Muon* mu1;
    LeptonVector leptons;
    MuonVector muons;
    TLorentzVector mu0_TLV, mu1_TLV;
    bool passMM = false;
    
    if(m_signalMuons.size()==2 ){
      
      passMM = true;
      mu0 = (m_signalMuons.at(0)->pt > m_signalMuons.at(1)->pt) ? m_signalMuons.at(0) : m_signalMuons.at(1);
      mu1 = (m_signalMuons.at(0)->pt > m_signalMuons.at(1)->pt) ? m_signalMuons.at(1) : m_signalMuons.at(0);

      leptons = m_signalLeptons;
      muons = m_signalMuons;
      
      mu0_TLV.SetPtEtaPhiE(mu0->pt, mu0->eta ,mu0->phi, mu0->pt*cosh(mu0->eta));
      mu1_TLV.SetPtEtaPhiE(mu1->pt, mu1->eta ,mu1->phi, mu1->pt*cosh(mu1->eta));
      }
      
//     calculate fake bg contribution with m_baseMuons, don't use info about m_signalElectrons
    if(calcFakeContribution && m_baseMuons.size()==2 ){   
      
      passMM = true;
      mu0 = (m_baseMuons.at(0)->pt > m_baseMuons.at(1)->pt) ? m_baseMuons.at(0) : m_baseMuons.at(1);
      mu1 = (m_baseMuons.at(0)->pt > m_baseMuons.at(1)->pt) ? m_baseMuons.at(1) : m_baseMuons.at(0);
      
      leptons = m_baseLeptons;
      muons = m_baseMuons;
    }
      if(passMM && fabs(mu0->Eta())<=2.4 && fabs(mu1->Eta())<=2.4){
	cutnumber = 16.; fillHistos_MM_SRSS1(cutnumber, mcid, weight_ALL_MM); //pass nlep
	if(m_signalTaus.size() == 0){
	  cutnumber = 17.; fillHistos_MM_SRSS1(cutnumber, mcid, weight_ALL_MM);
	  if(m_trigObjWithoutRU->passDilEvtTrig(leptons, 0., nt.evt())){ //valid pT region
	    cutnumber = 18.; fillHistos_MM_SRSS1(cutnumber, mcid, weight_ALL_MM);
	    if(m_signalTaus.size() == 0){
	      
	      if(nt.evt()->isMC || (!nt.evt()->isMC && m_trigObjWithoutRU->passDilTrigMatch(leptons, 0., nt.evt()))){ //match to trigger
		cutnumber = 19.; fillHistos_MM_SRSS1(cutnumber, mcid, weight_ALL_MM);

		if(!nt.evt()->isMC || CheckRealLeptons(m_signalElectrons, muons)){
		  cutnumber = 20.; fillHistos_MM_SRSS1(cutnumber, mcid, weight_ALL_MM);
		  //time to calc weights:
		  //------------------------------------------------------------------------------------
		  //calc lepton SF:		  
		  float lep_SF_MM = 1.0;
		  if(nt.evt()->isMC) lep_SF_MM = mu0->effSF * mu1->effSF;	
		  //calc trigger weight:
		  float trigW_MM = 1.;
		  if(nt.evt()->isMC) trigW_MM = m_trigObjWithoutRU->getTriggerWeight(leptons, nt.evt()->isMC, m_met->lv().Et(), numberOfCLJets(m_signalJets2Lep), nt.evt()->nVtx, NtSys_NOM);
		  //product of all weights:
		  weight_ALL_MM = (nt.evt()->isMC) ? getEventWeight(LUMI_A_L, true) * lep_SF_MM * trigW_MM: 1; //consider pileup, xsec, lumi (as argument), MC eventWeight.
		  if(!nt.evt()->isMC && calcFakeContribution) weight_ALL_MM = getFakeWeight(m_baseLeptons, SusyMatrixMethod::FR_SRSSInc, METrel, SusyMatrixMethod::SYS_NONE);
		  //------------------------------------------------------------------------------------
		  calc_MM_variables(mu0, mu1, mu0_TLV, mu1_TLV, m_met->lv(), signalJet0_TLV, signalJet1_TLV, useForwardJets);
		  //------------------------------------------------------------------------------------
		  //----------------------------------SR-SS-MM------------------------------------------
		  //------------------------------------------------------------------------------------
		  if(mu0->q*mu1->q>0){
		    cutnumber = 21.; fillHistos_MM_SRSS1(cutnumber, mcid, weight_ALL_MM); //SS cut: for MM applied only on SS events.
		    if(muEtConeCorr(mu0, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC)/mu0->pt < 0.1 && muEtConeCorr(mu1, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC)/mu1->pt < 0.1){
		      cutnumber = 22.; fillHistos_MM_SRSS1(cutnumber, mcid, weight_ALL_MM);
		      cutnumber = 23.; fillHistos_MM_SRSS1(cutnumber, mcid, weight_ALL_MM);
		      if(numberOfFJets(m_signalJets2Lep) == 0){
			weight_ALL_MM *= getBTagWeight(nt.evt());
			cutnumber = 24.; fillHistos_MM_SRSS1(cutnumber, mcid, weight_ALL_MM);
			if(numberOfCBJets(m_signalJets2Lep) == 0){
			  cutnumber = 25.; fillHistos_MM_SRSS1(cutnumber, mcid, weight_ALL_MM);
			  if(numberOfCLJets(m_signalJets2Lep) >=1){
			    cutnumber = 26.; fillHistos_MM_SRSS1(cutnumber, mcid, weight_ALL_MM);
			    if(m_signalLeptons.at(0)->Pt() >= 30.){
			    cutnumber = 27.; fillHistos_MM_SRSS1(cutnumber, mcid, weight_ALL_MM);
			    cutnumber = 28.; fillHistos_MM_SRSS1(cutnumber, mcid, weight_ALL_MM); //ZVeto
			    float mtWW_MM = calcMt((mu0_TLV + mu1_TLV), m_met->lv());
			    //SRSS1
			    if(mtWW_MM > 100.){ //100, 150, 200
			      cutnumber = 29.; fillHistos_MM_SRSS1(cutnumber, mcid, weight_ALL_MM);
			      float HT_MM = calcHT(mu0_TLV, mu1_TLV, m_met->lv(), m_signalJets2Lep);
			      if(HT_MM >= 200.){
				cutnumber = 30.; fillHistos_MM_SRSS1(cutnumber, mcid, weight_ALL_MM);
			      }
			    }
			    //SRSS2
			    if(mtWW_MM > 150.){ //100, 150, 200
			      cutnumber = 32.; fillHistos_MM_SRSS2(cutnumber, mcid, weight_ALL_MM);
			      float HT_MM = calcHT(mu0_TLV, mu1_TLV, m_met->lv(), m_signalJets2Lep);
			      if(HT_MM >= 200.){
				cutnumber = 33.; fillHistos_MM_SRSS2(cutnumber, mcid, weight_ALL_MM);
			      }
			    }
			    //SRSS3
			    if(mtWW_MM > 200.){ //100, 150, 200
			      cutnumber = 35.; fillHistos_MM_SRSS3(cutnumber, mcid, weight_ALL_MM);
			      float HT_MM = calcHT(mu0_TLV, mu1_TLV, m_met->lv(), m_signalJets2Lep);
			      if(HT_MM >= 200.){
				cutnumber = 36.; fillHistos_MM_SRSS3(cutnumber, mcid, weight_ALL_MM);
			      }
			    }
			    //SRSS4
			    if(mtWW_MM > 200.){ //100, 150, 200
			      cutnumber = 38.; fillHistos_MM_SRSS4(cutnumber, mcid, weight_ALL_MM);
			      float HT_MM = calcHT(mu0_TLV, mu1_TLV, m_met->lv(), m_signalJets2Lep);
			      if(HT_MM >= 200.){
				cutnumber = 39.; fillHistos_MM_SRSS4(cutnumber, mcid, weight_ALL_MM);
				if(METrel>50.){
				  cutnumber = 40.; fillHistos_MM_SRSS4(cutnumber, mcid, weight_ALL_MM);
				}
			      }
			    }
			  }
			}
		      }
		    }
		  }
		}
		  //------------------------------------------------------------------------------------
		  //----------------------------------SR-OS-MM------------------------------------------
		  //------------------------------------------------------------------------------------
		  if((mu0->q * mu1->q)<0){
		    cutnumber = 50.; fillHistos_MM_SROS1(cutnumber, mcid, weight_ALL_MM);
		    if(muEtConeCorr(mu0, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC)/mu0->pt < 0.1 && muEtConeCorr(mu1, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC)/mu1->pt < 0.1){
		      cutnumber = 51.; fillHistos_MM_SROS1(cutnumber, mcid, weight_ALL_MM);
		      if(numberOfFJets(m_signalJets2Lep) == 0){
			weight_ALL_MM *= getBTagWeight(nt.evt());
			cutnumber = 52.; fillHistos_MM_SROS1(cutnumber, mcid, weight_ALL_MM);
			if(numberOfCBJets(m_signalJets2Lep) == 0){
			  cutnumber = 53.; fillHistos_MM_SROS1(cutnumber, mcid, weight_ALL_MM);
			  if(numberOfCLJets(m_signalJets2Lep) >=2){  
			    cutnumber = 54.; fillHistos_MM_SROS1(cutnumber, mcid, weight_ALL_MM);
			    TLorentzVector signalJet0_TLV, signalJet1_TLV;
			    signalJet0_TLV.SetPtEtaPhiE(jet0->pt, jet0->eta, jet0->phi, jet0->pt*cosh(jet0->eta));
			    signalJet1_TLV.SetPtEtaPhiE(jet1->pt, jet1->eta, jet1->phi, jet1->pt*cosh(jet1->eta));
			    mjj = Mll(m_signalJets2Lep.at(0), m_signalJets2Lep.at(1));
			    if(mjj >= 50. && mjj <= 100.){
			      cutnumber = 55.; fillHistos_MM_SROS1(cutnumber, mcid, weight_ALL_MM);
			      if(mu0_TLV.Pt() >= 30 && mu1_TLV.Pt() >= 30){
				cutnumber = 56.; fillHistos_MM_SROS1(cutnumber, mcid, weight_ALL_MM);
				float DeltaRmm = fabs(mu0_TLV.DeltaR(mu1_TLV));
				if(DeltaRmm<1.5){
				  cutnumber = 57.; fillHistos_MM_SROS1(cutnumber, mcid, weight_ALL_MM);
				  float mTmmin = (Mt(mu0, m_met) > Mt(mu1, m_met)) ? Mt(mu1, m_met) : Mt(mu0, m_met);
				  if(mTmmin >= 60.){			  
				    cutnumber = 58.; fillHistos_MM_SROS1(cutnumber, mcid, weight_ALL_MM);
				    float DeltaPhiMETmm = fabs((mu0_TLV + mu1_TLV).DeltaPhi(m_met->lv()));
				    if(DeltaPhiMETmm>1.5){
				      cutnumber = 59.; fillHistos_MM_SROS1(cutnumber, mcid, weight_ALL_MM);
				      if(m_met->lv().Pt() >= 80.){
					cutnumber = 60.; fillHistos_MM_SROS1(cutnumber, mcid, weight_ALL_MM);
				      }
				    }
				  }
				}
			      }
			    }
			  }
			}
		      }
		    }
		  }
		}
	      }
	    }
	  }
	}
      }
    }
	 
  
  ////////////////////////////        EM            //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  

  

  if((m_baseElectrons.size()==1 && m_baseMuons.size() ==1)){

  TLorentzVector el_TLV, mu_TLV;
  LeptonVector leptons;
  MuonVector muons;
  ElectronVector electrons;
    
  if(m_signalMuons.size()==1 && m_signalElectrons.size()==1 ){    
    leptons = m_signalLeptons;
    muons = m_signalMuons;
    electrons = m_signalElectrons;
  }
  if(calcFakeContribution){    
    leptons = m_baseLeptons;
    muons = m_baseMuons;
    electrons = m_baseElectrons;
  }
  if((m_signalMuons.size()==1 && m_signalElectrons.size()==1) || calcFakeContribution){ 
  Electron* el;
  Muon* mu;
  mu = muons.at(0);
  el = electrons.at(0);
  
  cutnumber = 15.; fillHistos_EM_SRSS1(cutnumber, mcid, weight_ALL_EM); //pass category

   
    
    if(muons.size() == 1 && electrons.size() == 1 && fabs(mu->Eta())<=2.4){
      cutnumber = 16.; fillHistos_EM_SRSS1(cutnumber, mcid, weight_ALL_EM); //pass nlep	
	

	el_TLV.SetPtEtaPhiE(el->pt, el->eta ,el->phi, el->pt*cosh(el->eta));
	mu_TLV.SetPtEtaPhiE(mu->pt, mu->eta ,mu->phi, mu->pt*cosh(mu->eta));
	float pt1 = (mu->pt > el->pt) ? mu->pt : el->pt;
	float pt2 = (mu->pt > el->pt) ? el->pt : mu->pt;
	if(m_signalTaus.size() == 0){
	  cutnumber = 17.; fillHistos_EM_SRSS1(cutnumber, mcid, weight_ALL_EM);
	  if(m_trigObjWithoutRU->passDilEvtTrig(leptons, 0., nt.evt())){ //valid pT region)   
	    cutnumber = 18.; fillHistos_EM_SRSS1(cutnumber, mcid, weight_ALL_EM);

	    if(nt.evt()->isMC || (!nt.evt()->isMC && m_trigObjWithoutRU->passDilTrigMatch(leptons, 0., nt.evt()))){ //match to trigger
	      cutnumber = 19.; fillHistos_EM_SRSS1(cutnumber, mcid, weight_ALL_EM);
	      if(!nt.evt()->isMC || CheckRealLeptons(electrons, muons)){
		cutnumber = 20.; fillHistos_EM_SRSS1(cutnumber, mcid, weight_ALL_EM);
		
// 		time to calc weights:
		//------------------------------------------------------------------------------------
	
		//calc lepton SF:
		float lep_SF_EM = 1.0;
		if(nt.evt()->isMC) lep_SF_EM = mu->effSF * el->effSF;
		//calc trigger weight:
		float trigW_EM = 1.;
		if(nt.evt()->isMC) trigW_EM = m_trigObjWithoutRU->getTriggerWeight(leptons, nt.evt()->isMC, m_met->lv().Et(), numberOfCLJets(m_signalJets2Lep), nt.evt()->nVtx, NtSys_NOM);
		//product of all weights:
		weight_ALL_EM = (nt.evt()->isMC) ? getEventWeight(LUMI_A_L, true) * lep_SF_EM * trigW_EM: 1;
		

		//calc charge flip weights: 
		//Note that the charge flip is only applied in SS region (ee or em) and only for MC events that are true OS.
		//The charge flip changes both the lepton pt of the electron that charge flip and the change needs to be propagated to the met.
		float chargeFlipWeight = 1.0;		
		//make a copy of electrons and MET which will eventually be changed by ChargeFlip tool:
		Electron* el_SS;
		el_SS = electrons.at(0);
		ElectronVector electrons_SS;
		electrons_SS = electrons;
		TLorentzVector el_SS_TLV;
		el_SS_TLV.SetPtEtaPhiE(el_SS->pt, el_SS->eta ,el_SS->phi, el_SS->pt*cosh(el_SS->eta));
		
		TLorentzVector met_SS_TLV;
		TVector2 met_SS_TVector2;
		met_SS_TLV = m_met->lv();
		met_SS_TVector2.Set(met_SS_TLV.Px(), met_SS_TLV.Py());

		int pdg0 = 11 * (-1) * el->q; // Remember 11 = elec which has charge -1
		TLorentzVector empty_TLV;
		  
		  if(el->q*mu->q<0){  
		    chargeFlipWeight = m_chargeFlip.OS2SS(pdg0, &el_SS_TLV, 13, &empty_TLV, &met_SS_TVector2, 0);
		    chargeFlipWeight*=  m_chargeFlip.overlapFrac().first;
		    //get changed MET and fill in TLorentzVector:
		    met_SS_TLV.SetPx(met_SS_TVector2.Px());
		    met_SS_TLV.SetPy(met_SS_TVector2.Py());		  
		    met_SS_TLV.SetE(sqrt(pow(met_SS_TVector2.Px(),2) + pow(met_SS_TVector2.Py(),2)));
		}
		float weight_ALL_SS_EM = weight_ALL_EM * chargeFlipWeight;
		if(!nt.evt()->isMC && calcFakeContribution){ 
		  weight_ALL_EM = getFakeWeight(m_baseLeptons, SusyMatrixMethod::FR_SRSSInc, METrel, SusyMatrixMethod::SYS_NONE);
		  weight_ALL_SS_EM = getFakeWeight(m_baseLeptons, SusyMatrixMethod::FR_SRSSInc, METrel, SusyMatrixMethod::SYS_NONE);
		}
		//------------------------------------------------------------------------------------
		calc_EM_variables(el, mu, mu_TLV, el_SS_TLV, met_SS_TLV, signalJet0_TLV, signalJet1_TLV, useForwardJets);
		
		//------------------------------------------------------------------------------------
		//----------------------------------SR-SS1-EM------------------------------------------
		//------------------------------------------------------------------------------------
		
		cutnumber = 21.; fillHistos_EM_SRSS1(cutnumber, mcid, weight_ALL_SS_EM); //SS cut: applied only on weighted events
		if(muEtConeCorr(mu, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC)/mu->pt < 0.1){
		  cutnumber = 22.; fillHistos_EM_SRSS1(cutnumber, mcid, weight_ALL_SS_EM);
		  if(fabs(el->d0Sig(true))<=3.0){//|d0/sd0|<3   (for electron)
		    cutnumber = 23.; fillHistos_EM_SRSS1(cutnumber, mcid, weight_ALL_SS_EM);
		    if(numberOfFJets(m_signalJets2Lep) == 0){
		      weight_ALL_SS_EM *= getBTagWeight(nt.evt());
		      cutnumber = 24.; fillHistos_EM_SRSS1(cutnumber, mcid, weight_ALL_SS_EM);
		      if(numberOfCBJets(m_signalJets2Lep) == 0){
			cutnumber = 25.; fillHistos_EM_SRSS1(cutnumber, mcid, weight_ALL_SS_EM);
			if(numberOfCLJets(m_signalJets2Lep) >=1){
			  cutnumber = 26.; fillHistos_EM_SRSS1(cutnumber, mcid, weight_ALL_SS_EM);   
			  if(el_SS_TLV.Pt()>=20. && mu_TLV.Pt()>=20. && ((el_SS_TLV.Pt()>mu_TLV.Pt() && el_SS_TLV.Pt() >= 30.) || (el_SS_TLV.Pt()<mu_TLV.Pt() && mu_TLV.Pt() >= 30.))){
			    cutnumber = 27.; fillHistos_EM_SRSS1(cutnumber, mcid, weight_ALL_SS_EM);
			    cutnumber = 28.; fillHistos_EM_SRSS1(cutnumber, mcid, weight_ALL_SS_EM); //ZVeto
			    float mtWW_EM = calcMt((mu_TLV + el_SS_TLV), met_SS_TLV);
			    //SRSS1
			    if(mtWW_EM > 140.){ //140, 140, 140
			      cutnumber = 29.; fillHistos_EM_SRSS1(cutnumber, mcid, weight_ALL_SS_EM);
			      float HT_EM = calcHT(el_SS_TLV, mu_TLV, met_SS_TLV, m_signalJets2Lep);
			      if(HT_EM > 200.){
				cutnumber = 30.; fillHistos_EM_SRSS1(cutnumber, mcid, weight_ALL_SS_EM);
				//------------------------------------------------------------------------------------
				//----------------------------------SR-SS2-EM------------------------------------------
				//------------------------------------------------------------------------------------
				float l0pt = (el_SS_TLV.Pt()>mu_TLV.Pt()) ? el_SS_TLV.Pt() : mu_TLV.Pt();
				float l1pt = (el_SS_TLV.Pt()>mu_TLV.Pt()) ? mu_TLV.Pt() : el_SS_TLV.Pt();
				float METrel_SS = recalcMetRel(met_SS_TLV, el_SS_TLV, mu_TLV, m_signalJets2Lep, useForwardJets);
				if(METrel_SS>50.){
				  cutnumber = 31.; fillHistos_EM_SRSS2(cutnumber, mcid, weight_ALL_SS_EM);
				}
			      }
			    }
			  }
			}
		      }
		    }
		  }
		}
		//------------------------------------------------------------------------------------
		//----------------------------------SR-OS1-EM------------------------------------------
		//------------------------------------------------------------------------------------
		if((el->q * mu->q)<0){
		  cutnumber = 50.; fillHistos_EM_SROS1(cutnumber, mcid, weight_ALL_EM);
		  if(muEtConeCorr(mu, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC)/mu->pt < 0.1/* && fabs(el->d0Sig(true))<=3.0*/){//|d0/sd0|<3   (for electron)
		    cutnumber = 51.; fillHistos_EM_SROS1(cutnumber, mcid, weight_ALL_EM);
		    if(numberOfFJets(m_signalJets2Lep) == 0){
		      weight_ALL_EM *= getBTagWeight(nt.evt());
		      cutnumber = 52.; fillHistos_EM_SROS1(cutnumber, mcid, weight_ALL_EM);
		      if(numberOfCBJets(m_signalJets2Lep) == 0){
			cutnumber = 53.; fillHistos_EM_SROS1(cutnumber, mcid, weight_ALL_EM);
			if(numberOfCLJets(m_signalJets2Lep) >=2){
			  cutnumber = 54.; fillHistos_EM_SROS1(cutnumber, mcid, weight_ALL_EM);
			  mjj = Mll(m_signalJets2Lep.at(0), m_signalJets2Lep.at(1));
			  if(mjj > 50. && mjj < 100.){
			    cutnumber = 55.; fillHistos_EM_SROS1(cutnumber, mcid, weight_ALL_EM);
			    if(el_TLV.Pt()>=30. && mu_TLV.Pt()>=30. && ((el_TLV.Pt()>mu_TLV.Pt() && el_TLV.Pt() >= 30.) || (el_TLV.Pt()<mu_TLV.Pt() && mu_TLV.Pt() >= 30.))){
			      cutnumber = 56.; fillHistos_EM_SROS1(cutnumber, mcid, weight_ALL_EM);
			      float DeltaRem = fabs(el_TLV.DeltaR(mu_TLV));
			      if(DeltaRem<1.5){
				cutnumber = 57.; fillHistos_EM_SROS1(cutnumber, mcid, weight_ALL_EM);
				float mTemmin = (Mt(el, m_met) > Mt(mu, m_met)) ? Mt(mu, m_met) : Mt(el, m_met);
				if(mTemmin > 60.){
				cutnumber = 58.; fillHistos_EM_SROS1(cutnumber, mcid, weight_ALL_EM);
				float DeltaPhiMETem = fabs((el_TLV + mu_TLV).DeltaPhi(m_met->lv()));
				if(DeltaPhiMETem>1.5){
				  cutnumber = 59.; fillHistos_EM_SROS1(cutnumber, mcid, weight_ALL_EM);
				  if(m_met->lv().Pt() >= 80.){
				    cutnumber = 60.; fillHistos_EM_SROS1(cutnumber, mcid, weight_ALL_EM);	      
				    }
				  }
				}
			      }
			    }
			  }
			}
		      }
		    }
		  }
		}
	      }
	    }
	  }
	}
      }
  }
  }


  return kTRUE;
}



/*--------------------------------------------------------------------------------*/
// Analysis cuts
/*--------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------*/

bool TSelector_SusyNtuple_cutflow::CheckRealLeptons(const ElectronVector& signal_electrons, MuonVector& signal_muons){

  for(uint i=0; i<signal_electrons.size(); i++){
	  Electron* signal_electron = signal_electrons.at(i);
	  if(signal_electron->isChargeFlip) return false;
	  if(signal_electron->truthType != RecoTruthMatch::PROMPT) return false;
  }
  
    for(uint i=0; i<signal_muons.size(); i++){
	  Muon* signal_muon = signal_muons.at(i);
	  if(signal_muon->truthType != RecoTruthMatch::PROMPT) return false;
  }
  
  return true;
  
}

/*--------------------------------------------------------------------------------*/
bool TSelector_SusyNtuple_cutflow::CheckChargeFlipElectrons(const ElectronVector& signal_electrons){
  
  for(uint i=0; i<signal_electrons.size(); i++){
	  Electron* signal_electron = signal_electrons.at(i);
	  if(signal_electron->isChargeFlip) return false;
	  // check if signal electron has no charge flip
  }
  return true;
  
}
/*--------------------------------------------------------------------------------*/
float TSelector_SusyNtuple_cutflow::getBTagWeight(const Event* evt)
{
  JetVector tempJets;
  for(uint ij=0; ij<m_baseJets.size(); ++ij){
    Jet* jet = m_baseJets.at(ij);
    if( !(jet->Pt() > 20 && fabs(jet->detEta) < 2.4) ) continue;
    tempJets.push_back(jet);
  }

  return bTagSF(evt, tempJets, nt.evt()->mcChannel, BTag_NOM);
// return 0.;
}


/*--------------------------------------------------------------------------------*/
bool TSelector_SusyNtuple_cutflow::checkLeptonPt(const LeptonVector& leptons)
{
//   cout << "leptons[0]->pt= " << leptons[0]->pt << " leptons[1]->pt= " << leptons[1]->pt << endl;
  if(leptons[0]->pt>leptons[1]->pt){
	  if(leptons[0]->pt>35. && leptons[1]->pt>20.) return true;
	  else return false;
  }
  else{
	  if(leptons[1]->pt>35. && leptons[0]->pt>20.) return true;
	  else return false;
  }
  return true;
}
/*--------------------------------------------------------------------------------*/
float TSelector_SusyNtuple_cutflow::mTWW(TLorentzVector _ll, TLorentzVector _nu, bool MvvTrue) // Anyes: https://svnweb.cern.ch/trac/atlasinst/browser/Institutes/UCIrvine/ataffard/SusyWeakProdAna/trunk/Root/PhysicsTools.cxx#L197
	{
	  float dphi = acos(cos(_ll.Phi()-_nu.Phi()));
	  float mll = _ll.M();
	  float mvv=0;
	  if(!MvvTrue) mvv=mll;
	
	  float mT=0;
	  mT = sqrt( pow(mll,2) + pow(mvv,2) 
	             + 2*( sqrt(pow(_ll.Pt(),2) + pow(mll,2)) * sqrt(pow(_nu.Pt(),2) + pow(mvv,2)) 
	                   - _ll.Pt()*_nu.Pt()*cos(dphi) ) );
	 
	  return mT;
	
}
/*--------------------------------------------------------------------------------*/
float TSelector_SusyNtuple_cutflow::calcHT(TLorentzVector l1, TLorentzVector l2, TLorentzVector met, const JetVector &signalJets){
  //Anyes: https://svnweb.cern.ch/trac/atlasinst/browser/Institutes/UCIrvine/ataffard/SusyWeakProdAna/trunk/Root/ToyNt.cxx#L404
  
  float HT = 0;
  HT += l1.Pt();
  HT += l2.Pt();
  
  for(uint i=0; i<signalJets.size(); i++){
    if(signalJets[i]->Pt() > 40) HT += signalJets[i]->Pt();
  }
  
  HT += met.E();
  return HT;  

}
/*--------------------------------------------------------------------------------*/

float TSelector_SusyNtuple_cutflow::calcMt(TLorentzVector _l, TLorentzVector _nu)
{
  float dphi = _l.Phi()-_nu.Phi();
  return sqrt(2*_l.Pt()*_nu.Pt() * (1- cos(dphi)) ); 
}
/*--------------------------------------------------------------------------------*/
float TSelector_SusyNtuple_cutflow::recalcMetRel(TLorentzVector metLV, TLorentzVector l1, TLorentzVector l2, const JetVector& jets, bool useForward)
{
  //copied from SusyNtTools.cxx and modified to work with TLorenzVector
  float dPhi = TMath::Pi()/2.;
  
  if( fabs(metLV.DeltaPhi(l1)) < dPhi ) dPhi = fabs(metLV.DeltaPhi(l1));
  if( fabs(metLV.DeltaPhi(l2)) < dPhi ) dPhi = fabs(metLV.DeltaPhi(l2));
  
  for(uint ij=0; ij<jets.size(); ++ij){
    const Jet* jet = jets.at(ij);
    if( !useForward && isForwardJet(jet) ) continue; // Use only central jets
    if( fabs(metLV.DeltaPhi( *jet )) < dPhi ) dPhi = fabs(metLV.DeltaPhi( *jet ));    
  }// end loop over jets
  
  return metLV.Et() * sin(dPhi);
}
/*--------------------------------------------------------------------------------*/
float TSelector_SusyNtuple_cutflow::calcMT2(TLorentzVector metlv, TLorentzVector l0, TLorentzVector l1)
{
  //copied from SusyNtTools.cxx and modified to work with TLorenzVector

  double pTMiss[3] = {0.0, metlv.Px(), metlv.Py()};
  double pA[3]     = {0.0, l0.Px(), l0.Py()};
  double pB[3]     = {0.0, l1.Px(), l1.Py()};
  
  // Create Mt2 object
  mt2_bisect::mt2 mt2_event;
  mt2_event.set_momenta(pA,pB,pTMiss);
  mt2_event.set_mn(0); // LSP mass = 0 is Generic
  
  return mt2_event.get_mt2();
}
/*--------------------------------------------------------------------------------*/
void TSelector_SusyNtuple_cutflow::fillHistos_EE_SRSS1(int cutnumber, int mcid, float weight){
  cutflow_EE->Fill(cutnumber,1.0);
  cutflow_EE_ALL->Fill(cutnumber, weight);
}
/*--------------------------------------------------------------------------------*/
void TSelector_SusyNtuple_cutflow::fillHistos_EE_SRSS2(int cutnumber, int mcid, float weight){
  cutflow_EE->Fill(cutnumber,1.0);
  cutflow_EE_ALL->Fill(cutnumber, weight);
}
/*--------------------------------------------------------------------------------*/
void TSelector_SusyNtuple_cutflow::fillHistos_EE_SROS1(int cutnumber, int mcid, float weight){
  cutflow_EE->Fill(cutnumber,1.0);
  cutflow_EE_ALL->Fill(cutnumber, weight);
}
/*--------------------------------------------------------------------------------*/
void TSelector_SusyNtuple_cutflow::fillHistos_MM_SRSS1(int cutnumber, int mcid, float weight){
  cutflow_MM->Fill(cutnumber,1.0);
  cutflow_MM_ALL->Fill(cutnumber, weight);
}
/*--------------------------------------------------------------------------------*/
void TSelector_SusyNtuple_cutflow::fillHistos_MM_SRSS2(int cutnumber, int mcid, float weight){
  cutflow_MM->Fill(cutnumber,1.0);
  cutflow_MM_ALL->Fill(cutnumber, weight);
}
/*--------------------------------------------------------------------------------*/
void TSelector_SusyNtuple_cutflow::fillHistos_MM_SRSS3(int cutnumber, int mcid, float weight){
  cutflow_MM->Fill(cutnumber,1.0);
  cutflow_MM_ALL->Fill(cutnumber, weight);
}
/*--------------------------------------------------------------------------------*/
void TSelector_SusyNtuple_cutflow::fillHistos_MM_SRSS4(int cutnumber, int mcid, float weight){
  cutflow_MM->Fill(cutnumber,1.0);
  cutflow_MM_ALL->Fill(cutnumber, weight);
}
/*--------------------------------------------------------------------------------*/
void TSelector_SusyNtuple_cutflow::fillHistos_MM_SROS1(int cutnumber, int mcid, float weight){
  cutflow_MM->Fill(cutnumber,1.0);
  cutflow_MM_ALL->Fill(cutnumber, weight);
}
/*--------------------------------------------------------------------------------*/
void TSelector_SusyNtuple_cutflow::fillHistos_EM_SRSS1(int cutnumber, int mcid, float weight){
  cutflow_EM->Fill(cutnumber,1.0);
  cutflow_EM_ALL->Fill(cutnumber, weight);
}
/*--------------------------------------------------------------------------------*/
void TSelector_SusyNtuple_cutflow::fillHistos_EM_SRSS2(int cutnumber, int mcid, float weight){
  cutflow_EM->Fill(cutnumber,1.0);
  cutflow_EM_ALL->Fill(cutnumber, weight);
}
/*--------------------------------------------------------------------------------*/
void TSelector_SusyNtuple_cutflow::fillHistos_EM_SROS1(int cutnumber, int mcid, float weight){
  cutflow_EM->Fill(cutnumber,1.0);
  cutflow_EM_ALL->Fill(cutnumber, weight);
}
/*--------------------------------------------------------------------------------*/
void TSelector_SusyNtuple_cutflow::calcJet_variables(TLorentzVector signalJet0_TLV, TLorentzVector signalJet1_TLV, TLorentzVector met_TLV){
  //nothing happens  
}
/*--------------------------------------------------------------------------------*/
void TSelector_SusyNtuple_cutflow::calc_EE_variables(Electron* el0, Electron* el1, TLorentzVector el0_TLV, TLorentzVector el1_TLV, TLorentzVector met_TLV, TLorentzVector signalJet0_TLV, TLorentzVector signalJet1_TLV, bool useForwardJets ){
  //nothing happens
}
/*--------------------------------------------------------------------------------*/
void TSelector_SusyNtuple_cutflow::calc_MM_variables(Muon* mu0, Muon* mu1, TLorentzVector mu0_TLV, TLorentzVector mu1_TLV, TLorentzVector met_TLV, TLorentzVector signalJet0_TLV, TLorentzVector signalJet1_TLV, bool useForwardJets){
  //nothing happens  
}
/*--------------------------------------------------------------------------------*/
void TSelector_SusyNtuple_cutflow::calc_EM_variables(Electron* el, Muon* mu, TLorentzVector mu_TLV, TLorentzVector el_TLV, TLorentzVector met_TLV, TLorentzVector signalJet0_TLV, TLorentzVector signalJet1_TLV, bool useForwardJets){
  //nothing happens  
}

/*--------------------------------------------------------------------------------*/
float TSelector_SusyNtuple_cutflow::getFakeWeight(const LeptonVector &baseLeps, 
                                      SusyMatrixMethod::FAKE_REGION region, 
                                      float metRel,
                                      SusyMatrixMethod::SYSTEMATIC sys)
{

  if(baseLeps.size() != 2) return 0.0;

  uint nVtx = nt.evt()->nVtx;
  bool isMC = nt.evt()->isMC;
  
  float weight = m_matrix->getTotalFake( isSignalLepton(baseLeps[0],m_baseElectrons, m_baseMuons,nVtx,isMC),
                                         baseLeps[0]->isEle(),
                                         baseLeps[0]->Pt() * 1000.,
                                         baseLeps[0]->Eta(),
                                         isSignalLepton(baseLeps[1],m_baseElectrons, m_baseMuons,nVtx,isMC),
                                         baseLeps[1]->isEle(),
                                         baseLeps[1]->Pt() * 1000.,
                                         baseLeps[1]->Eta(),
                                         region,
                                         metRel * 1000.,
                                         sys);

//   if(!m_doMCFake) return weight;
  return weight;// * getEvtWeight(baseLeps,true,true);

}

/*--------------------------------------------------------------------------------*/
// Debug event
/*--------------------------------------------------------------------------------*/
bool TSelector_SusyNtuple_cutflow::debugEvent()
{
  uint run = nt.evt()->run;
  uint evt = nt.evt()->event;
  //if(run==191139 && evt==140644832) return true;
  if(run==180164&&evt==24769) return true;

  return false;
}

void TSelector_SusyNtuple_cutflow::SlaveTerminate()
{
  TString outputfile="";
  if(sample_identifier == 126893)outputfile="histos_cutflow_126893.root";
  if(sample_identifier == 177503)outputfile="histos_cutflow_177503.root";
//   if(sample_identifier == 110813)outputfile="histos_cutflow_110813.root";
//   if(sample_identifier == 110814)outputfile="histos_cutflow_110814.root";
//   if(sample_identifier == 110815)outputfile="histos_cutflow_110815.root";
//   if(sample_identifier == 110816)outputfile="histos_cutflow_110816.root";
  if(sample_identifier == 111111) outputfile="histos_cutflow_data.root";
  cout << "ouputfile: " << outputfile << endl;
  cout << " " << endl;
  TFile* output_file = new TFile(outputfile, "recreate") ;//update or recreate?

  output_file->cd();
  if(!runWithPoD){
    cutflow_EE->Write();
    cutflow_EE_ALL->Write();
    
    cutflow_MM->Write();
    cutflow_MM_ALL->Write();

    cutflow_EM->Write();
    cutflow_EM_ALL->Write();
  }

  output_file->Write() ;
  output_file->Close();
}
/*--------------------------------------------------------------------------------*/
// The Terminate() function is the last function to be called
/*--------------------------------------------------------------------------------*/
void TSelector_SusyNtuple_cutflow::Terminate()
{
 
}
