#include <iomanip>
#include "TCanvas.h"
#include <strstream>
#include <string>
#include <iostream>

#include "TSelector_SusyNtuple_Zll.hpp"
#include "histos_Zll.C"

using namespace std;
using namespace Susy;

/*--------------------------------------------------------------------------------*/
// TSelector_SusyNtuple_Zll Constructor
/*--------------------------------------------------------------------------------*/
TSelector_SusyNtuple_Zll::TSelector_SusyNtuple_Zll() :
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
void TSelector_SusyNtuple_Zll::Begin(TTree * /*tree*/)
{

   TString option = GetOption();

}

void TSelector_SusyNtuple_Zll::SlaveBegin(TTree * /*tree*/)
{
 
  bool isAtlfast = false;
  m_susyObj.initialize(nt.evt()->isMC);

  setAnaType(Ana_2Lep);
  
  SusyNtAna::Begin(0);  

  m_trigObj = new DilTrigLogic("Moriond", false/*No Reweight Utils!*/); 
  
  cout << "initialize chargeFlip tool" << endl;
  m_chargeFlip.initialize("/data/etp/jwittkowski/analysis_SUSYTools_03_04/ChargeFlip/data/chargeFlip.root");
  
  
    
//   m_matrix = new SusyMatrixMethod::DiLeptonMatrixMethod();
//   m_matrix->configure("/data/etp/jwittkowski/analysis_SUSYTools_03_04/SusyMatrixMethod/data/pass6_Apr2_2013.root", SusyMatrixMethod::PT); 
//   missMassCalc.SetCalibrationSet(MMCCalibrationSet::MMC2012);
  
  
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
//   rejectTaus = false;
//   cout << "rejectTaus = " << rejectTaus << endl;
  
  setSelectTaus(true);
  
  //choose: run on data to calculate fake bg?
  calcFakeContribution = false;
  //########################################
  //########################################
  
  //define all histos in seperate file histos_ZN_tauveto.C:
  defineHistos();  
  
}



