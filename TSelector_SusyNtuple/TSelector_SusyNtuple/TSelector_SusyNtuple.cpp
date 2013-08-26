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
 
  bool isAtlfast = false;
  m_susyObj.initialize(nt.evt()->isMC);

  setAnaType(Ana_2Lep);
  
  SusyNtAna::Begin(0);  

  m_trigObj = new DilTrigLogic("Moriond", false/*No Reweight Utils!*/); 
  
  cout << "initialize chargeFlip tool" << endl;
  m_chargeFlip.initialize("/data/etp/jwittkowski/analysis_SUSYTools_03_04_neu/ChargeFlip/data/chargeFlip.root");
  
  
    
//   m_matrix = new SusyMatrixMethod::DiLeptonMatrixMethod();
//   m_matrix->configure("/data/etp/jwittkowski/analysis_SUSYTools_03_04_neu/SusyMatrixMethod/data/pass6_Apr2_2013.root", SusyMatrixMethod::PT); 
  missMassCalc.SetCalibrationSet(MMCCalibrationSet::MMC2012);
  
  
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
      if(fillNewSumwHisto) h_storeSumwMcid->Fill(mcid, recalc_sumw);
      mcid_of_first_entry = mcid;
      if(fillNewSumwHisto)cout << "recalc_sumw= " << recalc_sumw << endl;
      
      TFile *pFileIn_sumw = new TFile("/data/etp/jwittkowski/analysis_SUSYTools_03_04_neu/sumw_file_mcid_n0145.root");
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
  bool passedTopTag = passTopTag(m_signalLeptons, m_signalJets2Lep, m_met);
//   int NBJets = numberOfCBJets(m_signalJets2Lep);
//   int NCJets = numberOfCLJets(m_signalJets2Lep);

