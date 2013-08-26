#include <iomanip>
#include "TCanvas.h"
#include <strstream>
#include <string>
#include <iostream>

#include "TSelector_SusyNtuple.hpp"
#include "histos_ZN_tauveto.C"

using namespace std;
using namespace Susy;

/*--------------------------------------------------------------------------------*/
// TSelector_SusyNtuple Constructor
/*--------------------------------------------------------------------------------*/
TSelector_SusyNtuple::TSelector_SusyNtuple() :
        m_selectB   (false),
        m_vetoB     (false),
        m_selectSFOS(false),
        m_vetoSFOS  (false),
        m_writeOut  (false)
{
  

  if(m_writeOut) {
    out.open("event.dump");
  }
}
void TSelector_SusyNtuple::Begin(TTree * /*tree*/)
{

   TString option = GetOption();

}

void TSelector_SusyNtuple::SlaveBegin(TTree * /*tree*/)
{
  
  //########################################
  // ###### CAREFULLY SET VARIABLES: #######
  //########################################
  #ifdef runWithRoot
  runWithPoD = false;
  #endif
  
  #ifdef runWithProof
  runWithPoD = true;
  #endif
  
  //choose: reject Taus?
  rejectTaus = false;
  cout << "rejectTaus = " << rejectTaus << endl;
  
  setSelectTaus(true);
  
  //choose: run on data to calculate fake bg?
  calcFakeContribution = false;
  //########################################
  //########################################
  
  //define all histos in seperate file histos_ZN_tauveto.C:
  defineHistos();  

  m_susyObj.initialize(nt.evt()->isMC);

  SusyNtAna::Begin(0);


  setSelectTaus(true);


  m_trigObjWithoutRU = new DilTrigLogic("Moriond",false/*No Reweight Utils!*/); 
  
  cout << "initialize chargeFlip tool" << endl;
  m_chargeFlip.initialize("/data/etp/jwittkowski/analysis_SUSYTools_03_04/ChargeFlip/data/chargeFlip.root");  

//   m_matrix = new SusyMatrixMethod::DiLeptonMatrixMethod();
//   m_matrix->configure("/data/etp/jwittkowski/analysis_SUSYTools_03_04_neu/SusyMatrixMethod/data/pass6_Apr2_2013.root", SusyMatrixMethod::PT); 
//   missMassCalc.SetCalibrationSet(MMCCalibrationSet::MMC2012);
  
}