Bool_t TSelector_SusyNtuple_Zll::Process(Long64_t entry)
{
  
  GetEntry(entry);
  clearObjects();

  
  m_chainEntry++;
  unsigned int mcid;
  if(nt.evt()->isMC) mcid = nt.evt()->mcChannel;
  else mcid = 111111;
  if(m_chainEntry==0){
    sample_identifier = mcid;
    mcid_of_first_entry = mcid;
    cout << "entry 0, mcid_of_first_entry= " << mcid_of_first_entry << endl;
    m_kIsData = !nt.evt()->isMC;
    if(m_kIsData){
      cout << " DATA DATA DATA DATA DATA DATA" << endl;
      calcFakeContribution = true;
    }
    else cout << "MC MC MC MC MC MC MC MC" << endl;
    cout << "sample_identifier= " << sample_identifier << endl;
    
  }
  
  
    
  if(m_dbg || m_chainEntry%50000==0)
  {
    
    float recalc_sumw = 0.;
    map<unsigned int, float>::const_iterator sumwMapIter = m_sumwMap.find(mcid);
    if(sumwMapIter != m_sumwMap.end()) recalc_sumw = sumwMapIter->second;
	
    cout << "**** Processing entry " << setw(6) << m_chainEntry << " run " << setw(6) << nt.evt()->run << " event " << setw(7) << nt.evt()->event << "mcid= " << mcid << " recalc_sumw= " << recalc_sumw << " mcid= " << nt.evt()->mcChannel << " xsec= " << nt.evt()->xsec << "  ****" << endl;
  }
  
  bool fillNewSumwHisto = false;
  if((fillNewSumwHisto || runWithPoD) && !m_kIsData && (m_chainEntry==0 || (mcid_of_first_entry != mcid))){
      float recalc_sumw = 0.;
      map<unsigned int, float>::const_iterator sumwMapIter = m_sumwMap.find(mcid);
      if(sumwMapIter != m_sumwMap.end()) recalc_sumw = sumwMapIter->second;
//       if(fillNewSumwHisto) h_storeSumwMcid->Fill(mcid, recalc_sumw);
      mcid_of_first_entry = mcid;
      if(fillNewSumwHisto)cout << "recalc_sumw= " << recalc_sumw << endl;
      
      TFile *pFileIn_sumw = new TFile("/data/etp/jwittkowski/analysis_SUSYTools_03_04/sumw_file_n0145.root");
      TH1F *h_storeSumwMcid_out = (TH1F*)pFileIn_sumw->Get("h_storeSumwMcid_merged");
      sumw_from_histo = h_storeSumwMcid_out->GetBinContent(mcid+1);
      cout << "sumw_from_histo= " << sumw_from_histo << endl;
      pFileIn_sumw->Close();
    }
   
// select signal objects
 // select signal objects
  selectObjects(NtSys_NOM, false, TauID_medium);

  int flag = nt.evt()->cutFlags[NtSys_NOM];
  //   charge flip background contribution in SS channels: for the e^pm e^pm and e^pm mu^pm channels, processes that are opposite-sign in truth but where one electron has undergone a “charge flip”. Contributions from WW, ttbar, Z/gamma* and single top are via charge-flip
  // In previous analysis, it has been observed that the charge flip rate in data is lower than that in the simulation by about 20%. Because of this disagreement, the electron charge flip rate is measured in data as a function of |eta| and combined with the smaller dependence on pT taken from simulation.

  cutflow_EE->Fill(0.,1.0); cutflow_MM->Fill(0.,1.0); cutflow_EM->Fill(0.,1.0); cutflow_ME->Fill(0.,1.0); cutflow_EE_MCWeight->Fill(0.,nt.evt()->w); cutflow_MM_MCWeight->Fill(0.,nt.evt()->w); cutflow_EM_MCWeight->Fill(0.,nt.evt()->w); cutflow_ME_MCWeight->Fill(0.,nt.evt()->w); // all events in the sample

    if( !(flag & ECut_GRL) ) return false; 
  cutflow_EE->Fill(1.,1.0); cutflow_MM->Fill(1.,1.0); cutflow_EM->Fill(1.,1.0); cutflow_ME->Fill(1.,1.0);
  cutflow_EE_MCWeight->Fill(1.,nt.evt()->w); cutflow_MM_MCWeight->Fill(1.,nt.evt()->w); cutflow_EM_MCWeight->Fill(1.,nt.evt()->w); cutflow_ME_MCWeight->Fill(1.,nt.evt()->w); //grl Cut

  if( !(ECut_TileTrip & flag) ) return false; 
  cutflow_EE->Fill(2.,1.0); cutflow_MM->Fill(2.,1.0); cutflow_EM->Fill(2.,1.0); cutflow_ME->Fill(2.,1.0);
  cutflow_EE_MCWeight->Fill(2.,nt.evt()->w); cutflow_MM_MCWeight->Fill(2.,nt.evt()->w); cutflow_EM_MCWeight->Fill(2.,nt.evt()->w); cutflow_ME_MCWeight->Fill(2.,nt.evt()->w); //TileTripReader

  if ( !(flag & ECut_TTC)) return false;
  cutflow_EE->Fill(3.,1.0); cutflow_MM->Fill(3.,1.0); cutflow_EM->Fill(3.,1.0); cutflow_ME->Fill(3.,1.0);
  cutflow_EE_MCWeight->Fill(3.,nt.evt()->w); cutflow_MM_MCWeight->Fill(3.,nt.evt()->w); cutflow_EM_MCWeight->Fill(3.,nt.evt()->w); cutflow_ME_MCWeight->Fill(3.,nt.evt()->w);//IncompleteEvents Veto

  if(!(ECut_LarErr & flag) || !(ECut_TileErr & flag)) return false;
  cutflow_EE->Fill(4.,1.0); cutflow_MM->Fill(4.,1.0); cutflow_EM->Fill(4.,1.0); cutflow_ME->Fill(4.,1.0);
  cutflow_EE_MCWeight->Fill(4.,nt.evt()->w); cutflow_MM_MCWeight->Fill(4.,nt.evt()->w); cutflow_EM_MCWeight->Fill(4.,nt.evt()->w); cutflow_ME_MCWeight->Fill(4.,nt.evt()->w);//LAr/TileError

  if( !(flag & ECut_HotSpot)) return false; //remove event where a jet points into hot TileCal module 
  cutflow_EE->Fill(5.,1.0); cutflow_MM->Fill(5.,1.0); cutflow_EM->Fill(5.,1.0); cutflow_ME->Fill(5.,1.0);
  cutflow_EE_MCWeight->Fill(5.,nt.evt()->w); cutflow_MM_MCWeight->Fill(5.,nt.evt()->w); cutflow_EM_MCWeight->Fill(5.,nt.evt()->w); cutflow_ME_MCWeight->Fill(5.,nt.evt()->w);//TileCalHotSpot

  // remove event with VeryLooseBad jets with pT>20 GeV. No eta cut. Only consider jets which are not overlapping with electrons or taus:  
  JetVector jets_for_OR = getPreJets(&nt, NtSys_NOM);

  //   JetVector jetsForCaloJetCut = getJetsForCaloJetCut(jets_for_OR, NtSys_NOM); //pT> 40 GeV?
  //   cout << "jets_for_OR.size() BEFORE " << jets_for_OR.size();
  //   e_j_overlap(m_baseElectrons, jets_for_OR, J_E_DR, true);
  //   t_j_overlap(m_signalTaus, jets_for_OR, J_T_DR, true);
  //     cout << " AFTER " << jets_for_OR.size() << endl;


    
  if( hasBadJet(m_baseJets) ) return false; //remove event if baseline jet (pT > 20 GeV, |eta| < 4.5) AFTER OR with electrons, taus is flagged as VeryLooseBad.



  cutflow_EE->Fill(6.,1.0); cutflow_MM->Fill(6.,1.0); cutflow_EM->Fill(6.,1.0); cutflow_ME->Fill(6.,1.0);
  cutflow_EE_MCWeight->Fill(6.,nt.evt()->w); cutflow_MM_MCWeight->Fill(6.,nt.evt()->w); cutflow_EM_MCWeight->Fill(6.,nt.evt()->w); cutflow_ME_MCWeight->Fill(6.,nt.evt()->w);//BadJets
    
  //on top of smart veto, veto event with >=1 jets before electron-jet overlap removal with pT>40 GeV, BCH_CORR_JET > 0.05, DeltaPhi(met,jet)<0.3 (Anyes)  
  JetVector prejets = getPreJets(&nt, NtSys_NOM);
  if(!passDeadRegions(prejets, m_met, nt.evt()->run, nt.evt()->isMC)/* || !(flag & ECut_SmartVeto)*/) return false; //   SusyNtTools: passDeadRegions(...)
  cutflow_EE->Fill(7.,1.0); cutflow_MM->Fill(7.,1.0); cutflow_EM->Fill(7.,1.0); cutflow_ME->Fill(7.,1.0);
  cutflow_EE_MCWeight->Fill(7.,nt.evt()->w); cutflow_MM_MCWeight->Fill(7.,nt.evt()->w); cutflow_EM_MCWeight->Fill(7.,nt.evt()->w); cutflow_ME_MCWeight->Fill(7.,nt.evt()->w); //CaloJets

  if( !(flag & ECut_GoodVtx)) return false;
  cutflow_EE->Fill(8.,1.0); cutflow_MM->Fill(8.,1.0); cutflow_EM->Fill(8.,1.0); cutflow_ME->Fill(8.,1.0);
  cutflow_EE_MCWeight->Fill(8.,nt.evt()->w); cutflow_MM_MCWeight->Fill(8.,nt.evt()->w); cutflow_EM_MCWeight->Fill(8.,nt.evt()->w); cutflow_ME_MCWeight->Fill(8.,nt.evt()->w);//PrimaryVertex

  if( !(flag & ECut_BadMuon)) return false;
  cutflow_EE->Fill(9.,1.0); cutflow_MM->Fill(9.,1.0); cutflow_EM->Fill(9.,1.0); cutflow_ME->Fill(9.,1.0);
  cutflow_EE_MCWeight->Fill(9.,nt.evt()->w); cutflow_MM_MCWeight->Fill(9.,nt.evt()->w); cutflow_EM_MCWeight->Fill(9.,nt.evt()->w); cutflow_ME_MCWeight->Fill(9.,nt.evt()->w);//BadMuons

  MuonVector preMuons = getPreMuons(&nt, NtSys_NOM);
  if(hasCosmicMuon(m_baseMuons)) return false; // !(flag & ECut_Cosmic)  - no longer guarantee the event flags that are stored :-(
  preMuons.clear();
  cutflow_EE->Fill(10.,1.0); cutflow_MM->Fill(10.,1.0); cutflow_EM->Fill(10.,1.0); cutflow_ME->Fill(10.,1.0);
  cutflow_EE_MCWeight->Fill(10.,nt.evt()->w); cutflow_MM_MCWeight->Fill(10.,nt.evt()->w); cutflow_EM_MCWeight->Fill(10.,nt.evt()->w); cutflow_ME_MCWeight->Fill(10.,nt.evt()->w);//Cosmic Muons


  // Sherpa WW fix, remove radiative b-quark processes that overlap with single top: already done upstream in SusyCommon SusyNtMaker

  if(nt.evt()->hfor == 4) return false; //remove events where same heavy flavor final states arise in multiple samples when combining ALPGEN samples
  cutflow_EE->Fill(11.,1.0); cutflow_MM->Fill(11.,1.0); cutflow_EM->Fill(11.,1.0); cutflow_ME->Fill(11.,1.0);
  cutflow_EE_MCWeight->Fill(11.,nt.evt()->w); cutflow_MM_MCWeight->Fill(11.,nt.evt()->w); cutflow_EM_MCWeight->Fill(11.,nt.evt()->w); cutflow_ME_MCWeight->Fill(11.,nt.evt()->w);//hfor veto

  if(m_baseLeptons.size() < 2) return false;
  cutflow_EE->Fill(12.,1.0); cutflow_MM->Fill(12.,1.0); cutflow_EM->Fill(12.,1.0); cutflow_ME->Fill(12.,1.0);
  cutflow_EE_MCWeight->Fill(12.,nt.evt()->w); cutflow_MM_MCWeight->Fill(12.,nt.evt()->w); cutflow_EM_MCWeight->Fill(12.,nt.evt()->w); cutflow_ME_MCWeight->Fill(12.,nt.evt()->w);//at least 2 leptons

  if( !(m_baseLeptons.size()==2) ) return false;
  cutflow_EE->Fill(13.,1.0); cutflow_MM->Fill(13.,1.0); cutflow_EM->Fill(13.,1.0); cutflow_ME->Fill(13.,1.0);
  cutflow_EE_MCWeight->Fill(13.,nt.evt()->w); cutflow_MM_MCWeight->Fill(13.,nt.evt()->w); cutflow_EM_MCWeight->Fill(13.,nt.evt()->w); cutflow_ME_MCWeight->Fill(13.,nt.evt()->w);//exactly 2 leptons


  if(!(m_baseElectrons.size()==2 || m_baseMuons.size()==2 || (m_baseElectrons.size()+m_baseMuons.size())==2)) return false; //only count leptons where no Mll < 20 GeV. Mll < 12 GeV veto ALREADY DONE FOR SELECTING BASELINE LEPTONS in performOverlapRemoval()


  // discard any SFOS baseline lepton pair with M_ll < 12 GeV unnecessary: already done when skimming/slimming ntuples
  // Any lepton pairs are required to have an invariant mass, m``, above 20 GeV such that to remove low-mass dilepton resonances3
  if(m_baseLeptons.size() == 2){
    if( Mll(m_baseLeptons[0], m_baseLeptons[1]) < 20 )
      return false;
  }

  cutflow_EE->Fill(14.,1.0); cutflow_MM->Fill(14.,1.0); cutflow_EM->Fill(14.,1.0); cutflow_ME->Fill(14.,1.0);
  cutflow_EE_MCWeight->Fill(14.,nt.evt()->w); cutflow_MM_MCWeight->Fill(14.,nt.evt()->w); cutflow_EM_MCWeight->Fill(14.,nt.evt()->w); cutflow_ME_MCWeight->Fill(14.,nt.evt()->w);//Mll

  if( !(m_signalLeptons.size()==2) ) return false;
  cutflow_EE->Fill(15.,1.0); cutflow_MM->Fill(15.,1.0); cutflow_EM->Fill(15.,1.0); cutflow_ME->Fill(15.,1.0);
  cutflow_EE_MCWeight->Fill(15.,nt.evt()->w); cutflow_MM_MCWeight->Fill(15.,nt.evt()->w); cutflow_EM_MCWeight->Fill(15.,nt.evt()->w); cutflow_ME_MCWeight->Fill(15.,nt.evt()->w);//signal leptons
  
  bool useForwardJets = true;
  float METrel = getMetRel(m_met, m_signalLeptons, m_signalJets2Lep, useForwardJets);  
//   float MET = m_met->lv().Et();
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
  Jet* jet1;
  Jet* jet2;
  TLorentzVector signalJet1_TLV, signalJet2_TLV;
  
  if(numberOfCLJets(m_signalJets2Lep) >=1){
    jet1 = m_signalJets2Lep.at(0);
    DeltaPhiMETj1 = fabs(signalJet1_TLV.DeltaPhi(m_met->lv()));
    signalJet1_TLV.SetPtEtaPhiE(jet1->pt, jet1->eta, jet1->phi, jet1->pt*cosh(jet1->eta));
    if(numberOfCLJets(m_signalJets2Lep) >=2){	
      jet2 = m_signalJets2Lep.at(1);
      signalJet2_TLV.SetPtEtaPhiE(jet2->pt, jet2->eta, jet2->phi, jet2->pt*cosh(jet2->eta));
      mjj = (signalJet1_TLV + signalJet2_TLV).M();
      DeltaPhiJJ = fabs(signalJet1_TLV.DeltaPhi(signalJet2_TLV));
      ptjj = (signalJet1_TLV + signalJet2_TLV).Pt();
    
      DeltaPhiMETj2 = fabs(signalJet2_TLV.DeltaPhi(m_met->lv()));
      DeltaRJJ = fabs(signalJet1_TLV.DeltaR(signalJet2_TLV));
      DeltaEtaJJ = fabs(signalJet1_TLV.Eta() - signalJet2_TLV.Eta());
      DeltaYJJ = fabs(signalJet1_TLV.Rapidity() - signalJet2_TLV.Rapidity());
      
      DeltaPhiMETjj = fabs((signalJet1_TLV+ signalJet2_TLV).DeltaPhi(m_met->lv()));
    }
  }

  if( !(m_signalLeptons.size()==2) ) return kFALSE;


  
  float w_lPX = 1.;
  if(runWithPoD) w_lPX = nt.evt()->w * nt.evt()->wPileup * nt.evt()->xsec * LUMI_A_L / sumw_from_histo;
  else w_lPX = (nt.evt()->isMC) ? getEventWeight(LUMI_A_L, true) : 1; //consider pileup, xsec, lumi (as argument), MC eventWeight. second argument: recalc recalc sumw BEFORE Proces()

  float w_lPX_EE = w_lPX;
  float w_lPX_MM = w_lPX;
  float w_lPX_EM = w_lPX;
  
  
  ////////////////////////////        EE           ////////////////////////////////////////////////////////////////////////////
  Electron* el1;
  Electron* el2;
  LeptonVector leptons;
  ElectronVector electrons;
  //calculate normal contribution with signal leptons:
  if(m_baseElectrons.size()==2 && m_signalElectrons.size()==2 ){
    el1 = (m_signalElectrons.at(0)->pt > m_signalElectrons.at(1)->pt) ? m_signalElectrons.at(0) : m_signalElectrons.at(1);
    el2 = (m_signalElectrons.at(0)->pt > m_signalElectrons.at(1)->pt) ? m_signalElectrons.at(1) : m_signalElectrons.at(0);
    leptons = m_signalLeptons;
    electrons = m_signalElectrons;
    
     if(m_trigObj->passDilEvtTrig(leptons, 0., nt.evt())){ //valid pT region
      float trigW_EE = m_trigObj->getTriggerWeight(leptons, nt.evt()->isMC, 0., 0, nt.evt()->nVtx, NtSys_NOM);
      if(m_signalTaus.size() == 0){
	if(nt.evt()->isMC || (!nt.evt()->isMC && m_trigObj->passDilTrigMatch(leptons, 0., nt.evt()))){  //match to trigger (in MC not needed bc weighted)
	  if(!nt.evt()->isMC || CheckRealLeptons(electrons, m_signalMuons)){
	    if(fabs(Mll(m_signalLeptons[0], m_signalLeptons[1])-MZ ) < 10.){
	      float lep_SF_EE = 1.0;
		if(nt.evt()->isMC) lep_SF_EE = el1->effSF * el2->effSF;
		float weight_ALL_EE = 1.;
		if(nt.evt()->isMC) weight_ALL_EE = w_lPX_EE * lep_SF_EE * trigW_EE;
		
		float sum_et = 0.;
		sum_et += m_met->refEle_sumet;
		sum_et += m_met->refGamma_sumet;
		//taus?
		sum_et += m_met->refJet_sumet;
		sum_et += m_met->softTerm_sumet;
		sum_et += m_met->refMuo_sumet;
		
	      if(el1->q * el2->q < 0){
		if(numberOfCLJets(m_signalJets2Lep)==0){

		  h_metxy_sumet_0j_EE->Fill(sum_et, m_met->lv().Px(), weight_ALL_EE);
		  h_metxy_sumet_0j_EE->Fill(sum_et, m_met->lv().Py(), weight_ALL_EE);
		  h_metx_sumet_0j_EE->Fill(sum_et, m_met->lv().Px(), weight_ALL_EE);
		  h_mety_sumet_0j_EE->Fill(sum_et, m_met->lv().Py(), weight_ALL_EE);
		  h_ptel0_0j->Fill(el1->pt, weight_ALL_EE);
		  h_ptel1_0j->Fill(el2->pt, weight_ALL_EE);
		  h_mee_0j->Fill(Mll(m_signalLeptons[0], m_signalLeptons[1]), weight_ALL_EE);
		}
		
		if(numberOfCLJets(m_signalJets2Lep)==1){
		  h_metxy_sumet_1j_EE->Fill(sum_et, m_met->lv().Px(), weight_ALL_EE);
		  h_metxy_sumet_1j_EE->Fill(sum_et, m_met->lv().Py(), weight_ALL_EE);
		  h_metx_sumet_1j_EE->Fill(sum_et, m_met->lv().Px(), weight_ALL_EE);
		  h_mety_sumet_1j_EE->Fill(sum_et, m_met->lv().Py(), weight_ALL_EE);
		  h_ptel0_1j->Fill(el1->pt, weight_ALL_EE);
		  h_ptel1_1j->Fill(el2->pt, weight_ALL_EE);
		  h_mee_1j->Fill(Mll(m_signalLeptons[0], m_signalLeptons[1]), weight_ALL_EE);
		}
		
		if(numberOfCLJets(m_signalJets2Lep)==2){
		  h_metxy_sumet_2j_EE->Fill(sum_et, m_met->lv().Px(), weight_ALL_EE);
		  h_metxy_sumet_2j_EE->Fill(sum_et, m_met->lv().Py(), weight_ALL_EE);
		  h_metx_sumet_2j_EE->Fill(sum_et, m_met->lv().Px(), weight_ALL_EE);
		  h_mety_sumet_2j_EE->Fill(sum_et, m_met->lv().Py(), weight_ALL_EE);
		  h_ptel0_2j->Fill(el1->pt, weight_ALL_EE);
		  h_ptel1_2j->Fill(el2->pt, weight_ALL_EE);
		  h_mee_2j->Fill(Mll(m_signalLeptons[0], m_signalLeptons[1]), weight_ALL_EE);
		}
		
		if(numberOfCLJets(m_signalJets2Lep)>2){
		  h_metxy_sumet_3j_EE->Fill(sum_et, m_met->lv().Px(), weight_ALL_EE);
		  h_metxy_sumet_3j_EE->Fill(sum_et, m_met->lv().Py(), weight_ALL_EE);
		  h_metx_sumet_3j_EE->Fill(sum_et, m_met->lv().Px(), weight_ALL_EE);
		  h_mety_sumet_3j_EE->Fill(sum_et, m_met->lv().Py(), weight_ALL_EE);
		  h_ptel0_3j->Fill(el1->pt, weight_ALL_EE);
		  h_ptel1_3j->Fill(el2->pt, weight_ALL_EE);
		  h_mee_3j->Fill(Mll(m_signalLeptons[0], m_signalLeptons[1]), weight_ALL_EE);
		}
	      }
	    }
	  }
	}
      }
     }
  }
  

  
  
  ////////////////////////////        MM           ////////////////////////////////////////////////////////////////////////////
  
  Muon* mu1;
  Muon* mu2;
  MuonVector muons;
  //calculate normal contribution with signal leptons:

  if(m_baseMuons.size()==2 && m_signalMuons.size()==2 ){
    mu1 = (m_signalMuons.at(0)->pt > m_signalMuons.at(1)->pt) ? m_signalMuons.at(0) : m_signalMuons.at(1);
    mu2 = (m_signalMuons.at(0)->pt > m_signalMuons.at(1)->pt) ? m_signalMuons.at(1) : m_signalMuons.at(0);
    leptons = m_signalLeptons;
    muons = m_signalMuons;
    TLorentzVector mu1_TLV, mu2_TLV;
    mu1_TLV.SetPtEtaPhiE(mu1->pt, mu1->eta ,mu1->phi, mu1->pt*cosh(mu1->eta));
    mu2_TLV.SetPtEtaPhiE(mu2->pt, mu2->eta ,mu2->phi, mu2->pt*cosh(mu2->eta));

    if(m_trigObj->passDilEvtTrig(leptons, 0., nt.evt())){ //valid pT region
      if(m_signalTaus.size() == 0){
	float trigW_MM = m_trigObj->getTriggerWeight(leptons, nt.evt()->isMC, 0., 0, nt.evt()->nVtx, NtSys_NOM);

	if(nt.evt()->isMC || (!nt.evt()->isMC && m_trigObj->passDilTrigMatch(leptons, 0., nt.evt()))){ //match to trigger

	  if(!nt.evt()->isMC || CheckRealLeptons(m_signalElectrons, muons)){
	    if(fabs(Mll(m_signalLeptons[0], m_signalLeptons[1])-MZ ) < 10.){
	      if(mu1->q * mu2->q < 0){
		float lep_SF_MM = 1.0;
		if(nt.evt()->isMC) lep_SF_MM = mu1->effSF * mu2->effSF;
		float weight_ALL_MM = 1.;
		if(nt.evt()->isMC) weight_ALL_MM = w_lPX_MM * lep_SF_MM * trigW_MM * getBTagWeight(nt.evt());
		
		float sum_et = 0.;
		sum_et += m_met->refEle_sumet;
		sum_et += m_met->refMuo_sumet;
		sum_et += m_met->refJet_sumet;
		sum_et += m_met->refGamma_sumet;
		sum_et += m_met->softTerm_sumet;
		float metx = m_met->lv().Px()/* - mu1_TLV.Px() - mu2_TLV.Px()*/;
		float mety = m_met->lv().Py()/* - mu1_TLV.Py() - mu2_TLV.Py()*/;
		if(numberOfCLJets(m_signalJets2Lep)==0){
		  h_metxy_sumet_0j_MM->Fill(sum_et, metx, weight_ALL_MM);
		  h_metxy_sumet_0j_MM->Fill(sum_et, mety, weight_ALL_MM);
		  h_metx_sumet_0j_MM->Fill(sum_et, metx, weight_ALL_MM);
		  h_mety_sumet_0j_MM->Fill(sum_et, mety, weight_ALL_MM);
		  h_ptmu0_0j->Fill(mu1->pt, weight_ALL_MM);
		  h_ptmu1_0j->Fill(mu2->pt, weight_ALL_MM);
		  h_mmm_0j->Fill(Mll(m_signalLeptons[0], m_signalLeptons[1]), weight_ALL_MM);
		}
		
		if(numberOfCLJets(m_signalJets2Lep)==1){
		  h_metxy_sumet_1j_MM->Fill(sum_et, metx, weight_ALL_MM);
		  h_metxy_sumet_1j_MM->Fill(sum_et, mety, weight_ALL_MM);
		  h_metx_sumet_1j_MM->Fill(sum_et, metx, weight_ALL_MM);
		  h_mety_sumet_1j_MM->Fill(sum_et, mety, weight_ALL_MM);
		  h_ptmu0_1j->Fill(mu1->pt, weight_ALL_MM);
		  h_ptmu1_1j->Fill(mu2->pt, weight_ALL_MM);
		  h_mmm_1j->Fill(Mll(m_signalLeptons[0], m_signalLeptons[1]), weight_ALL_MM);
		}
		
		if(numberOfCLJets(m_signalJets2Lep)==2){
		  h_metxy_sumet_2j_MM->Fill(sum_et, metx, weight_ALL_MM);
		  h_metxy_sumet_2j_MM->Fill(sum_et, mety, weight_ALL_MM);
		  h_metx_sumet_2j_MM->Fill(sum_et, metx, weight_ALL_MM);
		  h_mety_sumet_2j_MM->Fill(sum_et, mety, weight_ALL_MM);
		  h_ptmu0_2j->Fill(mu1->pt, weight_ALL_MM);
		  h_ptmu1_2j->Fill(mu2->pt, weight_ALL_MM);
		  h_mmm_2j->Fill(Mll(m_signalLeptons[0], m_signalLeptons[1]), weight_ALL_MM);
		}
		
		if(numberOfCLJets(m_signalJets2Lep)>2){
		  h_metxy_sumet_3j_MM->Fill(sum_et, metx, weight_ALL_MM);
		  h_metxy_sumet_3j_MM->Fill(sum_et, mety, weight_ALL_MM);
		  h_metx_sumet_3j_MM->Fill(sum_et, metx, weight_ALL_MM);
		  h_mety_sumet_3j_MM->Fill(sum_et, mety, weight_ALL_MM);
		  h_ptmu0_3j->Fill(mu1->pt, weight_ALL_MM);
		  h_ptmu1_3j->Fill(mu2->pt, weight_ALL_MM);
		  h_mmm_3j->Fill(Mll(m_signalLeptons[0], m_signalLeptons[1]), weight_ALL_MM);
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

bool TSelector_SusyNtuple_Zll::CheckRealLeptons(const ElectronVector& signal_electrons, MuonVector& signal_muons){

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
bool TSelector_SusyNtuple_Zll::CheckChargeFlipElectrons(const ElectronVector& signal_electrons){
  
  for(uint i=0; i<signal_electrons.size(); i++){
	  Electron* signal_electron = signal_electrons.at(i);
	  if(signal_electron->isChargeFlip) return false;
	  // check if signal electron has no charge flip
  }
  return true;
  
}
/*--------------------------------------------------------------------------------*/
float TSelector_SusyNtuple_Zll::getBTagWeight(const Event* evt)
{
JetVector tempJets;
  for(uint ij=0; ij<m_baseJets.size(); ++ij){
    Jet* jet = m_baseJets.at(ij);
    //if( !(jet->Pt() > 20 && fabs(jet->Eta()) < 2.4) ) continue;
    if( !(jet->Pt() > 20 && fabs(jet->detEta) < 2.4) ) continue;
    tempJets.push_back(jet);
  }
  //SusNtTools takes care when it is a Sherpa sample!
  return bTagSF(evt, tempJets, nt.evt()->mcChannel, BTag_NOM); 

}
/*--------------------------------------------------------------------------------*/
bool TSelector_SusyNtuple_Zll::isNoZBoson(const LeptonVector& leptons)
{
  
  if(fabs(Mll(leptons[0],leptons[1])-MZ ) < 10.) return false;
  else return true;
}


/*--------------------------------------------------------------------------------*/
JetVector TSelector_SusyNtuple_Zll::selectC20AndB20Jets(JetVector& m_baseJets){
  
  JetVector C20AndB20Jets;

  for(uint j=0; j<m_baseJets.size(); ++j){
	  Jet* jet = m_baseJets.at(j);
	  if(isCentralLightJet(jet) || isCentralBJet(jet)) C20AndB20Jets.push_back(jet);
  }
  return C20AndB20Jets;
}

/*--------------------------------------------------------------------------------*/
bool TSelector_SusyNtuple_Zll::checkLeptonPt(const LeptonVector& leptons)
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
float TSelector_SusyNtuple_Zll::calcMt(const TLorentzVector &lep, const TLorentzVector &met){
  return sqrt(2.0 * lep.Pt() * met.Et() *(1-cos(lep.DeltaPhi(met))) );
}

/*--------------------------------------------------------------------------------*/
// float TSelector_SusyNtuple_Zll::getFakeWeight(const LeptonVector &baseLeps, 
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
float TSelector_SusyNtuple_Zll::mTWW(TLorentzVector _ll, TLorentzVector _nu, bool MvvTrue) // Anyes: https://svnweb.cern.ch/trac/atlasinst/browser/Institutes/UCIrvine/ataffard/SusyWeakProdAna/trunk/Root/PhysicsTools.cxx#L197
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
float TSelector_SusyNtuple_Zll::calcHT(const LeptonVector &Leptons, const JetVector &signalJets){
  //Anyes: https://svnweb.cern.ch/trac/atlasinst/browser/Institutes/UCIrvine/ataffard/SusyWeakProdAna/trunk/Root/ToyNt.cxx#L404
  
  //with or without leptons?
  
  float Meff = m_met->lv().Et();
  for(uint j=0; j<signalJets.size(); ++j){
	  Jet* jet = signalJets.at(j);
	  Meff += jet->Pt();
  }
  for (uint i=0; i<Leptons.size(); ++i){
    Lepton* lepton = Leptons.at(i);
//     Meff += lepton->Pt();
  }
  
//   cout << "Meff= " << Meff << endl;
  
  return Meff;
  

}
/*--------------------------------------------------------------------------------*/
// float TSelector_SusyNtuple_Zll::calcSumMv1(const JetVector &signalJets){
//   
//   //with or without leptons?
//   
//   float sumMv1 = 0.;
//   for(uint j=0; j<signalJets.size(); ++j){
// 	  Jet* jet = signalJets.at(j);
// // 	  cout << j << " jet->mv1 = " << jet->mv1 << endl;
// 	  sumMv1 += jet->mv1;
//   }
// //   cout << "sumMv1= " << sumMv1 << endl;
//   return sumMv1;
// }
/*--------------------------------------------------------------------------------*/
// Debug event
/*--------------------------------------------------------------------------------*/
bool TSelector_SusyNtuple_Zll::debugEvent()
{
  uint run = nt.evt()->run;
  uint evt = nt.evt()->event;
  //if(run==191139 && evt==140644832) return true;
  if(run==180164&&evt==24769) return true;

  return false;
}
/*--------------------------------------------------------------------------------*/
// The Terminate() function is the last function to be called
/*--------------------------------------------------------------------------------*/
void TSelector_SusyNtuple_Zll::SlaveTerminate()
{
//   SusyNtAna::Terminate();
  if(m_dbg) cout << "TSelector_SusyNtuple_Zll::Terminate" << endl;

  if(m_writeOut) {
    out.close();
  }
    

  if(/*!m_kIsData && */!runWithPoD){
 
  
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
    outputfile = "histo_Zee_pureMETxy_10GeVZwindow_MC_variableBinning.root";
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


void TSelector_SusyNtuple_Zll::Terminate()
{
}
