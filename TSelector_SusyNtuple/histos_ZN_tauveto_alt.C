bool TSelector_SusyNtuple::defineHistos(){

  h_storeSumwMcid = new TH1F("h_storeSumwMcid", "h_storeSumwMcid", 20, 0, 200000.);  h_storeSumwMcid->Sumw2();
  
  h_N_events_EE = new TH2F("h_N_events_EE", "h_N_events_EE", 10, 100000, 199999, 50, 0, 50);  h_N_events_EE->Sumw2();
  h_N_events_MM = new TH2F("h_N_events_MM", "h_N_events_MM", 10, 100000, 199999, 50, 0, 50);  h_N_events_MM->Sumw2();
  h_N_events_EM = new TH2F("h_N_events_EM", "h_N_events_EM", 10, 100000, 199999, 50, 0, 50);  h_N_events_EM->Sumw2();  
  h_N_events_SR6_EE = new TH2F("h_N_events_SR6_EE", "h_N_events_SR6_EE", 10, 100000, 199999, 50, 0, 50);  h_N_events_SR6_EE->Sumw2();
  h_N_events_SR6_MM = new TH2F("h_N_events_SR6_MM", "h_N_events_SR6_MM", 10, 100000, 199999, 50, 0, 50);  h_N_events_SR6_MM->Sumw2();
  h_N_events_SR7_EM = new TH2F("h_N_events_SR7_EM", "h_N_events_SR7_EM", 10, 100000, 199999, 50, 0, 50);  h_N_events_SR7_EM->Sumw2();  
  h_N_events_SR8_EE = new TH2F("h_N_events_SR8_EE", "h_N_events_SR8_EE", 10, 100000, 199999, 50, 0, 50);  h_N_events_SR8_EE->Sumw2();
  h_N_events_SR8_MM = new TH2F("h_N_events_SR8_MM", "h_N_events_SR8_MM", 10, 100000, 199999, 50, 0, 50);  h_N_events_SR8_MM->Sumw2();
  h_N_events_SR9_EM = new TH2F("h_N_events_SR9_EM", "h_N_events_SR9_EM", 10, 100000, 199999, 50, 0, 50);  h_N_events_SR9_EM->Sumw2();
//    /*--------------------------------------------------------------------------------*/ 
  h_DeltaRLeptons_SR6_EE = new TH2F("h_DeltaRLeptons_SR6_EE", "h_DeltaRLeptons_SR6_EE", 70, 0, 7, 50, 0, 50);  h_DeltaRLeptons_SR6_EE->Sumw2();
  h_DeltaRLeptons_SR6_MM = new TH2F("h_DeltaRLeptons_SR6_MM", "h_DeltaRLeptons_SR6_MM", 70, 0, 7, 50, 0, 50);  h_DeltaRLeptons_SR6_MM->Sumw2();
  h_DeltaRLeptons_SR7_EM = new TH2F("h_DeltaRLeptons_SR7_EM", "h_DeltaRLeptons_SR7_EM", 70, 0, 7, 50, 0, 50);  h_DeltaRLeptons_SR7_EM->Sumw2();  
  h_DeltaRLeptons_SR8_EE = new TH2F("h_DeltaRLeptons_SR8_EE", "h_DeltaRLeptons_SR8_EE", 70, 0, 7, 50, 0, 50);  h_DeltaRLeptons_SR8_EE->Sumw2();
  h_DeltaRLeptons_SR8_MM = new TH2F("h_DeltaRLeptons_SR8_MM", "h_DeltaRLeptons_SR8_MM", 70, 0, 7, 50, 0, 50);  h_DeltaRLeptons_SR8_MM->Sumw2();
  h_DeltaRLeptons_SR9_EM = new TH2F("h_DeltaRLeptons_SR9_EM", "h_DeltaRLeptons_SR9_EM", 70, 0, 7, 50, 0, 50);  h_DeltaRLeptons_SR9_EM->Sumw2();
  
     /*--------------------------------------------------------------------------------*/ 
  h_mt2_SR6_EE = new TH2F("h_mt2_SR6_EE", "h_mt2_SR6_EE", 100, 0, 500, 50, 0, 50);  h_mt2_SR6_EE->Sumw2();
  h_mt2_SR6_MM = new TH2F("h_mt2_SR6_MM", "h_mt2_SR6_MM", 100, 0, 500, 50, 0, 50);  h_mt2_SR6_MM->Sumw2();
  h_mt2_SR7_EM = new TH2F("h_mt2_SR7_EM", "h_mt2_SR7_EM", 100, 0, 500, 50, 0, 50);  h_mt2_SR7_EM->Sumw2();  
  h_mt2_SR8_EE = new TH2F("h_mt2_SR8_EE", "h_mt2_SR8_EE", 100, 0, 500, 50, 0, 50);  h_mt2_SR8_EE->Sumw2();
  h_mt2_SR8_MM = new TH2F("h_mt2_SR8_MM", "h_mt2_SR8_MM", 100, 0, 500, 50, 0, 50);  h_mt2_SR8_MM->Sumw2();
  h_mt2_SR9_EM = new TH2F("h_mt2_SR9_EM", "h_mt2_SR9_EM", 100, 0, 500, 50, 0, 50);  h_mt2_SR9_EM->Sumw2();
  /*--------------------------------------------------------------------------------*/ 
  h_ptll_SR6_EE = new TH2F("h_ptll_SR6_EE", "h_ptll_SR6_EE", 100, 0, 500, 50, 0, 50);  h_ptll_SR6_EE->Sumw2();
  h_ptll_SR6_MM = new TH2F("h_ptll_SR6_MM", "h_ptll_SR6_MM", 100, 0, 500, 50, 0, 50);  h_ptll_SR6_MM->Sumw2();
  h_ptll_SR7_EM = new TH2F("h_ptll_SR7_EM", "h_ptll_SR7_EM", 100, 0, 500, 50, 0, 50);  h_ptll_SR7_EM->Sumw2();  
  h_ptll_SR8_EE = new TH2F("h_ptll_SR8_EE", "h_ptll_SR8_EE", 100, 0, 500, 50, 0, 50);  h_ptll_SR8_EE->Sumw2();
  h_ptll_SR8_MM = new TH2F("h_ptll_SR8_MM", "h_ptll_SR8_MM", 100, 0, 500, 50, 0, 50);  h_ptll_SR8_MM->Sumw2();
  h_ptll_SR9_EM = new TH2F("h_ptll_SR9_EM", "h_ptll_SR9_EM", 100, 0, 500, 50, 0, 50);  h_ptll_SR9_EM->Sumw2();
  /*--------------------------------------------------------------------------------*/ 
  h_METrel_SR6_EE = new TH2F("h_METrel_SR6_EE", "h_METrel_SR6_EE", 100, 0, 500, 50, 0, 50);  h_METrel_SR6_EE->Sumw2();
  h_METrel_SR6_MM = new TH2F("h_METrel_SR6_MM", "h_METrel_SR6_MM", 100, 0, 500, 50, 0, 50);  h_METrel_SR6_MM->Sumw2();
  h_METrel_SR7_EM = new TH2F("h_METrel_SR7_EM", "h_METrel_SR7_EM", 100, 0, 500, 50, 0, 50);  h_METrel_SR7_EM->Sumw2();  
  h_METrel_SR8_EE = new TH2F("h_METrel_SR8_EE", "h_METrel_SR8_EE", 100, 0, 500, 50, 0, 50);  h_METrel_SR8_EE->Sumw2();  
  h_METrel_SR8_MM = new TH2F("h_METrel_SR8_MM", "h_METrel_SR8_MM", 100, 0, 500, 50, 0, 50);  h_METrel_SR8_MM->Sumw2();
  h_METrel_SR9_EM = new TH2F("h_METrel_SR9_EM", "h_METrel_SR9_EM", 100, 0, 500, 50, 0, 50);  h_METrel_SR9_EM->Sumw2();
 
  
  /*--------------------------------------------------------------------------------*/ 
  h_Mll_SR6_EE = new TH2F("h_Mll_SR6_EE", "h_Mll_SR6_EE", 100, 0, 500, 50, 0, 50); h_Mll_SR6_EE->Sumw2();
  h_Mll_SR6_MM = new TH2F("h_Mll_SR6_MM", "h_Mll_SR6_MM", 100, 0, 500, 50, 0, 50); h_Mll_SR6_MM->Sumw2();
  h_Mll_SR7_EM = new TH2F("h_Mll_SR7_EM", "h_Mll_SR7_EM", 100, 0, 500, 50, 0, 50); h_Mll_SR7_EM->Sumw2();  
  h_Mll_SR8_EE = new TH2F("h_Mll_SR8_EE", "h_Mll_SR8_EE", 100, 0, 500, 50, 0, 50); h_Mll_SR8_EE->Sumw2();
  h_Mll_SR8_MM = new TH2F("h_Mll_SR8_MM", "h_Mll_SR8_MM", 100, 0, 500, 50, 0, 50); h_Mll_SR8_MM->Sumw2();
  h_Mll_SR9_EM = new TH2F("h_Mll_SR9_EM", "h_Mll_SR9_EM", 100, 0, 500, 50, 0, 50); h_Mll_SR9_EM->Sumw2();
  /*--------------------------------------------------------------------------------*/ 
  h_mZTT_coll_SR6_EE = new TH2F("h_mZTT_coll_SR6_EE", "h_mZTT_coll_SR6_EE", 500, -2, 498, 50, 0, 50);  h_mZTT_coll_SR6_EE->Sumw2();
  h_mZTT_coll_SR6_MM = new TH2F("h_mZTT_coll_SR6_MM", "h_mZTT_coll_SR6_MM", 500, -2, 498, 50, 0, 50);  h_mZTT_coll_SR6_MM->Sumw2();
  h_mZTT_coll_SR7_EM = new TH2F("h_mZTT_coll_SR7_EM", "h_mZTT_coll_SR7_EM", 500, -2, 498, 50, 0, 50);  h_mZTT_coll_SR7_EM->Sumw2();  
  h_mZTT_coll_SR8_EE = new TH2F("h_mZTT_coll_SR8_EE", "h_mZTT_coll_SR8_EE", 500, -2, 498, 50, 0, 50);  h_mZTT_coll_SR8_EE->Sumw2();
  h_mZTT_coll_SR8_MM = new TH2F("h_mZTT_coll_SR8_MM", "h_mZTT_coll_SR8_MM", 500, -2, 498, 50, 0, 50);  h_mZTT_coll_SR8_MM->Sumw2();
  h_mZTT_coll_SR9_EM = new TH2F("h_mZTT_coll_SR9_EM", "h_mZTT_coll_SR9_EM", 500, -2, 498, 50, 0, 50);  h_mZTT_coll_SR9_EM->Sumw2();
  /*--------------------------------------------------------------------------------*/ 
  h_mZTT_mmc_SR6_EE = new TH2F("h_mZTT_mmc_SR6_EE", "h_mZTT_mmc_SR6_EE", 500, -2, 498, 50, 0, 50);  h_mZTT_mmc_SR6_EE->Sumw2();
  h_mZTT_mmc_SR6_MM = new TH2F("h_mZTT_mmc_SR6_MM", "h_mZTT_mmc_SR6_MM", 500, -2, 498, 50, 0, 50);  h_mZTT_mmc_SR6_MM->Sumw2();
  h_mZTT_mmc_SR7_EM = new TH2F("h_mZTT_mmc_SR7_EM", "h_mZTT_mmc_SR7_EM", 500, -2, 498, 50, 0, 50);  h_mZTT_mmc_SR7_EM->Sumw2();  
  h_mZTT_mmc_SR8_EE = new TH2F("h_mZTT_mmc_SR8_EE", "h_mZTT_mmc_SR8_EE", 500, -2, 498, 50, 0, 50);  h_mZTT_mmc_SR8_EE->Sumw2();
  h_mZTT_mmc_SR8_MM = new TH2F("h_mZTT_mmc_SR8_MM", "h_mZTT_mmc_SR8_MM", 500, -2, 498, 50, 0, 50);  h_mZTT_mmc_SR8_MM->Sumw2();
  h_mZTT_mmc_SR9_EM = new TH2F("h_mZTT_mmc_SR9_EM", "h_mZTT_mmc_SR9_EM", 500, -2, 498, 50, 0, 50);  h_mZTT_mmc_SR9_EM->Sumw2();
  /*--------------------------------------------------------------------------------*/ 
  h_mZTT_missMassCalc_SR6_EE = new TH2F("h_mZTT_missMassCalc_SR6_EE", "h_mZTT_missMassCalc_SR6_EE", 500, -2, 498, 50, 0, 50);  h_mZTT_missMassCalc_SR6_EE->Sumw2();
  h_mZTT_missMassCalc_SR6_MM = new TH2F("h_mZTT_missMassCalc_SR6_MM", "h_mZTT_missMassCalc_SR6_MM", 500, -2, 498, 50, 0, 50);  h_mZTT_missMassCalc_SR6_MM->Sumw2();
  h_mZTT_missMassCalc_SR7_EM = new TH2F("h_mZTT_missMassCalc_SR7_EM", "h_mZTT_missMassCalc_SR7_EM", 500, -2, 498, 50, 0, 50);  h_mZTT_missMassCalc_SR7_EM->Sumw2();  
  h_mZTT_missMassCalc_SR8_EE = new TH2F("h_mZTT_missMassCalc_SR8_EE", "h_mZTT_missMassCalc_SR8_EE", 500, -2, 498, 50, 0, 50);  h_mZTT_missMassCalc_SR8_EE->Sumw2();
  h_mZTT_missMassCalc_SR8_MM = new TH2F("h_mZTT_missMassCalc_SR8_MM", "h_mZTT_missMassCalc_SR8_MM", 500, -2, 498, 50, 0, 50);  h_mZTT_missMassCalc_SR8_MM->Sumw2();
  h_mZTT_missMassCalc_SR9_EM = new TH2F("h_mZTT_missMassCalc_SR9_EM", "h_mZTT_missMassCalc_SR9_EM", 500, -2, 498, 50, 0, 50);  h_mZTT_missMassCalc_SR9_EM->Sumw2();
  /*--------------------------------------------------------------------------------*/ 
  h_mTll_SR6_EE = new TH2F("h_mTll_SR6_EE", "h_mTll_SR6_EE", 1000, 0, 1000, 50, 0, 50); h_mTll_SR6_EE->Sumw2();
  h_mTll_SR6_MM = new TH2F("h_mTll_SR6_MM", "h_mTll_SR6_MM", 1000, 0, 1000, 50, 0, 50); h_mTll_SR6_MM->Sumw2();
  h_mTll_SR7_EM = new TH2F("h_mTll_SR7_EM", "h_mTll_SR7_EM", 1000, 0, 1000, 50, 0, 50); h_mTll_SR7_EM->Sumw2();  
  h_mTll_SR8_EE = new TH2F("h_mTll_SR8_EE", "h_mTll_SR8_EE", 1000, 0, 1000, 50, 0, 50); h_mTll_SR8_EE->Sumw2();
  h_mTll_SR8_MM = new TH2F("h_mTll_SR8_MM", "h_mTll_SR8_MM", 1000, 0, 1000, 50, 0, 50); h_mTll_SR8_MM->Sumw2();
  h_mTll_SR9_EM = new TH2F("h_mTll_SR9_EM", "h_mTll_SR9_EM", 1000, 0, 1000, 50, 0, 50); h_mTll_SR9_EM->Sumw2();
  /*--------------------------------------------------------------------------------*/ 
  h_mTlmin_SR6_EE = new TH2F("h_mTlmin_SR6_EE", "h_mTlmin_SR6_EE", 100, 0, 500, 50, 0, 50);  h_mTlmin_SR6_EE->Sumw2();
  h_mTlmin_SR6_MM = new TH2F("h_mTlmin_SR6_MM", "h_mTlmin_SR6_MM", 100, 0, 500, 50, 0, 50);  h_mTlmin_SR6_MM->Sumw2();
  h_mTlmin_SR7_EM = new TH2F("h_mTlmin_SR7_EM", "h_mTlmin_SR7_EM", 100, 0, 500, 50, 0, 50);  h_mTlmin_SR7_EM->Sumw2();  
  h_mTlmin_SR8_EE = new TH2F("h_mTlmin_SR8_EE", "h_mTlmin_SR8_EE", 100, 0, 500, 50, 0, 50);  h_mTlmin_SR8_EE->Sumw2();
  h_mTlmin_SR8_MM = new TH2F("h_mTlmin_SR8_MM", "h_mTlmin_SR8_MM", 100, 0, 500, 50, 0, 50);  h_mTlmin_SR8_MM->Sumw2();
  h_mTlmin_SR9_EM = new TH2F("h_mTlmin_SR9_EM", "h_mTlmin_SR9_EM", 100, 0, 500, 50, 0, 50);  h_mTlmin_SR9_EM->Sumw2();
  
  /*--------------------------------------------------------------------------------*/ 
  h_mJJ_SR6_EE = new TH2F("h_mJJ_SR6_EE", "h_mJJ_SR6_EE", 100, 0, 500, 50, 0, 50);  h_mJJ_SR6_EE->Sumw2();
  h_mJJ_SR6_MM = new TH2F("h_mJJ_SR6_MM", "h_mJJ_SR6_MM", 100, 0, 500, 50, 0, 50);  h_mJJ_SR6_MM->Sumw2();
  h_mJJ_SR7_EM = new TH2F("h_mJJ_SR7_EM", "h_mJJ_SR7_EM", 100, 0, 500, 50, 0, 50);  h_mJJ_SR7_EM->Sumw2();  
  h_mJJ_SR8_EE = new TH2F("h_mJJ_SR8_EE", "h_mJJ_SR8_EE", 100, 0, 500, 50, 0, 50);  h_mJJ_SR8_EE->Sumw2();
  h_mJJ_SR8_MM = new TH2F("h_mJJ_SR8_MM", "h_mJJ_SR8_MM", 100, 0, 500, 50, 0, 50);  h_mJJ_SR8_MM->Sumw2();
  h_mJJ_SR9_EM = new TH2F("h_mJJ_SR9_EM", "h_mJJ_SR9_EM", 100, 0, 500, 50, 0, 50);  h_mJJ_SR9_EM->Sumw2();
  /*--------------------------------------------------------------------------------*/ 
  h_mMETLL_SR6_EE = new TH2F("h_mMETLL_SR6_EE", "h_mMETLL_SR6_EE", 100, 0, 500, 50, 0, 50);  h_mMETLL_SR6_EE->Sumw2();
  h_mMETLL_SR6_MM = new TH2F("h_mMETLL_SR6_MM", "h_mMETLL_SR6_MM", 100, 0, 500, 50, 0, 50);  h_mMETLL_SR6_MM->Sumw2();
  h_mMETLL_SR7_EM = new TH2F("h_mMETLL_SR7_EM", "h_mMETLL_SR7_EM", 100, 0, 500, 50, 0, 50);  h_mMETLL_SR7_EM->Sumw2();  
  h_mMETLL_SR8_EE = new TH2F("h_mMETLL_SR8_EE", "h_mMETLL_SR8_EE", 100, 0, 500, 50, 0, 50);  h_mMETLL_SR8_EE->Sumw2();
  h_mMETLL_SR8_MM = new TH2F("h_mMETLL_SR8_MM", "h_mMETLL_SR8_MM", 100, 0, 500, 50, 0, 50);  h_mMETLL_SR8_MM->Sumw2();
  h_mMETLL_SR9_EM = new TH2F("h_mMETLL_SR9_EM", "h_mMETLL_SR9_EM", 100, 0, 500, 50, 0, 50);  h_mMETLL_SR9_EM->Sumw2();
  
  /*--------------------------------------------------------------------------------*/ 
  h_mCT_SR6_EE = new TH2F("h_mCT_SR6_EE", "h_mCT_SR6_EE", 2, -0.5, 2.5, 50, 0, 50);  h_mCT_SR6_EE->Sumw2();
  h_mCT_SR6_MM = new TH2F("h_mCT_SR6_MM", "h_mCT_SR6_MM", 2, -0.5, 2.5, 50, 0, 50);  h_mCT_SR6_MM->Sumw2();
  h_mCT_SR7_EM = new TH2F("h_mCT_SR7_EM", "h_mCT_SR7_EM", 2, -0.5, 2.5, 50, 0, 50);  h_mCT_SR7_EM->Sumw2();  
  h_mCT_SR8_EE = new TH2F("h_mCT_SR8_EE", "h_mCT_SR8_EE", 2, -0.5, 2.5, 50, 0, 50);  h_mCT_SR8_EE->Sumw2();
  h_mCT_SR8_MM = new TH2F("h_mCT_SR8_MM", "h_mCT_SR8_MM", 2, -0.5, 2.5, 50, 0, 50);  h_mCT_SR8_MM->Sumw2();
  h_mCT_SR9_EM = new TH2F("h_mCT_SR9_EM", "h_mCT_SR9_EM", 2, -0.5, 2.5, 50, 0, 50);  h_mCT_SR9_EM->Sumw2();
  
  /*--------------------------------------------------------------------------------*/ 
  h_pTj1_SR6_EE = new TH2F("h_pTj1_SR6_EE", "h_pTj1_SR6_EE", 100, 0, 500, 50, 0, 50);  h_pTj1_SR6_EE->Sumw2();
  h_pTj1_SR6_MM = new TH2F("h_pTj1_SR6_MM", "h_pTj1_SR6_MM", 100, 0, 500, 50, 0, 50);  h_pTj1_SR6_MM->Sumw2();
  h_pTj1_SR7_EM = new TH2F("h_pTj1_SR7_EM", "h_pTj1_SR7_EM", 100, 0, 500, 50, 0, 50);  h_pTj1_SR7_EM->Sumw2();  
  h_pTj1_SR8_EE = new TH2F("h_pTj1_SR8_EE", "h_pTj1_SR8_EE", 100, 0, 500, 50, 0, 50);  h_pTj1_SR8_EE->Sumw2();
  h_pTj1_SR8_MM = new TH2F("h_pTj1_SR8_MM", "h_pTj1_SR8_MM", 100, 0, 500, 50, 0, 50);  h_pTj1_SR8_MM->Sumw2();
  h_pTj1_SR9_EM = new TH2F("h_pTj1_SR9_EM", "h_pTj1_SR9_EM", 100, 0, 500, 50, 0, 50);  h_pTj1_SR9_EM->Sumw2();
  
  /*--------------------------------------------------------------------------------*/ 
  h_pTj2_SR6_EE = new TH2F("h_pTj2_SR6_EE", "h_pTj2_SR6_EE", 100, 0, 500, 50, 0, 50);  h_pTj2_SR6_EE->Sumw2();
  h_pTj2_SR6_MM = new TH2F("h_pTj2_SR6_MM", "h_pTj2_SR6_MM", 100, 0, 500, 50, 0, 50);  h_pTj2_SR6_MM->Sumw2();
  h_pTj2_SR7_EM = new TH2F("h_pTj2_SR7_EM", "h_pTj2_SR7_EM", 100, 0, 500, 50, 0, 50);  h_pTj2_SR7_EM->Sumw2();  
  h_pTj2_SR8_EE = new TH2F("h_pTj2_SR8_EE", "h_pTj2_SR8_EE", 100, 0, 500, 50, 0, 50);  h_pTj2_SR8_EE->Sumw2();
  h_pTj2_SR8_MM = new TH2F("h_pTj2_SR8_MM", "h_pTj2_SR8_MM", 100, 0, 500, 50, 0, 50);  h_pTj2_SR8_MM->Sumw2();
  h_pTj2_SR9_EM = new TH2F("h_pTj2_SR9_EM", "h_pTj2_SR9_EM", 100, 0, 500, 50, 0, 50);  h_pTj2_SR9_EM->Sumw2();
  
  /*--------------------------------------------------------------------------------*/ 
  h_pTl1_SR6_EE = new TH2F("h_pTl1_SR6_EE", "h_pTl1_SR6_EE", 100, 0, 500, 50, 0, 50);  h_pTl1_SR6_EE->Sumw2();
  h_pTl1_SR6_MM = new TH2F("h_pTl1_SR6_MM", "h_pTl1_SR6_MM", 100, 0, 500, 50, 0, 50);  h_pTl1_SR6_MM->Sumw2();
  h_pTl1_SR7_EM = new TH2F("h_pTl1_SR7_EM", "h_pTl1_SR7_EM", 100, 0, 500, 50, 0, 50);  h_pTl1_SR7_EM->Sumw2();  
  h_pTl1_SR8_EE = new TH2F("h_pTl1_SR8_EE", "h_pTl1_SR8_EE", 100, 0, 500, 50, 0, 50);  h_pTl1_SR8_EE->Sumw2();
  h_pTl1_SR8_MM = new TH2F("h_pTl1_SR8_MM", "h_pTl1_SR8_MM", 100, 0, 500, 50, 0, 50);  h_pTl1_SR8_MM->Sumw2();
  h_pTl1_SR9_EM = new TH2F("h_pTl1_SR9_EM", "h_pTl1_SR9_EM", 100, 0, 500, 50, 0, 50);  h_pTl1_SR9_EM->Sumw2();
  
  /*--------------------------------------------------------------------------------*/ 
  h_pTl2_SR6_EE = new TH2F("h_pTl2_SR6_EE", "h_pTl2_SR6_EE", 100, 0, 500, 50, 0, 50);  h_pTl2_SR6_EE->Sumw2();
  h_pTl2_SR6_MM = new TH2F("h_pTl2_SR6_MM", "h_pTl2_SR6_MM", 100, 0, 500, 50, 0, 50);  h_pTl2_SR6_MM->Sumw2();
  h_pTl2_SR7_EM = new TH2F("h_pTl2_SR7_EM", "h_pTl2_SR7_EM", 100, 0, 500, 50, 0, 50);  h_pTl2_SR7_EM->Sumw2();  
  h_pTl2_SR8_EE = new TH2F("h_pTl2_SR8_EE", "h_pTl2_SR8_EE", 100, 0, 500, 50, 0, 50);  h_pTl2_SR8_EE->Sumw2();
  h_pTl2_SR8_MM = new TH2F("h_pTl2_SR8_MM", "h_pTl2_SR8_MM", 100, 0, 500, 50, 0, 50);  h_pTl2_SR8_MM->Sumw2();
  h_pTl2_SR9_EM = new TH2F("h_pTl2_SR9_EM", "h_pTl2_SR9_EM", 100, 0, 500, 50, 0, 50);  h_pTl2_SR9_EM->Sumw2();
  
  /*--------------------------------------------------------------------------------*/ 
  h_DeltaPhiLL_SR6_EE = new TH2F("h_DeltaPhiLL_SR6_EE", "h_DeltaPhiLL_SR6_EE", 70, 0, 7, 50, 0, 50);  h_DeltaPhiLL_SR6_EE->Sumw2();
  h_DeltaPhiLL_SR6_MM = new TH2F("h_DeltaPhiLL_SR6_MM", "h_DeltaPhiLL_SR6_MM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiLL_SR6_MM->Sumw2();
  h_DeltaPhiLL_SR7_EM = new TH2F("h_DeltaPhiLL_SR7_EM", "h_DeltaPhiLL_SR7_EM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiLL_SR7_EM->Sumw2();  
  h_DeltaPhiLL_SR8_EE = new TH2F("h_DeltaPhiLL_SR8_EE", "h_DeltaPhiLL_SR8_EE", 70, 0, 7, 50, 0, 50);  h_DeltaPhiLL_SR8_EE->Sumw2();
  h_DeltaPhiLL_SR8_MM = new TH2F("h_DeltaPhiLL_SR8_MM", "h_DeltaPhiLL_SR8_MM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiLL_SR8_MM->Sumw2();
  h_DeltaPhiLL_SR9_EM = new TH2F("h_DeltaPhiLL_SR9_EM", "h_DeltaPhiLL_SR9_EM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiLL_SR9_EM->Sumw2();
  
  /*--------------------------------------------------------------------------------*/ 
  h_DeltaPhiJJ_SR6_EE = new TH2F("h_DeltaPhiJJ_SR6_EE", "h_DeltaPhiJJ_SR6_EE", 70, 0, 7, 50, 0, 50);  h_DeltaPhiJJ_SR6_EE->Sumw2();
  h_DeltaPhiJJ_SR6_MM = new TH2F("h_DeltaPhiJJ_SR6_MM", "h_DeltaPhiJJ_SR6_MM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiJJ_SR6_MM->Sumw2();
  h_DeltaPhiJJ_SR7_EM = new TH2F("h_DeltaPhiJJ_SR7_EM", "h_DeltaPhiJJ_SR7_EM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiJJ_SR7_EM->Sumw2();  
  h_DeltaPhiJJ_SR8_EE = new TH2F("h_DeltaPhiJJ_SR8_EE", "h_DeltaPhiJJ_SR8_EE", 70, 0, 7, 50, 0, 50);  h_DeltaPhiJJ_SR8_EE->Sumw2();
  h_DeltaPhiJJ_SR8_MM = new TH2F("h_DeltaPhiJJ_SR8_MM", "h_DeltaPhiJJ_SR8_MM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiJJ_SR8_MM->Sumw2();
  h_DeltaPhiJJ_SR9_EM = new TH2F("h_DeltaPhiJJ_SR9_EM", "h_DeltaPhiJJ_SR9_EM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiJJ_SR9_EM->Sumw2();
  
  /*--------------------------------------------------------------------------------*/ 
  h_pTJJ_SR6_EE = new TH2F("h_pTJJ_SR6_EE", "h_pTJJ_SR6_EE", 100, 0, 500, 50, 0, 50);  h_pTJJ_SR6_EE->Sumw2();
  h_pTJJ_SR6_MM = new TH2F("h_pTJJ_SR6_MM", "h_pTJJ_SR6_MM", 100, 0, 500, 50, 0, 50);  h_pTJJ_SR6_MM->Sumw2();
  h_pTJJ_SR7_EM = new TH2F("h_pTJJ_SR7_EM", "h_pTJJ_SR7_EM", 100, 0, 500, 50, 0, 50);  h_pTJJ_SR7_EM->Sumw2();  
  h_pTJJ_SR8_EE = new TH2F("h_pTJJ_SR8_EE", "h_pTJJ_SR8_EE", 100, 0, 500, 50, 0, 50);  h_pTJJ_SR8_EE->Sumw2();
  h_pTJJ_SR8_MM = new TH2F("h_pTJJ_SR8_MM", "h_pTJJ_SR8_MM", 100, 0, 500, 50, 0, 50);  h_pTJJ_SR8_MM->Sumw2();
  h_pTJJ_SR9_EM = new TH2F("h_pTJJ_SR9_EM", "h_pTJJ_SR9_EM", 100, 0, 500, 50, 0, 50);  h_pTJJ_SR9_EM->Sumw2();
  /*--------------------------------------------------------------------------------*/ 
  h_DeltaPhiMETL1_SR6_EE = new TH2F("h_DeltaPhiMETL1_SR6_EE", "h_DeltaPhiMETL1_SR6_EE", 70, 0, 7, 50, 0, 50);  h_DeltaPhiMETL1_SR6_EE->Sumw2();
  h_DeltaPhiMETL1_SR6_MM = new TH2F("h_DeltaPhiMETL1_SR6_MM", "h_DeltaPhiMETL1_SR6_MM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiMETL1_SR6_MM->Sumw2();
  h_DeltaPhiMETL1_SR7_EM = new TH2F("h_DeltaPhiMETL1_SR7_EM", "h_DeltaPhiMETL1_SR7_EM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiMETL1_SR7_EM->Sumw2();  
  h_DeltaPhiMETL1_SR8_EE = new TH2F("h_DeltaPhiMETL1_SR8_EE", "h_DeltaPhiMETL1_SR8_EE", 70, 0, 7, 50, 0, 50);  h_DeltaPhiMETL1_SR8_EE->Sumw2();
  h_DeltaPhiMETL1_SR8_MM = new TH2F("h_DeltaPhiMETL1_SR8_MM", "h_DeltaPhiMETL1_SR8_MM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiMETL1_SR8_MM->Sumw2();
  h_DeltaPhiMETL1_SR9_EM = new TH2F("h_DeltaPhiMETL1_SR9_EM", "h_DeltaPhiMETL1_SR9_EM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiMETL1_SR9_EM->Sumw2();
  /*--------------------------------------------------------------------------------*/ 
  h_DeltaPhiMETL2_SR6_EE = new TH2F("h_DeltaPhiMETL2_SR6_EE", "h_DeltaPhiMETL2_SR6_EE", 70, 0, 7, 50, 0, 50);  h_DeltaPhiMETL2_SR6_EE->Sumw2();
  h_DeltaPhiMETL2_SR6_MM = new TH2F("h_DeltaPhiMETL2_SR6_MM", "h_DeltaPhiMETL2_SR6_MM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiMETL2_SR6_MM->Sumw2();
  h_DeltaPhiMETL2_SR7_EM = new TH2F("h_DeltaPhiMETL2_SR7_EM", "h_DeltaPhiMETL2_SR7_EM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiMETL2_SR7_EM->Sumw2();  
  h_DeltaPhiMETL2_SR8_EE = new TH2F("h_DeltaPhiMETL2_SR8_EE", "h_DeltaPhiMETL2_SR8_EE", 70, 0, 7, 50, 0, 50);  h_DeltaPhiMETL2_SR8_EE->Sumw2();
  h_DeltaPhiMETL2_SR8_MM = new TH2F("h_DeltaPhiMETL2_SR8_MM", "h_DeltaPhiMETL2_SR8_MM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiMETL2_SR8_MM->Sumw2();
  h_DeltaPhiMETL2_SR9_EM = new TH2F("h_DeltaPhiMETL2_SR9_EM", "h_DeltaPhiMETL2_SR9_EM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiMETL2_SR9_EM->Sumw2();
  /*--------------------------------------------------------------------------------*/ 
  h_DeltaPhiMETJ1_SR6_EE = new TH2F("h_DeltaPhiMETJ1_SR6_EE", "h_DeltaPhiMETJ1_SR6_EE", 70, 0, 7, 50, 0, 50);  h_DeltaPhiMETJ1_SR6_EE->Sumw2();
  h_DeltaPhiMETJ1_SR6_MM = new TH2F("h_DeltaPhiMETJ1_SR6_MM", "h_DeltaPhiMETJ1_SR6_MM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiMETJ1_SR6_MM->Sumw2();
  h_DeltaPhiMETJ1_SR7_EM = new TH2F("h_DeltaPhiMETJ1_SR7_EM", "h_DeltaPhiMETJ1_SR7_EM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiMETJ1_SR7_EM->Sumw2();  
  h_DeltaPhiMETJ1_SR8_EE = new TH2F("h_DeltaPhiMETJ1_SR8_EE", "h_DeltaPhiMETJ1_SR8_EE", 70, 0, 7, 50, 0, 50);  h_DeltaPhiMETJ1_SR8_EE->Sumw2();
  h_DeltaPhiMETJ1_SR8_MM = new TH2F("h_DeltaPhiMETJ1_SR8_MM", "h_DeltaPhiMETJ1_SR8_MM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiMETJ1_SR8_MM->Sumw2();
  h_DeltaPhiMETJ1_SR9_EM = new TH2F("h_DeltaPhiMETJ1_SR9_EM", "h_DeltaPhiMETJ1_SR9_EM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiMETJ1_SR9_EM->Sumw2();
  /*--------------------------------------------------------------------------------*/ 
  h_DeltaPhiMETJ2_SR6_EE = new TH2F("h_DeltaPhiMETJ2_SR6_EE", "h_DeltaPhiMETJ2_SR6_EE", 70, 0, 7, 50, 0, 50);  h_DeltaPhiMETJ2_SR6_EE->Sumw2();
  h_DeltaPhiMETJ2_SR6_MM = new TH2F("h_DeltaPhiMETJ2_SR6_MM", "h_DeltaPhiMETJ2_SR6_MM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiMETJ2_SR6_MM->Sumw2();
  h_DeltaPhiMETJ2_SR7_EM = new TH2F("h_DeltaPhiMETJ2_SR7_EM", "h_DeltaPhiMETJ2_SR7_EM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiMETJ2_SR7_EM->Sumw2();  
  h_DeltaPhiMETJ2_SR8_EE = new TH2F("h_DeltaPhiMETJ2_SR8_EE", "h_DeltaPhiMETJ2_SR8_EE", 70, 0, 7, 50, 0, 50);  h_DeltaPhiMETJ2_SR8_EE->Sumw2();
  h_DeltaPhiMETJ2_SR8_MM = new TH2F("h_DeltaPhiMETJ2_SR8_MM", "h_DeltaPhiMETJ2_SR8_MM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiMETJ2_SR8_MM->Sumw2();
  h_DeltaPhiMETJ2_SR9_EM = new TH2F("h_DeltaPhiMETJ2_SR9_EM", "h_DeltaPhiMETJ2_SR9_EM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiMETJ2_SR9_EM->Sumw2();
  /*--------------------------------------------------------------------------------*/ 
  h_DeltaPhiMETLL_SR6_EE = new TH2F("h_DeltaPhiMETLL_SR6_EE", "h_DeltaPhiMETLL_SR6_EE", 70, 0, 7, 50, 0, 50);  h_DeltaPhiMETLL_SR6_EE->Sumw2();
  h_DeltaPhiMETLL_SR6_MM = new TH2F("h_DeltaPhiMETLL_SR6_MM", "h_DeltaPhiMETLL_SR6_MM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiMETLL_SR6_MM->Sumw2();
  h_DeltaPhiMETLL_SR7_EM = new TH2F("h_DeltaPhiMETLL_SR7_EM", "h_DeltaPhiMETLL_SR7_EM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiMETLL_SR7_EM->Sumw2();  
  h_DeltaPhiMETLL_SR8_EE = new TH2F("h_DeltaPhiMETLL_SR8_EE", "h_DeltaPhiMETLL_SR8_EE", 70, 0, 7, 50, 0, 50);  h_DeltaPhiMETLL_SR8_EE->Sumw2();
  h_DeltaPhiMETLL_SR8_MM = new TH2F("h_DeltaPhiMETLL_SR8_MM", "h_DeltaPhiMETLL_SR8_MM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiMETLL_SR8_MM->Sumw2();
  h_DeltaPhiMETLL_SR9_EM = new TH2F("h_DeltaPhiMETLL_SR9_EM", "h_DeltaPhiMETLL_SR9_EM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiMETLL_SR9_EM->Sumw2();
  /*--------------------------------------------------------------------------------*/ 
  h_DeltaPhiMETJJ_SR6_EE = new TH2F("h_DeltaPhiMETJJ_SR6_EE", "h_DeltaPhiMETJJ_SR6_EE", 70, 0, 7, 50, 0, 50);  h_DeltaPhiMETJJ_SR6_EE->Sumw2();
  h_DeltaPhiMETJJ_SR6_MM = new TH2F("h_DeltaPhiMETJJ_SR6_MM", "h_DeltaPhiMETJJ_SR6_MM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiMETJJ_SR6_MM->Sumw2();
  h_DeltaPhiMETJJ_SR7_EM = new TH2F("h_DeltaPhiMETJJ_SR7_EM", "h_DeltaPhiMETJJ_SR7_EM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiMETJJ_SR7_EM->Sumw2();  
  h_DeltaPhiMETJJ_SR8_EE = new TH2F("h_DeltaPhiMETJJ_SR8_EE", "h_DeltaPhiMETJJ_SR8_EE", 70, 0, 7, 50, 0, 50);  h_DeltaPhiMETJJ_SR8_EE->Sumw2();
  h_DeltaPhiMETJJ_SR8_MM = new TH2F("h_DeltaPhiMETJJ_SR8_MM", "h_DeltaPhiMETJJ_SR8_MM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiMETJJ_SR8_MM->Sumw2();
  h_DeltaPhiMETJJ_SR9_EM = new TH2F("h_DeltaPhiMETJJ_SR9_EM", "h_DeltaPhiMETJJ_SR9_EM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiMETJJ_SR9_EM->Sumw2();
    /*--------------------------------------------------------------------------------*/ 
  h_DeltaRJJ_SR6_EE = new TH2F("h_DeltaRJJ_SR6_EE", "h_DeltaRJJ_SR6_EE", 70, 0, 7, 50, 0, 50);  h_DeltaRJJ_SR6_EE->Sumw2();
  h_DeltaRJJ_SR6_MM = new TH2F("h_DeltaRJJ_SR6_MM", "h_DeltaRJJ_SR6_MM", 70, 0, 7, 50, 0, 50);  h_DeltaRJJ_SR6_MM->Sumw2();
  h_DeltaRJJ_SR7_EM = new TH2F("h_DeltaRJJ_SR7_EM", "h_DeltaRJJ_SR7_EM", 70, 0, 7, 50, 0, 50);  h_DeltaRJJ_SR7_EM->Sumw2();  
  h_DeltaRJJ_SR8_EE = new TH2F("h_DeltaRJJ_SR8_EE", "h_DeltaRJJ_SR8_EE", 70, 0, 7, 50, 0, 50);  h_DeltaRJJ_SR8_EE->Sumw2();
  h_DeltaRJJ_SR8_MM = new TH2F("h_DeltaRJJ_SR8_MM", "h_DeltaRJJ_SR8_MM", 70, 0, 7, 50, 0, 50);  h_DeltaRJJ_SR8_MM->Sumw2();
  h_DeltaRJJ_SR9_EM = new TH2F("h_DeltaRJJ_SR9_EM", "h_DeltaRJJ_SR9_EM", 70, 0, 7, 50, 0, 50);  h_DeltaRJJ_SR9_EM->Sumw2();
    /*--------------------------------------------------------------------------------*/ 
  h_etaL1_SR6_EE = new TH2F("h_etaL1_SR6_EE", "h_etaL1_SR6_EE", 70, 0, 7, 50, 0, 50);  h_etaL1_SR6_EE->Sumw2();
  h_etaL1_SR6_MM = new TH2F("h_etaL1_SR6_MM", "h_etaL1_SR6_MM", 70, 0, 7, 50, 0, 50);  h_etaL1_SR6_MM->Sumw2();
  h_etaL1_SR7_EM = new TH2F("h_etaL1_SR7_EM", "h_etaL1_SR7_EM", 70, 0, 7, 50, 0, 50);  h_etaL1_SR7_EM->Sumw2();  
  h_etaL1_SR8_EE = new TH2F("h_etaL1_SR8_EE", "h_etaL1_SR8_EE", 70, 0, 7, 50, 0, 50);  h_etaL1_SR8_EE->Sumw2();
  h_etaL1_SR8_MM = new TH2F("h_etaL1_SR8_MM", "h_etaL1_SR8_MM", 70, 0, 7, 50, 0, 50);  h_etaL1_SR8_MM->Sumw2();
  h_etaL1_SR9_EM = new TH2F("h_etaL1_SR9_EM", "h_etaL1_SR9_EM", 70, 0, 7, 50, 0, 50);  h_etaL1_SR9_EM->Sumw2();
    /*--------------------------------------------------------------------------------*/ 
  h_etaL2_SR6_EE = new TH2F("h_etaL2_SR6_EE", "h_etaL2_SR6_EE", 70, 0, 7, 50, 0, 50);  h_etaL2_SR6_EE->Sumw2();
  h_etaL2_SR6_MM = new TH2F("h_etaL2_SR6_MM", "h_etaL2_SR6_MM", 70, 0, 7, 50, 0, 50);  h_etaL2_SR6_MM->Sumw2();
  h_etaL2_SR7_EM = new TH2F("h_etaL2_SR7_EM", "h_etaL2_SR7_EM", 70, 0, 7, 50, 0, 50);  h_etaL2_SR7_EM->Sumw2();  
  h_etaL2_SR8_EE = new TH2F("h_etaL2_SR8_EE", "h_etaL2_SR8_EE", 70, 0, 7, 50, 0, 50);  h_etaL2_SR8_EE->Sumw2();
  h_etaL2_SR8_MM = new TH2F("h_etaL2_SR8_MM", "h_etaL2_SR8_MM", 70, 0, 7, 50, 0, 50);  h_etaL2_SR8_MM->Sumw2();
  h_etaL2_SR9_EM = new TH2F("h_etaL2_SR9_EM", "h_etaL2_SR9_EM", 70, 0, 7, 50, 0, 50);  h_etaL2_SR9_EM->Sumw2();
    /*--------------------------------------------------------------------------------*/ 
  h_etaJ1_SR6_EE = new TH2F("h_etaJ1_SR6_EE", "h_etaJ1_SR6_EE", 70, 0, 7, 50, 0, 50);  h_etaJ1_SR6_EE->Sumw2();
  h_etaJ1_SR6_MM = new TH2F("h_etaJ1_SR6_MM", "h_etaJ1_SR6_MM", 70, 0, 7, 50, 0, 50);  h_etaJ1_SR6_MM->Sumw2();
  h_etaJ1_SR7_EM = new TH2F("h_etaJ1_SR7_EM", "h_etaJ1_SR7_EM", 70, 0, 7, 50, 0, 50);  h_etaJ1_SR7_EM->Sumw2();  
  h_etaJ1_SR8_EE = new TH2F("h_etaJ1_SR8_EE", "h_etaJ1_SR8_EE", 70, 0, 7, 50, 0, 50);  h_etaJ1_SR8_EE->Sumw2();
  h_etaJ1_SR8_MM = new TH2F("h_etaJ1_SR8_MM", "h_etaJ1_SR8_MM", 70, 0, 7, 50, 0, 50);  h_etaJ1_SR8_MM->Sumw2();
  h_etaJ1_SR9_EM = new TH2F("h_etaJ1_SR9_EM", "h_etaJ1_SR9_EM", 70, 0, 7, 50, 0, 50);  h_etaJ1_SR9_EM->Sumw2();
    /*--------------------------------------------------------------------------------*/ 
  h_etaJ2_SR6_EE = new TH2F("h_etaJ2_SR6_EE", "h_etaJ2_SR6_EE", 70, 0, 7, 50, 0, 50);  h_etaJ2_SR6_EE->Sumw2();
  h_etaJ2_SR6_MM = new TH2F("h_etaJ2_SR6_MM", "h_etaJ2_SR6_MM", 70, 0, 7, 50, 0, 50);  h_etaJ2_SR6_MM->Sumw2();
  h_etaJ2_SR7_EM = new TH2F("h_etaJ2_SR7_EM", "h_etaJ2_SR7_EM", 70, 0, 7, 50, 0, 50);  h_etaJ2_SR7_EM->Sumw2();  
  h_etaJ2_SR8_EE = new TH2F("h_etaJ2_SR8_EE", "h_etaJ2_SR8_EE", 70, 0, 7, 50, 0, 50);  h_etaJ2_SR8_EE->Sumw2();
  h_etaJ2_SR8_MM = new TH2F("h_etaJ2_SR8_MM", "h_etaJ2_SR8_MM", 70, 0, 7, 50, 0, 50);  h_etaJ2_SR8_MM->Sumw2();
  h_etaJ2_SR9_EM = new TH2F("h_etaJ2_SR9_EM", "h_etaJ2_SR9_EM", 70, 0, 7, 50, 0, 50);  h_etaJ2_SR9_EM->Sumw2();
    /*--------------------------------------------------------------------------------*/ 
  h_DeltaEtaJJ_SR6_EE = new TH2F("h_DeltaEtaJJ_SR6_EE", "h_DeltaEtaJJ_SR6_EE", 70, 0, 7, 50, 0, 50);  h_DeltaEtaJJ_SR6_EE->Sumw2();
  h_DeltaEtaJJ_SR6_MM = new TH2F("h_DeltaEtaJJ_SR6_MM", "h_DeltaEtaJJ_SR6_MM", 70, 0, 7, 50, 0, 50);  h_DeltaEtaJJ_SR6_MM->Sumw2();
  h_DeltaEtaJJ_SR7_EM = new TH2F("h_DeltaEtaJJ_SR7_EM", "h_DeltaEtaJJ_SR7_EM", 70, 0, 7, 50, 0, 50);  h_DeltaEtaJJ_SR7_EM->Sumw2();  
  h_DeltaEtaJJ_SR8_EE = new TH2F("h_DeltaEtaJJ_SR8_EE", "h_DeltaEtaJJ_SR8_EE", 70, 0, 7, 50, 0, 50);  h_DeltaEtaJJ_SR8_EE->Sumw2();
  h_DeltaEtaJJ_SR8_MM = new TH2F("h_DeltaEtaJJ_SR8_MM", "h_DeltaEtaJJ_SR8_MM", 70, 0, 7, 50, 0, 50);  h_DeltaEtaJJ_SR8_MM->Sumw2();
  h_DeltaEtaJJ_SR9_EM = new TH2F("h_DeltaEtaJJ_SR9_EM", "h_DeltaEtaJJ_SR9_EM", 70, 0, 7, 50, 0, 50);  h_DeltaEtaJJ_SR9_EM->Sumw2();
    /*--------------------------------------------------------------------------------*/ 
  h_DeltaYJJ_SR6_EE = new TH2F("h_DeltaYJJ_SR6_EE", "h_DeltaYJJ_SR6_EE", 70, 0, 7, 50, 0, 50);  h_DeltaYJJ_SR6_EE->Sumw2();
  h_DeltaYJJ_SR6_MM = new TH2F("h_DeltaYJJ_SR6_MM", "h_DeltaYJJ_SR6_MM", 70, 0, 7, 50, 0, 50);  h_DeltaYJJ_SR6_MM->Sumw2();
  h_DeltaYJJ_SR7_EM = new TH2F("h_DeltaYJJ_SR7_EM", "h_DeltaYJJ_SR7_EM", 70, 0, 7, 50, 0, 50);  h_DeltaYJJ_SR7_EM->Sumw2();  
  h_DeltaYJJ_SR8_EE = new TH2F("h_DeltaYJJ_SR8_EE", "h_DeltaYJJ_SR8_EE", 70, 0, 7, 50, 0, 50);  h_DeltaYJJ_SR8_EE->Sumw2();
  h_DeltaYJJ_SR8_MM = new TH2F("h_DeltaYJJ_SR8_MM", "h_DeltaYJJ_SR8_MM", 70, 0, 7, 50, 0, 50);  h_DeltaYJJ_SR8_MM->Sumw2();
  h_DeltaYJJ_SR9_EM = new TH2F("h_DeltaYJJ_SR9_EM", "h_DeltaYJJ_SR9_EM", 70, 0, 7, 50, 0, 50);  h_DeltaYJJ_SR9_EM->Sumw2();
  /*--------------------------------------------------------------------------------*/ 
  h_mTL1MET_SR6_EE = new TH2F("h_mTL1MET_SR6_EE", "h_mTL1MET_SR6_EE", 100, 0, 500, 50, 0, 50);  h_mTL1MET_SR6_EE->Sumw2();
  h_mTL1MET_SR6_MM = new TH2F("h_mTL1MET_SR6_MM", "h_mTL1MET_SR6_MM", 100, 0, 500, 50, 0, 50);  h_mTL1MET_SR6_MM->Sumw2();
  h_mTL1MET_SR7_EM = new TH2F("h_mTL1MET_SR7_EM", "h_mTL1MET_SR7_EM", 100, 0, 500, 50, 0, 50);  h_mTL1MET_SR7_EM->Sumw2();  
  h_mTL1MET_SR8_EE = new TH2F("h_mTL1MET_SR8_EE", "h_mTL1MET_SR8_EE", 100, 0, 500, 50, 0, 50);  h_mTL1MET_SR8_EE->Sumw2();
  h_mTL1MET_SR8_MM = new TH2F("h_mTL1MET_SR8_MM", "h_mTL1MET_SR8_MM", 100, 0, 500, 50, 0, 50);  h_mTL1MET_SR8_MM->Sumw2();
  h_mTL1MET_SR9_EM = new TH2F("h_mTL1MET_SR9_EM", "h_mTL1MET_SR9_EM", 100, 0, 500, 50, 0, 50);  h_mTL1MET_SR9_EM->Sumw2();
  /*--------------------------------------------------------------------------------*/ 
  h_mTL2MET_SR6_EE = new TH2F("h_mTL2MET_SR6_EE", "h_mTL2MET_SR6_EE", 100, 0, 500, 50, 0, 50);  h_mTL2MET_SR6_EE->Sumw2();
  h_mTL2MET_SR6_MM = new TH2F("h_mTL2MET_SR6_MM", "h_mTL2MET_SR6_MM", 100, 0, 500, 50, 0, 50);  h_mTL2MET_SR6_MM->Sumw2();
  h_mTL2MET_SR7_EM = new TH2F("h_mTL2MET_SR7_EM", "h_mTL2MET_SR7_EM", 100, 0, 500, 50, 0, 50);  h_mTL2MET_SR7_EM->Sumw2();  
  h_mTL2MET_SR8_EE = new TH2F("h_mTL2MET_SR8_EE", "h_mTL2MET_SR8_EE", 100, 0, 500, 50, 0, 50);  h_mTL2MET_SR8_EE->Sumw2();
  h_mTL2MET_SR8_MM = new TH2F("h_mTL2MET_SR8_MM", "h_mTL2MET_SR8_MM", 100, 0, 500, 50, 0, 50);  h_mTL2MET_SR8_MM->Sumw2();
  h_mTL2MET_SR9_EM = new TH2F("h_mTL2MET_SR9_EM", "h_mTL2MET_SR9_EM", 100, 0, 500, 50, 0, 50);  h_mTL2MET_SR9_EM->Sumw2();
  /*--------------------------------------------------------------------------------*/ 
  h_NJets_SR6_EE = new TH2F("h_NJets_SR6_EE", "h_NJets_SR6_EE", 11, -0.5, 10.5, 50, 0, 50);  h_NJets_SR6_EE->Sumw2();
  h_NJets_SR6_MM = new TH2F("h_NJets_SR6_MM", "h_NJets_SR6_MM", 11, -0.5, 10.5, 50, 0, 50);  h_NJets_SR6_MM->Sumw2();
  h_NJets_SR7_EM = new TH2F("h_NJets_SR7_EM", "h_NJets_SR7_EM", 11, -0.5, 10.5, 50, 0, 50);  h_NJets_SR7_EM->Sumw2();  
  h_NJets_SR8_EE = new TH2F("h_NJets_SR8_EE", "h_NJets_SR8_EE", 11, -0.5, 10.5, 50, 0, 50);  h_NJets_SR8_EE->Sumw2();
  h_NJets_SR8_MM = new TH2F("h_NJets_SR8_MM", "h_NJets_SR8_MM", 11, -0.5, 10.5, 50, 0, 50);  h_NJets_SR8_MM->Sumw2();
  h_NJets_SR9_EM = new TH2F("h_NJets_SR9_EM", "h_NJets_SR9_EM", 11, -0.5, 10.5, 50, 0, 50);  h_NJets_SR9_EM->Sumw2();
  
  /*--------------------------------------------------------------------------------*/ 
  h_DeltaPhiLLJJ_SR6_EE = new TH2F("h_DeltaPhiLLJJ_SR6_EE", "h_DeltaPhiLLJJ_SR6_EE", 70, 0, 7, 50, 0, 50);  h_DeltaPhiLLJJ_SR6_EE->Sumw2();
  h_DeltaPhiLLJJ_SR6_MM = new TH2F("h_DeltaPhiLLJJ_SR6_MM", "h_DeltaPhiLLJJ_SR6_MM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiLLJJ_SR6_MM->Sumw2();
  h_DeltaPhiLLJJ_SR7_EM = new TH2F("h_DeltaPhiLLJJ_SR7_EM", "h_DeltaPhiLLJJ_SR7_EM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiLLJJ_SR7_EM->Sumw2();  
  h_DeltaPhiLLJJ_SR8_EE = new TH2F("h_DeltaPhiLLJJ_SR8_EE", "h_DeltaPhiLLJJ_SR8_EE", 70, 0, 7, 50, 0, 50);  h_DeltaPhiLLJJ_SR8_EE->Sumw2();
  h_DeltaPhiLLJJ_SR8_MM = new TH2F("h_DeltaPhiLLJJ_SR8_MM", "h_DeltaPhiLLJJ_SR8_MM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiLLJJ_SR8_MM->Sumw2();
  h_DeltaPhiLLJJ_SR9_EM = new TH2F("h_DeltaPhiLLJJ_SR9_EM", "h_DeltaPhiLLJJ_SR9_EM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiLLJJ_SR9_EM->Sumw2();
  /*--------------------------------------------------------------------------------*/ 
  h_DeltaPhiL1JJ_SR6_EE = new TH2F("h_DeltaPhiL1JJ_SR6_EE", "h_DeltaPhiL1JJ_SR6_EE", 70, 0, 7, 50, 0, 50);  h_DeltaPhiL1JJ_SR6_EE->Sumw2();
  h_DeltaPhiL1JJ_SR6_MM = new TH2F("h_DeltaPhiL1JJ_SR6_MM", "h_DeltaPhiL1JJ_SR6_MM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiL1JJ_SR6_MM->Sumw2();
  h_DeltaPhiL1JJ_SR7_EM = new TH2F("h_DeltaPhiL1JJ_SR7_EM", "h_DeltaPhiL1JJ_SR7_EM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiL1JJ_SR7_EM->Sumw2();  
  h_DeltaPhiL1JJ_SR8_EE = new TH2F("h_DeltaPhiL1JJ_SR8_EE", "h_DeltaPhiL1JJ_SR8_EE", 70, 0, 7, 50, 0, 50);  h_DeltaPhiL1JJ_SR8_EE->Sumw2();
  h_DeltaPhiL1JJ_SR8_MM = new TH2F("h_DeltaPhiL1JJ_SR8_MM", "h_DeltaPhiL1JJ_SR8_MM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiL1JJ_SR8_MM->Sumw2();
  h_DeltaPhiL1JJ_SR9_EM = new TH2F("h_DeltaPhiL1JJ_SR9_EM", "h_DeltaPhiL1JJ_SR9_EM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiL1JJ_SR9_EM->Sumw2();
  /*--------------------------------------------------------------------------------*/ 
  h_DeltaPhiL2JJ_SR6_EE = new TH2F("h_DeltaPhiL2JJ_SR6_EE", "h_DeltaPhiL2JJ_SR6_EE", 70, 0, 7, 50, 0, 50);  h_DeltaPhiL2JJ_SR6_EE->Sumw2();
  h_DeltaPhiL2JJ_SR6_MM = new TH2F("h_DeltaPhiL2JJ_SR6_MM", "h_DeltaPhiL2JJ_SR6_MM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiL2JJ_SR6_MM->Sumw2();
  h_DeltaPhiL2JJ_SR7_EM = new TH2F("h_DeltaPhiL2JJ_SR7_EM", "h_DeltaPhiL2JJ_SR7_EM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiL2JJ_SR7_EM->Sumw2();  
  h_DeltaPhiL2JJ_SR8_EE = new TH2F("h_DeltaPhiL2JJ_SR8_EE", "h_DeltaPhiL2JJ_SR8_EE", 70, 0, 7, 50, 0, 50);  h_DeltaPhiL2JJ_SR8_EE->Sumw2();
  h_DeltaPhiL2JJ_SR8_MM = new TH2F("h_DeltaPhiL2JJ_SR8_MM", "h_DeltaPhiL2JJ_SR8_MM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiL2JJ_SR8_MM->Sumw2();
  h_DeltaPhiL2JJ_SR9_EM = new TH2F("h_DeltaPhiL2JJ_SR9_EM", "h_DeltaPhiL2JJ_SR9_EM", 70, 0, 7, 50, 0, 50);  h_DeltaPhiL2JJ_SR9_EM->Sumw2();
  /*--------------------------------------------------------------------------------*/ 
  h_DeltaRLLJJ_SR6_EE = new TH2F("h_DeltaRLLJJ_SR6_EE", "h_DeltaRLLJJ_SR6_EE", 70, 0, 7, 50, 0, 50);  h_DeltaRLLJJ_SR6_EE->Sumw2();
  h_DeltaRLLJJ_SR6_MM = new TH2F("h_DeltaRLLJJ_SR6_MM", "h_DeltaRLLJJ_SR6_MM", 70, 0, 7, 50, 0, 50);  h_DeltaRLLJJ_SR6_MM->Sumw2();
  h_DeltaRLLJJ_SR7_EM = new TH2F("h_DeltaRLLJJ_SR7_EM", "h_DeltaRLLJJ_SR7_EM", 70, 0, 7, 50, 0, 50);  h_DeltaRLLJJ_SR7_EM->Sumw2();  
  h_DeltaRLLJJ_SR8_EE = new TH2F("h_DeltaRLLJJ_SR8_EE", "h_DeltaRLLJJ_SR8_EE", 70, 0, 7, 50, 0, 50);  h_DeltaRLLJJ_SR8_EE->Sumw2();
  h_DeltaRLLJJ_SR8_MM = new TH2F("h_DeltaRLLJJ_SR8_MM", "h_DeltaRLLJJ_SR8_MM", 70, 0, 7, 50, 0, 50);  h_DeltaRLLJJ_SR8_MM->Sumw2();
  h_DeltaRLLJJ_SR9_EM = new TH2F("h_DeltaRLLJJ_SR9_EM", "h_DeltaRLLJJ_SR9_EM", 70, 0, 7, 50, 0, 50);  h_DeltaRLLJJ_SR9_EM->Sumw2();
  /*--------------------------------------------------------------------------------*/ 
  h_NBJets_SR6_EE = new TH2F("h_NBJets_SR6_EE", "h_NBJets_SR6_EE", 11, -0.5, 10.5, 50, 0, 50);  h_NBJets_SR6_EE->Sumw2();
  h_NBJets_SR6_MM = new TH2F("h_NBJets_SR6_MM", "h_NBJets_SR6_MM", 11, -0.5, 10.5, 50, 0, 50);  h_NBJets_SR6_MM->Sumw2();
  h_NBJets_SR7_EM = new TH2F("h_NBJets_SR7_EM", "h_NBJets_SR7_EM", 11, -0.5, 10.5, 50, 0, 50);  h_NBJets_SR7_EM->Sumw2();  
  h_NBJets_SR8_EE = new TH2F("h_NBJets_SR8_EE", "h_NBJets_SR8_EE", 11, -0.5, 10.5, 50, 0, 50);  h_NBJets_SR8_EE->Sumw2();
  h_NBJets_SR8_MM = new TH2F("h_NBJets_SR8_MM", "h_NBJets_SR8_MM", 11, -0.5, 10.5, 50, 0, 50);  h_NBJets_SR8_MM->Sumw2();
  h_NBJets_SR9_EM = new TH2F("h_NBJets_SR9_EM", "h_NBJets_SR9_EM", 11, -0.5, 10.5, 50, 0, 50);  h_NBJets_SR9_EM->Sumw2();
  /*--------------------------------------------------------------------------------*/ 
  h_NCJets_SR6_EE = new TH2F("h_NCJets_SR6_EE", "h_NCJets_SR6_EE", 11, -0.5, 10.5, 50, 0, 50);  h_NCJets_SR6_EE->Sumw2();
  h_NCJets_SR6_MM = new TH2F("h_NCJets_SR6_MM", "h_NCJets_SR6_MM", 11, -0.5, 10.5, 50, 0, 50);  h_NCJets_SR6_MM->Sumw2();
  h_NCJets_SR7_EM = new TH2F("h_NCJets_SR7_EM", "h_NCJets_SR7_EM", 11, -0.5, 10.5, 50, 0, 50);  h_NCJets_SR7_EM->Sumw2();  
  h_NCJets_SR8_EE = new TH2F("h_NCJets_SR8_EE", "h_NCJets_SR8_EE", 11, -0.5, 10.5, 50, 0, 50);  h_NCJets_SR8_EE->Sumw2();
  h_NCJets_SR8_MM = new TH2F("h_NCJets_SR8_MM", "h_NCJets_SR8_MM", 11, -0.5, 10.5, 50, 0, 50);  h_NCJets_SR8_MM->Sumw2();
  h_NCJets_SR9_EM = new TH2F("h_NCJets_SR9_EM", "h_NCJets_SR9_EM", 11, -0.5, 10.5, 50, 0, 50);  h_NCJets_SR9_EM->Sumw2();
  /*--------------------------------------------------------------------------------*/ 
  h_MET_SR6_EE = new TH2F("h_MET_SR6_EE", "h_MET_SR6_EE", 100, 0, 500, 50, 0, 50);  h_MET_SR6_EE->Sumw2();
  h_MET_SR6_MM = new TH2F("h_MET_SR6_MM", "h_MET_SR6_MM", 100, 0, 500, 50, 0, 50);  h_MET_SR6_MM->Sumw2();
  h_MET_SR7_EM = new TH2F("h_MET_SR7_EM", "h_MET_SR7_EM", 100, 0, 500, 50, 0, 50);  h_MET_SR7_EM->Sumw2();  
  h_MET_SR8_EE = new TH2F("h_MET_SR8_EE", "h_MET_SR8_EE", 100, 0, 500, 50, 0, 50);  h_MET_SR8_EE->Sumw2();
  h_MET_SR8_MM = new TH2F("h_MET_SR8_MM", "h_MET_SR8_MM", 100, 0, 500, 50, 0, 50);  h_MET_SR8_MM->Sumw2();
  h_MET_SR9_EM = new TH2F("h_MET_SR9_EM", "h_MET_SR9_EM", 100, 0, 500, 50, 0, 50);  h_MET_SR9_EM->Sumw2();
  /*--------------------------------------------------------------------------------*/ 
  h_HT_SR6_EE = new TH2F("h_HT_SR6_EE", "h_HT_SR6_EE", 100, 0, 500, 50, 0, 50);  h_HT_SR6_EE->Sumw2();
  h_HT_SR6_MM = new TH2F("h_HT_SR6_MM", "h_HT_SR6_MM", 100, 0, 500, 50, 0, 50);  h_HT_SR6_MM->Sumw2();
  h_HT_SR7_EM = new TH2F("h_HT_SR7_EM", "h_HT_SR7_EM", 100, 0, 500, 50, 0, 50);  h_HT_SR7_EM->Sumw2();  
  h_HT_SR8_EE = new TH2F("h_HT_SR8_EE", "h_HT_SR8_EE", 100, 0, 500, 50, 0, 50);  h_HT_SR8_EE->Sumw2();
  h_HT_SR8_MM = new TH2F("h_HT_SR8_MM", "h_HT_SR8_MM", 100, 0, 500, 50, 0, 50);  h_HT_SR8_MM->Sumw2();
  h_HT_SR9_EM = new TH2F("h_HT_SR9_EM", "h_HT_SR9_EM", 100, 0, 500, 50, 0, 50);  h_HT_SR9_EM->Sumw2();
  /*--------------------------------------------------------------------------------*/ 
  h_mWWt_SR6_EE = new TH2F("h_mWWt_SR6_EE", "h_mWWt_SR6_EE", 100, 0, 500, 50, 0, 50);  h_mWWt_SR6_EE->Sumw2();
  h_mWWt_SR6_MM = new TH2F("h_mWWt_SR6_MM", "h_mWWt_SR6_MM", 100, 0, 500, 50, 0, 50);  h_mWWt_SR6_MM->Sumw2();
  h_mWWt_SR7_EM = new TH2F("h_mWWt_SR7_EM", "h_mWWt_SR7_EM", 100, 0, 500, 50, 0, 50);  h_mWWt_SR7_EM->Sumw2();  
  h_mWWt_SR8_EE = new TH2F("h_mWWt_SR8_EE", "h_mWWt_SR8_EE", 100, 0, 500, 50, 0, 50);  h_mWWt_SR8_EE->Sumw2();
  h_mWWt_SR8_MM = new TH2F("h_mWWt_SR8_MM", "h_mWWt_SR8_MM", 100, 0, 500, 50, 0, 50);  h_mWWt_SR8_MM->Sumw2();
  h_mWWt_SR9_EM = new TH2F("h_mWWt_SR9_EM", "h_mWWt_SR9_EM", 100, 0, 500, 50, 0, 50);  h_mWWt_SR9_EM->Sumw2();






  cutflow_EE = new TH1F("cutflow_EE", "cutflow_EE", 100, 0, 99);
  cutflow_EE_MCWeight = new TH1F("cutflow_EE_MCWeight", "cutflow_EE_MCWeight", 100, 0, 99);
  cutflow_EE_LSF = new TH1F("cutflow_EE_LSF", "cutflow_EE_LSF", 100, 0, 99);
  cutflow_EE_bTagWeight = new TH1F("cutflow_EE_bTagWeight", "cutflow_EE_bTagWeight", 100, 0, 99);
  cutflow_EE_chargeFlipWeight = new TH1F("cutflow_EE_chargeFlipWeight", "cutflow_EE_chargeFlipWeight", 100, 0, 99);
  cutflow_EE_triggerWeight = new TH1F("cutflow_EE_triggerWeight", "cutflow_EE_triggerWeight", 100, 0, 99);
  cutflow_EE_ALL = new TH1F("cutflow_EE_ALL", "cutflow_EE_ALL", 100, 0, 99);

  cutflow_MM = new TH1F("cutflow_MM", "cutflow_MM", 100, 0, 99);
  cutflow_MM_MCWeight = new TH1F("cutflow_MM_MCWeight", "cutflow_MM_MCWeight", 100, 0, 99);
  cutflow_MM_LSF = new TH1F("cutflow_MM_LSF", "cutflow_MM_LSF", 100, 0, 99);
  cutflow_MM_bTagWeight = new TH1F("cutflow_MM_bTagWeight", "cutflow_MM_bTagWeight", 100, 0, 99);
  cutflow_MM_triggerWeight = new TH1F("cutflow_MM_triggerWeight", "cutflow_MM_triggerWeight", 100, 0, 99);
  cutflow_MM_ALL = new TH1F("cutflow_MM_ALL", "cutflow_MM_ALL", 100, 0, 99);

  cutflow_EM = new TH1F("cutflow_EM", "cutflow_EM", 100, 0, 99);
  cutflow_EM_MCWeight = new TH1F("cutflow_EM_MCWeight", "cutflow_EM_MCWeight", 100, 0, 99);
  cutflow_EM_LSF = new TH1F("cutflow_EM_LSF", "cutflow_EM_LSF", 100, 0, 99);
  cutflow_EM_bTagWeight = new TH1F("cutflow_EM_bTagWeight", "cutflow_EM_bTagWeight", 100, 0, 99);
  cutflow_EM_chargeFlipWeight = new TH1F("cutflow_EM_chargeFlipWeight", "cutflow_EM_chargeFlipWeight", 100, 0, 99);
  cutflow_EM_triggerWeight = new TH1F("cutflow_EM_triggerWeight", "cutflow_EM_triggerWeight", 100, 0, 99);  
  cutflow_EM_ALL = new TH1F("cutflow_EM_ALL", "cutflow_EM_ALL", 100, 0, 99);  

  cutflow_ME = new TH1F("cutflow_ME", "cutflow_ME", 100, 0, 99);
  cutflow_ME_MCWeight = new TH1F("cutflow_ME_MCWeight", "cutflow_ME_MCWeight", 100, 0, 99);
  cutflow_ME_LSF = new TH1F("cutflow_ME_LSF", "cutflow_ME_LSF", 100, 0, 99);
  cutflow_ME_bTagWeight = new TH1F("cutflow_ME_bTagWeight", "cutflow_ME_bTagWeight", 100, 0, 99);
  cutflow_ME_chargeFlipWeight = new TH1F("cutflow_ME_chargeFlipWeight", "cutflow_ME_chargeFlipWeight", 100, 0, 99);
  cutflow_ME_triggerWeight = new TH1F("cutflow_ME_triggerWeight", "cutflow_EE_triggerWeight", 100, 0, 99);
  cutflow_ME_ALL = new TH1F("cutflow_ME_ALL", "cutflow_ME_ALL", 100, 0, 99);
  
  return true;

}


bool TSelector_SusyNtuple::writeHistos(){
  
    h_storeSumwMcid->Write();
    h_N_events_EE->Write();
    h_N_events_MM->Write();
    h_N_events_EM->Write();
    //---------------------------    
    h_N_events_SR6_EE->Write();
    h_N_events_SR6_MM->Write();
    h_N_events_SR7_EM->Write();    
    h_N_events_SR8_EE->Write();
    h_N_events_SR8_MM->Write(); 
    h_N_events_SR9_EM->Write();
    //---------------------------    
    h_METrel_SR6_EE->Write();
    h_METrel_SR6_MM->Write();
    h_METrel_SR7_EM->Write();    
    h_METrel_SR8_EE->Write();
    h_METrel_SR8_MM->Write();   
    h_METrel_SR9_EM->Write();
    //---------------------------    
    h_DeltaRLeptons_SR6_EE->Write();
    h_DeltaRLeptons_SR6_MM->Write();
    h_DeltaRLeptons_SR7_EM->Write();
    h_DeltaRLeptons_SR8_EE->Write();
    h_DeltaRLeptons_SR8_MM->Write();
    h_DeltaRLeptons_SR9_EM->Write();
        //---------------------------    
    h_mt2_SR6_EE->Write();
    h_mt2_SR6_MM->Write();
    h_mt2_SR7_EM->Write();
    h_mt2_SR8_EE->Write();
    h_mt2_SR8_MM->Write();
    h_mt2_SR9_EM->Write();
    //---------------------------    
    h_ptll_SR6_EE->Write();
    h_ptll_SR6_MM->Write();
    h_ptll_SR7_EM->Write();
    h_ptll_SR8_EE->Write();
    h_ptll_SR8_MM->Write();
    h_ptll_SR9_EM->Write();
    //---------------------------    
    h_Mll_SR6_EE->Write();
    h_Mll_SR6_MM->Write();
    h_Mll_SR7_EM->Write();
    h_Mll_SR8_EE->Write();
    h_Mll_SR8_MM->Write();
    h_Mll_SR9_EM->Write();
    //---------------------------    
    h_mZTT_coll_SR6_EE->Write();
    h_mZTT_coll_SR6_MM->Write();
    h_mZTT_coll_SR7_EM->Write();
    h_mZTT_coll_SR8_EE->Write();
    h_mZTT_coll_SR8_MM->Write();
    h_mZTT_coll_SR9_EM->Write();
    //---------------------------    
    h_mZTT_mmc_SR6_EE->Write();
    h_mZTT_mmc_SR6_MM->Write();
    h_mZTT_mmc_SR7_EM->Write();
    h_mZTT_mmc_SR8_EE->Write();
    h_mZTT_mmc_SR8_MM->Write();
    h_mZTT_mmc_SR9_EM->Write();
    //---------------------------    
    h_mZTT_missMassCalc_SR6_EE->Write();
    h_mZTT_missMassCalc_SR6_MM->Write();
    h_mZTT_missMassCalc_SR7_EM->Write();
    h_mZTT_missMassCalc_SR8_EE->Write();
    h_mZTT_missMassCalc_SR8_MM->Write();
    h_mZTT_missMassCalc_SR9_EM->Write();    
    //---------------------------    
    h_mTll_SR6_EE->Write();
    h_mTll_SR6_MM->Write();
    h_mTll_SR7_EM->Write();
    h_mTll_SR8_EE->Write();
    h_mTll_SR8_MM->Write();
    h_mTll_SR9_EM->Write();
    //---------------------------    
    h_mTlmin_SR6_EE->Write();
    h_mTlmin_SR6_MM->Write();
    h_mTlmin_SR7_EM->Write();
    h_mTlmin_SR8_EE->Write();
    h_mTlmin_SR8_MM->Write();
    h_mTlmin_SR9_EM->Write();
    //--------------------------- 
    h_mJJ_SR6_EE->Write();
    h_mJJ_SR6_MM->Write();
    h_mJJ_SR7_EM->Write();
    h_mJJ_SR8_EE->Write();
    h_mJJ_SR8_MM->Write();
    h_mJJ_SR9_EM->Write();
    //--------------
    h_mMETLL_SR6_EE->Write(); 
    h_mMETLL_SR6_MM->Write(); 
    h_mMETLL_SR7_EM->Write(); 
    h_mMETLL_SR8_EE->Write(); 
    h_mMETLL_SR8_MM->Write(); 
    h_mMETLL_SR9_EM->Write(); 

    //---------------
    h_mCT_SR6_EE->Write();
    h_mCT_SR6_MM->Write();
    h_mCT_SR7_EM->Write();
    h_mCT_SR8_EE->Write();
    h_mCT_SR8_MM->Write();
    h_mCT_SR9_EM->Write();
    
    //---------------
    h_pTj1_SR6_EE->Write();
    h_pTj1_SR6_MM->Write();
    h_pTj1_SR7_EM->Write();
    h_pTj1_SR8_EE->Write();
    h_pTj1_SR8_MM->Write();
    h_pTj1_SR9_EM->Write();
    
    //-----------
    h_pTj2_SR6_EE->Write();
    h_pTj2_SR6_MM->Write();
    h_pTj2_SR7_EM->Write();
    h_pTj2_SR8_EE->Write();
    h_pTj2_SR8_MM->Write();
    h_pTj2_SR9_EM->Write();
    
    //-----------
    h_pTl1_SR6_EE->Write();
    h_pTl1_SR6_MM->Write();
    h_pTl1_SR7_EM->Write();
    h_pTl1_SR8_EE->Write();
    h_pTl1_SR8_MM->Write();
    h_pTl1_SR9_EM->Write();
    
    //-----------
    h_pTl2_SR6_EE->Write();
    h_pTl2_SR6_MM->Write();
    h_pTl2_SR7_EM->Write();
    h_pTl2_SR8_EE->Write();
    h_pTl2_SR8_MM->Write();
    h_pTl2_SR9_EM->Write();
    
    //--------------------------- 
    h_DeltaPhiLL_SR6_EE->Write();
    h_DeltaPhiLL_SR6_MM->Write();
    h_DeltaPhiLL_SR7_EM->Write();
    h_DeltaPhiLL_SR8_EE->Write();
    h_DeltaPhiLL_SR8_MM->Write();
    h_DeltaPhiLL_SR9_EM->Write();
    
    //-----------------
    h_DeltaPhiJJ_SR6_EE->Write();
    h_DeltaPhiJJ_SR6_MM->Write();
    h_DeltaPhiJJ_SR7_EM->Write();
    h_DeltaPhiJJ_SR8_EE->Write();
    h_DeltaPhiJJ_SR8_MM->Write();
    h_DeltaPhiJJ_SR9_EM->Write();
    
    //-----------------
    h_pTJJ_SR6_EE->Write();
    h_pTJJ_SR6_MM->Write();
    h_pTJJ_SR7_EM->Write();
    h_pTJJ_SR8_EE->Write();
    h_pTJJ_SR8_MM->Write();
    h_pTJJ_SR9_EM->Write();
    //--------------------------- 
    h_DeltaPhiMETL1_SR6_EE->Write();
    h_DeltaPhiMETL1_SR6_MM->Write();
    h_DeltaPhiMETL1_SR7_EM->Write();
    h_DeltaPhiMETL1_SR8_EE->Write();
    h_DeltaPhiMETL1_SR8_MM->Write();
    h_DeltaPhiMETL1_SR9_EM->Write();
    //--------------------
    h_DeltaPhiMETL2_SR6_EE->Write();
    h_DeltaPhiMETL2_SR6_MM->Write();
    h_DeltaPhiMETL2_SR7_EM->Write();
    h_DeltaPhiMETL2_SR8_EE->Write();
    h_DeltaPhiMETL2_SR8_MM->Write();
    h_DeltaPhiMETL2_SR9_EM->Write();
    //--------------------
    h_DeltaPhiMETJ1_SR6_EE->Write();
    h_DeltaPhiMETJ1_SR6_MM->Write();
    h_DeltaPhiMETJ1_SR7_EM->Write();
    h_DeltaPhiMETJ1_SR8_EE->Write();
    h_DeltaPhiMETJ1_SR8_MM->Write();
    h_DeltaPhiMETJ1_SR9_EM->Write();
    //--------------------
    h_DeltaPhiMETJ2_SR6_EE->Write();
    h_DeltaPhiMETJ2_SR6_MM->Write();
    h_DeltaPhiMETJ2_SR7_EM->Write();
    h_DeltaPhiMETJ2_SR8_EE->Write();
    h_DeltaPhiMETJ2_SR8_MM->Write();
    h_DeltaPhiMETJ2_SR9_EM->Write();
    //--------------------
    h_DeltaPhiMETLL_SR6_EE->Write();
    h_DeltaPhiMETLL_SR6_MM->Write();
    h_DeltaPhiMETLL_SR7_EM->Write();
    h_DeltaPhiMETLL_SR8_EE->Write();
    h_DeltaPhiMETLL_SR8_MM->Write();
    h_DeltaPhiMETLL_SR9_EM->Write();
    //--------------------
    h_DeltaPhiMETJJ_SR6_EE->Write();
    h_DeltaPhiMETJJ_SR6_MM->Write();
    h_DeltaPhiMETJJ_SR7_EM->Write();
    h_DeltaPhiMETJJ_SR8_EE->Write();
    h_DeltaPhiMETJJ_SR8_MM->Write();
    h_DeltaPhiMETJJ_SR9_EM->Write();
      //--------------------------- 
    h_DeltaRJJ_SR6_EE->Write();
    h_DeltaRJJ_SR6_MM->Write();
    h_DeltaRJJ_SR7_EM->Write();
    h_DeltaRJJ_SR8_EE->Write();
    h_DeltaRJJ_SR8_MM->Write();
    h_DeltaRJJ_SR9_EM->Write();
      //-------------
    h_etaL1_SR6_EE->Write();
    h_etaL1_SR6_MM->Write();
    h_etaL1_SR7_EM->Write();
    h_etaL1_SR8_EE->Write();
    h_etaL1_SR8_MM->Write();
    h_etaL1_SR9_EM->Write();
      //----------
    h_etaL2_SR6_EE->Write();
    h_etaL2_SR6_MM->Write();
    h_etaL2_SR7_EM->Write();
    h_etaL2_SR8_EE->Write();
    h_etaL2_SR8_MM->Write();
    h_etaL2_SR9_EM->Write();
      //----------
    h_etaJ1_SR6_EE->Write();
    h_etaJ1_SR6_MM->Write();
    h_etaJ1_SR7_EM->Write();
    h_etaJ1_SR8_EE->Write();
    h_etaJ1_SR8_MM->Write();
    h_etaJ1_SR9_EM->Write();
      //----------
    h_etaJ2_SR6_EE->Write();
    h_etaJ2_SR6_MM->Write();
    h_etaJ2_SR7_EM->Write();
    h_etaJ2_SR8_EE->Write();
    h_etaJ2_SR8_MM->Write();
    h_etaJ2_SR9_EM->Write();
      //----------
    h_DeltaEtaJJ_SR6_EE->Write();
    h_DeltaEtaJJ_SR6_MM->Write();
    h_DeltaEtaJJ_SR7_EM->Write();
    h_DeltaEtaJJ_SR8_EE->Write();
    h_DeltaEtaJJ_SR8_MM->Write();
    h_DeltaEtaJJ_SR9_EM->Write();
      //----------
    h_DeltaYJJ_SR6_EE->Write();
    h_DeltaYJJ_SR6_MM->Write();
    h_DeltaYJJ_SR7_EM->Write();
    h_DeltaYJJ_SR8_EE->Write();
    h_DeltaYJJ_SR8_MM->Write();
    h_DeltaYJJ_SR9_EM->Write();
    //---------------
    h_mTL1MET_SR6_EE->Write(); 
    h_mTL1MET_SR6_MM->Write(); 
    h_mTL1MET_SR7_EM->Write(); 
    h_mTL1MET_SR8_EE->Write(); 
    h_mTL1MET_SR8_MM->Write(); 
    h_mTL1MET_SR9_EM->Write(); 
    //---------------
    h_mTL2MET_SR6_EE->Write(); 
    h_mTL2MET_SR6_MM->Write(); 
    h_mTL2MET_SR7_EM->Write(); 
    h_mTL2MET_SR8_EE->Write(); 
    h_mTL2MET_SR8_MM->Write(); 
    h_mTL2MET_SR9_EM->Write(); 
    //-------------
    h_NJets_SR6_EE->Write();
    h_NJets_SR6_MM->Write();
    h_NJets_SR7_EM->Write();
    h_NJets_SR8_EE->Write();
    h_NJets_SR8_MM->Write();
    h_NJets_SR9_EM->Write();
    
    h_DeltaPhiLLJJ_SR6_EE->Write();
    h_DeltaPhiLLJJ_SR6_MM->Write();
    h_DeltaPhiLLJJ_SR7_EM->Write();
    h_DeltaPhiLLJJ_SR8_EE->Write();
    h_DeltaPhiLLJJ_SR8_MM->Write();
    h_DeltaPhiLLJJ_SR9_EM->Write();
    //---------------
    h_DeltaPhiL1JJ_SR6_EE->Write();
    h_DeltaPhiL1JJ_SR6_MM->Write();
    h_DeltaPhiL1JJ_SR7_EM->Write();
    h_DeltaPhiL1JJ_SR8_EE->Write();
    h_DeltaPhiL1JJ_SR8_MM->Write();
    h_DeltaPhiL1JJ_SR9_EM->Write();
    //---------------
    h_DeltaPhiL2JJ_SR6_EE->Write();
    h_DeltaPhiL2JJ_SR6_MM->Write();
    h_DeltaPhiL2JJ_SR7_EM->Write();
    h_DeltaPhiL2JJ_SR8_EE->Write();
    h_DeltaPhiL2JJ_SR8_MM->Write();
    h_DeltaPhiL2JJ_SR9_EM->Write();
    //---------------
    h_DeltaRLLJJ_SR6_EE->Write();
    h_DeltaRLLJJ_SR6_MM->Write();
    h_DeltaRLLJJ_SR7_EM->Write();
    h_DeltaRLLJJ_SR8_EE->Write();
    h_DeltaRLLJJ_SR8_MM->Write();
    h_DeltaRLLJJ_SR9_EM->Write();
    //---------------
    h_NBJets_SR6_EE->Write();
    h_NBJets_SR6_MM->Write();
    h_NBJets_SR7_EM->Write();
    h_NBJets_SR8_EE->Write();
    h_NBJets_SR8_MM->Write();
    h_NBJets_SR9_EM->Write();
    //---------------
    h_NCJets_SR6_EE->Write();
    h_NCJets_SR6_MM->Write();
    h_NCJets_SR7_EM->Write();
    h_NCJets_SR8_EE->Write();
    h_NCJets_SR8_MM->Write();
    h_NCJets_SR9_EM->Write();
    //---------------
    h_MET_SR6_EE->Write();
    h_MET_SR6_MM->Write();
    h_MET_SR7_EM->Write();
    h_MET_SR8_EE->Write();
    h_MET_SR8_MM->Write();
    h_MET_SR9_EM->Write();
    //---------------
    h_HT_SR6_EE->Write();
    h_HT_SR6_MM->Write();
    h_HT_SR7_EM->Write();
    h_HT_SR8_EE->Write();
    h_HT_SR8_MM->Write();
    h_HT_SR9_EM->Write();
    //---------------
    h_mWWt_SR6_EE->Write();
    h_mWWt_SR6_MM->Write();
    h_mWWt_SR7_EM->Write();
    h_mWWt_SR8_EE->Write();
    h_mWWt_SR8_MM->Write();
    h_mWWt_SR9_EM->Write();
      
      
      
    cutflow_EE->Write();
    cutflow_EE_MCWeight->Write();
    cutflow_EE_LSF->Write();
    cutflow_EE_triggerWeight->Write();
    cutflow_EE_bTagWeight->Write();
    cutflow_EE_chargeFlipWeight->Write();
    cutflow_EE_ALL->Write();
    
    cutflow_MM->Write();
    cutflow_MM_MCWeight->Write();
    cutflow_MM_LSF->Write();
    cutflow_MM_triggerWeight->Write();
    cutflow_MM_bTagWeight->Write();
    cutflow_MM_ALL->Write();

    
    cutflow_EM->Write();
    cutflow_EM_MCWeight->Write();
    cutflow_EM_LSF->Write();
    cutflow_EM_triggerWeight->Write();
    cutflow_EM_bTagWeight->Write();
    cutflow_EM_chargeFlipWeight->Write();
    cutflow_EM_ALL->Write();
    
    cutflow_ME->Write();
    cutflow_ME_MCWeight->Write();
    cutflow_ME_LSF->Write();
    cutflow_ME_triggerWeight->Write();
    cutflow_ME_bTagWeight->Write();
    cutflow_ME_chargeFlipWeight->Write();
    cutflow_ME_ALL->Write();
    
    return true;
}

bool TSelector_SusyNtuple::addHistos(){
  
    fOutput->Add( h_storeSumwMcid);
    fOutput->Add( h_N_events_EE);
    fOutput->Add( h_N_events_MM);
    fOutput->Add( h_N_events_EM);
    //---------------------------    
    fOutput->Add( h_N_events_SR6_EE);
    fOutput->Add( h_N_events_SR6_MM);
    fOutput->Add( h_N_events_SR7_EM);    
    fOutput->Add( h_N_events_SR8_EE);
    fOutput->Add( h_N_events_SR8_MM); 
    fOutput->Add( h_N_events_SR9_EM);
    //---------------------------    
    fOutput->Add( h_METrel_SR6_EE);
    fOutput->Add( h_METrel_SR6_MM);
    fOutput->Add( h_METrel_SR7_EM);    
    fOutput->Add( h_METrel_SR8_EE);
    fOutput->Add( h_METrel_SR8_MM);   
    fOutput->Add( h_METrel_SR9_EM);
    //---------------------------    
    fOutput->Add( h_DeltaRLeptons_SR6_EE);
    fOutput->Add( h_DeltaRLeptons_SR6_MM);
    fOutput->Add( h_DeltaRLeptons_SR7_EM);
    fOutput->Add( h_DeltaRLeptons_SR8_EE);
    fOutput->Add( h_DeltaRLeptons_SR8_MM);
    fOutput->Add( h_DeltaRLeptons_SR9_EM);
    //---------------------------    
    fOutput->Add( h_mt2_SR6_EE);
    fOutput->Add( h_mt2_SR6_MM);
    fOutput->Add( h_mt2_SR7_EM);
    fOutput->Add( h_mt2_SR8_EE);
    fOutput->Add( h_mt2_SR8_MM);
    fOutput->Add( h_mt2_SR9_EM);
//     ---------------------------    
    fOutput->Add( h_ptll_SR6_EE);
    fOutput->Add( h_ptll_SR6_MM);
    fOutput->Add( h_ptll_SR7_EM);
    fOutput->Add( h_ptll_SR8_EE);
    fOutput->Add( h_ptll_SR8_MM);
    fOutput->Add( h_ptll_SR9_EM);
//     ---------------------------    
    fOutput->Add( h_Mll_SR6_EE);
    fOutput->Add( h_Mll_SR6_MM);
    fOutput->Add( h_Mll_SR7_EM);
    fOutput->Add( h_Mll_SR8_EE);
    fOutput->Add( h_Mll_SR8_MM);
    fOutput->Add( h_Mll_SR9_EM);
    //---------------------------    
    fOutput->Add( h_mZTT_coll_SR6_EE);
    fOutput->Add( h_mZTT_coll_SR6_MM);
    fOutput->Add( h_mZTT_coll_SR7_EM);
    fOutput->Add( h_mZTT_coll_SR8_EE);
    fOutput->Add( h_mZTT_coll_SR8_MM);
    fOutput->Add( h_mZTT_coll_SR9_EM);
    //---------------------------    
    fOutput->Add( h_mZTT_mmc_SR6_EE);
    fOutput->Add( h_mZTT_mmc_SR6_MM);
    fOutput->Add( h_mZTT_mmc_SR7_EM);
    fOutput->Add( h_mZTT_mmc_SR8_EE);
    fOutput->Add( h_mZTT_mmc_SR8_MM);
    fOutput->Add( h_mZTT_mmc_SR9_EM);
    //---------------------------    
    fOutput->Add( h_mZTT_missMassCalc_SR6_EE);
    fOutput->Add( h_mZTT_missMassCalc_SR6_MM);
    fOutput->Add( h_mZTT_missMassCalc_SR7_EM);
    fOutput->Add( h_mZTT_missMassCalc_SR8_EE);
    fOutput->Add( h_mZTT_missMassCalc_SR8_MM);
    fOutput->Add( h_mZTT_missMassCalc_SR9_EM);    
    //---------------------------    
    fOutput->Add( h_mTll_SR6_EE);
    fOutput->Add( h_mTll_SR6_MM);
    fOutput->Add( h_mTll_SR7_EM);
    fOutput->Add( h_mTll_SR8_EE);
    fOutput->Add( h_mTll_SR8_MM);
    fOutput->Add( h_mTll_SR9_EM);
    //---------------------------    
//    
    //--------------
    fOutput->Add( h_mMETLL_SR6_EE); 
    fOutput->Add( h_mMETLL_SR6_MM); 
    fOutput->Add( h_mMETLL_SR7_EM); 
    fOutput->Add( h_mMETLL_SR8_EE); 
    fOutput->Add( h_mMETLL_SR8_MM); 
    fOutput->Add( h_mMETLL_SR9_EM); 

    //---------------
    fOutput->Add( h_mCT_SR6_EE);
    fOutput->Add( h_mCT_SR6_MM);
    fOutput->Add( h_mCT_SR7_EM);
    fOutput->Add( h_mCT_SR8_EE);
    fOutput->Add( h_mCT_SR8_MM);
    fOutput->Add( h_mCT_SR9_EM);
    
    //---------------
    fOutput->Add( h_pTj1_SR6_EE);
    fOutput->Add( h_pTj1_SR6_MM);
    fOutput->Add( h_pTj1_SR7_EM);
    fOutput->Add( h_pTj1_SR8_EE);
    fOutput->Add( h_pTj1_SR8_MM);
    fOutput->Add( h_pTj1_SR9_EM);
    
    //-----------
    fOutput->Add( h_pTj2_SR6_EE);
    fOutput->Add( h_pTj2_SR6_MM);
    fOutput->Add( h_pTj2_SR7_EM);
    fOutput->Add( h_pTj2_SR8_EE);
    fOutput->Add( h_pTj2_SR8_MM);
    fOutput->Add( h_pTj2_SR9_EM);
    
    //-----------
    fOutput->Add( h_pTl1_SR6_EE);
    fOutput->Add( h_pTl1_SR6_MM);
    fOutput->Add( h_pTl1_SR7_EM);
    fOutput->Add( h_pTl1_SR8_EE);
    fOutput->Add( h_pTl1_SR8_MM);
    fOutput->Add( h_pTl1_SR9_EM);
    
    //-----------
    fOutput->Add( h_pTl2_SR6_EE);
    fOutput->Add( h_pTl2_SR6_MM);
    fOutput->Add( h_pTl2_SR7_EM);
    fOutput->Add( h_pTl2_SR8_EE);
    fOutput->Add( h_pTl2_SR8_MM);
    fOutput->Add( h_pTl2_SR9_EM);
    
    //--------------------------- 
    fOutput->Add( h_DeltaPhiLL_SR6_EE);
    fOutput->Add( h_DeltaPhiLL_SR6_MM);
    fOutput->Add( h_DeltaPhiLL_SR7_EM);
    fOutput->Add( h_DeltaPhiLL_SR8_EE);
    fOutput->Add( h_DeltaPhiLL_SR8_MM);
    fOutput->Add( h_DeltaPhiLL_SR9_EM);
    
    //-----------------
    fOutput->Add( h_DeltaPhiJJ_SR6_EE);
    fOutput->Add( h_DeltaPhiJJ_SR6_MM);
    fOutput->Add( h_DeltaPhiJJ_SR7_EM);
    fOutput->Add( h_DeltaPhiJJ_SR8_EE);
    fOutput->Add( h_DeltaPhiJJ_SR8_MM);
    fOutput->Add( h_DeltaPhiJJ_SR9_EM);
    
    //-----------------
    fOutput->Add( h_pTJJ_SR6_EE);
    fOutput->Add( h_pTJJ_SR6_MM);
    fOutput->Add( h_pTJJ_SR7_EM);
    fOutput->Add( h_pTJJ_SR8_EE);
    fOutput->Add( h_pTJJ_SR8_MM);
    fOutput->Add( h_pTJJ_SR9_EM);
    //--------------------------- 
    fOutput->Add( h_DeltaPhiMETL1_SR6_EE);
    fOutput->Add( h_DeltaPhiMETL1_SR6_MM);
    fOutput->Add( h_DeltaPhiMETL1_SR7_EM);
    fOutput->Add( h_DeltaPhiMETL1_SR8_EE);
    fOutput->Add( h_DeltaPhiMETL1_SR8_MM);
    fOutput->Add( h_DeltaPhiMETL1_SR9_EM);
    //--------------------
    fOutput->Add( h_DeltaPhiMETL2_SR6_EE);
    fOutput->Add( h_DeltaPhiMETL2_SR6_MM);
    fOutput->Add( h_DeltaPhiMETL2_SR7_EM);
    fOutput->Add( h_DeltaPhiMETL2_SR8_EE);
    fOutput->Add( h_DeltaPhiMETL2_SR8_MM);
    fOutput->Add( h_DeltaPhiMETL2_SR9_EM);
    //--------------------
    fOutput->Add( h_DeltaPhiMETJ1_SR6_EE);
    fOutput->Add( h_DeltaPhiMETJ1_SR6_MM);
    fOutput->Add( h_DeltaPhiMETJ1_SR7_EM);
    fOutput->Add( h_DeltaPhiMETJ1_SR8_EE);
    fOutput->Add( h_DeltaPhiMETJ1_SR8_MM);
    fOutput->Add( h_DeltaPhiMETJ1_SR9_EM);
    //--------------------
    fOutput->Add( h_DeltaPhiMETJ2_SR6_EE);
    fOutput->Add( h_DeltaPhiMETJ2_SR6_MM);
    fOutput->Add( h_DeltaPhiMETJ2_SR7_EM);
    fOutput->Add( h_DeltaPhiMETJ2_SR8_EE);
    fOutput->Add( h_DeltaPhiMETJ2_SR8_MM);
    fOutput->Add( h_DeltaPhiMETJ2_SR9_EM);
    //--------------------
    fOutput->Add( h_DeltaPhiMETLL_SR6_EE);
    fOutput->Add( h_DeltaPhiMETLL_SR6_MM);
    fOutput->Add( h_DeltaPhiMETLL_SR7_EM);
    fOutput->Add( h_DeltaPhiMETLL_SR8_EE);
    fOutput->Add( h_DeltaPhiMETLL_SR8_MM);
    fOutput->Add( h_DeltaPhiMETLL_SR9_EM);
    //--------------------
    fOutput->Add( h_DeltaPhiMETJJ_SR6_EE);
    fOutput->Add( h_DeltaPhiMETJJ_SR6_MM);
    fOutput->Add( h_DeltaPhiMETJJ_SR7_EM);
    fOutput->Add( h_DeltaPhiMETJJ_SR8_EE);
    fOutput->Add( h_DeltaPhiMETJJ_SR8_MM);
    fOutput->Add( h_DeltaPhiMETJJ_SR9_EM);
      //--------------------------- 
    fOutput->Add( h_DeltaRJJ_SR6_EE);
    fOutput->Add( h_DeltaRJJ_SR6_MM);
    fOutput->Add( h_DeltaRJJ_SR7_EM);
    fOutput->Add( h_DeltaRJJ_SR8_EE);
    fOutput->Add( h_DeltaRJJ_SR8_MM);
    fOutput->Add( h_DeltaRJJ_SR9_EM);
      //-------------
    fOutput->Add( h_etaL1_SR6_EE);
    fOutput->Add( h_etaL1_SR6_MM);
    fOutput->Add( h_etaL1_SR7_EM);
    fOutput->Add( h_etaL1_SR8_EE);
    fOutput->Add( h_etaL1_SR8_MM);
    fOutput->Add( h_etaL1_SR9_EM);
      //----------
    fOutput->Add( h_etaL2_SR6_EE);
    fOutput->Add( h_etaL2_SR6_MM);
    fOutput->Add( h_etaL2_SR7_EM);
    fOutput->Add( h_etaL2_SR8_EE);
    fOutput->Add( h_etaL2_SR8_MM);
    fOutput->Add( h_etaL2_SR9_EM);
      //----------
    fOutput->Add( h_etaJ1_SR6_EE);
    fOutput->Add( h_etaJ1_SR6_MM);
    fOutput->Add( h_etaJ1_SR7_EM);
    fOutput->Add( h_etaJ1_SR8_EE);
    fOutput->Add( h_etaJ1_SR8_MM);
    fOutput->Add( h_etaJ1_SR9_EM);
      //----------
    fOutput->Add( h_etaJ2_SR6_EE);
    fOutput->Add( h_etaJ2_SR6_MM);
    fOutput->Add( h_etaJ2_SR7_EM);
    fOutput->Add( h_etaJ2_SR8_EE);
    fOutput->Add( h_etaJ2_SR8_MM);
    fOutput->Add( h_etaJ2_SR9_EM);
      //----------
    fOutput->Add( h_DeltaEtaJJ_SR6_EE);
    fOutput->Add( h_DeltaEtaJJ_SR6_MM);
    fOutput->Add( h_DeltaEtaJJ_SR7_EM);
    fOutput->Add( h_DeltaEtaJJ_SR8_EE);
    fOutput->Add( h_DeltaEtaJJ_SR8_MM);
    fOutput->Add( h_DeltaEtaJJ_SR9_EM);
      //----------
    fOutput->Add( h_DeltaYJJ_SR6_EE);
    fOutput->Add( h_DeltaYJJ_SR6_MM);
    fOutput->Add( h_DeltaYJJ_SR7_EM);
    fOutput->Add( h_DeltaYJJ_SR8_EE);
    fOutput->Add( h_DeltaYJJ_SR8_MM);
    fOutput->Add( h_DeltaYJJ_SR9_EM);
    //---------------
    fOutput->Add( h_mTL1MET_SR6_EE); 
    fOutput->Add( h_mTL1MET_SR6_MM); 
    fOutput->Add( h_mTL1MET_SR7_EM); 
    fOutput->Add( h_mTL1MET_SR8_EE); 
    fOutput->Add( h_mTL1MET_SR8_MM); 
    fOutput->Add( h_mTL1MET_SR9_EM); 
    //---------------
    fOutput->Add( h_mTL2MET_SR6_EE); 
    fOutput->Add( h_mTL2MET_SR6_MM); 
    fOutput->Add( h_mTL2MET_SR7_EM); 
    fOutput->Add( h_mTL2MET_SR8_EE); 
    fOutput->Add( h_mTL2MET_SR8_MM); 
    fOutput->Add( h_mTL2MET_SR9_EM); 
    //-------------
    fOutput->Add( h_NJets_SR6_EE);
    fOutput->Add( h_NJets_SR6_MM);
    fOutput->Add( h_NJets_SR7_EM);
    fOutput->Add( h_NJets_SR8_EE);
    fOutput->Add( h_NJets_SR8_MM);
    fOutput->Add( h_NJets_SR9_EM);
    
    fOutput->Add( h_DeltaPhiLLJJ_SR6_EE);
    fOutput->Add( h_DeltaPhiLLJJ_SR6_MM);
    fOutput->Add( h_DeltaPhiLLJJ_SR7_EM);
    fOutput->Add( h_DeltaPhiLLJJ_SR8_EE);
    fOutput->Add( h_DeltaPhiLLJJ_SR8_MM);
    fOutput->Add( h_DeltaPhiLLJJ_SR9_EM);
    //---------------
    fOutput->Add( h_DeltaPhiL1JJ_SR6_EE);
    fOutput->Add( h_DeltaPhiL1JJ_SR6_MM);
    fOutput->Add( h_DeltaPhiL1JJ_SR7_EM);
    fOutput->Add( h_DeltaPhiL1JJ_SR8_EE);
    fOutput->Add( h_DeltaPhiL1JJ_SR8_MM);
    fOutput->Add( h_DeltaPhiL1JJ_SR9_EM);
    //---------------
    fOutput->Add( h_DeltaPhiL2JJ_SR6_EE);
    fOutput->Add( h_DeltaPhiL2JJ_SR6_MM);
    fOutput->Add( h_DeltaPhiL2JJ_SR7_EM);
    fOutput->Add( h_DeltaPhiL2JJ_SR8_EE);
    fOutput->Add( h_DeltaPhiL2JJ_SR8_MM);
    fOutput->Add( h_DeltaPhiL2JJ_SR9_EM);
    //---------------
    fOutput->Add( h_DeltaRLLJJ_SR6_EE);
    fOutput->Add( h_DeltaRLLJJ_SR6_MM);
    fOutput->Add( h_DeltaRLLJJ_SR7_EM);
    fOutput->Add( h_DeltaRLLJJ_SR8_EE);
    fOutput->Add( h_DeltaRLLJJ_SR8_MM);
    fOutput->Add( h_DeltaRLLJJ_SR9_EM);
    //---------------
    fOutput->Add( h_NBJets_SR6_EE);
    fOutput->Add( h_NBJets_SR6_MM);
    fOutput->Add( h_NBJets_SR7_EM);
    fOutput->Add( h_NBJets_SR8_EE);
    fOutput->Add( h_NBJets_SR8_MM);
    fOutput->Add( h_NBJets_SR9_EM);
    //---------------
    fOutput->Add( h_NCJets_SR6_EE);
    fOutput->Add( h_NCJets_SR6_MM);
    fOutput->Add( h_NCJets_SR7_EM);
    fOutput->Add( h_NCJets_SR8_EE);
    fOutput->Add( h_NCJets_SR8_MM);
    fOutput->Add( h_NCJets_SR9_EM);
    //---------------
    fOutput->Add( h_MET_SR6_EE);
    fOutput->Add( h_MET_SR6_MM);
    fOutput->Add( h_MET_SR7_EM);
    fOutput->Add( h_MET_SR8_EE);
    fOutput->Add( h_MET_SR8_MM);
    fOutput->Add( h_MET_SR9_EM);
    //---------------
    fOutput->Add( h_HT_SR6_EE);
    fOutput->Add( h_HT_SR6_MM);
    fOutput->Add( h_HT_SR7_EM);
    fOutput->Add( h_HT_SR8_EE);
    fOutput->Add( h_HT_SR8_MM);
    fOutput->Add( h_HT_SR9_EM);
    //---------------
    fOutput->Add( h_mWWt_SR6_EE);
    fOutput->Add( h_mWWt_SR6_MM);
    fOutput->Add( h_mWWt_SR7_EM);
    fOutput->Add( h_mWWt_SR8_EE);
    fOutput->Add( h_mWWt_SR8_MM);
    fOutput->Add( h_mWWt_SR9_EM);



    fOutput->Add( cutflow_EE);
    fOutput->Add( cutflow_EE_MCWeight);
    fOutput->Add( cutflow_EE_LSF);
    fOutput->Add( cutflow_EE_triggerWeight);
    fOutput->Add( cutflow_EE_bTagWeight);
    fOutput->Add( cutflow_EE_chargeFlipWeight);
    fOutput->Add( cutflow_EE_ALL);

    fOutput->Add( cutflow_MM);
    fOutput->Add( cutflow_MM_MCWeight);
    fOutput->Add( cutflow_MM_LSF);
    fOutput->Add( cutflow_MM_triggerWeight);
    fOutput->Add( cutflow_MM_bTagWeight);
    fOutput->Add( cutflow_MM_ALL);


    fOutput->Add( cutflow_EM);
    fOutput->Add( cutflow_EM_MCWeight);
    fOutput->Add( cutflow_EM_LSF);
    fOutput->Add( cutflow_EM_triggerWeight);
    fOutput->Add( cutflow_EM_bTagWeight);
    fOutput->Add( cutflow_EM_chargeFlipWeight);
    fOutput->Add( cutflow_EM_ALL);

    fOutput->Add( cutflow_ME);
    fOutput->Add( cutflow_ME_MCWeight);
    fOutput->Add( cutflow_ME_LSF);
    fOutput->Add( cutflow_ME_triggerWeight);
    fOutput->Add( cutflow_ME_bTagWeight);
    fOutput->Add( cutflow_ME_chargeFlipWeight);
    fOutput->Add( cutflow_ME_ALL);
    
    return true;
    
}

void TSelector_SusyNtuple::fillHistos_SR6_EE(int mcid, float cut_EE, float weight_ALL_EE, float METrel, float HT, float mWWt, float mCT, TLorentzVector el1_TLV, TLorentzVector el2_TLV, const Met* susymet, Electron* el1, Electron* el2, LeptonVector leptons, TLorentzVector signalJet1_TLV, TLorentzVector signalJet2_TLV, int nSignalJets){
  
  float DeltaRee = fabs(el1_TLV.DeltaR(el2_TLV));
  float ptee = (el1_TLV + el2_TLV).Pt();
  float Mee = Mll(el1, el2);
  float mZTT_coll = calcMZTauTau_coll(el1_TLV, el2_TLV, susymet->lv());
  float mZTT_mmc = calcMZTauTau_mmc(el1_TLV, el2_TLV, 0/*electron*/, 0/*electron*/);
  float mZTT_missMass = calcMZTauTau_MissMassCalc(el1_TLV, el2_TLV, 0/*electron*/, 0/*electron*/);
  float mTee = calcMt((el1_TLV+el2_TLV), susymet->lv());
  float mTemin = (Mt(el1, susymet) > Mt(el2, susymet)) ? Mt(el2, susymet) : Mt(el1, susymet);
  float mTel1 = Mt(el1, susymet);
  float mTel2 = Mt(el2, susymet);
  float mMETee = (el1_TLV + el2_TLV + susymet->lv()).M();
  float DeltaPhiEE = fabs(el1_TLV.DeltaPhi(el2_TLV));
  float DeltaPhiMETe1 = fabs(el1_TLV.DeltaPhi(susymet->lv()));
  float DeltaPhiMETe2 = fabs(el2_TLV.DeltaPhi(susymet->lv()));
  float DeltaPhiMETee = fabs((el1_TLV + el2_TLV).DeltaPhi(susymet->lv()));
  float mt2_ee = getMT2(leptons, susymet);
  
  float DeltaPhiLLJJ = (nSignalJets>1) ? (el1_TLV + el2_TLV).DeltaPhi(signalJet1_TLV + signalJet2_TLV) : 0.;
  float DeltaPhiL1JJ = (nSignalJets>1) ? ((el1_TLV.Pt()> el2_TLV.Pt()) ? (el1_TLV).DeltaPhi(signalJet1_TLV + signalJet2_TLV) : (el2_TLV).DeltaPhi(signalJet1_TLV + signalJet2_TLV)) : 0.;
  float DeltaPhiL2JJ = (nSignalJets>1) ?  ((el1_TLV.Pt()< el2_TLV.Pt()) ? (el2_TLV).DeltaPhi(signalJet1_TLV + signalJet2_TLV) : (el1_TLV).DeltaPhi(signalJet1_TLV + signalJet2_TLV)) : 0.;
  float DeltaRLLJJ = (nSignalJets>1) ? (el1_TLV + el2_TLV).DeltaR(signalJet1_TLV + signalJet2_TLV) : 0.;
  
  float mjj = (nSignalJets>1) ? (signalJet1_TLV + signalJet2_TLV).M() : 0.;
  float DeltaPhiJJ = (nSignalJets>1) ? fabs(signalJet1_TLV.DeltaPhi(signalJet2_TLV)) : 0.;
  float ptjj = (nSignalJets>1) ? (signalJet1_TLV + signalJet2_TLV).Pt() : 0.;
  float DeltaPhiMETj1 = fabs(signalJet1_TLV.DeltaPhi(susymet->lv()));
  float DeltaPhiMETj2 = (nSignalJets>1) ? fabs(signalJet2_TLV.DeltaPhi(susymet->lv())) : 0.;
  float DeltaRJJ = (nSignalJets>1) ?  fabs(signalJet1_TLV.DeltaR(signalJet2_TLV)) : 0.;
  float DeltaEtaJJ = (nSignalJets>1) ? fabs(signalJet1_TLV.Eta() - signalJet2_TLV.Eta()) : 0.;
  float DeltaYJJ = (nSignalJets>1) ? fabs(signalJet1_TLV.Rapidity() - signalJet2_TLV.Rapidity()) : 0.;
  float DeltaPhiMETjj = (nSignalJets>1) ? fabs((signalJet1_TLV+ signalJet2_TLV).DeltaPhi(susymet->lv())) : 0.;
  int NBJets = numberOfCBJets(m_signalJets2Lep);
  int NCJets = numberOfCLJets(m_signalJets2Lep);
  float MET = susymet->lv().Et();
  
  h_N_events_SR6_EE->Fill(mcid, cut_EE, weight_ALL_EE); 
  h_METrel_SR6_EE->Fill(METrel, cut_EE, weight_ALL_EE); 
  h_DeltaRLeptons_SR6_EE->Fill(DeltaRee, cut_EE, weight_ALL_EE); 
  h_mt2_SR6_EE->Fill(mt2_ee, cut_EE, weight_ALL_EE);
  h_ptll_SR6_EE->Fill(ptee, cut_EE, weight_ALL_EE); 
  h_Mll_SR6_EE->Fill(Mee, cut_EE, weight_ALL_EE); 
  h_mZTT_coll_SR6_EE->Fill(mZTT_coll, cut_EE, weight_ALL_EE); 
  h_mZTT_mmc_SR6_EE->Fill(mZTT_mmc, cut_EE, weight_ALL_EE); 
  h_mZTT_missMassCalc_SR6_EE->Fill(mZTT_missMass, cut_EE, weight_ALL_EE); 
  h_mTll_SR6_EE->Fill(mTee, cut_EE, weight_ALL_EE); 
  h_mTlmin_SR6_EE->Fill(mTemin, cut_EE, weight_ALL_EE); 
  if(nSignalJets>1) h_mJJ_SR6_EE->Fill(mjj, cut_EE, weight_ALL_EE);
  h_mMETLL_SR6_EE->Fill(mMETee, cut_EE, weight_ALL_EE);
  h_mCT_SR6_EE->Fill(mCT, cut_EE, weight_ALL_EE);
  h_pTj1_SR6_EE->Fill(signalJet1_TLV.Pt(), cut_EE, weight_ALL_EE);
  if(nSignalJets>1) h_pTj2_SR6_EE->Fill((nSignalJets>1) ? signalJet2_TLV.Pt() : 0., cut_EE, weight_ALL_EE);
  h_pTl1_SR6_EE->Fill(el1_TLV.Pt(), cut_EE, weight_ALL_EE);
  h_pTl2_SR6_EE->Fill(el2_TLV.Pt(), cut_EE, weight_ALL_EE);
  h_DeltaPhiLL_SR6_EE->Fill(DeltaPhiEE, cut_EE, weight_ALL_EE);
  if(nSignalJets>1) h_DeltaPhiJJ_SR6_EE->Fill(DeltaPhiJJ, cut_EE, weight_ALL_EE);
  h_DeltaPhiMETL1_SR6_EE->Fill(DeltaPhiMETe1, cut_EE, weight_ALL_EE);
  h_DeltaPhiMETL2_SR6_EE->Fill(DeltaPhiMETe2, cut_EE, weight_ALL_EE);
  h_pTJJ_SR6_EE->Fill(ptjj, cut_EE, weight_ALL_EE);
  h_DeltaPhiMETJ1_SR6_EE->Fill(DeltaPhiMETj1, cut_EE, weight_ALL_EE);
  if(nSignalJets>1) h_DeltaPhiMETJ2_SR6_EE->Fill(DeltaPhiMETj2, cut_EE, weight_ALL_EE);
  h_DeltaPhiMETLL_SR6_EE->Fill(DeltaPhiMETee, cut_EE, weight_ALL_EE);
  if(nSignalJets>1) h_DeltaPhiMETJJ_SR6_EE->Fill(DeltaPhiMETjj, cut_EE, weight_ALL_EE);
  if(nSignalJets>1) h_DeltaRJJ_SR6_EE->Fill(DeltaRJJ, cut_EE, weight_ALL_EE);
  h_etaL1_SR6_EE->Fill(el1_TLV.Eta(), cut_EE, weight_ALL_EE);
  h_etaL2_SR6_EE->Fill(el2_TLV.Eta(), cut_EE, weight_ALL_EE);
  h_etaJ1_SR6_EE->Fill(signalJet1_TLV.Eta(), cut_EE, weight_ALL_EE);
  if(nSignalJets>1) h_etaJ2_SR6_EE->Fill((nSignalJets>1) ? signalJet2_TLV.Eta() : 0., cut_EE, weight_ALL_EE);
  if(nSignalJets>1) h_DeltaEtaJJ_SR6_EE->Fill(DeltaEtaJJ, cut_EE, weight_ALL_EE);
  if(nSignalJets>1) h_DeltaYJJ_SR6_EE->Fill(DeltaYJJ, cut_EE, weight_ALL_EE);
  h_mTL1MET_SR6_EE->Fill(mTel1, cut_EE, weight_ALL_EE);
  h_mTL2MET_SR6_EE->Fill(mTel2, cut_EE, weight_ALL_EE);
  h_NJets_SR6_EE->Fill(nSignalJets, cut_EE, weight_ALL_EE);
  
  if(nSignalJets>1) h_DeltaPhiLLJJ_SR6_EE->Fill(DeltaPhiLLJJ, cut_EE, weight_ALL_EE);  
  if(nSignalJets>1) h_DeltaPhiL1JJ_SR6_EE->Fill(DeltaPhiL1JJ, cut_EE, weight_ALL_EE);  
  if(nSignalJets>1) h_DeltaPhiL2JJ_SR6_EE->Fill(DeltaPhiL2JJ, cut_EE, weight_ALL_EE);  
  if(nSignalJets>1) h_DeltaRLLJJ_SR6_EE->Fill(DeltaRLLJJ, cut_EE, weight_ALL_EE);  
  h_NBJets_SR6_EE->Fill(NBJets, cut_EE, weight_ALL_EE);  
  h_NCJets_SR6_EE->Fill(NCJets, cut_EE, weight_ALL_EE);  
  h_MET_SR6_EE->Fill(MET, cut_EE, weight_ALL_EE);  
  h_HT_SR6_EE->Fill(HT, cut_EE, weight_ALL_EE);
  h_mWWt_SR6_EE->Fill(mWWt, cut_EE, weight_ALL_EE);
  
}

void TSelector_SusyNtuple::fillHistos_SR8_EE(int mcid, float cut_EE, float weight_ALL_EE, float METrel, float HT, float mWWt, float mCT, TLorentzVector el1_TLV, TLorentzVector el2_TLV, const Met* susymet, Electron* el1, Electron* el2, LeptonVector leptons, TLorentzVector signalJet1_TLV, TLorentzVector signalJet2_TLV, int nSignalJets){
  
  float DeltaRee = fabs(el1_TLV.DeltaR(el2_TLV));
  float ptee = (el1_TLV + el2_TLV).Pt();
  float Mee = Mll(el1, el2);
  float mZTT_coll = calcMZTauTau_coll(el1_TLV, el2_TLV, susymet->lv());
  float mZTT_mmc =  calcMZTauTau_mmc(el1_TLV, el2_TLV, 0/*electron*/, 0/*electron*/);
  float mZTT_missMass = calcMZTauTau_MissMassCalc(el1_TLV, el2_TLV, 0/*electron*/, 0/*electron*/);
  float mTee = calcMt((el1_TLV+el2_TLV), susymet->lv());
  float mTemin = (Mt(el1, susymet) > Mt(el2, susymet)) ? Mt(el2, susymet) : Mt(el1, susymet);
  float mTel1 = Mt(el1, susymet);
  float mTel2 = Mt(el2, susymet);
  float mMETee = (el1_TLV + el2_TLV + susymet->lv()).M();
  float DeltaPhiEE = fabs(el1_TLV.DeltaPhi(el2_TLV));
  float DeltaPhiMETe1 = fabs(el1_TLV.DeltaPhi(susymet->lv()));
  float DeltaPhiMETe2 = fabs(el2_TLV.DeltaPhi(susymet->lv()));
  float DeltaPhiMETee = fabs((el1_TLV + el2_TLV).DeltaPhi(susymet->lv()));
  float mt2_ee = getMT2(leptons, susymet);
  
  float DeltaPhiLLJJ = (nSignalJets>1) ? (el1_TLV + el2_TLV).DeltaPhi(signalJet1_TLV + signalJet2_TLV) : 0.;
  float DeltaPhiL1JJ = (nSignalJets>1) ? ((el1_TLV.Pt()> el2_TLV.Pt()) ? (el1_TLV).DeltaPhi(signalJet1_TLV + signalJet2_TLV) : (el2_TLV).DeltaPhi(signalJet1_TLV + signalJet2_TLV)) : 0.;
  float DeltaPhiL2JJ = (nSignalJets>1) ?  ((el1_TLV.Pt()< el2_TLV.Pt()) ? (el2_TLV).DeltaPhi(signalJet1_TLV + signalJet2_TLV) : (el1_TLV).DeltaPhi(signalJet1_TLV + signalJet2_TLV)) : 0.;
  float DeltaRLLJJ = (nSignalJets>1) ? (el1_TLV + el2_TLV).DeltaR(signalJet1_TLV + signalJet2_TLV) : 0.;
  
  float mjj = (nSignalJets>1) ? (signalJet1_TLV + signalJet2_TLV).M() : 0.;
  float DeltaPhiJJ = (nSignalJets>1) ? fabs(signalJet1_TLV.DeltaPhi(signalJet2_TLV)) : 0.;
  float ptjj = (nSignalJets>1) ? (signalJet1_TLV + signalJet2_TLV).Pt() : 0.;
  float DeltaPhiMETj1 = fabs(signalJet1_TLV.DeltaPhi(susymet->lv()));
  float DeltaPhiMETj2 = (nSignalJets>1) ? fabs(signalJet2_TLV.DeltaPhi(susymet->lv())) : 0.;
  float DeltaRJJ = (nSignalJets>1) ?  fabs(signalJet1_TLV.DeltaR(signalJet2_TLV)) : 0.;
  float DeltaEtaJJ = (nSignalJets>1) ? fabs(signalJet1_TLV.Eta() - signalJet2_TLV.Eta()) : 0.;
  float DeltaYJJ = (nSignalJets>1) ? fabs(signalJet1_TLV.Rapidity() - signalJet2_TLV.Rapidity()) : 0.;
  float DeltaPhiMETjj = (nSignalJets>1) ? fabs((signalJet1_TLV+ signalJet2_TLV).DeltaPhi(susymet->lv())) : 0.;
  int NBJets = numberOfCBJets(m_signalJets2Lep);
  int NCJets = numberOfCLJets(m_signalJets2Lep);
  float MET = susymet->lv().Et();
 
  h_N_events_SR8_EE->Fill(mcid, cut_EE, weight_ALL_EE); 
  h_METrel_SR8_EE->Fill(METrel, cut_EE, weight_ALL_EE); 
  h_DeltaRLeptons_SR8_EE->Fill(DeltaRee, cut_EE, weight_ALL_EE); 
  h_mt2_SR8_EE->Fill(mt2_ee, cut_EE, weight_ALL_EE);
  h_ptll_SR8_EE->Fill(ptee, cut_EE, weight_ALL_EE); 
  h_Mll_SR8_EE->Fill(Mee, cut_EE, weight_ALL_EE); 
  h_mZTT_coll_SR8_EE->Fill(mZTT_coll, cut_EE, weight_ALL_EE); 
  h_mZTT_mmc_SR8_EE->Fill(mZTT_mmc, cut_EE, weight_ALL_EE); 
  h_mZTT_missMassCalc_SR8_EE->Fill(mZTT_missMass, cut_EE, weight_ALL_EE); 
  h_mTll_SR8_EE->Fill(mTee, cut_EE, weight_ALL_EE); 
  h_mTlmin_SR8_EE->Fill(mTemin, cut_EE, weight_ALL_EE); 
  if(nSignalJets>1) h_mJJ_SR8_EE->Fill(mjj, cut_EE, weight_ALL_EE);
  h_mMETLL_SR8_EE->Fill(mMETee, cut_EE, weight_ALL_EE);
  h_mCT_SR8_EE->Fill(mCT, cut_EE, weight_ALL_EE);
  h_pTj1_SR8_EE->Fill(signalJet1_TLV.Pt(), cut_EE, weight_ALL_EE);
  if(nSignalJets>1) h_pTj2_SR8_EE->Fill((nSignalJets>1) ? signalJet2_TLV.Pt() : 0., cut_EE, weight_ALL_EE);
  h_pTl1_SR8_EE->Fill(el1_TLV.Pt(), cut_EE, weight_ALL_EE);
  h_pTl2_SR8_EE->Fill(el2_TLV.Pt(), cut_EE, weight_ALL_EE);
  h_DeltaPhiLL_SR8_EE->Fill(DeltaPhiEE, cut_EE, weight_ALL_EE);
  if(nSignalJets>1) h_DeltaPhiJJ_SR8_EE->Fill(DeltaPhiJJ, cut_EE, weight_ALL_EE);
  h_DeltaPhiMETL1_SR8_EE->Fill(DeltaPhiMETe1, cut_EE, weight_ALL_EE);
  h_DeltaPhiMETL2_SR8_EE->Fill(DeltaPhiMETe2, cut_EE, weight_ALL_EE);
  h_pTJJ_SR8_EE->Fill(ptjj, cut_EE, weight_ALL_EE);
  h_DeltaPhiMETJ1_SR8_EE->Fill(DeltaPhiMETj1, cut_EE, weight_ALL_EE);
  if(nSignalJets>1) h_DeltaPhiMETJ2_SR8_EE->Fill(DeltaPhiMETj2, cut_EE, weight_ALL_EE);
  h_DeltaPhiMETLL_SR8_EE->Fill(DeltaPhiMETee, cut_EE, weight_ALL_EE);
  if(nSignalJets>1) h_DeltaPhiMETJJ_SR8_EE->Fill(DeltaPhiMETjj, cut_EE, weight_ALL_EE);
  if(nSignalJets>1) h_DeltaRJJ_SR8_EE->Fill(DeltaRJJ, cut_EE, weight_ALL_EE);
  h_etaL1_SR8_EE->Fill(el1_TLV.Eta(), cut_EE, weight_ALL_EE);
  h_etaL2_SR8_EE->Fill(el2_TLV.Eta(), cut_EE, weight_ALL_EE);
  h_etaJ1_SR8_EE->Fill(signalJet1_TLV.Eta(), cut_EE, weight_ALL_EE);
  if(nSignalJets>1) h_etaJ2_SR8_EE->Fill((nSignalJets>1) ? signalJet2_TLV.Eta() : 0., cut_EE, weight_ALL_EE);
  if(nSignalJets>1) h_DeltaEtaJJ_SR8_EE->Fill(DeltaEtaJJ, cut_EE, weight_ALL_EE);
  if(nSignalJets>1) h_DeltaYJJ_SR8_EE->Fill(DeltaYJJ, cut_EE, weight_ALL_EE);
  h_mTL1MET_SR8_EE->Fill(mTel1, cut_EE, weight_ALL_EE);
  h_mTL2MET_SR8_EE->Fill(mTel2, cut_EE, weight_ALL_EE);
  h_NJets_SR8_EE->Fill(nSignalJets, cut_EE, weight_ALL_EE);
  
  if(nSignalJets>1) h_DeltaPhiLLJJ_SR8_EE->Fill(DeltaPhiLLJJ, cut_EE, weight_ALL_EE);  
  if(nSignalJets>1) h_DeltaPhiL1JJ_SR8_EE->Fill(DeltaPhiL1JJ, cut_EE, weight_ALL_EE);  
  if(nSignalJets>1) h_DeltaPhiL2JJ_SR8_EE->Fill(DeltaPhiL2JJ, cut_EE, weight_ALL_EE);  
  if(nSignalJets>1) h_DeltaRLLJJ_SR8_EE->Fill(DeltaRLLJJ, cut_EE, weight_ALL_EE);  
  h_NBJets_SR8_EE->Fill(NBJets, cut_EE, weight_ALL_EE);  
  h_NCJets_SR8_EE->Fill(NCJets, cut_EE, weight_ALL_EE);  
  h_MET_SR8_EE->Fill(MET, cut_EE, weight_ALL_EE);  
  h_HT_SR8_EE->Fill(HT, cut_EE, weight_ALL_EE);
  h_mWWt_SR8_EE->Fill(mWWt, cut_EE, weight_ALL_EE);
  
}

void TSelector_SusyNtuple::fillHistos_SR6_MM(int mcid, float cut_MM, float weight_ALL_MM, float METrel, float HT, float mWWt, float mCT, TLorentzVector mu1_TLV, TLorentzVector mu2_TLV, const Met* susymet, Muon* mu1, Muon* mu2, LeptonVector leptons, TLorentzVector signalJet1_TLV, TLorentzVector signalJet2_TLV, int nSignalJets ){
  
  TLorentzVector mu1_TLV_n, mu2_TLV_n;
  mu1_TLV_n.SetPtEtaPhiE(mu1->pt, mu1->eta ,mu1->phi, mu1->pt*cosh(mu1->eta));
  mu2_TLV_n.SetPtEtaPhiE(mu2->pt, mu2->eta ,mu2->phi, mu2->pt*cosh(mu2->eta));
  
  float DeltaRmm = mu1_TLV.DeltaR(mu2_TLV);
  float ptmm = (mu1_TLV_n + mu2_TLV_n).Pt();
  float Mmm = Mll(mu1, mu2);
  float mZTT_coll =  calcMZTauTau_coll(mu1_TLV, mu2_TLV, susymet->lv());
  float mZTT_mmc =  calcMZTauTau_mmc(mu1_TLV, mu2_TLV, 1/*muon*/, 1/*muon*/);
  float mZTT_missMass = calcMZTauTau_MissMassCalc(mu1_TLV, mu2_TLV, 1/*muon*/, 1/*muon*/);
  float mTmm = calcMt((mu1_TLV+mu2_TLV), susymet->lv());
  float mTemin = (Mt(mu1, susymet) > Mt(mu2, susymet)) ? Mt(mu2, susymet) : Mt(mu1, susymet);
  float mTmu1 = Mt(mu1, susymet);
  float mTmu2 = Mt(mu2, susymet);
  float mMETmm = (mu1_TLV + mu2_TLV + susymet->lv()).M();
  float DeltaPhiMM = fabs(mu1_TLV.DeltaPhi(mu2_TLV));
  float DeltaPhiMETe1 = fabs(mu1_TLV.DeltaPhi(susymet->lv()));
  float DeltaPhiMETe2 = fabs(mu2_TLV.DeltaPhi(susymet->lv()));
  float DeltaPhiMETmm = fabs((mu1_TLV + mu2_TLV).DeltaPhi(susymet->lv()));
  float mt2_mm = getMT2(leptons, susymet);
  
  float DeltaPhiLLJJ = (nSignalJets>1) ?  (mu1_TLV + mu2_TLV).DeltaPhi(signalJet1_TLV + signalJet2_TLV) : 0.;
  float DeltaPhiL1JJ = (nSignalJets>1) ?  ((mu1_TLV.Pt()> mu2_TLV.Pt()) ? (mu1_TLV).DeltaPhi(signalJet1_TLV + signalJet2_TLV) : (mu2_TLV).DeltaPhi(signalJet1_TLV + signalJet2_TLV)) : 0.;
  float DeltaPhiL2JJ = (nSignalJets>1) ?  ((mu1_TLV.Pt()< mu2_TLV.Pt()) ? (mu2_TLV).DeltaPhi(signalJet1_TLV + signalJet2_TLV) : (mu1_TLV).DeltaPhi(signalJet1_TLV + signalJet2_TLV)) : 0.;
  float DeltaRLLJJ = (nSignalJets>1) ?  (mu1_TLV + mu2_TLV).DeltaR(signalJet1_TLV + signalJet2_TLV) : 0.;
  
  float mjj = (nSignalJets>1) ?  (signalJet1_TLV + signalJet2_TLV).M() : 0.;
  float DeltaPhiJJ = (nSignalJets>1) ?  fabs(signalJet1_TLV.DeltaPhi(signalJet2_TLV)) : 0.;
  float ptjj = (nSignalJets>1) ?  (signalJet1_TLV + signalJet2_TLV).Pt() : 0.;
  float DeltaPhiMETj1 = fabs(signalJet1_TLV.DeltaPhi(susymet->lv()));
  float DeltaPhiMETj2 = (nSignalJets>1) ? fabs(signalJet2_TLV.DeltaPhi(susymet->lv())) : 0.;
  float DeltaRJJ = (nSignalJets>1) ?  fabs(signalJet1_TLV.DeltaR(signalJet2_TLV)) : 0.;
  float DeltaEtaJJ = (nSignalJets>1) ?  fabs(signalJet1_TLV.Eta() - signalJet2_TLV.Eta()) : 0.;
  float DeltaYJJ = (nSignalJets>1) ?  fabs(signalJet1_TLV.Rapidity() - signalJet2_TLV.Rapidity()) : 0.;
  float DeltaPhiMETjj = (nSignalJets>1) ?  fabs((signalJet1_TLV+ signalJet2_TLV).DeltaPhi(susymet->lv())) : 0.;
  int NBJets = numberOfCBJets(m_signalJets2Lep);
  int NCJets = numberOfCLJets(m_signalJets2Lep);
  float MET = susymet->lv().Et();
 
  h_N_events_SR6_MM->Fill(mcid, cut_MM, weight_ALL_MM); 
  h_METrel_SR6_MM->Fill(METrel, cut_MM, weight_ALL_MM); 
  h_DeltaRLeptons_SR6_MM->Fill(DeltaRmm, cut_MM, weight_ALL_MM); 
  h_mt2_SR6_MM->Fill(mt2_mm, cut_MM, weight_ALL_MM);
  h_ptll_SR6_MM->Fill(ptmm, cut_MM, weight_ALL_MM); 
  h_Mll_SR6_MM->Fill(Mmm, cut_MM, weight_ALL_MM); 
  h_mZTT_coll_SR6_MM->Fill(mZTT_coll, cut_MM, weight_ALL_MM); 
  h_mZTT_mmc_SR6_MM->Fill(mZTT_mmc, cut_MM, weight_ALL_MM); 
  h_mZTT_missMassCalc_SR6_MM->Fill(mZTT_missMass, cut_MM, weight_ALL_MM); 
  h_mTll_SR6_MM->Fill(mTmm, cut_MM, weight_ALL_MM); 
  h_mTlmin_SR6_MM->Fill(mTemin, cut_MM, weight_ALL_MM); 
  if(nSignalJets>1) h_mJJ_SR6_MM->Fill(mjj, cut_MM, weight_ALL_MM);
  h_mMETLL_SR6_MM->Fill(mMETmm, cut_MM, weight_ALL_MM);
  h_mCT_SR6_MM->Fill(mCT, cut_MM, weight_ALL_MM);
  h_pTj1_SR6_MM->Fill(signalJet1_TLV.Pt(), cut_MM, weight_ALL_MM);
  if(nSignalJets>1) h_pTj2_SR6_MM->Fill((nSignalJets>1) ? signalJet2_TLV.Pt() : 0., cut_MM, weight_ALL_MM);
  h_pTl1_SR6_MM->Fill(mu1_TLV.Pt(), cut_MM, weight_ALL_MM);
  h_pTl2_SR6_MM->Fill(mu2_TLV.Pt(), cut_MM, weight_ALL_MM);
  h_DeltaPhiLL_SR6_MM->Fill(DeltaPhiMM, cut_MM, weight_ALL_MM);
  if(nSignalJets>1) h_DeltaPhiJJ_SR6_MM->Fill(DeltaPhiJJ, cut_MM, weight_ALL_MM);
  h_DeltaPhiMETL1_SR6_MM->Fill(DeltaPhiMETe1, cut_MM, weight_ALL_MM);
  h_DeltaPhiMETL2_SR6_MM->Fill(DeltaPhiMETe2, cut_MM, weight_ALL_MM);
  h_pTJJ_SR6_MM->Fill(ptjj, cut_MM, weight_ALL_MM);
  h_DeltaPhiMETJ1_SR6_MM->Fill(DeltaPhiMETj1, cut_MM, weight_ALL_MM);
  if(nSignalJets>1) h_DeltaPhiMETJ2_SR6_MM->Fill(DeltaPhiMETj2, cut_MM, weight_ALL_MM);
  h_DeltaPhiMETLL_SR6_MM->Fill(DeltaPhiMETmm, cut_MM, weight_ALL_MM);
  if(nSignalJets>1) h_DeltaPhiMETJJ_SR6_MM->Fill(DeltaPhiMETjj, cut_MM, weight_ALL_MM);
  if(nSignalJets>1) h_DeltaRJJ_SR6_MM->Fill(DeltaRJJ, cut_MM, weight_ALL_MM);
  h_etaL1_SR6_MM->Fill(mu1_TLV.Eta(), cut_MM, weight_ALL_MM);
  h_etaL2_SR6_MM->Fill(mu2_TLV.Eta(), cut_MM, weight_ALL_MM);
  h_etaJ1_SR6_MM->Fill(signalJet1_TLV.Eta(), cut_MM, weight_ALL_MM);
  if(nSignalJets>1) h_etaJ2_SR6_MM->Fill((nSignalJets>1) ?  signalJet2_TLV.Eta() : 0., cut_MM, weight_ALL_MM);
  if(nSignalJets>1) h_DeltaEtaJJ_SR6_MM->Fill(DeltaEtaJJ, cut_MM, weight_ALL_MM);
  if(nSignalJets>1) h_DeltaYJJ_SR6_MM->Fill(DeltaYJJ, cut_MM, weight_ALL_MM);
  h_mTL1MET_SR6_MM->Fill(mTmu1, cut_MM, weight_ALL_MM);
  h_mTL2MET_SR6_MM->Fill(mTmu2, cut_MM, weight_ALL_MM);
  h_NJets_SR6_MM->Fill(nSignalJets, cut_MM, weight_ALL_MM);
  
  if(nSignalJets>1) h_DeltaPhiLLJJ_SR6_MM->Fill(DeltaPhiLLJJ, cut_MM, weight_ALL_MM);  
  if(nSignalJets>1) h_DeltaPhiL1JJ_SR6_MM->Fill(DeltaPhiL1JJ, cut_MM, weight_ALL_MM);  
  if(nSignalJets>1) h_DeltaPhiL2JJ_SR6_MM->Fill(DeltaPhiL2JJ, cut_MM, weight_ALL_MM);  
  if(nSignalJets>1) h_DeltaRLLJJ_SR6_MM->Fill(DeltaRLLJJ, cut_MM, weight_ALL_MM);  
  h_NBJets_SR6_MM->Fill(NBJets, cut_MM, weight_ALL_MM);  
  h_NCJets_SR6_MM->Fill(NCJets, cut_MM, weight_ALL_MM);  
  h_MET_SR6_MM->Fill(MET, cut_MM, weight_ALL_MM);  
  h_HT_SR6_MM->Fill(HT, cut_MM, weight_ALL_MM);
  h_mWWt_SR6_MM->Fill(mWWt, cut_MM, weight_ALL_MM);
  
}

void TSelector_SusyNtuple::fillHistos_SR8_MM(int mcid, float cut_MM, float weight_ALL_MM, float METrel, float HT, float mWWt, float mCT, TLorentzVector mu1_TLV, TLorentzVector mu2_TLV, const Met* susymet, Muon* mu1, Muon* mu2, LeptonVector leptons, TLorentzVector signalJet1_TLV, TLorentzVector signalJet2_TLV, int nSignalJets ){
  
  TLorentzVector mu1_TLV_n, mu2_TLV_n;
  mu1_TLV_n.SetPtEtaPhiE(mu1->pt, mu1->eta ,mu1->phi, mu1->pt*cosh(mu1->eta));
  mu2_TLV_n.SetPtEtaPhiE(mu2->pt, mu2->eta ,mu2->phi, mu2->pt*cosh(mu2->eta));
  
//   cout << "mu1_TLV.Eta()= " <<  mu1_TLV.Eta() << " mu2_TLV.Eta()= " << mu2_TLV.Eta() << endl;
//   cout << "mu1_TLV.Pt()= " <<  mu1_TLV.Pt() << " mu2_TLV.Pt()= " << mu2_TLV.Pt() << endl;
  float DeltaRmm = mu1_TLV.DeltaR(mu2_TLV);
  float ptmm = (mu1_TLV_n + mu2_TLV_n).Pt();
  float Mmm = Mll(mu1, mu2);
  float mZTT_coll = calcMZTauTau_coll(mu1_TLV, mu2_TLV, susymet->lv());
  float mZTT_mmc =  calcMZTauTau_mmc(mu1_TLV, mu2_TLV, 1/*muon*/, 1/*muon*/);
  float mZTT_missMass = calcMZTauTau_MissMassCalc(mu1_TLV, mu2_TLV, 1/*muon*/, 1/*muon*/);
  float mTmm = calcMt((mu1_TLV+mu2_TLV), susymet->lv());
  float mTemin = (Mt(mu1, susymet) > Mt(mu2, susymet)) ? Mt(mu2, susymet) : Mt(mu1, susymet);
  float mTmu1 = Mt(mu1, susymet);
  float mTmu2 = Mt(mu2, susymet);
  float mMETmm = (mu1_TLV + mu2_TLV + susymet->lv()).M();
  float DeltaPhiMM = fabs(mu1_TLV.DeltaPhi(mu2_TLV));
  float DeltaPhiMETe1 = fabs(mu1_TLV.DeltaPhi(susymet->lv()));
  float DeltaPhiMETe2 = fabs(mu2_TLV.DeltaPhi(susymet->lv()));
  float DeltaPhiMETmm = fabs((mu1_TLV + mu2_TLV).DeltaPhi(susymet->lv()));
  float mt2_mm = getMT2(leptons, susymet);
  
  float DeltaPhiLLJJ = (nSignalJets>1) ?  (mu1_TLV + mu2_TLV).DeltaPhi(signalJet1_TLV + signalJet2_TLV) : 0.;
  float DeltaPhiL1JJ = (nSignalJets>1) ?  ((mu1_TLV.Pt()> mu2_TLV.Pt()) ? (mu1_TLV).DeltaPhi(signalJet1_TLV + signalJet2_TLV) : (mu2_TLV).DeltaPhi(signalJet1_TLV + signalJet2_TLV)) : 0.;
  float DeltaPhiL2JJ = (nSignalJets>1) ?  ((mu1_TLV.Pt()< mu2_TLV.Pt()) ? (mu2_TLV).DeltaPhi(signalJet1_TLV + signalJet2_TLV) : (mu1_TLV).DeltaPhi(signalJet1_TLV + signalJet2_TLV)) : 0.;
  float DeltaRLLJJ = (nSignalJets>1) ?  (mu1_TLV + mu2_TLV).DeltaR(signalJet1_TLV + signalJet2_TLV) : 0.;
  
  float mjj = (nSignalJets>1) ?  (signalJet1_TLV + signalJet2_TLV).M() : 0.;
  float DeltaPhiJJ = (nSignalJets>1) ?  fabs(signalJet1_TLV.DeltaPhi(signalJet2_TLV)) : 0.;
  float ptjj = (nSignalJets>1) ?  (signalJet1_TLV + signalJet2_TLV).Pt() : 0.;
  float DeltaPhiMETj1 = fabs(signalJet1_TLV.DeltaPhi(susymet->lv()));
  float DeltaPhiMETj2 = (nSignalJets>1) ? fabs(signalJet2_TLV.DeltaPhi(susymet->lv())) : 0.;
  float DeltaRJJ = (nSignalJets>1) ?  fabs(signalJet1_TLV.DeltaR(signalJet2_TLV)) : 0.;
  float DeltaEtaJJ = (nSignalJets>1) ?  fabs(signalJet1_TLV.Eta() - signalJet2_TLV.Eta()) : 0.;
  float DeltaYJJ = (nSignalJets>1) ?  fabs(signalJet1_TLV.Rapidity() - signalJet2_TLV.Rapidity()) : 0.;
  float DeltaPhiMETjj = (nSignalJets>1) ?  fabs((signalJet1_TLV+ signalJet2_TLV).DeltaPhi(susymet->lv())) : 0.;
  int NBJets = numberOfCBJets(m_signalJets2Lep);
  int NCJets = numberOfCLJets(m_signalJets2Lep);
  float MET = susymet->lv().Et();
 
  h_N_events_SR8_MM->Fill(mcid, cut_MM, weight_ALL_MM); 
  h_METrel_SR8_MM->Fill(METrel, cut_MM, weight_ALL_MM); 
  h_DeltaRLeptons_SR8_MM->Fill(DeltaRmm, cut_MM, weight_ALL_MM); 
  h_mt2_SR8_MM->Fill(mt2_mm, cut_MM, weight_ALL_MM);
  h_ptll_SR8_MM->Fill(ptmm, cut_MM, weight_ALL_MM); 
  h_Mll_SR8_MM->Fill(Mmm, cut_MM, weight_ALL_MM); 
  h_mZTT_coll_SR8_MM->Fill(mZTT_coll, cut_MM, weight_ALL_MM); 
  h_mZTT_mmc_SR8_MM->Fill(mZTT_mmc, cut_MM, weight_ALL_MM); 
  h_mZTT_missMassCalc_SR8_MM->Fill(mZTT_missMass, cut_MM, weight_ALL_MM); 
  h_mTll_SR8_MM->Fill(mTmm, cut_MM, weight_ALL_MM); 
  h_mTlmin_SR8_MM->Fill(mTemin, cut_MM, weight_ALL_MM); 
  if(nSignalJets>1) h_mJJ_SR8_MM->Fill(mjj, cut_MM, weight_ALL_MM);
  h_mMETLL_SR8_MM->Fill(mMETmm, cut_MM, weight_ALL_MM);
  h_mCT_SR8_MM->Fill(mCT, cut_MM, weight_ALL_MM);
  h_pTj1_SR8_MM->Fill(signalJet1_TLV.Pt(), cut_MM, weight_ALL_MM);
  if(nSignalJets>1) h_pTj2_SR8_MM->Fill((nSignalJets>1) ?  signalJet2_TLV.Pt() : 0., cut_MM, weight_ALL_MM);
  h_pTl1_SR8_MM->Fill(mu1_TLV.Pt(), cut_MM, weight_ALL_MM);
  h_pTl2_SR8_MM->Fill(mu2_TLV.Pt(), cut_MM, weight_ALL_MM);
  h_DeltaPhiLL_SR8_MM->Fill(DeltaPhiMM, cut_MM, weight_ALL_MM);
  if(nSignalJets>1) h_DeltaPhiJJ_SR8_MM->Fill(DeltaPhiJJ, cut_MM, weight_ALL_MM);
  h_DeltaPhiMETL1_SR8_MM->Fill(DeltaPhiMETe1, cut_MM, weight_ALL_MM);
  h_DeltaPhiMETL2_SR8_MM->Fill(DeltaPhiMETe2, cut_MM, weight_ALL_MM);
  h_pTJJ_SR8_MM->Fill(ptjj, cut_MM, weight_ALL_MM);
  h_DeltaPhiMETJ1_SR8_MM->Fill(DeltaPhiMETj1, cut_MM, weight_ALL_MM);
  if(nSignalJets>1) h_DeltaPhiMETJ2_SR8_MM->Fill(DeltaPhiMETj2, cut_MM, weight_ALL_MM);
  h_DeltaPhiMETLL_SR8_MM->Fill(DeltaPhiMETmm, cut_MM, weight_ALL_MM);
  if(nSignalJets>1) h_DeltaPhiMETJJ_SR8_MM->Fill(DeltaPhiMETjj, cut_MM, weight_ALL_MM);
  if(nSignalJets>1) h_DeltaRJJ_SR8_MM->Fill(DeltaRJJ, cut_MM, weight_ALL_MM);
  h_etaL1_SR8_MM->Fill(mu1_TLV.Eta(), cut_MM, weight_ALL_MM);
  h_etaL2_SR8_MM->Fill(mu2_TLV.Eta(), cut_MM, weight_ALL_MM);
  h_etaJ1_SR8_MM->Fill(signalJet1_TLV.Eta(), cut_MM, weight_ALL_MM);
  if(nSignalJets>1) h_etaJ2_SR8_MM->Fill((nSignalJets>1) ?  signalJet2_TLV.Eta() : 0., cut_MM, weight_ALL_MM);
  if(nSignalJets>1) h_DeltaEtaJJ_SR8_MM->Fill(DeltaEtaJJ, cut_MM, weight_ALL_MM);
  if(nSignalJets>1) h_DeltaYJJ_SR8_MM->Fill(DeltaYJJ, cut_MM, weight_ALL_MM);
  h_mTL1MET_SR8_MM->Fill(mTmu1, cut_MM, weight_ALL_MM);
  h_mTL2MET_SR8_MM->Fill(mTmu2, cut_MM, weight_ALL_MM);
  h_NJets_SR8_MM->Fill(nSignalJets, cut_MM, weight_ALL_MM);
  
  if(nSignalJets>1) h_DeltaPhiLLJJ_SR8_MM->Fill(DeltaPhiLLJJ, cut_MM, weight_ALL_MM);  
  if(nSignalJets>1) h_DeltaPhiL1JJ_SR8_MM->Fill(DeltaPhiL1JJ, cut_MM, weight_ALL_MM);  
  if(nSignalJets>1) h_DeltaPhiL2JJ_SR8_MM->Fill(DeltaPhiL2JJ, cut_MM, weight_ALL_MM);  
  if(nSignalJets>1) h_DeltaRLLJJ_SR8_MM->Fill(DeltaRLLJJ, cut_MM, weight_ALL_MM);  
  h_NBJets_SR8_MM->Fill(NBJets, cut_MM, weight_ALL_MM);  
  h_NCJets_SR8_MM->Fill(NCJets, cut_MM, weight_ALL_MM);  
  h_MET_SR8_MM->Fill(MET, cut_MM, weight_ALL_MM);  
  h_HT_SR8_MM->Fill(HT, cut_MM, weight_ALL_MM);
  h_mWWt_SR8_MM->Fill(mWWt, cut_MM, weight_ALL_MM);
  
}

void TSelector_SusyNtuple::fillHistos_SR7_EM(int mcid, float cut_EM, float weight_ALL_EM, float METrel, float HT, float mWWt, float mCT, TLorentzVector mu_TLV, TLorentzVector el_TLV, const Met* susymet, Muon* mu, Electron* el, LeptonVector leptons, TLorentzVector signalJet1_TLV, TLorentzVector signalJet2_TLV, int nSignalJets){
  
  float DeltaRem = fabs(mu_TLV.DeltaR(el_TLV));
  float ptem = (mu_TLV + el_TLV).Pt();
  float Mem = Mll(mu, el);
  float mZTT_coll =  calcMZTauTau_coll(mu_TLV, el_TLV, susymet->lv());
  float mZTT_mmc =  calcMZTauTau_mmc(mu_TLV, el_TLV, 1/*muon*/, 0/*electron*/);
  float mZTT_missMass = calcMZTauTau_MissMassCalc(mu_TLV, el_TLV, 1/*muon*/, 0/*electron*/);
  float mTem = calcMt((mu_TLV+el_TLV), susymet->lv());
  float mTemin = (Mt(mu, susymet) > Mt(el, susymet)) ? Mt(el, susymet) : Mt(mu, susymet);
  float mTmu = Mt(mu, susymet);
  float mTel = Mt(el, susymet);
  float mMETem = (mu_TLV + el_TLV + susymet->lv()).M();
  float DeltaPhiEM = fabs(mu_TLV.DeltaPhi(el_TLV));
  float DeltaPhiMETe1 = fabs(mu_TLV.DeltaPhi(susymet->lv()));
  float DeltaPhiMETe2 = fabs(el_TLV.DeltaPhi(susymet->lv()));
  float DeltaPhiMETem = fabs((mu_TLV + el_TLV).DeltaPhi(susymet->lv()));
  float mt2_em = getMT2(leptons, susymet);
  
  float DeltaPhiLLJJ = (nSignalJets>1) ? (mu_TLV + el_TLV).DeltaPhi(signalJet1_TLV + signalJet2_TLV) : 0.;
  float DeltaPhiL1JJ = (nSignalJets>1) ? ((mu_TLV.Pt()> el_TLV.Pt()) ? (mu_TLV).DeltaPhi(signalJet1_TLV + signalJet2_TLV) : (el_TLV).DeltaPhi(signalJet1_TLV + signalJet2_TLV)) : 0.;
  float DeltaPhiL2JJ = (nSignalJets>1) ? ((mu_TLV.Pt()< el_TLV.Pt()) ? (el_TLV).DeltaPhi(signalJet1_TLV + signalJet2_TLV) : (mu_TLV).DeltaPhi(signalJet1_TLV + signalJet2_TLV)) : 0.;
  float DeltaRLLJJ = (nSignalJets>1) ? (mu_TLV + el_TLV).DeltaR(signalJet1_TLV + signalJet2_TLV) : 0.;
  
  float mjj = (nSignalJets>1) ? (signalJet1_TLV + signalJet2_TLV).M() : 0.;
  float DeltaPhiJJ = (nSignalJets>1) ? fabs(signalJet1_TLV.DeltaPhi(signalJet2_TLV)) : 0.;
  float ptjj = (nSignalJets>1) ? (signalJet1_TLV + signalJet2_TLV).Pt() : 0.;
  float DeltaPhiMETj1 = fabs(signalJet1_TLV.DeltaPhi(susymet->lv()));
  float DeltaPhiMETj2 = (nSignalJets>1) ? fabs(signalJet2_TLV.DeltaPhi(susymet->lv())) : 0.;
  float DeltaRJJ = (nSignalJets>1) ? fabs(signalJet1_TLV.DeltaR(signalJet2_TLV)) : 0.;
  float DeltaEtaJJ = (nSignalJets>1) ? fabs(signalJet1_TLV.Eta() - signalJet2_TLV.Eta()) : 0.;
  float DeltaYJJ = (nSignalJets>1) ? fabs(signalJet1_TLV.Rapidity() - signalJet2_TLV.Rapidity()) : 0.;
  float NJets = m_signalJets2Lep.size();
  float DeltaPhiMETjj = (nSignalJets>1) ? fabs((signalJet1_TLV+ signalJet2_TLV).DeltaPhi(susymet->lv())) : 0.;
  int NBJets = numberOfCBJets(m_signalJets2Lep);
  int NCJets = numberOfCLJets(m_signalJets2Lep);
  float MET = susymet->lv().Et();
 
  h_N_events_SR7_EM->Fill(mcid, cut_EM, weight_ALL_EM); 
  h_METrel_SR7_EM->Fill(METrel, cut_EM, weight_ALL_EM); 
  h_DeltaRLeptons_SR7_EM->Fill(DeltaRem, cut_EM, weight_ALL_EM); 
  h_mt2_SR7_EM->Fill(mt2_em, cut_EM, weight_ALL_EM);
  h_ptll_SR7_EM->Fill(ptem, cut_EM, weight_ALL_EM); 
  h_Mll_SR7_EM->Fill(Mem, cut_EM, weight_ALL_EM); 
  h_mZTT_coll_SR7_EM->Fill(mZTT_coll, cut_EM, weight_ALL_EM); 
  h_mZTT_mmc_SR7_EM->Fill(mZTT_mmc, cut_EM, weight_ALL_EM); 
  h_mZTT_missMassCalc_SR7_EM->Fill(mZTT_missMass, cut_EM, weight_ALL_EM); 
  h_mTll_SR7_EM->Fill(mTem, cut_EM, weight_ALL_EM); 
  h_mTlmin_SR7_EM->Fill(mTemin, cut_EM, weight_ALL_EM); 
  if(nSignalJets>1) h_mJJ_SR7_EM->Fill(mjj, cut_EM, weight_ALL_EM);
  h_mMETLL_SR7_EM->Fill(mMETem, cut_EM, weight_ALL_EM);
  h_mCT_SR7_EM->Fill(mCT, cut_EM, weight_ALL_EM);
  h_pTj1_SR7_EM->Fill(signalJet1_TLV.Pt(), cut_EM, weight_ALL_EM);
  if(nSignalJets>1) h_pTj2_SR7_EM->Fill((nSignalJets>1) ? signalJet2_TLV.Pt() : 0., cut_EM, weight_ALL_EM);
  h_pTl1_SR7_EM->Fill(mu_TLV.Pt(), cut_EM, weight_ALL_EM);
  h_pTl2_SR7_EM->Fill(el_TLV.Pt(), cut_EM, weight_ALL_EM);
  h_DeltaPhiLL_SR7_EM->Fill(DeltaPhiEM, cut_EM, weight_ALL_EM);
  if(nSignalJets>1) h_DeltaPhiJJ_SR7_EM->Fill(DeltaPhiJJ, cut_EM, weight_ALL_EM);
  h_DeltaPhiMETL1_SR7_EM->Fill(DeltaPhiMETe1, cut_EM, weight_ALL_EM);
  h_DeltaPhiMETL2_SR7_EM->Fill(DeltaPhiMETe2, cut_EM, weight_ALL_EM);
  h_pTJJ_SR7_EM->Fill(ptjj, cut_EM, weight_ALL_EM);
  h_DeltaPhiMETJ1_SR7_EM->Fill(DeltaPhiMETj1, cut_EM, weight_ALL_EM);
  if(nSignalJets>1) h_DeltaPhiMETJ2_SR7_EM->Fill(DeltaPhiMETj2, cut_EM, weight_ALL_EM);
  h_DeltaPhiMETLL_SR7_EM->Fill(DeltaPhiMETem, cut_EM, weight_ALL_EM);
  if(nSignalJets>1) h_DeltaPhiMETJJ_SR7_EM->Fill(DeltaPhiMETjj, cut_EM, weight_ALL_EM);
  if(nSignalJets>1) h_DeltaRJJ_SR7_EM->Fill(DeltaRJJ, cut_EM, weight_ALL_EM);
  h_etaL1_SR7_EM->Fill(mu_TLV.Eta(), cut_EM, weight_ALL_EM);
  h_etaL2_SR7_EM->Fill(el_TLV.Eta(), cut_EM, weight_ALL_EM);
  h_etaJ1_SR7_EM->Fill(signalJet1_TLV.Eta(), cut_EM, weight_ALL_EM);
  if(nSignalJets>1) h_etaJ2_SR7_EM->Fill((nSignalJets>1) ? signalJet2_TLV.Eta() : 0., cut_EM, weight_ALL_EM);
  if(nSignalJets>1) h_DeltaEtaJJ_SR7_EM->Fill(DeltaEtaJJ, cut_EM, weight_ALL_EM);
  if(nSignalJets>1) h_DeltaYJJ_SR7_EM->Fill(DeltaYJJ, cut_EM, weight_ALL_EM);
  h_mTL1MET_SR7_EM->Fill(mTmu, cut_EM, weight_ALL_EM);
  h_mTL2MET_SR7_EM->Fill(mTel, cut_EM, weight_ALL_EM);
  h_NJets_SR7_EM->Fill(NJets, cut_EM, weight_ALL_EM);
  
  if(nSignalJets>1) h_DeltaPhiLLJJ_SR7_EM->Fill(DeltaPhiLLJJ, cut_EM, weight_ALL_EM);  
  if(nSignalJets>1) h_DeltaPhiL1JJ_SR7_EM->Fill(DeltaPhiL1JJ, cut_EM, weight_ALL_EM);  
  if(nSignalJets>1) h_DeltaPhiL2JJ_SR7_EM->Fill(DeltaPhiL2JJ, cut_EM, weight_ALL_EM);  
  if(nSignalJets>1) h_DeltaRLLJJ_SR7_EM->Fill(DeltaRLLJJ, cut_EM, weight_ALL_EM);  
  h_NBJets_SR7_EM->Fill(NBJets, cut_EM, weight_ALL_EM);  
  h_NCJets_SR7_EM->Fill(NCJets, cut_EM, weight_ALL_EM);  
  h_MET_SR7_EM->Fill(MET, cut_EM, weight_ALL_EM);  
  h_HT_SR7_EM->Fill(HT, cut_EM, weight_ALL_EM);
  h_mWWt_SR7_EM->Fill(mWWt, cut_EM, weight_ALL_EM);
  
}


void TSelector_SusyNtuple::fillHistos_SR9_EM(int mcid, float cut_EM, float weight_ALL_EM, float METrel, float HT, float mWWt, float mCT, TLorentzVector mu_TLV, TLorentzVector el_TLV, const Met* susymet, Muon* mu, Electron* el, LeptonVector leptons, TLorentzVector signalJet1_TLV, TLorentzVector signalJet2_TLV, int nSignalJets){
  
  float DeltaRem = fabs(mu_TLV.DeltaR(el_TLV));
  float ptem = (mu_TLV + el_TLV).Pt();
  float Mem = Mll(mu, el);
  float mZTT_coll = calcMZTauTau_coll(mu_TLV, el_TLV, susymet->lv());
  float mZTT_mmc = calcMZTauTau_mmc(mu_TLV, el_TLV, 1/*muon*/, 0/*electron*/);
  float mZTT_missMass = calcMZTauTau_MissMassCalc(mu_TLV, el_TLV, 1/*muon*/, 0/*electron*/);
  float mTem = calcMt((mu_TLV+el_TLV), susymet->lv());
  float mTemin = (Mt(mu, susymet) > Mt(el, susymet)) ? Mt(el, susymet) : Mt(mu, susymet);
  float mTmu = Mt(mu, susymet);
  float mTel = Mt(el, susymet);
  float mMETem = (mu_TLV + el_TLV + susymet->lv()).M();
  float DeltaPhiEM = fabs(mu_TLV.DeltaPhi(el_TLV));
  float DeltaPhiMETe1 = fabs(mu_TLV.DeltaPhi(susymet->lv()));
  float DeltaPhiMETe2 = fabs(el_TLV.DeltaPhi(susymet->lv()));
  float DeltaPhiMETem = fabs((mu_TLV + el_TLV).DeltaPhi(susymet->lv()));
  float mt2_em = getMT2(leptons, susymet);
  
  float DeltaPhiLLJJ = (nSignalJets>1) ? (mu_TLV + el_TLV).DeltaPhi(signalJet1_TLV + signalJet2_TLV) : 0.;
  float DeltaPhiL1JJ = (nSignalJets>1) ? ((mu_TLV.Pt()> el_TLV.Pt()) ? (mu_TLV).DeltaPhi(signalJet1_TLV + signalJet2_TLV) : (el_TLV).DeltaPhi(signalJet1_TLV + signalJet2_TLV)) : 0.;
  float DeltaPhiL2JJ = (nSignalJets>1) ? ((mu_TLV.Pt()< el_TLV.Pt()) ? (el_TLV).DeltaPhi(signalJet1_TLV + signalJet2_TLV) : (mu_TLV).DeltaPhi(signalJet1_TLV + signalJet2_TLV)) : 0.;
  float DeltaRLLJJ = (nSignalJets>1) ? (mu_TLV + el_TLV).DeltaR(signalJet1_TLV + signalJet2_TLV) : 0.;
  
  float mjj = (nSignalJets>1) ? (signalJet1_TLV + signalJet2_TLV).M() : 0.;
  float DeltaPhiJJ = (nSignalJets>1) ? fabs(signalJet1_TLV.DeltaPhi(signalJet2_TLV)) : 0.;
  float ptjj = (nSignalJets>1) ? (signalJet1_TLV + signalJet2_TLV).Pt() : 0.;
  float DeltaPhiMETj1 = fabs(signalJet1_TLV.DeltaPhi(susymet->lv()));
  float DeltaPhiMETj2 = (nSignalJets>1) ? fabs(signalJet2_TLV.DeltaPhi(susymet->lv())) : 0.;
  float DeltaRJJ = (nSignalJets>1) ? fabs(signalJet1_TLV.DeltaR(signalJet2_TLV)) : 0.;
  float DeltaEtaJJ = (nSignalJets>1) ? fabs(signalJet1_TLV.Eta() - signalJet2_TLV.Eta()) : 0.;
  float DeltaYJJ = (nSignalJets>1) ? fabs(signalJet1_TLV.Rapidity() - signalJet2_TLV.Rapidity()) : 0.;
  float NJets = m_signalJets2Lep.size();
  float DeltaPhiMETjj = (nSignalJets>1) ? fabs((signalJet1_TLV+ signalJet2_TLV).DeltaPhi(susymet->lv())) : 0.;
  int NBJets = numberOfCBJets(m_signalJets2Lep);
  int NCJets = numberOfCLJets(m_signalJets2Lep);
  float MET = susymet->lv().Et();
 
  h_N_events_SR9_EM->Fill(mcid, cut_EM, weight_ALL_EM); 
  h_METrel_SR9_EM->Fill(METrel, cut_EM, weight_ALL_EM); 
  h_DeltaRLeptons_SR9_EM->Fill(DeltaRem, cut_EM, weight_ALL_EM); 
  h_mt2_SR9_EM->Fill(mt2_em, cut_EM, weight_ALL_EM);
  h_ptll_SR9_EM->Fill(ptem, cut_EM, weight_ALL_EM); 
  h_Mll_SR9_EM->Fill(Mem, cut_EM, weight_ALL_EM); 
  h_mZTT_coll_SR9_EM->Fill(mZTT_coll, cut_EM, weight_ALL_EM); 
  h_mZTT_mmc_SR9_EM->Fill(mZTT_mmc, cut_EM, weight_ALL_EM); 
  h_mZTT_missMassCalc_SR9_EM->Fill(mZTT_missMass, cut_EM, weight_ALL_EM); 
  h_mTll_SR9_EM->Fill(mTem, cut_EM, weight_ALL_EM); 
  h_mTlmin_SR9_EM->Fill(mTemin, cut_EM, weight_ALL_EM); 
  if(nSignalJets>1) h_mJJ_SR9_EM->Fill(mjj, cut_EM, weight_ALL_EM);
  h_mMETLL_SR9_EM->Fill(mMETem, cut_EM, weight_ALL_EM);
  h_mCT_SR9_EM->Fill(mCT, cut_EM, weight_ALL_EM);
  h_pTj1_SR9_EM->Fill(signalJet1_TLV.Pt(), cut_EM, weight_ALL_EM);
  if(nSignalJets>1) h_pTj2_SR9_EM->Fill((nSignalJets>1) ? signalJet2_TLV.Pt() : 0., cut_EM, weight_ALL_EM);
  h_pTl1_SR9_EM->Fill(mu_TLV.Pt(), cut_EM, weight_ALL_EM);
  h_pTl2_SR9_EM->Fill(el_TLV.Pt(), cut_EM, weight_ALL_EM);
  h_DeltaPhiLL_SR9_EM->Fill(DeltaPhiEM, cut_EM, weight_ALL_EM);
  if(nSignalJets>1) h_DeltaPhiJJ_SR9_EM->Fill(DeltaPhiJJ, cut_EM, weight_ALL_EM);
  h_DeltaPhiMETL1_SR9_EM->Fill(DeltaPhiMETe1, cut_EM, weight_ALL_EM);
  h_DeltaPhiMETL2_SR9_EM->Fill(DeltaPhiMETe2, cut_EM, weight_ALL_EM);
  h_pTJJ_SR9_EM->Fill(ptjj, cut_EM, weight_ALL_EM);
  h_DeltaPhiMETJ1_SR9_EM->Fill(DeltaPhiMETj1, cut_EM, weight_ALL_EM);
  if(nSignalJets>1) h_DeltaPhiMETJ2_SR9_EM->Fill(DeltaPhiMETj2, cut_EM, weight_ALL_EM);
  h_DeltaPhiMETLL_SR9_EM->Fill(DeltaPhiMETem, cut_EM, weight_ALL_EM);
  if(nSignalJets>1) h_DeltaPhiMETJJ_SR9_EM->Fill(DeltaPhiMETjj, cut_EM, weight_ALL_EM);
  if(nSignalJets>1) h_DeltaRJJ_SR9_EM->Fill(DeltaRJJ, cut_EM, weight_ALL_EM);
  h_etaL1_SR9_EM->Fill(mu_TLV.Eta(), cut_EM, weight_ALL_EM);
  h_etaL2_SR9_EM->Fill(el_TLV.Eta(), cut_EM, weight_ALL_EM);
  h_etaJ1_SR9_EM->Fill(signalJet1_TLV.Eta(), cut_EM, weight_ALL_EM);
  if(nSignalJets>1) h_etaJ2_SR9_EM->Fill((nSignalJets>1) ? signalJet2_TLV.Eta() : 0., cut_EM, weight_ALL_EM);
  if(nSignalJets>1) h_DeltaEtaJJ_SR9_EM->Fill(DeltaEtaJJ, cut_EM, weight_ALL_EM);
  if(nSignalJets>1) h_DeltaYJJ_SR9_EM->Fill(DeltaYJJ, cut_EM, weight_ALL_EM);
  h_mTL1MET_SR9_EM->Fill(mTmu, cut_EM, weight_ALL_EM);
  h_mTL2MET_SR9_EM->Fill(mTel, cut_EM, weight_ALL_EM);
  h_NJets_SR9_EM->Fill(NJets, cut_EM, weight_ALL_EM);
  
  if(nSignalJets>1) h_DeltaPhiLLJJ_SR9_EM->Fill(DeltaPhiLLJJ, cut_EM, weight_ALL_EM);  
  if(nSignalJets>1) h_DeltaPhiL1JJ_SR9_EM->Fill(DeltaPhiL1JJ, cut_EM, weight_ALL_EM);  
  if(nSignalJets>1) h_DeltaPhiL2JJ_SR9_EM->Fill(DeltaPhiL2JJ, cut_EM, weight_ALL_EM);  
  if(nSignalJets>1) h_DeltaRLLJJ_SR9_EM->Fill(DeltaRLLJJ, cut_EM, weight_ALL_EM);  
  h_NBJets_SR9_EM->Fill(NBJets, cut_EM, weight_ALL_EM);  
  h_NCJets_SR9_EM->Fill(NCJets, cut_EM, weight_ALL_EM);  
  h_MET_SR9_EM->Fill(MET, cut_EM, weight_ALL_EM);  
  h_HT_SR9_EM->Fill(HT, cut_EM, weight_ALL_EM);
  h_mWWt_SR9_EM->Fill(mWWt, cut_EM, weight_ALL_EM);
  
}