Bool_t TSelector_SusyNtuple::Process(Long64_t entry)
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
//       calcFakeContribution = true;
  }
    else cout << "MC MC MC MC MC MC MC MC" << endl;
    cout << "sample_identifier= " << sample_identifier << endl;
    
  }
  if(m_dbg || m_chainEntry%50000==0)
  {
    
    unsigned int mcid = nt.evt()->mcChannel;
    float recalc_sumw = 0.;
    map<unsigned int, float>::const_iterator sumwMapIter = m_sumwMap.find(mcid);
    if(sumwMapIter != m_sumwMap.end()) recalc_sumw = sumwMapIter->second;
	
    cout << "**** Processing entry " << setw(6) << m_chainEntry << " run " << setw(6) << nt.evt()->run << " event " << setw(7) << nt.evt()->event << " sumw= " << nt.evt()->sumw << " recalc_sumw= " << recalc_sumw << " ****" << endl;
  }
  
  bool fillNewSumwHisto = false;
  if((fillNewSumwHisto || runWithPoD) && !m_kIsData && (m_chainEntry==0 || (mcid_of_first_entry != mcid))){
      float recalc_sumw = 0.;
      map<unsigned int, float>::const_iterator sumwMapIter = m_sumwMap.find(mcid);
      if(sumwMapIter != m_sumwMap.end()) recalc_sumw = sumwMapIter->second;
      if(fillNewSumwHisto) h_storeSumwMcid->Fill(mcid, recalc_sumw);
      mcid_of_first_entry = mcid;
      if(fillNewSumwHisto)cout << "recalc_sumw= " << recalc_sumw << endl;
      
      TFile *pFileIn_sumw = new TFile("/data/etp/jwittkowski/analysis_SUSYTools_03_04_neu/sumw_file_n0145.root");
      TH1F *h_storeSumwMcid_out = (TH1F*)pFileIn_sumw->Get("h_storeSumwMcid_merged");
      sumw_from_histo = h_storeSumwMcid_out->GetBinContent(mcid+1);
      cout << "sumw_from_histo= " << sumw_from_histo << endl;
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
  
  float cutnumber = 0.; fill_histos_EE(cutnumber, weight_ALL_EE); fill_histos_MM(cutnumber, weight_ALL_MM); fill_histos_EM(cutnumber, weight_ALL_EM); // all events in the sample

  if( !(flag & ECut_GRL) ) return false; 
  cutnumber = 1.; fill_histos_EE(cutnumber, weight_ALL_EE); fill_histos_MM(cutnumber, weight_ALL_MM); fill_histos_EM(cutnumber, weight_ALL_EM); //grl Cut

  if( !(ECut_TileTrip & flag) ) return false; 
  cutnumber = 2.; fill_histos_EE(cutnumber, weight_ALL_EE); fill_histos_MM(cutnumber, weight_ALL_MM); fill_histos_EM(cutnumber, weight_ALL_EM); //TileTripReader

//   if ( !(flag & ECut_TTC)) return false;
  cutnumber = 3.; fill_histos_EE(cutnumber, weight_ALL_EE); fill_histos_MM(cutnumber, weight_ALL_MM); fill_histos_EM(cutnumber, weight_ALL_EM);//IncompleteEvents Veto

  if(!(ECut_LarErr & flag) || !(ECut_TileErr & flag)) return false;
  cutnumber = 4.; fill_histos_EE(cutnumber, weight_ALL_EE); fill_histos_MM(cutnumber, weight_ALL_MM); fill_histos_EM(cutnumber, weight_ALL_EM); //LAr/TileError

//   if( !(flag & ECut_HotSpot)) return false; //remove event where a jet points into hot TileCal module 
  cutnumber = 5.; fill_histos_EE(cutnumber, weight_ALL_EE); fill_histos_MM(cutnumber, weight_ALL_MM); fill_histos_EM(cutnumber, weight_ALL_EM); //TileCalHotSpot

  // remove event with VeryLooseBad jets with pT>20 GeV. No eta cut. Only consider jets which are not overlapping with electrons or taus:  
  if(hasBadJet(m_baseJets))return kFALSE;
  cutnumber = 6.; fill_histos_EE(cutnumber, weight_ALL_EE); fill_histos_MM(cutnumber, weight_ALL_MM); fill_histos_EM(cutnumber, weight_ALL_EM);//BadJets
    
  //on top of smart veto, veto event with >=1 jets before electron-jet overlap removal with pT>40 GeV, BCH_CORR_JET > 0.05, DeltaPhi(met,jet)<0.3 (Anyes)  
  JetVector prejets = getPreJets(&nt, NtSys_NOM);
  if(!passDeadRegions(prejets, m_met, nt.evt()->run, nt.evt()->isMC)/* || !(flag & ECut_SmartVeto)*/) return false; //   SusyNtTools: passDeadRegions(...)
  cutnumber = 7.; fill_histos_EE(cutnumber, weight_ALL_EE); fill_histos_MM(cutnumber, weight_ALL_MM); fill_histos_EM(cutnumber, weight_ALL_EM); //CaloJets

  if( !(flag & ECut_GoodVtx)) return false;
  cutnumber = 8.; fill_histos_EE(cutnumber, weight_ALL_EE); fill_histos_MM(cutnumber, weight_ALL_MM); fill_histos_EM(cutnumber, weight_ALL_EM);//PrimaryVertex

  MuonVector preMuons = getPreMuons(&nt, NtSys_NOM);
  if( hasBadMuon(preMuons)) return false;
  cutnumber = 9.; fill_histos_EE(cutnumber, weight_ALL_EE); fill_histos_MM(cutnumber, weight_ALL_MM); fill_histos_EM(cutnumber, weight_ALL_EM);//BadMuons
    
  if(hasCosmicMuon(m_baseMuons)) return false; // !(flag & ECut_Cosmic)  - no longer guarantee the event flags that are stored :-(
  preMuons.clear();
  cutnumber = 10.; fill_histos_EE(cutnumber, weight_ALL_EE); fill_histos_MM(cutnumber, weight_ALL_MM); fill_histos_EM(cutnumber, weight_ALL_EM);//Cosmic Muons


  // Sherpa WW fix, remove radiative b-quark processes that overlap with single top: already done upstream in SusyCommon SusyNtMaker

  if(nt.evt()->hfor == 4) return false; //remove events where same heavy flavor final states arise in multiple samples when combining ALPGEN samples
  cutnumber = 11.; fill_histos_EE(cutnumber, weight_ALL_EE); fill_histos_MM(cutnumber, weight_ALL_MM); fill_histos_EM(cutnumber, weight_ALL_EM);//hfor veto

  if(m_baseLeptons.size() < 2) return false;
  cutnumber = 12.; fill_histos_EE(cutnumber, weight_ALL_EE); fill_histos_MM(cutnumber, weight_ALL_MM); fill_histos_EM(cutnumber, weight_ALL_EM);//at least 2 base leptons

  if( !(m_baseLeptons.size()==2) ) return false;
  cutnumber = 13.; fill_histos_EE(cutnumber, weight_ALL_EE); fill_histos_MM(cutnumber, weight_ALL_MM); fill_histos_EM(cutnumber, weight_ALL_EM);//exactly 2 base leptons


//   if(!(m_baseElectrons.size()==2 || m_baseMuons.size()==2 || (m_baseElectrons.size()+m_baseMuons.size())==2)) return false; //only count leptons where no Mll < 20 GeV. Mll < 12 GeV veto ALREADY DONE FOR SELECTING BASELINE LEPTONS in performOverlapRemoval()


  // discard any SFOS baseline lepton pair with M_ll < 12 GeV unnecessary: already done when skimming/slimming ntuples
  // Any lepton pairs are required to have an invariant mass, m``, above 20 GeV such that to remove low-mass dilepton resonances
  if( Mll(m_baseLeptons[0], m_baseLeptons[1]) < 20 )return false;
  cutnumber = 14.; fill_histos_EE(cutnumber, weight_ALL_EE); fill_histos_MM(cutnumber, weight_ALL_MM); fill_histos_EM(cutnumber, weight_ALL_EM);//Mll
  
  
  bool useForwardJets = true;
  float METrel = getMetRel(m_met, m_signalLeptons, m_signalJets2Lep, useForwardJets);  
  
  if(calcFakeContribution) METrel = getMetRel(m_met, m_baseLeptons, m_signalJets2Lep, useForwardJets);   
  float mjj = 0.;
  float DeltaPhiJJ = 0.;
  float DeltaPhiMETj1 = 0.;
  float DeltaPhiMETj2 = 0.;
  float ptjj = 0.;
  float DeltaRJJ = 0.;
  float DeltaEtaJJ = 0.;
  float DeltaYJJ = 0.;
  int NJets = m_signalJets2Lep.size();
  float DeltaPhiMETjj = 0.;
  Jet* jet0;
  Jet* jet1;
  TLorentzVector signalJet0_TLV, signalJet1_TLV;
//   float mjj = 0.;
  
  if(numberOfCLJets(m_signalJets2Lep) >=1){
    jet0 = m_signalJets2Lep.at(0);    

    signalJet0_TLV.SetPtEtaPhiE(jet0->pt, jet0->eta, jet0->phi, jet0->pt*cosh(jet0->eta));
    if(numberOfCLJets(m_signalJets2Lep) >=2){	
      jet1 = m_signalJets2Lep.at(1);
      
      signalJet1_TLV.SetPtEtaPhiE(jet1->pt, jet1->eta, jet1->phi, jet1->pt*cosh(jet1->eta));
//       mjj = (signalJet1_TLV + signalJet1_TLV).M();
      DeltaPhiJJ = fabs(signalJet0_TLV.DeltaPhi(signalJet1_TLV));
      ptjj = (signalJet0_TLV + signalJet1_TLV).Pt();
    
      DeltaPhiMETj2 = fabs(signalJet1_TLV.DeltaPhi(m_met->lv()));
      DeltaRJJ = fabs(signalJet0_TLV.DeltaR(signalJet1_TLV));
      DeltaEtaJJ = fabs(signalJet0_TLV.Eta() - signalJet1_TLV.Eta());
      DeltaYJJ = fabs(signalJet0_TLV.Rapidity() - signalJet1_TLV.Rapidity());
      
      DeltaPhiMETjj = fabs((signalJet0_TLV+ signalJet1_TLV).DeltaPhi(m_met->lv()));
    }
  }
  
//   AND THERE ARE NO TAUS ALLOWED

  int hdec = nt.evt()->hDecay;
  if(rejectTaus && (hdec==WhTruthExtractor::kPtauAtau)){
    return kFALSE;
  }
  
  float w_lPX = 1.;
  if(runWithPoD) w_lPX = nt.evt()->w * nt.evt()->wPileup * nt.evt()->xsec * LUMI_A_L / sumw_from_histo;
  else w_lPX = (nt.evt()->isMC) ? getEventWeight(LUMI_A_L, true) : 1; //consider pileup, xsec, lumi (as argument), MC eventWeight. second argument: recalc recalc sumw BEFORE Proces()

  float w_lPX_EE = w_lPX;
  float w_lPX_MM = w_lPX;
  float w_lPX_EM = w_lPX;
//   float w_lPX_ME = w_lPX;
  
 ////////////////////////////        EE            //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  
  //calculate normal contribution with signal leptons:
  if(m_baseElectrons.size()==2){
    cutnumber = 15.; fill_histos_EE(cutnumber, weight_ALL_EE); //pass category
    if(m_baseElectrons.size()==2 && m_signalElectrons.size()==2 ){
      cutnumber = 16.; fill_histos_EE(cutnumber, weight_ALL_EE); //pass nlep
      Electron* el1;
      Electron* el2;
      el1 = (m_signalElectrons.at(0)->pt > m_signalElectrons.at(1)->pt) ? m_signalElectrons.at(0) : m_signalElectrons.at(1);
      el2 = (m_signalElectrons.at(0)->pt > m_signalElectrons.at(1)->pt) ? m_signalElectrons.at(1) : m_signalElectrons.at(0);
      LeptonVector leptons;
      ElectronVector electrons;
      leptons = m_signalLeptons;
      electrons = m_signalElectrons;
      TLorentzVector el1_TLV, el2_TLV;
      el1_TLV.SetPtEtaPhiE(el1->pt, el1->eta ,el1->phi, el1->pt*cosh(el1->eta));
      el2_TLV.SetPtEtaPhiE(el2->pt, el2->eta ,el2->phi, el2->pt*cosh(el2->eta));
      if(m_signalTaus.size() == 0){
	  cutnumber = 17.; fill_histos_EE(cutnumber, weight_ALL_EE);
	  if(m_trigObjWithoutRU->passDilEvtTrig(leptons, 0., nt.evt())){ //valid pT region
	    cutnumber = 18.; fill_histos_EE(cutnumber, weight_ALL_EE);
	
	    if(nt.evt()->isMC || (!nt.evt()->isMC && m_trigObjWithoutRU->passDilTrigMatch(leptons, 0., nt.evt()))){  //match to trigger (in MC not needed bc weighted)
	      cutnumber = 19.; fill_histos_EE(cutnumber, weight_ALL_EE);
	      if(!nt.evt()->isMC || CheckRealLeptons(electrons, m_signalMuons)){
		cutnumber = 20.; fill_histos_EE(cutnumber, weight_ALL_EE);
		
		//time to calc weights:
		//------------------------------------------------------------------------------------
		//calc lepton SF:
		float lep_SF_EE = 1.0;
		if(nt.evt()->isMC) lep_SF_EE = el1->effSF * el2->effSF;		
		
		//calc trigger weight:
		float trigW_EE = 1.;
		
		
		if(nt.evt()->isMC) trigW_EE = m_trigObjWithoutRU->getTriggerWeight(leptons, nt.evt()->isMC, 0., 0, nt.evt()->nVtx, NtSys_NOM);
		//product of all weights:
		if(nt.evt()->isMC){
		  if(runWithPoD) weight_ALL_EE = nt.evt()->w * nt.evt()->wPileup * nt.evt()->xsec * LUMI_A_L / sumw_from_histo * lep_SF_EE * trigW_EE;
		  else weight_ALL_EE = (nt.evt()->isMC) ? getEventWeight(LUMI_A_L, true) * lep_SF_EE * trigW_EE : 1; //consider pileup, xsec, lumi (as argument), MC eventWeight.
		}
		
		//calc charge flip weights: 
		//Note that the charge flip is only applied in SS region (ee or em) and only for MC events that are true OS.
		//The charge flip changes both the lepton pt of the electron that charge flip and the change needs to be propagated to the met.
		float chargeFlipWeight = 1.0;

		//make a copy of electrons and MET which will eventually be changed by ChargeFlip tool:
		ElectronVector electrons_SS;
		electrons_SS = m_signalElectrons;
		Electron* el1_SS;
		Electron* el2_SS;
		el1_SS = (m_signalElectrons.at(0)->pt > m_signalElectrons.at(1)->pt) ? m_signalElectrons.at(0) : m_signalElectrons.at(1);
		el2_SS = (m_signalElectrons.at(0)->pt > m_signalElectrons.at(1)->pt) ? m_signalElectrons.at(1) : m_signalElectrons.at(0);
		TLorentzVector el1_SS_TLV, el2_SS_TLV;
		el1_SS_TLV.SetPtEtaPhiE(el1_SS->pt, el1_SS->eta ,el1_SS->phi, el1_SS->pt*cosh(el1_SS->eta));
		el2_SS_TLV.SetPtEtaPhiE(el2_SS->pt, el2_SS->eta ,el2_SS->phi, el2_SS->pt*cosh(el2_SS->eta));
		
		TLorentzVector met_SS_TLV;
		TVector2 met_SS_TVector2;
		met_SS_TLV = m_met->lv();
		met_SS_TVector2.Set(met_SS_TLV.Px(), met_SS_TLV.Py());
		if((el1->q * el2->q)<0){		  
		  int pdg0 = 11 * (-1) * el1->q; // Remember 11 = elec which has charge -1
		  int pdg1 = 11 * (-1) * el2->q;
		  
		  chargeFlipWeight = m_chargeFlip.OS2SS(pdg0, &el1_SS_TLV, pdg1, &el2_SS_TLV, &met_SS_TVector2, 0);
		  chargeFlipWeight*=  m_chargeFlip.overlapFrac().first;
		  //get changed MET and fill in TLorentzVector:
		  met_SS_TLV.SetPx(met_SS_TVector2.Px());
		  met_SS_TLV.SetPy(met_SS_TVector2.Py());		  
		  met_SS_TLV.SetE(sqrt(pow(met_SS_TVector2.Px(),2) + pow(met_SS_TVector2.Py(),2)));
		}
		float weight_ALL_SS_EE = weight_ALL_EE * chargeFlipWeight;
		
	    float mZTT_coll = calcMZTauTau_coll(el1_SS_TLV, el2_SS_TLV, m_met->lv());
	    float mZTT_mmc = calcMZTauTau_mmc(el1_SS_TLV, el2_SS_TLV, 0/*electron*/, 0/*electron*/);
// 	    float mZTT_missMassCalc = calcMZTauTau_MissMassCalc(el1_TLV, el2_TLV, 0/*electron*/, 0/*electron*/);
  // 	  cout << "EE mZTT_coll= " << mZTT_coll << " mZTT_mmc= " << mZTT_mmc << " mZTT_missMassCalc= " << mZTT_missMassCalc << endl;

	    float mt2_ee = getMT2(leptons, m_met); //!!!!!!

	    float HT = calcHT(el1_SS_TLV, el2_SS_TLV, met_SS_TLV, m_signalJets2Lep);
	    float mWWt = mT((el1_SS_TLV + el2_SS_TLV), met_SS_TLV);
	    
	    float DeltaPhiLLJJ = (NJets>1) ? (el1_SS_TLV + el2_SS_TLV).DeltaPhi(signalJet1_TLV + signalJet1_TLV) : 0.;
	    
	    float DeltaPhiMETee = fabs((el1_SS_TLV + el2_SS_TLV).DeltaPhi(met_SS_TLV));
	    float mTemin = (Mt(el1, m_met) > Mt(el2, m_met)) ? Mt(el2, m_met) : Mt(el1, m_met); //!!!!!!!!!!!
	    float sum_mv1 = calcSumMv1(m_signalJets2Lep);
	    float DeltaRee = fabs(el1_SS_TLV.DeltaR(el2_SS_TLV));
	    
		//------------------------------------------------------------------------------------
		
		
		//------------------------------------------------------------------------------------
		//----------------------------------SR-SS-EE------------------------------------------
		//------------------------------------------------------------------------------------
		
		cutnumber = 21.; fill_histos_EE(cutnumber, weight_ALL_SS_EE); //SS cut: applied only on weighted events
		cutnumber = 22.; fill_histos_EE(cutnumber, weight_ALL_SS_EE);
		if(fabs(el1->d0Sig(true))<=3.0 && fabs(el2->d0Sig(true))<=3.0){//|d0/sd0|<3   (for electron) (update to latest QFlip)
		  cutnumber = 23.; fill_histos_EE(cutnumber, weight_ALL_SS_EE);
		  if(numberOfFJets(m_signalJets2Lep) == 0){
		    weight_ALL_SS_EE *= getBTagWeight(nt.evt());
		    cutnumber = 24.; fill_histos_EE(cutnumber, weight_ALL_SS_EE);
		    if(numberOfCBJets(m_signalJets2Lep) == 0){
		      cutnumber = 25.; fill_histos_EE(cutnumber, weight_ALL_SS_EE);
		      if(numberOfCLJets(m_signalJets2Lep) >=1){
			cutnumber = 26.; fill_histos_EE(cutnumber, weight_ALL_SS_EE);
			if(el1_SS_TLV.Pt() >= 30. && el2_SS_TLV.Pt()>= 20.){
			  cutnumber = 27.; fill_histos_EE(cutnumber, weight_ALL_SS_EE);
			  if((el1_SS_TLV + el2_SS_TLV).M() > MZ+10. || (el1_SS_TLV + el2_SS_TLV).M() < MZ-10.){
			    cutnumber = 28.; fill_histos_EE(cutnumber, weight_ALL_SS_EE); //ZVeto
			    float mtWW_EE = mT((el1_SS_TLV + el2_SS_TLV), met_SS_TLV);
			    //SRSS1
			    if(mtWW_EE >= 150.){
			      cutnumber = 29.; fill_histos_EE(cutnumber, weight_ALL_SS_EE);
			      float HT_EE = calcHT(el1_SS_TLV, el2_SS_TLV, met_SS_TLV, m_signalJets2Lep);
			      if(HT_EE >= 200.){
				cutnumber = 30.; fill_histos_EE(cutnumber, weight_ALL_SS_EE);
				float METrel_SS = recalcMetRel(met_SS_TLV, el1_SS_TLV, el2_SS_TLV, m_signalJets2Lep, useForwardJets);
				if(METrel_SS>=50.){
				  cutnumber = 31.; fill_histos_EE(cutnumber, weight_ALL_SS_EE);
				  //SRSS2
				  float mt2 = calcMT2(met_SS_TLV, el1_SS_TLV, el2_SS_TLV);
				  if(mt2>=90.){
				    cutnumber = 32.; fill_histos_EE(cutnumber, weight_ALL_SS_EE);
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
		if((el1->q * el2->q)<0){
// 		  fillHistos_SR6_EE(mcid, 9., weight_ALL_EE, METrel, HT, mWWt, passedTopTag, el1_TLV,  el2_TLV, m_met, el1, el2, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, 
		  cutnumber = 50.; fill_histos_EE(cutnumber, weight_ALL_EE);
		  cutnumber = 51.; fill_histos_EE(cutnumber, weight_ALL_EE);
		  if(numberOfFJets(m_signalJets2Lep) == 0){
		    weight_ALL_EE *= getBTagWeight(nt.evt());
		    cutnumber = 52.; fill_histos_EE(cutnumber, weight_ALL_EE);
		    if(numberOfCBJets(m_signalJets2Lep) == 0){
		      cutnumber = 53.; fill_histos_EE(cutnumber, weight_ALL_EE);
		      if(numberOfCLJets(m_signalJets2Lep) >=2){
			cutnumber = 54.; fill_histos_EE(cutnumber, weight_ALL_EE);
			TLorentzVector signalJet0_TLV, signalJet1_TLV;
			signalJet0_TLV.SetPtEtaPhiE(jet0->pt, jet0->eta, jet0->phi, jet0->pt*cosh(jet0->eta));
			signalJet1_TLV.SetPtEtaPhiE(jet1->pt, jet1->eta, jet1->phi, jet1->pt*cosh(jet1->eta));
			mjj = Mll(m_signalJets2Lep.at(0), m_signalJets2Lep.at(1));
			if(mjj >= 50. && mjj <= 100.){
			  cutnumber = 55.; fill_histos_EE(cutnumber, weight_ALL_EE);
			  if(el1_TLV.Pt() >= 30 && el2_TLV.Pt() >= 30){
			    cutnumber = 56.; fill_histos_EE(cutnumber, weight_ALL_EE);
			    float DeltaRee = fabs(el1_TLV.DeltaR(el2_TLV));
			    if(DeltaRee<1.5){
			      cutnumber = 57.; fill_histos_EE(cutnumber, weight_ALL_EE);
			      float mTemin = (Mt(el1, m_met) > Mt(el2, m_met)) ? Mt(el2, m_met) : Mt(el1, m_met);
			      if(mTemin >= 60.){
				cutnumber = 58.; fill_histos_EE(cutnumber, weight_ALL_EE);
				float DeltaPhiMETee = fabs((el1_TLV + el2_TLV).DeltaPhi(m_met->lv()));
				if(DeltaPhiMETee>1.5){
				  cutnumber = 59.; fill_histos_EE(cutnumber, weight_ALL_EE);
				  if(m_met->lv().Pt() >= 80.){
				    cutnumber = 60.; fill_histos_EE(cutnumber, weight_ALL_EE);
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

 ////////////////////////////        MM            //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  if(m_baseMuons.size()==2){
    cutnumber = 15.; fill_histos_MM(cutnumber, weight_ALL_MM); //pass category
    if(m_signalMuons.size()==2 ){
      Muon* mu1;
      Muon* mu2;      
      mu1 = (m_signalMuons.at(0)->pt > m_signalMuons.at(1)->pt) ? m_signalMuons.at(0) : m_signalMuons.at(1);
      mu2 = (m_signalMuons.at(0)->pt > m_signalMuons.at(1)->pt) ? m_signalMuons.at(1) : m_signalMuons.at(0);
      if(fabs(mu1->Eta())<=2.4 && fabs(mu2->Eta())<=2.4){
	cutnumber = 16.; fill_histos_MM(cutnumber, weight_ALL_MM); //pass nlep
	
	LeptonVector leptons;
	leptons = m_signalLeptons;
	MuonVector muons;
	muons = m_signalMuons;
	TLorentzVector mu1_TLV, mu2_TLV;
	mu1_TLV.SetPtEtaPhiE(mu1->pt, mu1->eta ,mu1->phi, mu1->pt*cosh(mu1->eta));
	mu2_TLV.SetPtEtaPhiE(mu2->pt, mu2->eta ,mu2->phi, mu2->pt*cosh(mu2->eta));
	if(m_signalTaus.size() == 0){
	  cutnumber = 17.; fill_histos_MM(cutnumber, weight_ALL_MM);
	  if(m_trigObjWithoutRU->passDilEvtTrig(leptons, 0., nt.evt())){ //valid pT region
	    cutnumber = 18.; fill_histos_MM(cutnumber, weight_ALL_MM);
	    if(m_signalTaus.size() == 0){
	      
	      if(nt.evt()->isMC || (!nt.evt()->isMC && m_trigObjWithoutRU->passDilTrigMatch(leptons, 0., nt.evt()))){ //match to trigger
		cutnumber = 19.; fill_histos_MM(cutnumber, weight_ALL_MM);

		if(!nt.evt()->isMC || CheckRealLeptons(m_signalElectrons, muons)){
		  cutnumber = 20.; fill_histos_MM(cutnumber, weight_ALL_MM);
		  //time to calc weights:
		  //------------------------------------------------------------------------------------
		  //calc lepton SF:		  
		  float lep_SF_MM = 1.0;
		  if(nt.evt()->isMC) lep_SF_MM = mu1->effSF * mu2->effSF;	
		  //calc trigger weight:
		  float trigW_MM = 1.;
		  if(nt.evt()->isMC) trigW_MM = m_trigObjWithoutRU->getTriggerWeight(leptons, nt.evt()->isMC, m_met->lv().Et(), numberOfCLJets(m_signalJets2Lep), nt.evt()->nVtx, NtSys_NOM);
		  //product of all weights:
		  if(nt.evt()->isMC){
		    if(runWithPoD) weight_ALL_MM = nt.evt()->w * nt.evt()->wPileup * nt.evt()->xsec * LUMI_A_L / sumw_from_histo * lep_SF_MM * trigW_MM;
		    else weight_ALL_MM = (nt.evt()->isMC) ? getEventWeight(LUMI_A_L, true) * lep_SF_MM * trigW_MM : 1; //consider pileup, xsec, lumi (as argument), MC eventWeight.
		  }
		  //------------------------------------------------------------------------------------
		  //------------------------------------------------------------------------------------
		  //----------------------------------SR-SS-MM------------------------------------------
		  //------------------------------------------------------------------------------------
		  if(mu1->q*mu2->q>0){
		    cutnumber = 21.; fill_histos_MM(cutnumber, weight_ALL_MM); //SS cut: for MM applied only on SS events.
		    if(muEtConeCorr(mu1, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC)/mu1->pt < 0.1 && muEtConeCorr(mu2, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC)/mu2->pt < 0.1){
		      cutnumber = 22.; fill_histos_MM(cutnumber, weight_ALL_MM);
		      cutnumber = 23.; fill_histos_MM(cutnumber, weight_ALL_MM);
		      if(numberOfFJets(m_signalJets2Lep) == 0){
			weight_ALL_MM *= getBTagWeight(nt.evt());
			cutnumber = 24.; fill_histos_MM(cutnumber, weight_ALL_MM);
			if(numberOfCBJets(m_signalJets2Lep) == 0){
			  cutnumber = 25.; fill_histos_MM(cutnumber, weight_ALL_MM);
			  if(numberOfCLJets(m_signalJets2Lep) >=1){
			    cutnumber = 26.; fill_histos_MM(cutnumber, weight_ALL_MM);
			    if(m_signalLeptons.at(0)->Pt() >= 30.){
			    cutnumber = 27.; fill_histos_MM(cutnumber, weight_ALL_MM);
			    cutnumber = 28.; fill_histos_MM(cutnumber, weight_ALL_MM); //ZVeto
			    float mtWW_MM = mT((mu1_TLV + mu2_TLV), m_met->lv());
			    //SRSS1
			    if(mtWW_MM > 100.){ //100, 150, 200
			      cutnumber = 29.; fill_histos_MM(cutnumber, weight_ALL_MM);
			      float HT_MM = calcHT(mu1_TLV, mu2_TLV, m_met->lv(), m_signalJets2Lep);
			      if(HT_MM >= 200.){
				cutnumber = 30.; fill_histos_MM(cutnumber, weight_ALL_MM);
			      }
			    }
			    //SRSS2
			    if(mtWW_MM > 150.){ //100, 150, 200
			      cutnumber = 32.; fill_histos_MM(cutnumber, weight_ALL_MM);
			      float HT_MM = calcHT(mu1_TLV, mu2_TLV, m_met->lv(), m_signalJets2Lep);
			      if(HT_MM >= 200.){
				cutnumber = 33.; fill_histos_MM(cutnumber, weight_ALL_MM);
			      }
			    }
			    //SRSS3
			    if(mtWW_MM > 200.){ //100, 150, 200
			      cutnumber = 35.; fill_histos_MM(cutnumber, weight_ALL_MM);
			      float HT_MM = calcHT(mu1_TLV, mu2_TLV, m_met->lv(), m_signalJets2Lep);
			      if(HT_MM >= 200.){
				cutnumber = 36.; fill_histos_MM(cutnumber, weight_ALL_MM);
			      }
			    }
			    //SRSS4
			    if(mtWW_MM > 200.){ //100, 150, 200
			      cutnumber = 38.; fill_histos_MM(cutnumber, weight_ALL_MM);
			      float HT_MM = calcHT(mu1_TLV, mu2_TLV, m_met->lv(), m_signalJets2Lep);
			      if(HT_MM >= 200.){
				cutnumber = 39.; fill_histos_MM(cutnumber, weight_ALL_MM);
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
		  if((mu1->q * mu2->q)<0){
		    cutnumber = 50.; fill_histos_MM(cutnumber, weight_ALL_MM);
		    if(muEtConeCorr(mu1, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC)/mu1->pt < 0.1 && muEtConeCorr(mu2, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC)/mu2->pt < 0.1){
		      cutnumber = 51.; fill_histos_MM(cutnumber, weight_ALL_MM);
		      if(numberOfFJets(m_signalJets2Lep) == 0){
			weight_ALL_MM *= getBTagWeight(nt.evt());
			cutnumber = 52.; fill_histos_MM(cutnumber, weight_ALL_MM);
			if(numberOfCBJets(m_signalJets2Lep) == 0){
			  cutnumber = 53.; fill_histos_MM(cutnumber, weight_ALL_MM);
			  if(numberOfCLJets(m_signalJets2Lep) >=2){  
			    cutnumber = 54.; fill_histos_MM(cutnumber, weight_ALL_MM);
			    TLorentzVector signalJet0_TLV, signalJet1_TLV;
			    signalJet0_TLV.SetPtEtaPhiE(jet0->pt, jet0->eta, jet0->phi, jet0->pt*cosh(jet0->eta));
			    signalJet1_TLV.SetPtEtaPhiE(jet1->pt, jet1->eta, jet1->phi, jet1->pt*cosh(jet1->eta));
			    mjj = Mll(m_signalJets2Lep.at(0), m_signalJets2Lep.at(1));
			    if(mjj >= 50. && mjj <= 100.){
			      cutnumber = 55.; fill_histos_MM(cutnumber, weight_ALL_MM);
			      if(mu1_TLV.Pt() >= 30 && mu2_TLV.Pt() >= 30){
				cutnumber = 56.; fill_histos_MM(cutnumber, weight_ALL_MM);
				float DeltaRmm = fabs(mu1_TLV.DeltaR(mu2_TLV));
				if(DeltaRmm<1.5){
				  cutnumber = 57.; fill_histos_MM(cutnumber, weight_ALL_MM);
				  float DeltaPhiMETmm = fabs((mu1_TLV + mu2_TLV).DeltaPhi(m_met->lv()));
				  if(DeltaPhiMETmm>1.5){
				    cutnumber = 58.; fill_histos_MM(cutnumber, weight_ALL_MM);
				    float mTmmin = (Mt(mu1, m_met) > Mt(mu2, m_met)) ? Mt(mu2, m_met) : Mt(mu1, m_met);
				    if(mTmmin >= 60.){			  
				      cutnumber = 59.; fill_histos_MM(cutnumber, weight_ALL_MM);
				      if(m_met->lv().Pt() >= 80.){
					cutnumber = 60.; fill_histos_MM(cutnumber, weight_ALL_MM);
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
  }				  
	
  
  
//   ////////////////////////////        MM           ////////////////////////////////////////////////////////////////////////////
//   
//   Muon* mu1;
//   Muon* mu2;
//   MuonVector muons;
//   
//   //calculate normal contribution with signal leptons:
// 
//   if(m_baseMuons.size()==2 && m_signalMuons.size()==2 ){
//     mu1 = (m_signalMuons.at(0)->pt > m_signalMuons.at(1)->pt) ? m_signalMuons.at(0) : m_signalMuons.at(1);
//     mu2 = (m_signalMuons.at(0)->pt > m_signalMuons.at(1)->pt) ? m_signalMuons.at(1) : m_signalMuons.at(0);
//     leptons = m_signalLeptons;
//     muons = m_signalMuons;
//   }
//   
//   //calculate fake bg contribution with m_baseMuons, don't use info about m_signalElectrons
//   if(calcFakeContribution && m_baseMuons.size()==2 ){
//     mu1 = (m_baseMuons.at(0)->pt > m_baseMuons.at(1)->pt) ? m_baseMuons.at(0) : m_baseMuons.at(1);
//     mu2 = (m_baseMuons.at(0)->pt > m_baseMuons.at(1)->pt) ? m_baseMuons.at(1) : m_baseMuons.at(0);
//     leptons = m_baseLeptons;
//     muons = m_baseMuons;
//   }
// 
//   if((m_signalMuons.size()==2 && m_baseMuons.size()==2) || (calcFakeContribution && m_baseMuons.size()==2) ){
//     cutflow_MM->Fill(16.,1.0); cutflow_MM_MCWeight->Fill(16.,nt.evt()->w);
//     TLorentzVector mu1_TLV, mu2_TLV;
//     mu1_TLV.SetPtEtaPhiE(mu1->pt, mu1->eta ,mu1->phi, mu1->pt*cosh(mu1->eta));
//     mu2_TLV.SetPtEtaPhiE(mu2->pt, mu2->eta ,mu2->phi, mu2->pt*cosh(mu2->eta));
//     
//     float lep_SF_MM = 1.0;
//     if(nt.evt()->isMC) lep_SF_MM = mu1->effSF * mu2->effSF;
// 
//     if(m_trigObj->passDilEvtTrig(leptons, 0., nt.evt())){ //valid pT region
//       if(m_signalTaus.size() == 0){
// 	float trigW_MM = m_trigObj->getTriggerWeight(leptons, nt.evt()->isMC, 0., 0, nt.evt()->nVtx, NtSys_NOM);
// 
// 	if(nt.evt()->isMC || (!nt.evt()->isMC && m_trigObj->passDilTrigMatch(leptons, 0., nt.evt()))){ //match to trigger
// 
// 	  if(!nt.evt()->isMC || CheckRealLeptons(m_signalElectrons, muons)){
// 	    h_N_events_MM->Fill(mcid, 0., w_lPX_MM);
// 	    
// 
// 	    float weight_ALL_MM = w_lPX_MM * lep_SF_MM * trigW_MM * getBTagWeight(nt.evt());
//   // 	  float DeltaRmm = mu1_TLV.DeltaR(mu2_TLV);
//   // 	  float ptmm = (mu1_TLV + mu2_TLV).Pt();
//   // 	  float Mmm = Mll(mu1, mu2);
// 	    float mZTT_coll = calcMZTauTau_coll(mu1_TLV, mu2_TLV, m_met->lv());
// 	    float mZTT_mmc = calcMZTauTau_mmc(mu1_TLV, mu2_TLV, 1/*muon*/, 1/*muon*/);
// // 	    float mZTT_missMassCalc = calcMZTauTau_MissMassCalc(mu1_TLV, mu2_TLV, 1/*muon*/, 1/*muon*/);
//   // 	  cout << "MM mZTT_coll= " << mZTT_coll << " mZTT_mmc= " << mZTT_mmc << " mZTT_missMassCalc= " << mZTT_missMassCalc << endl;
//   // 	  float mTmm = calcMt((mu1_TLV+mu2_TLV), m_met->lv());
//   // 	  float mTmmmin = (Mt(mu1, m_met) > Mt(mu2, m_met)) ? Mt(mu2, m_met) : Mt(mu1, m_met);
// 
// 	    float mt2_mm = getMT2(leptons, m_met);
// 
// 
// 	    float HT = calcHT(leptons, m_signalJets2Lep);
// 	    float mWWt = mTWW((mu1_TLV + mu2_TLV), m_met->lv(), true);
// 	    
// 	    float DeltaPhiLLJJ = (NJets>1) ? (mu1_TLV + mu2_TLV).DeltaPhi(signalJet1_TLV + signalJet1_TLV) : 0.;
// 	    
// 	    float DeltaPhiMETmm = fabs((mu1_TLV + mu2_TLV).DeltaPhi(m_met->lv()));
// 	    float mTemin = (Mt(mu1, m_met) > Mt(mu2, m_met)) ? Mt(mu2, m_met) : Mt(mu1, m_met);
// 	    float sum_mv1 = calcSumMv1(m_signalJets2Lep);
// 	    float DeltaRmm = fabs(mu1_TLV.DeltaR(mu2_TLV));
// 
// 	      /////////////////////////// SR6 (OS, DF) ///////////////////////////////////////////////////
//   // 	    - Etcone30/pt<0.1 (for muon)
//   // 	    – >=2 jets C20 (veto B20 and F30)-
//   // 	    - pTl0>30 GeV
//   // 	    - ΔΦ(ll,Etmiss)>1.5
//   // 	    - Min(mT) > 60 GeV
//   // 	    - Σmv1<2.0
//   // 	    - dRll<1.5
//   // 	    - 50<mjj<110
//   // 	    - Met>80
//   // 	    - pTl1>30 GeV
//   // 	    - pTj0>40 GeV
//   // 	    - pTj1>30 GeV
// 
// 	      if((mu2->q * mu1->q)<0 && numberOfCLJets(m_signalJets2Lep) >=2 && (numberOfCBJets(m_signalJets2Lep) + numberOfFJets(m_signalJets2Lep)) == 0){
// 		if(calcFakeContribution) weight_ALL_MM = 0.;
// 
// 		fillHistos_SR6_MM(mcid, 0., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, mZTT_mmc);
// 		if((mu1->etcone30/mu1->pt < 0.1) && (mu2->etcone30/mu2->pt < 0.1)){
// 		  fillHistos_SR6_MM(mcid, 1., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, mZTT_mmc);
// 		  float pt1 = (mu1->pt > mu2->pt) ? mu1->pt : mu2->pt;
// 		  float pt2 = (mu1->pt > mu2->pt) ? mu2->pt : mu1->pt;
// 		  if(pt1 > 30.){
// 		    fillHistos_SR6_MM(mcid, 2., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, mZTT_mmc);
// 		    if(DeltaPhiMETmm > 1.5){
// 		      fillHistos_SR6_MM(mcid, 3., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, mZTT_mmc);
// 		      if(mTemin > 60.){
// 			fillHistos_SR6_MM(mcid, 4., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, mZTT_mmc);
// 			if(sum_mv1 < 2.0){
// 			  fillHistos_SR6_MM(mcid, 5., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, mZTT_mmc);
// 			  if(DeltaRmm < 1.5){
// 			    fillHistos_SR6_MM(mcid, 6., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, mZTT_mmc);
// 			    if(mjj > 50. && mjj < 110.){
// 			      fillHistos_SR6_MM(mcid, 7., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, mZTT_mmc);
// 			      if(METrel > 80.){
// 				fillHistos_SR6_MM(mcid, 8., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, mZTT_mmc);
// 				float ptj1 = (signalJet1_TLV.Pt() > signalJet1_TLV.Pt()) ? signalJet1_TLV.Pt() : signalJet1_TLV.Pt();
// 				float ptj2 = (signalJet1_TLV.Pt() > signalJet1_TLV.Pt()) ? signalJet1_TLV.Pt() : signalJet1_TLV.Pt();
// 				if(ptj1 > 40.){
// 				  fillHistos_SR6_MM(mcid, 9., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, mZTT_mmc);
// 				  if(ptj2 > 20.){
// 				    fillHistos_SR6_MM(mcid, 10., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, mZTT_mmc);
// 				  }
// 				}
// 			      }
// 			    }
// 			  }
// 			}
// 		      }
// 		    }
// 		  }
// 		}
// 	      } 
// 	  /////////////////////////// SR8 (SS, SF) ///////////////////////////////////////////////////
//   // 	    Preselection (Anyes):
//   // 	    - Etcone30/pt<0.1 (for both muons)
//   // 	    – pTl0>30 (not use in BDT training to gain more stat)
//   // 	    – Veto B-jet, fwd-jet
//   // 	    – nC20>=1
//   // 	    - HT>200
//   // 	    - mWWT>100,150,200
//   // 	    - (metrel>50 with mWWT>200)
// 
// 	    if((mu1->q * mu2->q)>0 &&numberOfCLJets(m_signalJets2Lep) >=1 && (numberOfCBJets(m_signalJets2Lep) + numberOfFJets(m_signalJets2Lep)) == 0){
// 	      
// 	      float w_fake_MM = 1.;
//   // 	    if(!nt.evt()->isMC && calcFakeContribution) w_fake_MM = getFakeWeight(m_baseLeptons, SusyMatrixMethod::FR_VRSSbtag, METrel, SusyMatrixMethod::SYS_NONE);
// 	      if(!nt.evt()->isMC) weight_ALL_MM = w_fake_MM;
// 	      
// 	      fillHistos_SR8_MM(mcid, 0., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, mZTT_mmc);
// 	      if((mu1->etcone30/mu1->pt < 0.1) && (mu2->etcone30/mu2->pt < 0.1)){
// 		fillHistos_SR8_MM(mcid, 1., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, mZTT_mmc);
// 		if(mu1->pt > 30.){
// 		  fillHistos_SR8_MM(mcid, 2., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, mZTT_mmc);
// 		  if(HT > 200.){
// 		    fillHistos_SR8_MM(mcid, 3., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, mZTT_mmc);
// 		    if(mWWt > 100.){
// 		      fillHistos_SR8_MM(mcid, 4., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, mZTT_mmc);
// 		      if(mWWt > 150.){
// 			fillHistos_SR8_MM(mcid, 5., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, mZTT_mmc);
// 			if(mWWt > 200.){
// 			  fillHistos_SR8_MM(mcid, 6., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, mZTT_mmc);
// 			  if(METrel > 50.){
// 			    fillHistos_SR8_MM(mcid, 7., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, mZTT_mmc);
// 			  }
// 			}
// 		      }
// 		    }
// 		  }
// 		}
// 	      }
// 	    }
// 
// 	      
// 	      
// 	  }
// 	}
//       }
//     }
//   }

////////////////////////////        EM            //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  
  if((m_baseElectrons.size()==1 && m_baseMuons.size() ==1)){
    cutnumber = 15.; fill_histos_EM(cutnumber, weight_ALL_EM); //pass category
    if(m_signalMuons.size()==1 && m_signalElectrons.size()==1 ){
      Muon* mu;
      mu = m_signalMuons.at(0);
      if(fabs(mu->Eta())<=2.4){
	cutnumber = 16.; fill_histos_EM(cutnumber, weight_ALL_EM); //pass nlep
	Electron* el;
	el = m_signalElectrons.at(0);
	LeptonVector leptons;
	leptons = m_signalLeptons;
	MuonVector muons;
	muons = m_signalMuons;
	ElectronVector electrons;
	electrons = m_signalElectrons;
	TLorentzVector el_TLV, mu_TLV;

	el_TLV.SetPtEtaPhiE(el->pt, el->eta ,el->phi, el->pt*cosh(el->eta));
	mu_TLV.SetPtEtaPhiE(mu->pt, mu->eta ,mu->phi, mu->pt*cosh(mu->eta));
	float pt1 = (mu->pt > el->pt) ? mu->pt : el->pt;
	float pt2 = (mu->pt > el->pt) ? el->pt : mu->pt;
	if(m_signalTaus.size() == 0){
	  cutnumber = 17.; fill_histos_EM(cutnumber, weight_ALL_EM);
	  if(m_trigObjWithoutRU->passDilEvtTrig(leptons, 0., nt.evt())){ //valid pT region)   
	    cutnumber = 18.; fill_histos_EM(cutnumber, weight_ALL_EM);

	    if(nt.evt()->isMC || (!nt.evt()->isMC && m_trigObjWithoutRU->passDilTrigMatch(leptons, 0., nt.evt()))){ //match to trigger
	      cutnumber = 19.; fill_histos_EM(cutnumber, weight_ALL_EM);
	      if(!nt.evt()->isMC || CheckRealLeptons(electrons, muons)){
		cutnumber = 20.; fill_histos_EM(cutnumber, weight_ALL_EM);
		
		//time to calc weights:
		//------------------------------------------------------------------------------------
	
		//calc lepton SF:
		float lep_SF_EM = 1.0;
		if(nt.evt()->isMC) lep_SF_EM = mu->effSF * el->effSF;
		//calc trigger weight:
		float trigW_EM = 1.;
		if(nt.evt()->isMC) trigW_EM = m_trigObjWithoutRU->getTriggerWeight(leptons, nt.evt()->isMC, m_met->lv().Et(), numberOfCLJets(m_signalJets2Lep), nt.evt()->nVtx, NtSys_NOM);
		//product of all weights:
		if(nt.evt()->isMC){
		  if(runWithPoD) weight_ALL_EM = nt.evt()->w * nt.evt()->wPileup * nt.evt()->xsec * LUMI_A_L / sumw_from_histo * lep_SF_EM * trigW_EM;
		  else weight_ALL_EM = (nt.evt()->isMC) ? getEventWeight(LUMI_A_L, true) * lep_SF_EM * trigW_EM : 1; //consider pileup, xsec, lumi (as argument), MC eventWeight.
		}
		

		//calc charge flip weights: 
		//Note that the charge flip is only applied in SS region (ee or em) and only for MC events that are true OS.
		//The charge flip changes both the lepton pt of the electron that charge flip and the change needs to be propagated to the met.
		float chargeFlipWeight = 1.0;		
		  //make a copy of electrons and MET which will eventually be changed by ChargeFlip tool:
		  Electron* el_SS;
		  el_SS = m_signalElectrons.at(0);
		  ElectronVector electrons_SS;
		  electrons_SS = m_signalElectrons;
		  TLorentzVector el_SS_TLV;
		  el_SS_TLV.SetPtEtaPhiE(el_SS->pt, el_SS->eta ,el_SS->phi, el_SS->pt*cosh(el_SS->eta));
		  
		  TLorentzVector met_SS_TLV;
		  TVector2 met_SS_TVector2;
		  met_SS_TLV = m_met->lv();
		  met_SS_TVector2.Set(met_SS_TLV.Px(), met_SS_TLV.Py());
		  
		  if(el->q*mu->q<0){
		    int pdg0 = 11 * (-1) * el->q; // Remember 11 = elec which has charge -1
		    TLorentzVector empty_TLV;
		    TLorentzVector met_SS_TLV;
		    TVector2 met_SS_TVector2;
		    met_SS_TLV = m_met->lv();
		    met_SS_TVector2.Set(met_SS_TLV.Px(), met_SS_TLV.Py());
		    chargeFlipWeight = m_chargeFlip.OS2SS(pdg0, &el_SS_TLV, 13, &empty_TLV, &met_SS_TVector2, 0);
		    chargeFlipWeight*=  m_chargeFlip.overlapFrac().first;
		    //get changed MET and fill in TLorentzVector:
		    met_SS_TLV.SetPx(met_SS_TVector2.Px());
		    met_SS_TLV.SetPy(met_SS_TVector2.Py());		  
		    met_SS_TLV.SetE(sqrt(pow(met_SS_TVector2.Px(),2) + pow(met_SS_TVector2.Py(),2)));
		}
		float weight_ALL_SS_EM = weight_ALL_EM * chargeFlipWeight;
		//------------------------------------------------------------------------------------
		
		//------------------------------------------------------------------------------------
		//----------------------------------SR-SS-EM------------------------------------------
		//------------------------------------------------------------------------------------
		
		cutnumber = 21.; fill_histos_EM(cutnumber, weight_ALL_SS_EM); //SS cut: applied only on weighted events
		if(muEtConeCorr(mu, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC)/mu->pt < 0.1){
		  cutnumber = 22.; fill_histos_EM(cutnumber, weight_ALL_SS_EM);
		  if(fabs(el->d0Sig(true))<=3.0){//|d0/sd0|<3   (for electron)
		    cutnumber = 23.; fill_histos_EM(cutnumber, weight_ALL_SS_EM);
		    if(numberOfFJets(m_signalJets2Lep) == 0){
		      weight_ALL_SS_EM *= getBTagWeight(nt.evt());
		      cutnumber = 24.; fill_histos_EM(cutnumber, weight_ALL_SS_EM);
		      if(numberOfCBJets(m_signalJets2Lep) == 0){
			cutnumber = 25.; fill_histos_EM(cutnumber, weight_ALL_SS_EM);
			if(numberOfCLJets(m_signalJets2Lep) >=1){
			  cutnumber = 26.; fill_histos_EM(cutnumber, weight_ALL_SS_EM);   
			  if(el_SS_TLV.Pt()>=20. && mu_TLV.Pt()>=20. && ((el_SS_TLV.Pt()>mu_TLV.Pt() && el_SS_TLV.Pt() >= 30.) || (el_SS_TLV.Pt()<mu_TLV.Pt() && mu_TLV.Pt() >= 30.))){
			    cutnumber = 27.; fill_histos_EM(cutnumber, weight_ALL_SS_EM);
			    cutnumber = 28.; fill_histos_EM(cutnumber, weight_ALL_SS_EM); //ZVeto
			    float mtWW_EM = mT((mu_TLV + el_SS_TLV), m_met->lv());
			    //SRSS1
			    if(mtWW_EM > 140.){ //140, 140, 140
			      cutnumber = 29.; fill_histos_EM(cutnumber, weight_ALL_SS_EM);
			      float HT_EM = calcHT(el_SS_TLV, mu_TLV, met_SS_TLV, m_signalJets2Lep);
			      if(HT_EM > 200.){
				cutnumber = 30.; fill_histos_EM(cutnumber, weight_ALL_SS_EM);
				if(METrel>50.){
				  cutnumber = 31.; fill_histos_EM(cutnumber, weight_ALL_SS_EM);
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
		//----------------------------------SR-OS-EM------------------------------------------
		//------------------------------------------------------------------------------------
		if((el->q * mu->q)<0){
		  cutnumber = 50.; fill_histos_EM(cutnumber, weight_ALL_EM);
		  if(muEtConeCorr(mu, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC)/mu->pt < 0.1/* && fabs(el->d0Sig(true))<=3.0*/){//|d0/sd0|<3   (for electron)
		    cutnumber = 51.; fill_histos_EM(cutnumber, weight_ALL_EM);
		    if(numberOfFJets(m_signalJets2Lep) == 0){
		      weight_ALL_EM *= getBTagWeight(nt.evt());
		      cutnumber = 52.; fill_histos_EM(cutnumber, weight_ALL_EM);
		      if(numberOfCBJets(m_signalJets2Lep) == 0){
			cutnumber = 53.; fill_histos_EM(cutnumber, weight_ALL_EM);
			if(numberOfCLJets(m_signalJets2Lep) >=2){
			  cutnumber = 54.; fill_histos_EM(cutnumber, weight_ALL_EM);
			  mjj = Mll(m_signalJets2Lep.at(0), m_signalJets2Lep.at(1));
			  if(mjj > 50. && mjj < 100.){
			    cutnumber = 55.; fill_histos_EM(cutnumber, weight_ALL_EM);
			    if(el_TLV.Pt()>=30. && mu_TLV.Pt()>=30. && ((el_TLV.Pt()>mu_TLV.Pt() && el_TLV.Pt() >= 30.) || (el_TLV.Pt()<mu_TLV.Pt() && mu_TLV.Pt() >= 30.))){
			      cutnumber = 56.; fill_histos_EM(cutnumber, weight_ALL_EM);
			      float DeltaRem = fabs(el_TLV.DeltaR(mu_TLV));
			      if(DeltaRem<1.5){
				cutnumber = 57.; fill_histos_EM(cutnumber, weight_ALL_EM);
				float mTemmin = (Mt(el, m_met) > Mt(mu, m_met)) ? Mt(mu, m_met) : Mt(el, m_met);
				if(mTemmin > 60.){
				cutnumber = 58.; fill_histos_EM(cutnumber, weight_ALL_EM);
				float DeltaPhiMETem = fabs((el_TLV + mu_TLV).DeltaPhi(m_met->lv()));
				if(DeltaPhiMETem>1.5){
				  cutnumber = 59.; fill_histos_EM(cutnumber, weight_ALL_EM);
				  if(m_met->lv().Pt() >= 80.){
				    cutnumber = 60.; fill_histos_EM(cutnumber, weight_ALL_EM);	      
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
//   
//   ////////////////////////////        EM           ////////////////////////////////////////////////////////////////////////////
//   Electron* el;
//   Muon* mu;
//   //calculate normal contribution with signal leptons:
//   if(m_baseMuons.size()==1 && m_baseElectrons.size()==1 && m_signalMuons.size()==1 && m_signalElectrons.size()==1 ){
//     mu = m_signalMuons.at(0);
//     el = m_signalElectrons.at(0);
//     leptons = m_signalLeptons;
//     muons = m_signalMuons;
//     electrons = m_signalElectrons;
//   }
//   
//   //calculate fake bg contribution with m_baseMuons, don't use info about m_signalElectrons
//   if(calcFakeContribution && m_baseMuons.size()==1 && m_baseElectrons.size()==1){
//     mu = m_baseMuons.at(0);
//     el = m_baseElectrons.at(0);
//     leptons = m_baseLeptons;
//     muons = m_baseMuons;
//     electrons = m_baseElectrons;
//   }
// 
// 
//     
//   if((m_signalElectrons.size()==1 && m_signalMuons.size()==1 && m_baseElectrons.size() == 1 &&  m_baseMuons.size() == 1) || (calcFakeContribution && m_baseElectrons.size() == 1 &&  m_baseMuons.size() == 1)){	  
//     cutflow_EM->Fill(16.,1.0); cutflow_EM_MCWeight->Fill(16.,nt.evt()->w);
// 
//     TLorentzVector el_TLV, mu_TLV;
// 
//     el_TLV.SetPtEtaPhiE(el->pt, el->eta ,el->phi, el->pt*cosh(el->eta));
//     mu_TLV.SetPtEtaPhiE(mu->pt, mu->eta ,mu->phi, mu->pt*cosh(mu->eta));
//     
//     float lep_SF_EM = 1.0;
//     if(nt.evt()->isMC) lep_SF_EM = mu->effSF * el->effSF;
// 
//     if(m_trigObj->passDilEvtTrig(leptons, 0., nt.evt())){ //valid pT region)
//       if(m_signalTaus.size() == 0){
// 
// 	float trigW_EM = m_trigObj->getTriggerWeight(leptons, nt.evt()->isMC, 0., 0, nt.evt()->nVtx, NtSys_NOM);
// 
// 	if(nt.evt()->isMC || (!nt.evt()->isMC && m_trigObj->passDilTrigMatch(leptons, 0., nt.evt()))){ //match to trigger
// 	  if(!nt.evt()->isMC || CheckRealLeptons(electrons, muons)){
// 	    h_N_events_EM->Fill(mcid, 0., w_lPX_EM);
// 
// 	    float weight_ALL_EM = w_lPX_EM * lep_SF_EM * trigW_EM * getBTagWeight(nt.evt());
//   // 	  float DeltaRem = el_TLV.DeltaR(mu_TLV);
//   // 	  float ptem = (el_TLV + mu_TLV).Pt();
//   // 	  float Mem = Mll(el, mu);
// 	    
// 	    float mZTT_coll = calcMZTauTau_coll(el_TLV, mu_TLV, m_met->lv());
// 	    float mZTT_mmc = calcMZTauTau_mmc(el_TLV, mu_TLV, 0/*electron*/, 1/*muon*/);
// // 	    float mZTT_missMassCalc = calcMZTauTau_MissMassCalc(el_TLV, mu_TLV, 0/*electron*/, 1/*muon*/);
//   // 	  cout << "EM mZTT_coll= " << mZTT_coll << " mZTT_mmc= " << mZTT_mmc << " mZTT_missMassCalc= " << mZTT_missMassCalc << endl;
//   // 	  float mTem = calcMt((el_TLV+mu_TLV), m_met->lv());
//   // 	  float mTemmin = (Mt(el, m_met) > Mt(mu, m_met)) ? Mt(mu, m_met) : Mt(el, m_met);	  
// 	    
//   // 	  float mMETem = (mu_TLV + el_TLV + m_met->lv()).M();
// 
// 	    float mt2_em = getMT2(leptons, m_met);
// 
// 	    float HT = calcHT(leptons, m_signalJets2Lep);
// 	    float mWWt = mTWW((mu_TLV + el_TLV), m_met->lv(), true);
// 	    
// 	    float DeltaPhiLLJJ = (mu_TLV + el_TLV).DeltaPhi(signalJet1_TLV + signalJet1_TLV);
// 	    
// 	    float DeltaPhiMETem = fabs((mu_TLV + el_TLV).DeltaPhi(m_met->lv()));
// 	    float mTemin = (Mt(mu, m_met) > Mt(el, m_met)) ? Mt(el, m_met) : Mt(mu, m_met);
// 	    float sum_mv1 = calcSumMv1(m_signalJets2Lep);
// 	    float DeltaRem = fabs(mu_TLV.DeltaR(el_TLV));
// 
// 	      /////////////////////////// SR7 (OS, DF) ///////////////////////////////////////////////////
//   // 	    - Etcone30/pt<0.1 (for muon)
//   // 	    – >=2 jets C20 (veto B20 and F30)-
//   // 	    - pTl0>30 GeV
//   // 	    - ΔΦ(ll,Etmiss)>1.5
//   // 	    - Min(mT) > 60 GeV
//   // 	    - Σmv1<2.0
//   // 	    - dRll<1.5
//   // 	    - 50<mjj<110
//   // 	    - Met>80
//   // 	    - pTl1>30 GeV
//   // 	    - pTj0>40 GeV
//   // 	    - pTj1>30 GeV
// 	      
// 	      if((el->q * mu->q)<0 && numberOfCLJets(m_signalJets2Lep) >=2 && (numberOfCBJets(m_signalJets2Lep) + numberOfFJets(m_signalJets2Lep)) == 0){
// 		if(calcFakeContribution) weight_ALL_EM = 0.;
// // 		cout << "weight_ALL_EM= " << weight_ALL_EM << endl;
// 		fillHistos_SR7_EM(mcid, 0., weight_ALL_EM, METrel, HT, mWWt, passedTopTag, mu_TLV,  el_TLV, m_met, mu, el, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, mZTT_mmc);
// 		if(mu->etcone30/mu->pt < 0.1){
// 		  fillHistos_SR7_EM(mcid, 1., weight_ALL_EM, METrel, HT, mWWt, passedTopTag, mu_TLV,  el_TLV, m_met, mu, el, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, mZTT_mmc);
// 		  float pt1 = (mu->pt > el->pt) ? mu->pt : el->pt;
// 		  float pt2 = (mu->pt > el->pt) ? el->pt : mu->pt;
// 		  if(pt1 > 30.){
// 		    fillHistos_SR7_EM(mcid, 2., weight_ALL_EM, METrel, HT, mWWt, passedTopTag, mu_TLV,  el_TLV, m_met, mu, el, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, mZTT_mmc);
// 		    if(DeltaPhiMETem > 1.5){
// 		      fillHistos_SR7_EM(mcid, 3., weight_ALL_EM, METrel, HT, mWWt, passedTopTag, mu_TLV,  el_TLV, m_met, mu, el, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, mZTT_mmc);
// 		      if(mTemin > 60.){
// 			fillHistos_SR7_EM(mcid, 4., weight_ALL_EM, METrel, HT, mWWt, passedTopTag, mu_TLV,  el_TLV, m_met, mu, el, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, mZTT_mmc);
// 			if(sum_mv1 < 2.0){
// 			  fillHistos_SR7_EM(mcid, 5., weight_ALL_EM, METrel, HT, mWWt, passedTopTag, mu_TLV,  el_TLV, m_met, mu, el, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, mZTT_mmc);
// 			  if(DeltaRem < 1.5){
// 			    fillHistos_SR7_EM(mcid, 6., weight_ALL_EM, METrel, HT, mWWt, passedTopTag, mu_TLV,  el_TLV, m_met, mu, el, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, mZTT_mmc);
// 			    if(mjj > 50. && mjj < 110.){
// 			      fillHistos_SR7_EM(mcid, 7., weight_ALL_EM, METrel, HT, mWWt, passedTopTag, mu_TLV,  el_TLV, m_met, mu, el, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, mZTT_mmc);
// 			      if(METrel > 80.){
// 				fillHistos_SR7_EM(mcid, 8., weight_ALL_EM, METrel, HT, mWWt, passedTopTag, mu_TLV,  el_TLV, m_met, mu, el, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, mZTT_mmc);
// 				float ptj1 = (signalJet1_TLV.Pt() > signalJet1_TLV.Pt()) ? signalJet1_TLV.Pt() : signalJet1_TLV.Pt();
// 				float ptj2 = (signalJet1_TLV.Pt() > signalJet1_TLV.Pt()) ? signalJet1_TLV.Pt() : signalJet1_TLV.Pt();
// 				if(ptj1 > 40.){
// 				  fillHistos_SR7_EM(mcid, 9., weight_ALL_EM, METrel, HT, mWWt, passedTopTag, mu_TLV,  el_TLV, m_met, mu, el, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, mZTT_mmc);
// 				  if(ptj2 > 20.){
// 				    fillHistos_SR7_EM(mcid, 10., weight_ALL_EM, METrel, HT, mWWt, passedTopTag, mu_TLV,  el_TLV, m_met, mu, el, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, mZTT_mmc);
// 				  }
// 				}
// 			      }
// 			    }
// 			  }
// 			}
// 		      }
// 		    }
// 		  }
// 		}
// 	      } 
// 	      
// 	      ///////////////////////// SR9 (SS, DF) ///////////////////////////////////////////////////
//   // 	    – Etcone30/pt<0.1 (muon)
//   // 	    – pTl0>30 (not used in BDT training to gain more stat)
//   // 	    – pT l1>20 (not used in BDT training to gain more stat)
//   // 	    – Veto B-jet, fwd-jet
//   // 	    – nC20>=1
//   // 	    - HT>200
//   // 	    - mWWT>140
//   // 	    - (metrel>50)
// 	      if((el->q * mu->q)>0 && numberOfCLJets(m_signalJets2Lep) >=1 && (numberOfCBJets(m_signalJets2Lep) + numberOfFJets(m_signalJets2Lep)) == 0){
// 		
// 		float w_fake_EM = 1.;
//   // 	      if(!nt.evt()->isMC && calcFakeContribution) w_fake_EM = getFakeWeight(m_baseLeptons, SusyMatrixMethod::FR_VRSSbtag, METrel, SusyMatrixMethod::SYS_NONE);
// 		if(!nt.evt()->isMC) weight_ALL_EM = w_fake_EM;
// 
// 		fillHistos_SR9_EM(mcid, 0., weight_ALL_EM, METrel, HT, mWWt, passedTopTag, mu_TLV,  el_TLV, m_met, mu, el, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, mZTT_mmc);
// 		if(mu->etcone30/mu->pt < 0.1){
// 		  fillHistos_SR9_EM(mcid, 1., weight_ALL_EM, METrel, HT, mWWt, passedTopTag, mu_TLV,  el_TLV, m_met, mu, el, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, mZTT_mmc);
// 		  float pt1 = (mu->pt > el->pt) ? mu->pt : el->pt;
// 		  float pt2 = (mu->pt > el->pt) ? el->pt : mu->pt;
// 		  if(pt1 > 30.){
// 		    fillHistos_SR9_EM(mcid, 2., weight_ALL_EM, METrel, HT, mWWt, passedTopTag, mu_TLV,  el_TLV, m_met, mu, el, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, mZTT_mmc);
// 		    if(pt2 > 20.){
// 		      fillHistos_SR9_EM(mcid, 3., weight_ALL_EM, METrel, HT, mWWt, passedTopTag, mu_TLV,  el_TLV, m_met, mu, el, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, mZTT_mmc);
// 		      if(HT > 200.){
// 			fillHistos_SR9_EM(mcid, 4., weight_ALL_EM, METrel, HT, mWWt, passedTopTag, mu_TLV,  el_TLV, m_met, mu, el, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, mZTT_mmc);
// 			if(mWWt > 140.){
// 			  fillHistos_SR9_EM(mcid, 5., weight_ALL_EM, METrel, HT, mWWt, passedTopTag, mu_TLV,  el_TLV, m_met, mu, el, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, mZTT_mmc);
// 			  if(METrel > 50.){
// 			    fillHistos_SR9_EM(mcid, 6., weight_ALL_EM, METrel, HT, mWWt, passedTopTag, mu_TLV,  el_TLV, m_met, mu, el, leptons, signalJet1_TLV, signalJet1_TLV, NJets, mZTT_coll, mZTT_mmc);
// 			  }
// 			}
// 		      }
// 		    }
// 		  }
// 		}
// 	      }
// 
// 	      
// 	    } 
// 	  }
// 	}
//       }
//     }

  return kTRUE;
}



/*--------------------------------------------------------------------------------*/
// Analysis cuts
/*--------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------*/

bool TSelector_SusyNtuple::CheckRealLeptons(const ElectronVector& signal_electrons, MuonVector& signal_muons){

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
bool TSelector_SusyNtuple::CheckChargeFlipElectrons(const ElectronVector& signal_electrons){
  
  for(uint i=0; i<signal_electrons.size(); i++){
	  Electron* signal_electron = signal_electrons.at(i);
	  if(signal_electron->isChargeFlip) return false;
	  // check if signal electron has no charge flip
  }
  return true;
  
}
/*--------------------------------------------------------------------------------*/
float TSelector_SusyNtuple::getBTagWeight(const Event* evt)
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
bool TSelector_SusyNtuple::isNoZBoson(const LeptonVector& leptons)
{
  
  if(fabs(Mll(leptons[0],leptons[1])-MZ ) < 10.) return false;
  else return true;
}


/*--------------------------------------------------------------------------------*/
JetVector TSelector_SusyNtuple::selectC20AndB20Jets(JetVector& m_baseJets){
  
  JetVector C20AndB20Jets;

  for(uint j=0; j<m_baseJets.size(); ++j){
	  Jet* jet = m_baseJets.at(j);
	  if(isCentralLightJet(jet) || isCentralBJet(jet)) C20AndB20Jets.push_back(jet);
  }
  return C20AndB20Jets;
}

/*--------------------------------------------------------------------------------*/
bool TSelector_SusyNtuple::checkLeptonPt(const LeptonVector& leptons)
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
float TSelector_SusyNtuple::calcMt(const TLorentzVector &lep, const TLorentzVector &met){
  return sqrt(2.0 * lep.Pt() * met.Et() *(1-cos(lep.DeltaPhi(met))) );
}

/*--------------------------------------------------------------------------------*/
// float TSelector_SusyNtuple::getFakeWeight(const LeptonVector &baseLeps, 
//                                       SusyMatrixMethod::FAKE_REGION region, 
//                                       float metRel,
//                                       SusyMatrixMethod::SYSTEMATIC sys)
// {
// 
//   if(baseLeps.size() != 2) return 0.0;
// 
//   uint nVtx = nt.evt()->nVtx;
//   bool isMC = nt.evt()->isMC;
//   
//   float weight = m_matrix->getTotalFake( isSignalLepton(baseLeps[0],m_baseElectrons, m_baseMuons,nVtx,isMC),
//                                          baseLeps[0]->isEle(),
//                                          baseLeps[0]->Pt() * 1000.,
//                                          baseLeps[0]->Eta(),
//                                          isSignalLepton(baseLeps[1],m_baseElectrons, m_baseMuons,nVtx,isMC),
//                                          baseLeps[1]->isEle(),
//                                          baseLeps[1]->Pt() * 1000.,
//                                          baseLeps[1]->Eta(),
//                                          region,
//                                          metRel * 1000.,
//                                          sys);
// 
// //   if(!m_doMCFake) return weight;
//   return weight;// * getEvtWeight(baseLeps,true,true);
// 
// }

/*--------------------------------------------------------------------------------*/
float TSelector_SusyNtuple::calcHT(TLorentzVector l1, TLorentzVector l2, TLorentzVector met, const JetVector &signalJets){
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
float TSelector_SusyNtuple::calcMZTauTau_coll(const TLorentzVector &signal_lep_0, const TLorentzVector &signal_lep_1, const TLorentzVector &met)
{

  // IMPLEMENTATION OF COLLINEAR APPROXIMATION - validate code!
  
  float px0(signal_lep_0.Px()), py0(signal_lep_0.Py());
  float px1(signal_lep_1.Px()), py1(signal_lep_1.Py());
  float pxm(met.Px()), pym(met.Py());
  float num( px0*py1 - py0*px1 );
  float den1( py1*pxm - px1*pym + px0*py1 - py0*px1 );
  float den2( px0*pym - py0*pxm + px0*py1 - py0*px1 );
  float x1 = ( den1 != 0.0 ? (num/den1) : 0.0);
  float x2 = ( den2 != 0.0 ? (num/den2) : 0.0);
  // not guaranteed that this configuration is kinematically possible

  float returnvalue = x1*x2 > 0.0 ? (signal_lep_0+signal_lep_1).M() / std::sqrt(x1*x2) : -1.0;
  return returnvalue;
}
/*--------------------------------------------------------------------------------*/
float TSelector_SusyNtuple::calcMZTauTau_mmc(TLorentzVector lep1, TLorentzVector lep2, int tau0_decay_type, int tau1_decay_type){
 //initialize missing mass calculator MMC for identification of Z->tau tau events https://svnweb.cern.ch/trac/atlasusr/browser/mflechl/code/htautau/mmc/tags/mmc-00-01-10/README
   
//   float sum_et = 0.;
//   sum_et += m_met->refEle_sumet;
//   sum_et += m_met->refGamma_sumet;
//   //taus?
//   sum_et += m_met->refJet_sumet;
//   sum_et += m_met->softTerm_sumet;
//   sum_et += m_met->refMuo_sumet;  
// 
//   TLorentzVector vec1, vec2;
//   vec1 = lep1; //ELECTRON
//   vec2 = lep2; // MUON
// 
//   float met_resolution = 0.;
//   if(nt.evt()->isMC){
//     if(numberOfCLJets(m_signalJets2Lep)==0){
//       met_resolution = 4.447 + 0.505 * sqrt(sum_et);
//     }
//     if(numberOfCLJets(m_signalJets2Lep)==1){
//       met_resolution = 5.000 + 0.500 * sqrt(sum_et);
//     }
//     if(numberOfCLJets(m_signalJets2Lep)==2){
//       met_resolution = 4.635 + 0.514 * sqrt(sum_et);
//     }
//     if(numberOfCLJets(m_signalJets2Lep)>=3){
//       met_resolution = 4.528 + 0.513 * sqrt(sum_et);
//     }
//   }
// 
//   if(!nt.evt()->isMC){
//     if(numberOfCLJets(m_signalJets2Lep)==0){
//       met_resolution = 4.314 + 0.498 * sqrt(sum_et);
//     }
//     if(numberOfCLJets(m_signalJets2Lep)==1){
//       met_resolution = 4.700 + 0.509 * sqrt(sum_et);
//     }
//     if(numberOfCLJets(m_signalJets2Lep)==2){
//       met_resolution = 4.539 + 0.519 * sqrt(sum_et);
//     }
//     if(numberOfCLJets(m_signalJets2Lep)>=3){
//       met_resolution = 3.897 + 0.540 * sqrt(sum_et);
//     }
//   }
// //   mode:
// //   11 - for ee final state
// //   13 - for emu final state
// //   31 - for mue final state
// //   33 - for mumu final state
// 
//   int mode = 0;
//   if(tau0_decay_type == 0 && tau1_decay_type == 1){ //EM channel
//     if(vec1.Pt() > vec2.Pt()) mode = 13; //EMU
//     if(vec1.Pt() < vec2.Pt()) mode = 31; //MUE
//   }
//   if(tau0_decay_type == 1 && tau1_decay_type == 1) mode = 33; //MM channel
//   if(tau0_decay_type == 0 && tau1_decay_type == 0) mode = 11; //EE channel
//   MMC_sumet.Clear();
//   MMC_sumet.Scan6dAnal(vec1, vec2, m_met->lv().Px(), m_met->lv().Py(), met_resolution, mode); 
//   float met_ex = MMC_sumet.GetCorrMEX();
//   float met_ey = MMC_sumet.GetCorrMEY();
//   MMC_sumet.Scan4dAnal(vec1, vec2, met_ex, met_ey, mode);
//     //validate: which method is best to get mass value? 
//   float mZTauTau_mmc = -1.;
//   mZTauTau_mmc = MMC_sumet.GetMZ_peak(); 
// //   cout << "mZTauTau_mmc= " << mZTauTau_mmc << endl;
//   return mZTauTau_mmc;
  return 111.;

}
/*--------------------------------------------------------------------------------*/
// float TSelector_SusyNtuple::calcMZTauTau_MissMassCalc(TLorentzVector lep1, TLorentzVector lep2, int tau0_decay_type, int tau1_decay_type){
// 
// //IMPLEMETATION OF MISSINGMASSCALCULATION FOR LEP-LEP, LEP-HAD AND HAD-HAD  
// 
// //validate: what does this mean:
// // MMC->SetAlgorithmVersion(2); //Another version of the code already exists which is 2 times faster and gives slightly worse resolution
// // SetNiterFit1(int val) { Niter_fit1=val; } // number of iterations per loop in dPhi loop
// // SetNiterFit2(int val) { Niter_fit2=val; } // number of iterations per loop in MET loop
// // SetNiterFit3(int val) { Niter_fit3=val; } // number of iterations per loop in Mnu loop, only in lep-­‐lep and lep-­‐had channels
// // SetMaxDRtau(
// // SetNsigmaMETscan
// //   MissingMassCalculator::OutputInfoStuff ois;
// //   missMassCalc.PrintResults(ois);
//   TVector2 met_vector2;
//   met_vector2.Set(m_met->lv().Px(), m_met->lv().Py());
//   missMassCalc.SetMetVec(met_vector2); 
// //excplicitly set mass to electron, muon, 1- or 3prong mass!
//   TLorentzVector vec1, vec2;
//   vec1.SetPtEtaPhiM(lep1.Pt(), lep1.Eta(), lep1.Phi(), (tau0_decay_type==0) ? 0.000510999 : 0.1056583715);
//   vec2.SetPtEtaPhiM(lep2.Pt(), lep2.Eta(), lep2.Phi(), (tau1_decay_type==0) ? 0.000510999 : 0.1056583715);
//   missMassCalc.SetVisTauVec(0, vec1); // passing TLorentzVec for visible tau-0 (first visible tau in the event) 
//   missMassCalc.SetVisTauVec(1, vec2); // passing TLorentzVec for visible tau-1 (second visible tau in the event)
//  
// //  cout << "tau0_decay_type= " << tau0_decay_type << " vec1.Pt()= " << vec1.Pt() << " vec1.M()= " << vec1.M() << endl;
// //  cout << "tau1_decay_type= " << tau1_decay_type << " vec2.Pt()= " << vec2.Pt() << " vec2.M()= " << vec2.M() << endl;
// 
//   // 0=electron, 1=muon, 10=1-prong, 30=3-prongs.
//   missMassCalc.SetVisTauType(0,tau0_decay_type); // passing decay type of tau-0 
//   missMassCalc.SetVisTauType(1,tau1_decay_type); // passing decay type of tau-1
// //   
// // // IN CASE THERE ARE JETS IN THE EVENT:  
// // //   In case you run in reco level, for hadronic tau visible mass
// // // If 1prong0.8 GeV
// // // If 3prong1.2 GeV
// //get vector of event jets and calculate sumEt of jets
// // //   float jet_SumEt = 0.;
// // //   std::vector<TLorentzVector> jetvec;
// // //   TLorentzVector jetP4(0. , 0. , 0. , 0.);
// // //   for(int i=0; i<JetList.size(); i++){
// // //   jetP4.SetPtEtaPhiM( jet(i).Pt(), jet(i).Eta(), jet(i).Phi(), jet(i).M() );
// // //   jet_SumEt += jetP4.Et();
// // //   jetvec.push_back(jetP4);
// // //   }
// //   // if(nJet>0) MMC->SetMetScanParamsJets(jetvec); // vector of jets
// // // data_type an int , should be 1 for MC, 0 for data
// // // //   MMC->SetNjet25(Njet25);                // For Lep-Had analysis only
// // 
//  
//   float sum_et = 0.;
//   sum_et += m_met->refEle_sumet;
//   sum_et += m_met->refMuo_sumet;
//   sum_et += m_met->refJet_sumet;
//   sum_et += m_met->refGamma_sumet;
//   sum_et += m_met->softTerm_sumet;
//   
// //   sum_et -= vec1.Et(); //Et of visible tau0
// //   sum_et -= vec2.Et(); //Et of visible tau1
//   
//   float jet_SumEt = 0.;
//   for(uint ij=0; ij<m_signalJets2Lep.size(); ++ij){
//     const Jet* j = m_signalJets2Lep.at(ij);
//     if(isCentralLightJet(j)){
// //       cout << "add j->Pt()= " << j->Pt() << endl;
//       jet_SumEt += j->Pt();
//     }
//   }
//       
// 
//   missMassCalc.SetSumEt(1.92 + 0.65 * sqrt(sum_et));
//   missMassCalc.SetMetScanParamsUE(sum_et, 0., nt.evt()->isMC); //last argument: should be 1 for MC, 0 for data
// 
//   //run
//   int misMassTest=missMassCalc.RunMissingMassCalculator(); // run MMC
//   int output_fitstatus=missMassCalc.GetFitStatus(); // MMC output: 1=found solution; 0= no solution
//   float MMC_mass = -1;
//   if(output_fitstatus==1){
//     MMC_mass = missMassCalc.GetFittedMass(1); // mass estimated from the histogram method (MPV) of all grid points
//     //validate: what is the difference:
// //     cout << "missMassCalc.GetResonanceVec(1).M() = " << missMassCalc.GetResonanceVec(1).M() << endl;
//   }
//   
// 
// 
//   //std::cout << "Print before running calculator" << std::endl;
//   //MMC.PrintResults(ois);
// //   missMassCalc.PrintResults(ois);
//   
// //   MMC.GetFitSignificance(1) // This is -log10(N_peak/N_entries) where N_peak is number of entries at m.p.v. bin and N_entries is total number of entries. It may help to reject background
// // MMC.GetRms2Mpv() // This rms/mpv for histogram method. It may help to reject background
//   return MMC_mass;
// // return 111.;
// }
/*--------------------------------------------------------------------------------*/
float TSelector_SusyNtuple::calcSumMv1(const JetVector &signalJets){
  
  //with or without leptons?
  
  float sumMv1 = 0.;
  for(uint j=0; j<signalJets.size(); ++j){
	  Jet* jet = signalJets.at(j);
// 	  cout << j << " jet->mv1 = " << jet->mv1 << endl;
	  sumMv1 += jet->mv1;
  }
//   cout << "sumMv1= " << sumMv1 << endl;
  return sumMv1;
}
/*--------------------------------------------------------------------------------*/
float TSelector_SusyNtuple::recalcMetRel(TLorentzVector metLV, TLorentzVector l1, TLorentzVector l2, const JetVector& jets, bool useForward)
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
float TSelector_SusyNtuple::calcMT2(TLorentzVector metlv, TLorentzVector l0, TLorentzVector l1)
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
float TSelector_SusyNtuple::mTWW(TLorentzVector _ll, TLorentzVector _nu, bool MvvTrue) // Anyes: https://svnweb.cern.ch/trac/atlasinst/browser/Institutes/UCIrvine/ataffard/SusyWeakProdAna/trunk/Root/PhysicsTools.cxx#L197
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

float TSelector_SusyNtuple::mT(TLorentzVector _l, TLorentzVector _nu)
{
  float dphi = acos(cos(_l.Phi()-_nu.Phi()));
  return sqrt(2*_l.Pt()*_nu.Pt() * (1- cos(dphi)) ); 
}
/*--------------------------------------------------------------------------------*/
void TSelector_SusyNtuple::fill_histos_EE(int cutnumber, float weight){
  h_N_events_EE->Fill(cutnumber, weight);
}
/*--------------------------------------------------------------------------------*/
void TSelector_SusyNtuple::fill_histos_MM(int cutnumber, float weight){
  h_N_events_MM->Fill(cutnumber, weight);
}
/*--------------------------------------------------------------------------------*/
void TSelector_SusyNtuple::fill_histos_EM(int cutnumber, float weight){
  h_N_events_EM->Fill(cutnumber, weight);
}
/*--------------------------------------------------------------------------------*/
// The Terminate() function is the last function to be called
/*--------------------------------------------------------------------------------*/
void TSelector_SusyNtuple::SlaveTerminate()
{
//   SusyNtAna::Terminate();
  if(m_dbg) cout << "TSelector_SusyNtuple::Terminate" << endl;

  if(m_writeOut) {
    out.close();
  }
    

  if(!m_kIsData && !runWithPoD){
 
  
    TString outputfile="";
//     if(sample_identifier == 176574)outputfile="histos_ZN_tauveto_signal.root";
//     if(sample_identifier == 176586)outputfile="histos_ZN_tauveto_signal_176586.root";
//     if(sample_identifier == 176626)outputfile="histos_ZN_tauveto_signal_176626.root";
//     if(sample_identifier == 176623)outputfile="histos_ZN_tauveto_signal_176623.root";
//     if(sample_identifier == 126988)outputfile="histos_ZN_tauveto_WW.root";
//     if(sample_identifier == 108346)outputfile="histos_ZN_tauveto_ttbarWtop.root";
//     if(sample_identifier == 110805)outputfile="histos_ZN_tauveto_ZPlusJets.root";
//     if(sample_identifier == 157814)outputfile="histos_ZN_tauveto_ZV.root";
//     if(sample_identifier == 105200)outputfile="histo_cutflow.root";
    outputfile = "histo_test.root";
/*    if(sample_identifier == 110813)outputfile="histos_cutflow_110813.root";
    if(sample_identifier == 110814)outputfile="histos_cutflow_110814.root";
    if(sample_identifier == 110815)outputfile="histos_cutflow_110815.root";
    if(sample_identifier == 110816)outputfile="histos_cutflow_110816.root"*/;
    
//     if(sample_identifier>=176574 && sample_identifier <= 176640){
//     char buffer[10];
//     ostrstream Str(buffer, 10);
//     Str << sample_identifier << ends;
//     string ZahlAlsString(Str.str());
//     string str;
//     string str1 = "histos_ZN_tauveto_signal_";
//     str.append(str1); 
//     str.append(ZahlAlsString); 
//     string str2 = ".root";
//     str.append(str2);
//     outputfile = str;
//     }
    cout << " " << endl;
    cout << "ouputfile: " << outputfile << endl;
    cout << " " << endl;
   TFile* output_file = new TFile(outputfile, "recreate") ;//update or recreate?

   output_file->cd();
	  
   writeHistos();  

   output_file->Write() ;
   output_file->Close();
    

    
    
  }  
  
  if(m_kIsData || runWithPoD) addHistos();
  
  }


void TSelector_SusyNtuple::Terminate()
{
}