//   if( !(m_signalLeptons.size()==2) ) return kFALSE;
  
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
  }
  
  //calculate fake bg contribution with m_baseElectrons, don't use info about m_signalElectrons
  if(calcFakeContribution && m_baseElectrons.size()==2 ){
    el1 = (m_baseElectrons.at(0)->pt > m_baseElectrons.at(1)->pt) ? m_baseElectrons.at(0) : m_baseElectrons.at(1);
    el2 = (m_baseElectrons.at(0)->pt > m_baseElectrons.at(1)->pt) ? m_baseElectrons.at(1) : m_baseElectrons.at(0);
    leptons = m_baseLeptons;
    electrons = m_baseElectrons;
  }

  if((m_baseElectrons.size()==2 && m_signalElectrons.size()==2) || (calcFakeContribution && m_baseElectrons.size()==2) ){
    cutflow_EE->Fill(16.,1.0); cutflow_EE_MCWeight->Fill(16.,nt.evt()->w);
  
    TLorentzVector el1_TLV, el2_TLV;
    el1_TLV.SetPtEtaPhiE(el1->pt, el1->eta ,el1->phi, el1->pt*cosh(el1->eta));
    el2_TLV.SetPtEtaPhiE(el2->pt, el2->eta ,el2->phi, el2->pt*cosh(el2->eta));

    float lep_SF_EE = 1.0;
    if(nt.evt()->isMC) lep_SF_EE = el1->effSF * el2->effSF;
    
    if(m_trigObj->passDilEvtTrig(leptons, 0., nt.evt())){ //valid pT region
      float trigW_EE = m_trigObj->getTriggerWeight(leptons, nt.evt()->isMC, 0., 0, nt.evt()->nVtx, NtSys_NOM);
      if(m_signalTaus.size() == 0){
	if(nt.evt()->isMC || (!nt.evt()->isMC && m_trigObj->passDilTrigMatch(leptons, 0., nt.evt()))){  //match to trigger (in MC not needed bc weighted)

	  if(!nt.evt()->isMC || CheckRealLeptons(electrons, m_signalMuons)){
	    h_N_events_EE->Fill(mcid, 0., w_lPX_EE);
	    
	    float weight_ALL_EE = w_lPX_EE * lep_SF_EE * trigW_EE * getBTagWeight(nt.evt());

	    float mZTT_coll = calcMZTauTau_coll(el1_TLV, el2_TLV, m_met->lv());
	    float mZTT_mmc = calcMZTauTau_mmc(el1_TLV, el2_TLV, 0/*electron*/, 0/*electron*/);
	    float mZTT_missMassCalc = calcMZTauTau_MissMassCalc(el1_TLV, el2_TLV, 0/*electron*/, 0/*electron*/);
  // 	  cout << "EE mZTT_coll= " << mZTT_coll << " mZTT_mmc= " << mZTT_mmc << " mZTT_missMassCalc= " << mZTT_missMassCalc << endl;

	    float mt2_ee = getMT2(leptons, m_met);

	    float HT = calcHT(leptons, m_signalJets2Lep);
	    float mWWt = mTWW((el1_TLV + el2_TLV), m_met->lv(), true);
	    
	    float DeltaPhiLLJJ = (NJets>1) ? (el1_TLV + el2_TLV).DeltaPhi(signalJet1_TLV + signalJet2_TLV) : 0.;
	    
	    float DeltaPhiMETee = fabs((el1_TLV + el2_TLV).DeltaPhi(m_met->lv()));
	    float mTemin = (Mt(el1, m_met) > Mt(el2, m_met)) ? Mt(el2, m_met) : Mt(el1, m_met);
	    float sum_mv1 = calcSumMv1(m_signalJets2Lep);
	    float DeltaRee = fabs(el1_TLV.DeltaR(el2_TLV));

	      /////////////////////////// SR6 (OS, DF) ///////////////////////////////////////////////////
  // 	    - Etcone30/pt<0.1 (for elon)
  // 	    – >=2 jets C20 (veto B20 and F30)-
  // 	    - pTl0>30 GeV
  // 	    - ΔΦ(ll,Etmiss)>1.5
  // 	    - Min(mT) > 60 GeV
  // 	    - Σmv1<2.0
  // 	    - dRll<1.5
  // 	    - 50<mjj<110
  // 	    - Met>80
  // 	    - pTl1>30 GeV
  // 	    - pTj0>40 GeV
  // 	    - pTj1>30 GeV

	      if((el2->q * el1->q)<0 && numberOfCLJets(m_signalJets2Lep) >=2 && (numberOfCBJets(m_signalJets2Lep) + numberOfFJets(m_signalJets2Lep)) == 0){
		if(calcFakeContribution) weight_ALL_EE = 0.;

		fillHistos_SR6_EE(mcid, 0., weight_ALL_EE, METrel, HT, mWWt, passedTopTag, el1_TLV,  el2_TLV, m_met, el1, el2, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
		float pt1 = (el1->pt > el2->pt) ? el1->pt : el2->pt;
		float pt2 = (el1->pt > el2->pt) ? el2->pt : el1->pt;
		if(pt1 > 30.){
		  fillHistos_SR6_EE(mcid, 1., weight_ALL_EE, METrel, HT, mWWt, passedTopTag, el1_TLV,  el2_TLV, m_met, el1, el2, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
		  if(DeltaPhiMETee > 1.5){
		    fillHistos_SR6_EE(mcid, 2., weight_ALL_EE, METrel, HT, mWWt, passedTopTag, el1_TLV,  el2_TLV, m_met, el1, el2, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
		    if(mTemin > 60.){
		      fillHistos_SR6_EE(mcid, 3., weight_ALL_EE, METrel, HT, mWWt, passedTopTag, el1_TLV,  el2_TLV, m_met, el1, el2, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
		      if(sum_mv1 < 2.0){
			fillHistos_SR6_EE(mcid, 4., weight_ALL_EE, METrel, HT, mWWt, passedTopTag, el1_TLV,  el2_TLV, m_met, el1, el2, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
			if(DeltaRee < 1.5){
			  fillHistos_SR6_EE(mcid, 5., weight_ALL_EE, METrel, HT, mWWt, passedTopTag, el1_TLV,  el2_TLV, m_met, el1, el2, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
			  if(mjj > 50. && mjj < 110.){
			    fillHistos_SR6_EE(mcid, 6., weight_ALL_EE, METrel, HT, mWWt, passedTopTag, el1_TLV,  el2_TLV, m_met, el1, el2, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
			    if(METrel > 80.){
			      fillHistos_SR6_EE(mcid, 7., weight_ALL_EE, METrel, HT, mWWt, passedTopTag, el1_TLV,  el2_TLV, m_met, el1, el2, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
			      float ptj1 = (signalJet1_TLV.Pt() > signalJet2_TLV.Pt()) ? signalJet1_TLV.Pt() : signalJet2_TLV.Pt();
			      float ptj2 = (signalJet1_TLV.Pt() > signalJet2_TLV.Pt()) ? signalJet2_TLV.Pt() : signalJet1_TLV.Pt();
			      if(ptj1 > 40.){
				fillHistos_SR6_EE(mcid, 8., weight_ALL_EE, METrel, HT, mWWt, passedTopTag, el1_TLV,  el2_TLV, m_met, el1, el2, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
				if(ptj2 > 20.){
				  fillHistos_SR6_EE(mcid, 9., weight_ALL_EE, METrel, HT, mWWt, passedTopTag, el1_TLV,  el2_TLV, m_met, el1, el2, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
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
	      /////////////////////////// SR8 (SS, SF) ///////////////////////////////////////////////////
  // 	    -|mll-mZ|>10
  // 	    – Veto B-jet, fwd-jet
  // 	    – nC20>=1
  // 	    – Metrel>30
  // 	    - pTl0>30
  // 	    - pTl1>20
  // 	    - mWWT>150
  // 	    - Metrel>50
  // 	    - (mT2>90)

	      if((el1->q * el2->q)>0 && numberOfCLJets(m_signalJets2Lep) >=1 && (numberOfCBJets(m_signalJets2Lep) + numberOfFJets(m_signalJets2Lep)) == 0){
		
		float w_fake_EE = 1.;
  // 	      if(!nt.evt()->isMC && calcFakeContribution) w_fake_EE = getFakeWeight(m_baseLeptons, SusyMatrixMethod::FR_VRSSbtag, METrel, SusyMatrixMethod::SYS_NONE);
		if(!nt.evt()->isMC) weight_ALL_EE = w_fake_EE;
		
		fillHistos_SR8_EE(mcid, 0., weight_ALL_EE, METrel, HT, mWWt, passedTopTag, el1_TLV,  el2_TLV, m_met, el1, el2, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
		if(isNoZBoson(leptons)){
		  fillHistos_SR8_EE(mcid, 1., weight_ALL_EE, METrel, HT, mWWt, passedTopTag, el1_TLV,  el2_TLV, m_met, el1, el2, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
		  if(METrel > 30.){
		    fillHistos_SR8_EE(mcid, 2., weight_ALL_EE, METrel, HT, mWWt, passedTopTag, el1_TLV,  el2_TLV, m_met, el1, el2, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
		    if(el1->pt > 30.){
		      fillHistos_SR8_EE(mcid, 3., weight_ALL_EE, METrel, HT, mWWt, passedTopTag, el1_TLV,  el2_TLV, m_met, el1, el2, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
		      if(el2->pt > 20.){
			fillHistos_SR8_EE(mcid, 4., weight_ALL_EE, METrel, HT, mWWt, passedTopTag, el1_TLV,  el2_TLV, m_met, el1, el2, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
			if(mWWt>150.){
			  fillHistos_SR8_EE(mcid, 5., weight_ALL_EE, METrel, HT, mWWt, passedTopTag, el1_TLV,  el2_TLV, m_met, el1, el2, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
			  if(METrel > 50.){
			    fillHistos_SR8_EE(mcid, 6., weight_ALL_EE, METrel, HT, mWWt, passedTopTag, el1_TLV,  el2_TLV, m_met, el1, el2, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
			    if(mt2_ee > 90.){
			      fillHistos_SR8_EE(mcid, 7., weight_ALL_EE, METrel, HT, mWWt, passedTopTag, el1_TLV,  el2_TLV, m_met, el1, el2, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
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
  }
  
  //calculate fake bg contribution with m_baseMuons, don't use info about m_signalElectrons
  if(calcFakeContribution && m_baseMuons.size()==2 ){
    mu1 = (m_baseMuons.at(0)->pt > m_baseMuons.at(1)->pt) ? m_baseMuons.at(0) : m_baseMuons.at(1);
    mu2 = (m_baseMuons.at(0)->pt > m_baseMuons.at(1)->pt) ? m_baseMuons.at(1) : m_baseMuons.at(0);
    leptons = m_baseLeptons;
    muons = m_baseMuons;
  }

  if((m_signalMuons.size()==2 && m_baseMuons.size()==2) || (calcFakeContribution && m_baseMuons.size()==2) ){
    cutflow_MM->Fill(16.,1.0); cutflow_MM_MCWeight->Fill(16.,nt.evt()->w);
    TLorentzVector mu1_TLV, mu2_TLV;
    mu1_TLV.SetPtEtaPhiE(mu1->pt, mu1->eta ,mu1->phi, mu1->pt*cosh(mu1->eta));
    mu2_TLV.SetPtEtaPhiE(mu2->pt, mu2->eta ,mu2->phi, mu2->pt*cosh(mu2->eta));
    
    float lep_SF_MM = 1.0;
    if(nt.evt()->isMC) lep_SF_MM = mu1->effSF * mu2->effSF;

    if(m_trigObj->passDilEvtTrig(leptons, 0., nt.evt())){ //valid pT region
      if(m_signalTaus.size() == 0){
	float trigW_MM = m_trigObj->getTriggerWeight(leptons, nt.evt()->isMC, 0., 0, nt.evt()->nVtx, NtSys_NOM);

	if(nt.evt()->isMC || (!nt.evt()->isMC && m_trigObj->passDilTrigMatch(leptons, 0., nt.evt()))){ //match to trigger

	  if(!nt.evt()->isMC || CheckRealLeptons(m_signalElectrons, muons)){
	    h_N_events_MM->Fill(mcid, 0., w_lPX_MM);
	    

	    float weight_ALL_MM = w_lPX_MM * lep_SF_MM * trigW_MM * getBTagWeight(nt.evt());
  // 	  float DeltaRmm = mu1_TLV.DeltaR(mu2_TLV);
  // 	  float ptmm = (mu1_TLV + mu2_TLV).Pt();
  // 	  float Mmm = Mll(mu1, mu2);
	    float mZTT_coll = calcMZTauTau_coll(mu1_TLV, mu2_TLV, m_met->lv());
	    float mZTT_mmc = calcMZTauTau_mmc(mu1_TLV, mu2_TLV, 1/*muon*/, 1/*muon*/);
	    float mZTT_missMassCalc = calcMZTauTau_MissMassCalc(mu1_TLV, mu2_TLV, 1/*muon*/, 1/*muon*/);
  // 	  cout << "MM mZTT_coll= " << mZTT_coll << " mZTT_mmc= " << mZTT_mmc << " mZTT_missMassCalc= " << mZTT_missMassCalc << endl;
  // 	  float mTmm = calcMt((mu1_TLV+mu2_TLV), m_met->lv());
  // 	  float mTmmmin = (Mt(mu1, m_met) > Mt(mu2, m_met)) ? Mt(mu2, m_met) : Mt(mu1, m_met);

	    float mt2_mm = getMT2(leptons, m_met);


	    float HT = calcHT(leptons, m_signalJets2Lep);
	    float mWWt = mTWW((mu1_TLV + mu2_TLV), m_met->lv(), true);
	    
	    float DeltaPhiLLJJ = (NJets>1) ? (mu1_TLV + mu2_TLV).DeltaPhi(signalJet1_TLV + signalJet2_TLV) : 0.;
	    
	    float DeltaPhiMETmm = fabs((mu1_TLV + mu2_TLV).DeltaPhi(m_met->lv()));
	    float mTemin = (Mt(mu1, m_met) > Mt(mu2, m_met)) ? Mt(mu2, m_met) : Mt(mu1, m_met);
	    float sum_mv1 = calcSumMv1(m_signalJets2Lep);
	    float DeltaRmm = fabs(mu1_TLV.DeltaR(mu2_TLV));

	      /////////////////////////// SR6 (OS, DF) ///////////////////////////////////////////////////
  // 	    - Etcone30/pt<0.1 (for muon)
  // 	    – >=2 jets C20 (veto B20 and F30)-
  // 	    - pTl0>30 GeV
  // 	    - ΔΦ(ll,Etmiss)>1.5
  // 	    - Min(mT) > 60 GeV
  // 	    - Σmv1<2.0
  // 	    - dRll<1.5
  // 	    - 50<mjj<110
  // 	    - Met>80
  // 	    - pTl1>30 GeV
  // 	    - pTj0>40 GeV
  // 	    - pTj1>30 GeV

	      if((mu2->q * mu1->q)<0 && numberOfCLJets(m_signalJets2Lep) >=2 && (numberOfCBJets(m_signalJets2Lep) + numberOfFJets(m_signalJets2Lep)) == 0){
		if(calcFakeContribution) weight_ALL_MM = 0.;

		fillHistos_SR6_MM(mcid, 0., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
		if((mu1->etcone30/mu1->pt < 0.1) && (mu2->etcone30/mu2->pt < 0.1)){
		  fillHistos_SR6_MM(mcid, 1., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
		  float pt1 = (mu1->pt > mu2->pt) ? mu1->pt : mu2->pt;
		  float pt2 = (mu1->pt > mu2->pt) ? mu2->pt : mu1->pt;
		  if(pt1 > 30.){
		    fillHistos_SR6_MM(mcid, 2., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
		    if(DeltaPhiMETmm > 1.5){
		      fillHistos_SR6_MM(mcid, 3., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
		      if(mTemin > 60.){
			fillHistos_SR6_MM(mcid, 4., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
			if(sum_mv1 < 2.0){
			  fillHistos_SR6_MM(mcid, 5., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
			  if(DeltaRmm < 1.5){
			    fillHistos_SR6_MM(mcid, 6., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
			    if(mjj > 50. && mjj < 110.){
			      fillHistos_SR6_MM(mcid, 7., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
			      if(METrel > 80.){
				fillHistos_SR6_MM(mcid, 8., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
				float ptj1 = (signalJet1_TLV.Pt() > signalJet2_TLV.Pt()) ? signalJet1_TLV.Pt() : signalJet2_TLV.Pt();
				float ptj2 = (signalJet1_TLV.Pt() > signalJet2_TLV.Pt()) ? signalJet2_TLV.Pt() : signalJet1_TLV.Pt();
				if(ptj1 > 40.){
				  fillHistos_SR6_MM(mcid, 9., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
				  if(ptj2 > 20.){
				    fillHistos_SR6_MM(mcid, 10., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
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
	  /////////////////////////// SR8 (SS, SF) ///////////////////////////////////////////////////
  // 	    Preselection (Anyes):
  // 	    - Etcone30/pt<0.1 (for both muons)
  // 	    – pTl0>30 (not use in BDT training to gain more stat)
  // 	    – Veto B-jet, fwd-jet
  // 	    – nC20>=1
  // 	    - HT>200
  // 	    - mWWT>100,150,200
  // 	    - (metrel>50 with mWWT>200)

	    if((mu1->q * mu2->q)>0 &&numberOfCLJets(m_signalJets2Lep) >=1 && (numberOfCBJets(m_signalJets2Lep) + numberOfFJets(m_signalJets2Lep)) == 0){
	      
	      float w_fake_MM = 1.;
  // 	    if(!nt.evt()->isMC && calcFakeContribution) w_fake_MM = getFakeWeight(m_baseLeptons, SusyMatrixMethod::FR_VRSSbtag, METrel, SusyMatrixMethod::SYS_NONE);
	      if(!nt.evt()->isMC) weight_ALL_MM = w_fake_MM;
	      
	      fillHistos_SR8_MM(mcid, 0., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
	      if((mu1->etcone30/mu1->pt < 0.1) && (mu2->etcone30/mu2->pt < 0.1)){
		fillHistos_SR8_MM(mcid, 1., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
		if(mu1->pt > 30.){
		  fillHistos_SR8_MM(mcid, 2., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
		  if(HT > 200.){
		    fillHistos_SR8_MM(mcid, 3., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
		    if(mWWt > 100.){
		      fillHistos_SR8_MM(mcid, 4., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
		      if(mWWt > 150.){
			fillHistos_SR8_MM(mcid, 5., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
			if(mWWt > 200.){
			  fillHistos_SR8_MM(mcid, 6., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
			  if(METrel > 50.){
			    fillHistos_SR8_MM(mcid, 7., weight_ALL_MM, METrel, HT, mWWt, passedTopTag, mu1_TLV,  mu2_TLV, m_met, mu1, mu2, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
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
  
  ////////////////////////////        EM           ////////////////////////////////////////////////////////////////////////////
  Electron* el;
  Muon* mu;
  //calculate normal contribution with signal leptons:
  if(m_baseMuons.size()==1 && m_baseElectrons.size()==1 && m_signalMuons.size()==1 && m_signalElectrons.size()==1 ){
    mu = m_signalMuons.at(0);
    el = m_signalElectrons.at(0);
    leptons = m_signalLeptons;
    muons = m_signalMuons;
    electrons = m_signalElectrons;
  }
  
  //calculate fake bg contribution with m_baseMuons, don't use info about m_signalElectrons
  if(calcFakeContribution && m_baseMuons.size()==1 && m_baseElectrons.size()==1){
    mu = m_baseMuons.at(0);
    el = m_baseElectrons.at(0);
    leptons = m_baseLeptons;
    muons = m_baseMuons;
    electrons = m_baseElectrons;
  }


    
  if((m_signalElectrons.size()==1 && m_signalMuons.size()==1 && m_baseElectrons.size() == 1 &&  m_baseMuons.size() == 1) || (calcFakeContribution && m_baseElectrons.size() == 1 &&  m_baseMuons.size() == 1)){	  
    cutflow_EM->Fill(16.,1.0); cutflow_EM_MCWeight->Fill(16.,nt.evt()->w);

    TLorentzVector el_TLV, mu_TLV;

    el_TLV.SetPtEtaPhiE(el->pt, el->eta ,el->phi, el->pt*cosh(el->eta));
    mu_TLV.SetPtEtaPhiE(mu->pt, mu->eta ,mu->phi, mu->pt*cosh(mu->eta));
    
    float lep_SF_EM = 1.0;
    if(nt.evt()->isMC) lep_SF_EM = mu->effSF * el->effSF;

    if(m_trigObj->passDilEvtTrig(leptons, 0., nt.evt())){ //valid pT region)
      if(m_signalTaus.size() == 0){

	float trigW_EM = m_trigObj->getTriggerWeight(leptons, nt.evt()->isMC, 0., 0, nt.evt()->nVtx, NtSys_NOM);

	if(nt.evt()->isMC || (!nt.evt()->isMC && m_trigObj->passDilTrigMatch(leptons, 0., nt.evt()))){ //match to trigger
	  if(!nt.evt()->isMC || CheckRealLeptons(electrons, muons)){
	    h_N_events_EM->Fill(mcid, 0., w_lPX_EM);

	    float weight_ALL_EM = w_lPX_EM * lep_SF_EM * trigW_EM * getBTagWeight(nt.evt());
  // 	  float DeltaRem = el_TLV.DeltaR(mu_TLV);
  // 	  float ptem = (el_TLV + mu_TLV).Pt();
  // 	  float Mem = Mll(el, mu);
	    
	    float mZTT_coll = calcMZTauTau_coll(el_TLV, mu_TLV, m_met->lv());
	    float mZTT_mmc = calcMZTauTau_mmc(el_TLV, mu_TLV, 0/*electron*/, 1/*muon*/);
	    float mZTT_missMassCalc = calcMZTauTau_MissMassCalc(el_TLV, mu_TLV, 0/*electron*/, 1/*muon*/);
  // 	  cout << "EM mZTT_coll= " << mZTT_coll << " mZTT_mmc= " << mZTT_mmc << " mZTT_missMassCalc= " << mZTT_missMassCalc << endl;
  // 	  float mTem = calcMt((el_TLV+mu_TLV), m_met->lv());
  // 	  float mTemmin = (Mt(el, m_met) > Mt(mu, m_met)) ? Mt(mu, m_met) : Mt(el, m_met);	  
	    
  // 	  float mMETem = (mu_TLV + el_TLV + m_met->lv()).M();

	    float mt2_em = getMT2(leptons, m_met);

	    float HT = calcHT(leptons, m_signalJets2Lep);
	    float mWWt = mTWW((mu_TLV + el_TLV), m_met->lv(), true);
	    
	    float DeltaPhiLLJJ = (mu_TLV + el_TLV).DeltaPhi(signalJet1_TLV + signalJet2_TLV);
	    
	    float DeltaPhiMETem = fabs((mu_TLV + el_TLV).DeltaPhi(m_met->lv()));
	    float mTemin = (Mt(mu, m_met) > Mt(el, m_met)) ? Mt(el, m_met) : Mt(mu, m_met);
	    float sum_mv1 = calcSumMv1(m_signalJets2Lep);
	    float DeltaRem = fabs(mu_TLV.DeltaR(el_TLV));

	      /////////////////////////// SR7 (OS, DF) ///////////////////////////////////////////////////
  // 	    - Etcone30/pt<0.1 (for muon)
  // 	    – >=2 jets C20 (veto B20 and F30)-
  // 	    - pTl0>30 GeV
  // 	    - ΔΦ(ll,Etmiss)>1.5
  // 	    - Min(mT) > 60 GeV
  // 	    - Σmv1<2.0
  // 	    - dRll<1.5
  // 	    - 50<mjj<110
  // 	    - Met>80
  // 	    - pTl1>30 GeV
  // 	    - pTj0>40 GeV
  // 	    - pTj1>30 GeV

	      if((el->q * mu->q)<0 && numberOfCLJets(m_signalJets2Lep) >=2 && (numberOfCBJets(m_signalJets2Lep) + numberOfFJets(m_signalJets2Lep)) == 0){
		if(calcFakeContribution) weight_ALL_EM = 0.;

		fillHistos_SR7_EM(mcid, 0., weight_ALL_EM, METrel, HT, mWWt, passedTopTag, mu_TLV,  el_TLV, m_met, mu, el, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
		if(mu->etcone30/mu->pt < 0.1){
		  fillHistos_SR7_EM(mcid, 1., weight_ALL_EM, METrel, HT, mWWt, passedTopTag, mu_TLV,  el_TLV, m_met, mu, el, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
		  float pt1 = (mu->pt > el->pt) ? mu->pt : el->pt;
		  float pt2 = (mu->pt > el->pt) ? el->pt : mu->pt;
		  if(pt1 > 30.){
		    fillHistos_SR7_EM(mcid, 2., weight_ALL_EM, METrel, HT, mWWt, passedTopTag, mu_TLV,  el_TLV, m_met, mu, el, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
		    if(DeltaPhiMETem > 1.5){
		      fillHistos_SR7_EM(mcid, 3., weight_ALL_EM, METrel, HT, mWWt, passedTopTag, mu_TLV,  el_TLV, m_met, mu, el, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
		      if(mTemin > 60.){
			fillHistos_SR7_EM(mcid, 4., weight_ALL_EM, METrel, HT, mWWt, passedTopTag, mu_TLV,  el_TLV, m_met, mu, el, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
			if(sum_mv1 < 2.0){
			  fillHistos_SR7_EM(mcid, 5., weight_ALL_EM, METrel, HT, mWWt, passedTopTag, mu_TLV,  el_TLV, m_met, mu, el, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
			  if(DeltaRem < 1.5){
			    fillHistos_SR7_EM(mcid, 6., weight_ALL_EM, METrel, HT, mWWt, passedTopTag, mu_TLV,  el_TLV, m_met, mu, el, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
			    if(mjj > 50. && mjj < 110.){
			      fillHistos_SR7_EM(mcid, 7., weight_ALL_EM, METrel, HT, mWWt, passedTopTag, mu_TLV,  el_TLV, m_met, mu, el, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
			      if(METrel > 80.){
				fillHistos_SR7_EM(mcid, 8., weight_ALL_EM, METrel, HT, mWWt, passedTopTag, mu_TLV,  el_TLV, m_met, mu, el, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
				float ptj1 = (signalJet1_TLV.Pt() > signalJet2_TLV.Pt()) ? signalJet1_TLV.Pt() : signalJet2_TLV.Pt();
				float ptj2 = (signalJet1_TLV.Pt() > signalJet2_TLV.Pt()) ? signalJet2_TLV.Pt() : signalJet1_TLV.Pt();
				if(ptj1 > 40.){
				  fillHistos_SR7_EM(mcid, 9., weight_ALL_EM, METrel, HT, mWWt, passedTopTag, mu_TLV,  el_TLV, m_met, mu, el, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
				  if(ptj2 > 20.){
				    fillHistos_SR7_EM(mcid, 10., weight_ALL_EM, METrel, HT, mWWt, passedTopTag, mu_TLV,  el_TLV, m_met, mu, el, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
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
	      
	      ///////////////////////// SR9 (SS, DF) ///////////////////////////////////////////////////
  // 	    – Etcone30/pt<0.1 (muon)
  // 	    – pTl0>30 (not used in BDT training to gain more stat)
  // 	    – pT l1>20 (not used in BDT training to gain more stat)
  // 	    – Veto B-jet, fwd-jet
  // 	    – nC20>=1
  // 	    - HT>200
  // 	    - mWWT>140
  // 	    - (metrel>50)
	      if((el->q * mu->q)>0 && numberOfCLJets(m_signalJets2Lep) >=1 && (numberOfCBJets(m_signalJets2Lep) + numberOfFJets(m_signalJets2Lep)) == 0){
		
		float w_fake_EM = 1.;
  // 	      if(!nt.evt()->isMC && calcFakeContribution) w_fake_EM = getFakeWeight(m_baseLeptons, SusyMatrixMethod::FR_VRSSbtag, METrel, SusyMatrixMethod::SYS_NONE);
		if(!nt.evt()->isMC) weight_ALL_EM = w_fake_EM;

		fillHistos_SR9_EM(mcid, 0., weight_ALL_EM, METrel, HT, mWWt, passedTopTag, mu_TLV,  el_TLV, m_met, mu, el, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
		if(mu->etcone30/mu->pt < 0.1){
		  fillHistos_SR9_EM(mcid, 1., weight_ALL_EM, METrel, HT, mWWt, passedTopTag, mu_TLV,  el_TLV, m_met, mu, el, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
		  float pt1 = (mu->pt > el->pt) ? mu->pt : el->pt;
		  float pt2 = (mu->pt > el->pt) ? el->pt : mu->pt;
		  if(pt1 > 30.){
		    fillHistos_SR9_EM(mcid, 2., weight_ALL_EM, METrel, HT, mWWt, passedTopTag, mu_TLV,  el_TLV, m_met, mu, el, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
		    if(pt2 > 20.){
		      fillHistos_SR9_EM(mcid, 3., weight_ALL_EM, METrel, HT, mWWt, passedTopTag, mu_TLV,  el_TLV, m_met, mu, el, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
		      if(HT > 200.){
			fillHistos_SR9_EM(mcid, 4., weight_ALL_EM, METrel, HT, mWWt, passedTopTag, mu_TLV,  el_TLV, m_met, mu, el, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
			if(mWWt > 140.){
			  fillHistos_SR9_EM(mcid, 5., weight_ALL_EM, METrel, HT, mWWt, passedTopTag, mu_TLV,  el_TLV, m_met, mu, el, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
			  if(METrel > 50.){
			    fillHistos_SR9_EM(mcid, 6., weight_ALL_EM, METrel, HT, mWWt, passedTopTag, mu_TLV,  el_TLV, m_met, mu, el, leptons, signalJet1_TLV, signalJet2_TLV, NJets, mZTT_coll, mZTT_mmc, mZTT_missMassCalc);
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
    //if( !(jet->Pt() > 20 && fabs(jet->Eta()) < 2.4) ) continue;
    if( !(jet->Pt() > 20 && fabs(jet->detEta) < 2.4) ) continue;
    tempJets.push_back(jet);
  }
  //SusNtTools takes care when it is a Sherpa sample!
  return bTagSF(evt, tempJets, nt.evt()->mcChannel, BTag_NOM); 

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
float TSelector_SusyNtuple::calcHT(const LeptonVector &Leptons, const JetVector &signalJets){
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
//   sum_et += m_met->refMuo_sumet;
//   sum_et += m_met->refJet_sumet;
//   sum_et += m_met->refGamma_sumet;
//   sum_et += m_met->softTerm_sumet;
// 
//   TLorentzVector vec1, vec2;
//   vec1 = lep1;
//   vec2 = lep2;
// //   vec1.SetPtEtaPhiM(lep1.Pt(), lep1.Eta(), lep1.Phi(), (tau0_decay_type==0) ? 0.000510999 : 0.1056583715);
// //   vec2.SetPtEtaPhiM(lep2.Pt(), lep2.Eta(), lep2.Phi(), (tau1_decay_type==0) ? 0.000510999 : 0.1056583715);
//  
//   MMC_sumet.Scan6dAnal(vec1, vec2, m_met->lv().Px(), m_met->lv().Py(), 1.92 + 0.65 * sqrt(sum_et)); 
//   float met_ex = MMC_sumet.GetCorrMEX();
//   float met_ey = MMC_sumet.GetCorrMEY();
//   MMC_sumet.Scan4dAnal(vec1, vec2, met_ex, met_ey);
//     //validate: which method is best to get mass value? 
//   float mZTauTau_mmc = -1.;
//   mZTauTau_mmc = MMC_sumet.GetMZ_peak(); 
// 
//   return mZTauTau_mmc;
  return 111.;

}
/*--------------------------------------------------------------------------------*/
float TSelector_SusyNtuple::calcMZTauTau_MissMassCalc(TLorentzVector lep1, TLorentzVector lep2, int tau0_decay_type, int tau1_decay_type){

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
return 111.;
}
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
// Debug event
/*--------------------------------------------------------------------------------*/
bool TSelector_SusyNtuple::debugEvent()
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
    outputfile = "histo_sumw_signal.root";
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
