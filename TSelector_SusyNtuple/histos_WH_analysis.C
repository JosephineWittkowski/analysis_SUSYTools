bool TSelector_SusyNtuple::defineHistos(){

  h_storeSumwMcid = new TH1F("h_storeSumwMcid", "h_storeSumwMcid", 200000, 0, 200000.);  h_storeSumwMcid->Sumw2();
  
  cutflow_EE = new TH1F("cutflow_EE", "cutflow_EE" ,130, 0, 129); cutflow_EE->Sumw2();
  cutflow_EE_ALL = new TH1F("cutflow_EE_ALL", "cutflow_EE_ALL" ,130, 0, 129); cutflow_EE_ALL->Sumw2();

  cutflow_MM = new TH1F("cutflow_MM", "cutflow_MM" ,130, 0, 129); cutflow_EE_ALL->Sumw2();
  cutflow_MM_ALL = new TH1F("cutflow_MM_ALL", "cutflow_MM_ALL" ,130, 0, 129); cutflow_MM_ALL->Sumw2();

  cutflow_EM = new TH1F("cutflow_EM", "cutflow_EM" ,130, 0, 129); cutflow_EM->Sumw2();
  cutflow_EM_ALL = new TH1F("cutflow_EM_ALL", "cutflow_EM_ALL" ,130, 0, 129);  ; cutflow_EM_ALL->Sumw2();
  
  h_DeltaR_ljOR_EE = new TH1F("h_DeltaR_ljOR_EE", "h_DeltaR_ljOR_EE", 70, 0, 7); h_DeltaR_ljOR_EE->Sumw2();
  h_DeltaR_ljOR_MM = new TH1F("h_DeltaR_ljOR_MM", "h_DeltaR_ljOR_MM", 70, 0, 7); h_DeltaR_ljOR_MM->Sumw2();
  h_DeltaR_l0jOR_EM = new TH1F("h_DeltaR_l0jOR_EM", "h_DeltaR_l0jOR_EM", 70, 0, 7); h_DeltaR_l0jOR_EM->Sumw2();
  h_DeltaR_l1jOR_EM = new TH1F("h_DeltaR_l1jOR_EM", "h_DeltaR_l1jOR_EM", 70, 0, 7); h_DeltaR_l1jOR_EM->Sumw2();
  
  h_mllCut_EE = new TH1F("h_mllCut_EE", "h_mllCut_EE", 250, 0, 250); h_mllCut_EE->Sumw2();
  h_mllCut_MM = new TH1F("h_mllCut_MM", "h_mllCut_MM", 250, 0, 250); h_mllCut_MM->Sumw2();
  h_mllCut_l0_EM = new TH1F("h_mllCut_l0_EM", "h_mllCut_l0_EM", 250, 0, 250); h_mllCut_l0_EM->Sumw2();
  h_mllCut_l1_EM = new TH1F("h_mllCut_l1_EM", "h_mllCut_l1_EM", 250, 0, 250); h_mllCut_l1_EM->Sumw2();
  
  h_DeltaR_em_EM = new TH1F("h_DeltaR_em_EM", "h_DeltaR_em_EM", 70, 0, 7); h_DeltaR_em_EM->Sumw2();

  h_failedSignalCriteria_l0_EE = new TH2F("h_failedSignalCriteria_l0_EE", "h_failedSignalCriteria_l0_EE", 15, -0.5, 14.5, 130, 0, 129); h_failedSignalCriteria_l0_EE->Sumw2();
  h_failedSignalCriteria_l1_EE = new TH2F("h_failedSignalCriteria_l1_EE", "h_failedSignalCriteria_l1_EE", 15, -0.5, 14.5, 130, 0, 129); h_failedSignalCriteria_l1_EE->Sumw2();  
  h_failedSignalCriteria_l0_MM = new TH2F("h_failedSignalCriteria_l0_MM", "h_failedSignalCriteria_l0_MM", 15, -0.5, 14.5, 130, 0, 129); h_failedSignalCriteria_l0_MM->Sumw2();
  h_failedSignalCriteria_l1_MM = new TH2F("h_failedSignalCriteria_l1_MM", "h_failedSignalCriteria_l1_MM", 15, -0.5, 14.5, 130, 0, 129); h_failedSignalCriteria_l1_MM->Sumw2();
  h_failedSignalCriteria_l0_EM = new TH2F("h_failedSignalCriteria_l0_EM", "h_failedSignalCriteria_l0_EM", 15, -0.5, 14.5, 130, 0, 129); h_failedSignalCriteria_l0_EM->Sumw2();
  h_failedSignalCriteria_l1_EM = new TH2F("h_failedSignalCriteria_l1_EM", "h_failedSignalCriteria_l1_EM", 15, -0.5, 14.5, 130, 0, 129); h_failedSignalCriteria_l1_EM->Sumw2();

  h_etcone30l0lZcand_EE_SRSS1 = new TH2F("h_etcone30l0lZcand_EE_SRSS1", "h_etcone30l0lZcand_EE_SRSS1", 100, 0, 1 ,130, 0, 129); h_etcone30l0lZcand_EE_SRSS1->Sumw2();
  h_etcone30l0lZcandSoft_EE_SRSS1 = new TH2F("h_etcone30l0lZcandSoft_EE_SRSS1", "h_etcone30l0lZcandSoft_EE_SRSS1", 100, 0, 1 ,130, 0, 129); h_etcone30l0lZcandSoft_EE_SRSS1->Sumw2();
  h_etcone30l0lZcandSimple_EE_SRSS1 = new TH2F("h_etcone30l0lZcandSimple_EE_SRSS1", "h_etcone30l0lZcandSimple_EE_SRSS1", 100, 0, 1 ,130, 0, 129); h_etcone30l0lZcandSimple_EE_SRSS1->Sumw2();
  h_etcone30l0lZcandIso_EE_SRSS1 = new TH2F("h_etcone30l0lZcandIso_EE_SRSS1", "h_etcone30l0lZcandIso_EE_SRSS1", 100, 0, 1 ,130, 0, 129); h_etcone30l0lZcandIso_EE_SRSS1->Sumw2();
  
  h_etcone30l1lZcand_EE_SRSS1 = new TH2F("h_etcone30l1lZcand_EE_SRSS1", "h_etcone30l1lZcand_EE_SRSS1", 100, 0, 1 ,130, 0, 129); h_etcone30l1lZcand_EE_SRSS1->Sumw2();
  h_etcone30l1lZcandSoft_EE_SRSS1 = new TH2F("h_etcone30l1lZcandSoft_EE_SRSS1", "h_etcone30l1lZcandSoft_EE_SRSS1", 100, 0, 1 ,130, 0, 129); h_etcone30l1lZcandSoft_EE_SRSS1->Sumw2();
  h_etcone30l1lZcandSimple_EE_SRSS1 = new TH2F("h_etcone30l1lZcandSimple_EE_SRSS1", "h_etcone30l1lZcandSimple_EE_SRSS1", 100, 0, 1 ,130, 0, 129); h_etcone30l1lZcandSimple_EE_SRSS1->Sumw2();
  h_etcone30l1lZcandIso_EE_SRSS1 = new TH2F("h_etcone30l1lZcandIso_EE_SRSS1", "h_etcone30l1lZcandIso_EE_SRSS1", 100, 0, 1 ,130, 0, 129); h_etcone30l1lZcandIso_EE_SRSS1->Sumw2();
  
  h_etcone30l1lZcand_EM_SRSS1 = new TH2F("h_etcone30l1lZcand_EM_SRSS1", "h_etcone30l1lZcand_EM_SRSS1", 100, 0, 1 ,130, 0, 129); h_etcone30l1lZcand_EM_SRSS1->Sumw2();
  h_etcone30l1lZcandSoft_EM_SRSS1 = new TH2F("h_etcone30l1lZcandSoft_EM_SRSS1", "h_etcone30l1lZcandSoft_EM_SRSS1", 100, 0, 1 ,130, 0, 129); h_etcone30l1lZcandSoft_EM_SRSS1->Sumw2();
  h_etcone30l1lZcandSimple_EM_SRSS1 = new TH2F("h_etcone30l1lZcandSimple_EM_SRSS1", "h_etcone30l1lZcandSimple_EM_SRSS1", 100, 0, 1 ,130, 0, 129); h_etcone30l1lZcandSimple_EM_SRSS1->Sumw2();
  h_etcone30l1lZcandIso_EM_SRSS1 = new TH2F("h_etcone30l1lZcandIso_EM_SRSS1", "h_etcone30l1lZcandIso_EM_SRSS1", 100, 0, 1 ,130, 0, 129); h_etcone30l1lZcandIso_EM_SRSS1->Sumw2();
    
   //Zcandidate
  h_Nleptons_Zcand_EE_SRSS1 = new TH2F("h_Nleptons_Zcand_EE_SRSS1", "h_Nleptons_Zcand_EE_SRSS1", 11, -0.5, 10.5, 130, 0, 129); h_Nleptons_Zcand_EE_SRSS1->Sumw2();
  h_Nleptons_Zcand_MM_SRSS1 = new TH2F("h_Nleptons_Zcand_MM_SRSS1", "h_Nleptons_Zcand_MM_SRSS1", 11, -0.5, 10.5, 130, 0, 129); h_Nleptons_Zcand_MM_SRSS1->Sumw2();
  h_Nleptons_Zcand_EM_SRSS1 = new TH2F("h_Nleptons_Zcand_EM_SRSS1", "h_Nleptons_Zcand_EM_SRSS1", 11, -0.5, 10.5, 130, 0, 129); h_Nleptons_Zcand_EM_SRSS1->Sumw2();
  
  h_ml0lZcand_EE_SRSS1 = new TH2F("h_ml0lZcand_EE_SRSS1", "h_ml0lZcand_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0lZcand_EE_SRSS1->Sumw2();
  h_ml0lZcand_MM_SRSS1 = new TH2F("h_ml0lZcand_MM_SRSS1", "h_ml0lZcand_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0lZcand_MM_SRSS1->Sumw2();
  h_ml0lZcand_EM_SRSS1 = new TH2F("h_ml0lZcand_EM_SRSS1", "h_ml0lZcand_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0lZcand_EM_SRSS1->Sumw2();
  
   
  h_mTl0lZcand_EE_SRSS1 = new TH2F("h_mTl0lZcand_EE_SRSS1", "h_mTl0lZcand_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0lZcand_EE_SRSS1->Sumw2();
  h_mTl0lZcand_MM_SRSS1 = new TH2F("h_mTl0lZcand_MM_SRSS1", "h_mTl0lZcand_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0lZcand_MM_SRSS1->Sumw2();
  h_mTl0lZcand_EM_SRSS1 = new TH2F("h_mTl0lZcand_EM_SRSS1", "h_mTl0lZcand_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0lZcand_EM_SRSS1->Sumw2();
  
  h_ICl0lZcand_EE_SRSS1 = new TH2F("h_ICl0lZcand_EE_SRSS1", "h_ICl0lZcand_EE_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl0lZcand_EE_SRSS1->Sumw2();
  h_ICl0lZcand_MM_SRSS1 = new TH2F("h_ICl0lZcand_MM_SRSS1", "h_ICl0lZcand_MM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl0lZcand_MM_SRSS1->Sumw2();
  h_ICl0lZcand_EM_SRSS1 = new TH2F("h_ICl0lZcand_EM_SRSS1", "h_ICl0lZcand_EM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl0lZcand_EM_SRSS1->Sumw2();
  
  h_pTl0lZcand_EE_SRSS1 = new TH2F("h_pTl0lZcand_EE_SRSS1", "h_pTl0lZcand_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl0lZcand_EE_SRSS1->Sumw2();
  h_pTl0lZcand_MM_SRSS1 = new TH2F("h_pTl0lZcand_MM_SRSS1", "h_pTl0lZcand_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl0lZcand_MM_SRSS1->Sumw2();
  h_pTl0lZcand_EM_SRSS1 = new TH2F("h_pTl0lZcand_EM_SRSS1", "h_pTl0lZcand_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl0lZcand_EM_SRSS1->Sumw2();
  
  h_etal0lZcand_EE_SRSS1 = new TH2F("h_etal0lZcand_EE_SRSS1", "h_etal0lZcand_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal0lZcand_EE_SRSS1->Sumw2();
  h_etal0lZcand_MM_SRSS1 = new TH2F("h_etal0lZcand_MM_SRSS1", "h_etal0lZcand_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal0lZcand_MM_SRSS1->Sumw2();
  h_etal0lZcand_EM_SRSS1 = new TH2F("h_etal0lZcand_EM_SRSS1", "h_etal0lZcand_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal0lZcand_EM_SRSS1->Sumw2();
  
  h_ptcone30l0lZcand_EE_SRSS1 = new TH2F("h_ptcone30l0lZcand_EE_SRSS1", "h_ptcone30l0lZcand_EE_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l0lZcand_EE_SRSS1->Sumw2();
  h_ptcone30l0lZcand_MM_SRSS1 = new TH2F("h_ptcone30l0lZcand_MM_SRSS1", "h_ptcone30l0lZcand_MM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l0lZcand_MM_SRSS1->Sumw2();
  h_ptcone30l0lZcand_EM_SRSS1 = new TH2F("h_ptcone30l0lZcand_EM_SRSS1", "h_ptcone30l0lZcand_EM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l0lZcand_EM_SRSS1->Sumw2();
  
  h_d0Sigl0lZcand_EE_SRSS1 = new TH2F("h_d0Sigl0lZcand_EE_SRSS1", "h_d0Sigl0lZcand_EE_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl0lZcand_EE_SRSS1->Sumw2();
  h_d0Sigl0lZcand_MM_SRSS1 = new TH2F("h_d0Sigl0lZcand_MM_SRSS1", "h_d0Sigl0lZcand_MM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl0lZcand_MM_SRSS1->Sumw2();
  h_d0Sigl0lZcand_EM_SRSS1 = new TH2F("h_d0Sigl0lZcand_EM_SRSS1", "h_d0Sigl0lZcand_EM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl0lZcand_EM_SRSS1->Sumw2();
  
  h_z0SinThetal0lZcand_EE_SRSS1 = new TH2F("h_z0SinThetal0lZcand_EE_SRSS1", "h_z0SinThetal0lZcand_EE_SRSS1", 100, 0, 5 ,130, 0, 129);  h_z0SinThetal0lZcand_EE_SRSS1->Sumw2();
  h_z0SinThetal0lZcand_MM_SRSS1 = new TH2F("h_z0SinThetal0lZcand_MM_SRSS1", "h_z0SinThetal0lZcand_MM_SRSS1", 100, 0, 5 ,130, 0, 129);  h_z0SinThetal0lZcand_MM_SRSS1->Sumw2();
  h_z0SinThetal0lZcand_EM_SRSS1 = new TH2F("h_z0SinThetal0lZcand_EM_SRSS1", "h_z0SinThetal0lZcand_EM_SRSS1", 100, 0, 5 ,130, 0, 129);  h_z0SinThetal0lZcand_EM_SRSS1->Sumw2();
  
  h_ml1lZcand_EE_SRSS1 = new TH2F("h_ml1lZcand_EE_SRSS1", "h_ml1lZcand_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1lZcand_EE_SRSS1->Sumw2();
  h_ml1lZcand_MM_SRSS1 = new TH2F("h_ml1lZcand_MM_SRSS1", "h_ml1lZcand_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1lZcand_MM_SRSS1->Sumw2();
  h_ml1lZcand_EM_SRSS1 = new TH2F("h_ml1lZcand_EM_SRSS1", "h_ml1lZcand_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1lZcand_EM_SRSS1->Sumw2();
  
   
  h_mTl1lZcand_EE_SRSS1 = new TH2F("h_mTl1lZcand_EE_SRSS1", "h_mTl1lZcand_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1lZcand_EE_SRSS1->Sumw2();
  h_mTl1lZcand_MM_SRSS1 = new TH2F("h_mTl1lZcand_MM_SRSS1", "h_mTl1lZcand_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1lZcand_MM_SRSS1->Sumw2();
  h_mTl1lZcand_EM_SRSS1 = new TH2F("h_mTl1lZcand_EM_SRSS1", "h_mTl1lZcand_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1lZcand_EM_SRSS1->Sumw2();
  
  h_ICl1lZcand_EE_SRSS1 = new TH2F("h_ICl1lZcand_EE_SRSS1", "h_ICl1lZcand_EE_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl1lZcand_EE_SRSS1->Sumw2();
  h_ICl1lZcand_MM_SRSS1 = new TH2F("h_ICl1lZcand_MM_SRSS1", "h_ICl1lZcand_MM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl1lZcand_MM_SRSS1->Sumw2();
  h_ICl1lZcand_EM_SRSS1 = new TH2F("h_ICl1lZcand_EM_SRSS1", "h_ICl1lZcand_EM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl1lZcand_EM_SRSS1->Sumw2();
  
  h_pTl1lZcand_EE_SRSS1 = new TH2F("h_pTl1lZcand_EE_SRSS1", "h_pTl1lZcand_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl1lZcand_EE_SRSS1->Sumw2();
  h_pTl1lZcand_MM_SRSS1 = new TH2F("h_pTl1lZcand_MM_SRSS1", "h_pTl1lZcand_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl1lZcand_MM_SRSS1->Sumw2();
  h_pTl1lZcand_EM_SRSS1 = new TH2F("h_pTl1lZcand_EM_SRSS1", "h_pTl1lZcand_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl1lZcand_EM_SRSS1->Sumw2();
  
  h_etal1lZcand_EE_SRSS1 = new TH2F("h_etal1lZcand_EE_SRSS1", "h_etal1lZcand_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal1lZcand_EE_SRSS1->Sumw2();
  h_etal1lZcand_MM_SRSS1 = new TH2F("h_etal1lZcand_MM_SRSS1", "h_etal1lZcand_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal1lZcand_MM_SRSS1->Sumw2();
  h_etal1lZcand_EM_SRSS1 = new TH2F("h_etal1lZcand_EM_SRSS1", "h_etal1lZcand_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal1lZcand_EM_SRSS1->Sumw2();
  
  h_ptcone30l1lZcand_EE_SRSS1 = new TH2F("h_ptcone30l1lZcand_EE_SRSS1", "h_ptcone30l1lZcand_EE_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l1lZcand_EE_SRSS1->Sumw2();
  h_ptcone30l1lZcand_MM_SRSS1 = new TH2F("h_ptcone30l1lZcand_MM_SRSS1", "h_ptcone30l1lZcand_MM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l1lZcand_MM_SRSS1->Sumw2();
  h_ptcone30l1lZcand_EM_SRSS1 = new TH2F("h_ptcone30l1lZcand_EM_SRSS1", "h_ptcone30l1lZcand_EM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l1lZcand_EM_SRSS1->Sumw2();
  
  h_d0Sigl1lZcand_EE_SRSS1 = new TH2F("h_d0Sigl1lZcand_EE_SRSS1", "h_d0Sigl1lZcand_EE_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl1lZcand_EE_SRSS1->Sumw2();
  h_d0Sigl1lZcand_MM_SRSS1 = new TH2F("h_d0Sigl1lZcand_MM_SRSS1", "h_d0Sigl1lZcand_MM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl1lZcand_MM_SRSS1->Sumw2();
  h_d0Sigl1lZcand_EM_SRSS1 = new TH2F("h_d0Sigl1lZcand_EM_SRSS1", "h_d0Sigl1lZcand_EM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl1lZcand_EM_SRSS1->Sumw2();
  
  h_z0SinThetal1lZcand_EE_SRSS1 = new TH2F("h_z0SinThetal1lZcand_EE_SRSS1", "h_z0SinThetal1lZcand_EE_SRSS1", 100, 0, 5 ,130, 0, 129);  h_z0SinThetal1lZcand_EE_SRSS1->Sumw2();
  h_z0SinThetal1lZcand_MM_SRSS1 = new TH2F("h_z0SinThetal1lZcand_MM_SRSS1", "h_z0SinThetal1lZcand_MM_SRSS1", 100, 0, 5 ,130, 0, 129);  h_z0SinThetal1lZcand_MM_SRSS1->Sumw2();
  h_z0SinThetal1lZcand_EM_SRSS1 = new TH2F("h_z0SinThetal1lZcand_EM_SRSS1", "h_z0SinThetal1lZcand_EM_SRSS1", 100, 0, 5 ,130, 0, 129);  h_z0SinThetal1lZcand_EM_SRSS1->Sumw2();
  
  
  //ZcandidateSoft
  h_Nleptons_ZcandSoft_EE_SRSS1 = new TH2F("h_Nleptons_ZcandSoft_EE_SRSS1", "h_Nleptons_ZcandSoft_EE_SRSS1", 11, -0.5, 10.5, 130, 0, 129); h_Nleptons_ZcandSoft_EE_SRSS1->Sumw2();
  h_Nleptons_ZcandSoft_MM_SRSS1 = new TH2F("h_Nleptons_ZcandSoft_MM_SRSS1", "h_Nleptons_ZcandSoft_MM_SRSS1", 11, -0.5, 10.5, 130, 0, 129); h_Nleptons_ZcandSoft_MM_SRSS1->Sumw2();
  h_Nleptons_ZcandSoft_EM_SRSS1 = new TH2F("h_Nleptons_ZcandSoft_EM_SRSS1", "h_Nleptons_ZcandSoft_EM_SRSS1", 11, -0.5, 10.5, 130, 0, 129); h_Nleptons_ZcandSoft_EM_SRSS1->Sumw2();
 
  h_ml0lZcandSoft_EE_SRSS1 = new TH2F("h_ml0lZcandSoft_EE_SRSS1", "h_ml0lZcandSoft_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0lZcandSoft_EE_SRSS1->Sumw2();
  h_ml0lZcandSoft_MM_SRSS1 = new TH2F("h_ml0lZcandSoft_MM_SRSS1", "h_ml0lZcandSoft_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0lZcandSoft_MM_SRSS1->Sumw2();
  h_ml0lZcandSoft_EM_SRSS1 = new TH2F("h_ml0lZcandSoft_EM_SRSS1", "h_ml0lZcandSoft_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0lZcandSoft_EM_SRSS1->Sumw2();
   
  h_mTl0lZcandSoft_EE_SRSS1 = new TH2F("h_mTl0lZcandSoft_EE_SRSS1", "h_mTl0lZcandSoft_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0lZcandSoft_EE_SRSS1->Sumw2();
  h_mTl0lZcandSoft_MM_SRSS1 = new TH2F("h_mTl0lZcandSoft_MM_SRSS1", "h_mTl0lZcandSoft_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0lZcandSoft_MM_SRSS1->Sumw2();
  h_mTl0lZcandSoft_EM_SRSS1 = new TH2F("h_mTl0lZcandSoft_EM_SRSS1", "h_mTl0lZcandSoft_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0lZcandSoft_EM_SRSS1->Sumw2();
  
  h_ICl0lZcandSoft_EE_SRSS1 = new TH2F("h_ICl0lZcandSoft_EE_SRSS1", "h_ICl0lZcandSoft_EE_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl0lZcandSoft_EE_SRSS1->Sumw2();
  h_ICl0lZcandSoft_MM_SRSS1 = new TH2F("h_ICl0lZcandSoft_MM_SRSS1", "h_ICl0lZcandSoft_MM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl0lZcandSoft_MM_SRSS1->Sumw2();
  h_ICl0lZcandSoft_EM_SRSS1 = new TH2F("h_ICl0lZcandSoft_EM_SRSS1", "h_ICl0lZcandSoft_EM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl0lZcandSoft_EM_SRSS1->Sumw2();
  
  h_pTl0lZcandSoft_EE_SRSS1 = new TH2F("h_pTl0lZcandSoft_EE_SRSS1", "h_pTl0lZcandSoft_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl0lZcandSoft_EE_SRSS1->Sumw2();
  h_pTl0lZcandSoft_MM_SRSS1 = new TH2F("h_pTl0lZcandSoft_MM_SRSS1", "h_pTl0lZcandSoft_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl0lZcandSoft_MM_SRSS1->Sumw2();
  h_pTl0lZcandSoft_EM_SRSS1 = new TH2F("h_pTl0lZcandSoft_EM_SRSS1", "h_pTl0lZcandSoft_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl0lZcandSoft_EM_SRSS1->Sumw2();
  
  h_etal0lZcandSoft_EE_SRSS1 = new TH2F("h_etal0lZcandSoft_EE_SRSS1", "h_etal0lZcandSoft_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal0lZcandSoft_EE_SRSS1->Sumw2();
  h_etal0lZcandSoft_MM_SRSS1 = new TH2F("h_etal0lZcandSoft_MM_SRSS1", "h_etal0lZcandSoft_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal0lZcandSoft_MM_SRSS1->Sumw2();
  h_etal0lZcandSoft_EM_SRSS1 = new TH2F("h_etal0lZcandSoft_EM_SRSS1", "h_etal0lZcandSoft_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal0lZcandSoft_EM_SRSS1->Sumw2();
  
  h_ptcone30l0lZcandSoft_EE_SRSS1 = new TH2F("h_ptcone30l0lZcandSoft_EE_SRSS1", "h_ptcone30l0lZcandSoft_EE_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l0lZcandSoft_EE_SRSS1->Sumw2();
  h_ptcone30l0lZcandSoft_MM_SRSS1 = new TH2F("h_ptcone30l0lZcandSoft_MM_SRSS1", "h_ptcone30l0lZcandSoft_MM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l0lZcandSoft_MM_SRSS1->Sumw2();
  h_ptcone30l0lZcandSoft_EM_SRSS1 = new TH2F("h_ptcone30l0lZcandSoft_EM_SRSS1", "h_ptcone30l0lZcandSoft_EM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l0lZcandSoft_EM_SRSS1->Sumw2();
  
  h_d0Sigl0lZcandSoft_EE_SRSS1 = new TH2F("h_d0Sigl0lZcandSoft_EE_SRSS1", "h_d0Sigl0lZcandSoft_EE_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl0lZcandSoft_EE_SRSS1->Sumw2();
  h_d0Sigl0lZcandSoft_MM_SRSS1 = new TH2F("h_d0Sigl0lZcandSoft_MM_SRSS1", "h_d0Sigl0lZcandSoft_MM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl0lZcandSoft_MM_SRSS1->Sumw2();
  h_d0Sigl0lZcandSoft_EM_SRSS1 = new TH2F("h_d0Sigl0lZcandSoft_EM_SRSS1", "h_d0Sigl0lZcandSoft_EM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl0lZcandSoft_EM_SRSS1->Sumw2();
  
  h_z0SinThetal0lZcandSoft_EE_SRSS1 = new TH2F("h_z0SinThetal0lZcandSoft_EE_SRSS1", "h_z0SinThetal0lZcandSoft_EE_SRSS1", 100, 0, 5 ,130, 0, 129);  h_z0SinThetal0lZcandSoft_EE_SRSS1->Sumw2();
  h_z0SinThetal0lZcandSoft_MM_SRSS1 = new TH2F("h_z0SinThetal0lZcandSoft_MM_SRSS1", "h_z0SinThetal0lZcandSoft_MM_SRSS1", 100, 0, 5 ,130, 0, 129);  h_z0SinThetal0lZcandSoft_MM_SRSS1->Sumw2();
  h_z0SinThetal0lZcandSoft_EM_SRSS1 = new TH2F("h_z0SinThetal0lZcandSoft_EM_SRSS1", "h_z0SinThetal0lZcandSoft_EM_SRSS1", 100, 0, 5 ,130, 0, 129);  h_z0SinThetal0lZcandSoft_EM_SRSS1->Sumw2();
  
  h_ml1lZcandSoft_EE_SRSS1 = new TH2F("h_ml1lZcandSoft_EE_SRSS1", "h_ml1lZcandSoft_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1lZcandSoft_EE_SRSS1->Sumw2();
  h_ml1lZcandSoft_MM_SRSS1 = new TH2F("h_ml1lZcandSoft_MM_SRSS1", "h_ml1lZcandSoft_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1lZcandSoft_MM_SRSS1->Sumw2();
  h_ml1lZcandSoft_EM_SRSS1 = new TH2F("h_ml1lZcandSoft_EM_SRSS1", "h_ml1lZcandSoft_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1lZcandSoft_EM_SRSS1->Sumw2();
  
  h_mTl1lZcandSoft_EE_SRSS1 = new TH2F("h_mTl1lZcandSoft_EE_SRSS1", "h_mTl1lZcandSoft_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1lZcandSoft_EE_SRSS1->Sumw2();
  h_mTl1lZcandSoft_MM_SRSS1 = new TH2F("h_mTl1lZcandSoft_MM_SRSS1", "h_mTl1lZcandSoft_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1lZcandSoft_MM_SRSS1->Sumw2();
  h_mTl1lZcandSoft_EM_SRSS1 = new TH2F("h_mTl1lZcandSoft_EM_SRSS1", "h_mTl1lZcandSoft_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1lZcandSoft_EM_SRSS1->Sumw2();
  
  h_ICl1lZcandSoft_EE_SRSS1 = new TH2F("h_ICl1lZcandSoft_EE_SRSS1", "h_ICl1lZcandSoft_EE_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl1lZcandSoft_EE_SRSS1->Sumw2();
  h_ICl1lZcandSoft_MM_SRSS1 = new TH2F("h_ICl1lZcandSoft_MM_SRSS1", "h_ICl1lZcandSoft_MM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl1lZcandSoft_MM_SRSS1->Sumw2();
  h_ICl1lZcandSoft_EM_SRSS1 = new TH2F("h_ICl1lZcandSoft_EM_SRSS1", "h_ICl1lZcandSoft_EM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl1lZcandSoft_EM_SRSS1->Sumw2();
  
  h_pTl1lZcandSoft_EE_SRSS1 = new TH2F("h_pTl1lZcandSoft_EE_SRSS1", "h_pTl1lZcandSoft_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl1lZcandSoft_EE_SRSS1->Sumw2();
  h_pTl1lZcandSoft_MM_SRSS1 = new TH2F("h_pTl1lZcandSoft_MM_SRSS1", "h_pTl1lZcandSoft_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl1lZcandSoft_MM_SRSS1->Sumw2();
  h_pTl1lZcandSoft_EM_SRSS1 = new TH2F("h_pTl1lZcandSoft_EM_SRSS1", "h_pTl1lZcandSoft_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl1lZcandSoft_EM_SRSS1->Sumw2();
  
  h_etal1lZcandSoft_EE_SRSS1 = new TH2F("h_etal1lZcandSoft_EE_SRSS1", "h_etal1lZcandSoft_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal1lZcandSoft_EE_SRSS1->Sumw2();
  h_etal1lZcandSoft_MM_SRSS1 = new TH2F("h_etal1lZcandSoft_MM_SRSS1", "h_etal1lZcandSoft_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal1lZcandSoft_MM_SRSS1->Sumw2();
  h_etal1lZcandSoft_EM_SRSS1 = new TH2F("h_etal1lZcandSoft_EM_SRSS1", "h_etal1lZcandSoft_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal1lZcandSoft_EM_SRSS1->Sumw2();
  
  h_ptcone30l1lZcandSoft_EE_SRSS1 = new TH2F("h_ptcone30l1lZcandSoft_EE_SRSS1", "h_ptcone30l1lZcandSoft_EE_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l1lZcandSoft_EE_SRSS1->Sumw2();
  h_ptcone30l1lZcandSoft_MM_SRSS1 = new TH2F("h_ptcone30l1lZcandSoft_MM_SRSS1", "h_ptcone30l1lZcandSoft_MM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l1lZcandSoft_MM_SRSS1->Sumw2();
  h_ptcone30l1lZcandSoft_EM_SRSS1 = new TH2F("h_ptcone30l1lZcandSoft_EM_SRSS1", "h_ptcone30l1lZcandSoft_EM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l1lZcandSoft_EM_SRSS1->Sumw2();
  
  h_d0Sigl1lZcandSoft_EE_SRSS1 = new TH2F("h_d0Sigl1lZcandSoft_EE_SRSS1", "h_d0Sigl1lZcandSoft_EE_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl1lZcandSoft_EE_SRSS1->Sumw2();
  h_d0Sigl1lZcandSoft_MM_SRSS1 = new TH2F("h_d0Sigl1lZcandSoft_MM_SRSS1", "h_d0Sigl1lZcandSoft_MM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl1lZcandSoft_MM_SRSS1->Sumw2();
  h_d0Sigl1lZcandSoft_EM_SRSS1 = new TH2F("h_d0Sigl1lZcandSoft_EM_SRSS1", "h_d0Sigl1lZcandSoft_EM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl1lZcandSoft_EM_SRSS1->Sumw2();
 
  h_z0SinThetal1lZcandSoft_EE_SRSS1 = new TH2F("h_z0SinThetal1lZcandSoft_EE_SRSS1", "h_z0SinThetal1lZcandSoft_EE_SRSS1", 100, 0, 5 ,130, 0, 129);  h_z0SinThetal1lZcandSoft_EE_SRSS1->Sumw2();
  h_z0SinThetal1lZcandSoft_MM_SRSS1 = new TH2F("h_z0SinThetal1lZcandSoft_MM_SRSS1", "h_z0SinThetal1lZcandSoft_MM_SRSS1", 100, 0, 5 ,130, 0, 129);  h_z0SinThetal1lZcandSoft_MM_SRSS1->Sumw2();
  h_z0SinThetal1lZcandSoft_EM_SRSS1 = new TH2F("h_z0SinThetal1lZcandSoft_EM_SRSS1", "h_z0SinThetal1lZcandSoft_EM_SRSS1", 100, 0, 5 ,130, 0, 129);  h_z0SinThetal1lZcandSoft_EM_SRSS1->Sumw2();
  
  
  //ZcandidateSimple
  h_Nleptons_ZcandSimple_EE_SRSS1 = new TH2F("h_Nleptons_ZcandSimple_EE_SRSS1", "h_Nleptons_ZcandSimple_EE_SRSS1", 11, -0.5, 10.5, 130, 0, 129); h_Nleptons_ZcandSimple_EE_SRSS1->Sumw2();
  h_Nleptons_ZcandSimple_MM_SRSS1 = new TH2F("h_Nleptons_ZcandSimple_MM_SRSS1", "h_Nleptons_ZcandSimple_MM_SRSS1", 11, -0.5, 10.5, 130, 0, 129); h_Nleptons_ZcandSimple_MM_SRSS1->Sumw2();
  h_Nleptons_ZcandSimple_EM_SRSS1 = new TH2F("h_Nleptons_ZcandSimple_EM_SRSS1", "h_Nleptons_ZcandSimple_EM_SRSS1", 11, -0.5, 10.5, 130, 0, 129); h_Nleptons_ZcandSimple_EM_SRSS1->Sumw2();
 
  h_ml0lZcandSimple_EE_SRSS1 = new TH2F("h_ml0lZcandSimple_EE_SRSS1", "h_ml0lZcandSimple_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0lZcandSimple_EE_SRSS1->Sumw2();
  h_ml0lZcandSimple_MM_SRSS1 = new TH2F("h_ml0lZcandSimple_MM_SRSS1", "h_ml0lZcandSimple_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0lZcandSimple_MM_SRSS1->Sumw2();
  h_ml0lZcandSimple_EM_SRSS1 = new TH2F("h_ml0lZcandSimple_EM_SRSS1", "h_ml0lZcandSimple_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0lZcandSimple_EM_SRSS1->Sumw2();
   
  h_mTl0lZcandSimple_EE_SRSS1 = new TH2F("h_mTl0lZcandSimple_EE_SRSS1", "h_mTl0lZcandSimple_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0lZcandSimple_EE_SRSS1->Sumw2();
  h_mTl0lZcandSimple_MM_SRSS1 = new TH2F("h_mTl0lZcandSimple_MM_SRSS1", "h_mTl0lZcandSimple_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0lZcandSimple_MM_SRSS1->Sumw2();
  h_mTl0lZcandSimple_EM_SRSS1 = new TH2F("h_mTl0lZcandSimple_EM_SRSS1", "h_mTl0lZcandSimple_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0lZcandSimple_EM_SRSS1->Sumw2();
  
  h_ICl0lZcandSimple_EE_SRSS1 = new TH2F("h_ICl0lZcandSimple_EE_SRSS1", "h_ICl0lZcandSimple_EE_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl0lZcandSimple_EE_SRSS1->Sumw2();
  h_ICl0lZcandSimple_MM_SRSS1 = new TH2F("h_ICl0lZcandSimple_MM_SRSS1", "h_ICl0lZcandSimple_MM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl0lZcandSimple_MM_SRSS1->Sumw2();
  h_ICl0lZcandSimple_EM_SRSS1 = new TH2F("h_ICl0lZcandSimple_EM_SRSS1", "h_ICl0lZcandSimple_EM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl0lZcandSimple_EM_SRSS1->Sumw2();
  
  h_pTl0lZcandSimple_EE_SRSS1 = new TH2F("h_pTl0lZcandSimple_EE_SRSS1", "h_pTl0lZcandSimple_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl0lZcandSimple_EE_SRSS1->Sumw2();
  h_pTl0lZcandSimple_MM_SRSS1 = new TH2F("h_pTl0lZcandSimple_MM_SRSS1", "h_pTl0lZcandSimple_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl0lZcandSimple_MM_SRSS1->Sumw2();
  h_pTl0lZcandSimple_EM_SRSS1 = new TH2F("h_pTl0lZcandSimple_EM_SRSS1", "h_pTl0lZcandSimple_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl0lZcandSimple_EM_SRSS1->Sumw2();
  
  h_etal0lZcandSimple_EE_SRSS1 = new TH2F("h_etal0lZcandSimple_EE_SRSS1", "h_etal0lZcandSimple_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal0lZcandSimple_EE_SRSS1->Sumw2();
  h_etal0lZcandSimple_MM_SRSS1 = new TH2F("h_etal0lZcandSimple_MM_SRSS1", "h_etal0lZcandSimple_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal0lZcandSimple_MM_SRSS1->Sumw2();
  h_etal0lZcandSimple_EM_SRSS1 = new TH2F("h_etal0lZcandSimple_EM_SRSS1", "h_etal0lZcandSimple_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal0lZcandSimple_EM_SRSS1->Sumw2();
  
  h_ptcone30l0lZcandSimple_EE_SRSS1 = new TH2F("h_ptcone30l0lZcandSimple_EE_SRSS1", "h_ptcone30l0lZcandSimple_EE_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l0lZcandSimple_EE_SRSS1->Sumw2();
  h_ptcone30l0lZcandSimple_MM_SRSS1 = new TH2F("h_ptcone30l0lZcandSimple_MM_SRSS1", "h_ptcone30l0lZcandSimple_MM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l0lZcandSimple_MM_SRSS1->Sumw2();
  h_ptcone30l0lZcandSimple_EM_SRSS1 = new TH2F("h_ptcone30l0lZcandSimple_EM_SRSS1", "h_ptcone30l0lZcandSimple_EM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l0lZcandSimple_EM_SRSS1->Sumw2();
  
  h_d0Sigl0lZcandSimple_EE_SRSS1 = new TH2F("h_d0Sigl0lZcandSimple_EE_SRSS1", "h_d0Sigl0lZcandSimple_EE_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl0lZcandSimple_EE_SRSS1->Sumw2();
  h_d0Sigl0lZcandSimple_MM_SRSS1 = new TH2F("h_d0Sigl0lZcandSimple_MM_SRSS1", "h_d0Sigl0lZcandSimple_MM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl0lZcandSimple_MM_SRSS1->Sumw2();
  h_d0Sigl0lZcandSimple_EM_SRSS1 = new TH2F("h_d0Sigl0lZcandSimple_EM_SRSS1", "h_d0Sigl0lZcandSimple_EM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl0lZcandSimple_EM_SRSS1->Sumw2();
  
  h_z0SinThetal0lZcandSimple_EE_SRSS1 = new TH2F("h_z0SinThetal0lZcandSimple_EE_SRSS1", "h_z0SinThetal0lZcandSimple_EE_SRSS1", 100, 0, 5 ,130, 0, 129);  h_z0SinThetal0lZcandSimple_EE_SRSS1->Sumw2();
  h_z0SinThetal0lZcandSimple_MM_SRSS1 = new TH2F("h_z0SinThetal0lZcandSimple_MM_SRSS1", "h_z0SinThetal0lZcandSimple_MM_SRSS1", 100, 0, 5 ,130, 0, 129);  h_z0SinThetal0lZcandSimple_MM_SRSS1->Sumw2();
  h_z0SinThetal0lZcandSimple_EM_SRSS1 = new TH2F("h_z0SinThetal0lZcandSimple_EM_SRSS1", "h_z0SinThetal0lZcandSimple_EM_SRSS1", 100, 0, 5 ,130, 0, 129);  h_z0SinThetal0lZcandSimple_EM_SRSS1->Sumw2();
  
  h_ml1lZcandSimple_EE_SRSS1 = new TH2F("h_ml1lZcandSimple_EE_SRSS1", "h_ml1lZcandSimple_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1lZcandSimple_EE_SRSS1->Sumw2();
  h_ml1lZcandSimple_MM_SRSS1 = new TH2F("h_ml1lZcandSimple_MM_SRSS1", "h_ml1lZcandSimple_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1lZcandSimple_MM_SRSS1->Sumw2();
  h_ml1lZcandSimple_EM_SRSS1 = new TH2F("h_ml1lZcandSimple_EM_SRSS1", "h_ml1lZcandSimple_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1lZcandSimple_EM_SRSS1->Sumw2();
  
  h_mTl1lZcandSimple_EE_SRSS1 = new TH2F("h_mTl1lZcandSimple_EE_SRSS1", "h_mTl1lZcandSimple_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1lZcandSimple_EE_SRSS1->Sumw2();
  h_mTl1lZcandSimple_MM_SRSS1 = new TH2F("h_mTl1lZcandSimple_MM_SRSS1", "h_mTl1lZcandSimple_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1lZcandSimple_MM_SRSS1->Sumw2();
  h_mTl1lZcandSimple_EM_SRSS1 = new TH2F("h_mTl1lZcandSimple_EM_SRSS1", "h_mTl1lZcandSimple_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1lZcandSimple_EM_SRSS1->Sumw2();
  
  h_ICl1lZcandSimple_EE_SRSS1 = new TH2F("h_ICl1lZcandSimple_EE_SRSS1", "h_ICl1lZcandSimple_EE_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl1lZcandSimple_EE_SRSS1->Sumw2();
  h_ICl1lZcandSimple_MM_SRSS1 = new TH2F("h_ICl1lZcandSimple_MM_SRSS1", "h_ICl1lZcandSimple_MM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl1lZcandSimple_MM_SRSS1->Sumw2();
  h_ICl1lZcandSimple_EM_SRSS1 = new TH2F("h_ICl1lZcandSimple_EM_SRSS1", "h_ICl1lZcandSimple_EM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl1lZcandSimple_EM_SRSS1->Sumw2();
  
  h_pTl1lZcandSimple_EE_SRSS1 = new TH2F("h_pTl1lZcandSimple_EE_SRSS1", "h_pTl1lZcandSimple_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl1lZcandSimple_EE_SRSS1->Sumw2();
  h_pTl1lZcandSimple_MM_SRSS1 = new TH2F("h_pTl1lZcandSimple_MM_SRSS1", "h_pTl1lZcandSimple_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl1lZcandSimple_MM_SRSS1->Sumw2();
  h_pTl1lZcandSimple_EM_SRSS1 = new TH2F("h_pTl1lZcandSimple_EM_SRSS1", "h_pTl1lZcandSimple_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl1lZcandSimple_EM_SRSS1->Sumw2();
  
  h_etal1lZcandSimple_EE_SRSS1 = new TH2F("h_etal1lZcandSimple_EE_SRSS1", "h_etal1lZcandSimple_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal1lZcandSimple_EE_SRSS1->Sumw2();
  h_etal1lZcandSimple_MM_SRSS1 = new TH2F("h_etal1lZcandSimple_MM_SRSS1", "h_etal1lZcandSimple_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal1lZcandSimple_MM_SRSS1->Sumw2();
  h_etal1lZcandSimple_EM_SRSS1 = new TH2F("h_etal1lZcandSimple_EM_SRSS1", "h_etal1lZcandSimple_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal1lZcandSimple_EM_SRSS1->Sumw2();
  
  h_ptcone30l1lZcandSimple_EE_SRSS1 = new TH2F("h_ptcone30l1lZcandSimple_EE_SRSS1", "h_ptcone30l1lZcandSimple_EE_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l1lZcandSimple_EE_SRSS1->Sumw2();
  h_ptcone30l1lZcandSimple_MM_SRSS1 = new TH2F("h_ptcone30l1lZcandSimple_MM_SRSS1", "h_ptcone30l1lZcandSimple_MM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l1lZcandSimple_MM_SRSS1->Sumw2();
  h_ptcone30l1lZcandSimple_EM_SRSS1 = new TH2F("h_ptcone30l1lZcandSimple_EM_SRSS1", "h_ptcone30l1lZcandSimple_EM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l1lZcandSimple_EM_SRSS1->Sumw2();
  
  h_d0Sigl1lZcandSimple_EE_SRSS1 = new TH2F("h_d0Sigl1lZcandSimple_EE_SRSS1", "h_d0Sigl1lZcandSimple_EE_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl1lZcandSimple_EE_SRSS1->Sumw2();
  h_d0Sigl1lZcandSimple_MM_SRSS1 = new TH2F("h_d0Sigl1lZcandSimple_MM_SRSS1", "h_d0Sigl1lZcandSimple_MM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl1lZcandSimple_MM_SRSS1->Sumw2();
  h_d0Sigl1lZcandSimple_EM_SRSS1 = new TH2F("h_d0Sigl1lZcandSimple_EM_SRSS1", "h_d0Sigl1lZcandSimple_EM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl1lZcandSimple_EM_SRSS1->Sumw2();
 
  h_z0SinThetal1lZcandSimple_EE_SRSS1 = new TH2F("h_z0SinThetal1lZcandSimple_EE_SRSS1", "h_z0SinThetal1lZcandSimple_EE_SRSS1", 100, 0, 5 ,130, 0, 129);  h_z0SinThetal1lZcandSimple_EE_SRSS1->Sumw2();
  h_z0SinThetal1lZcandSimple_MM_SRSS1 = new TH2F("h_z0SinThetal1lZcandSimple_MM_SRSS1", "h_z0SinThetal1lZcandSimple_MM_SRSS1", 100, 0, 5 ,130, 0, 129);  h_z0SinThetal1lZcandSimple_MM_SRSS1->Sumw2();
  h_z0SinThetal1lZcandSimple_EM_SRSS1 = new TH2F("h_z0SinThetal1lZcandSimple_EM_SRSS1", "h_z0SinThetal1lZcandSimple_EM_SRSS1", 100, 0, 5 ,130, 0, 129);  h_z0SinThetal1lZcandSimple_EM_SRSS1->Sumw2();
  
  //ZcandidateSimple
  h_Nleptons_ZcandIso_EE_SRSS1 = new TH2F("h_Nleptons_ZcandIso_EE_SRSS1", "h_Nleptons_ZcandIso_EE_SRSS1", 11, -0.5, 10.5, 130, 0, 129); h_Nleptons_ZcandIso_EE_SRSS1->Sumw2();
  h_Nleptons_ZcandIso_MM_SRSS1 = new TH2F("h_Nleptons_ZcandIso_MM_SRSS1", "h_Nleptons_ZcandIso_MM_SRSS1", 11, -0.5, 10.5, 130, 0, 129); h_Nleptons_ZcandIso_MM_SRSS1->Sumw2();
  h_Nleptons_ZcandIso_EM_SRSS1 = new TH2F("h_Nleptons_ZcandIso_EM_SRSS1", "h_Nleptons_ZcandIso_EM_SRSS1", 11, -0.5, 10.5, 130, 0, 129); h_Nleptons_ZcandIso_EM_SRSS1->Sumw2();
 
  h_ml0lZcandIso_EE_SRSS1 = new TH2F("h_ml0lZcandIso_EE_SRSS1", "h_ml0lZcandIso_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0lZcandIso_EE_SRSS1->Sumw2();
  h_ml0lZcandIso_MM_SRSS1 = new TH2F("h_ml0lZcandIso_MM_SRSS1", "h_ml0lZcandIso_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0lZcandIso_MM_SRSS1->Sumw2();
  h_ml0lZcandIso_EM_SRSS1 = new TH2F("h_ml0lZcandIso_EM_SRSS1", "h_ml0lZcandIso_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0lZcandIso_EM_SRSS1->Sumw2();
   
  h_mTl0lZcandIso_EE_SRSS1 = new TH2F("h_mTl0lZcandIso_EE_SRSS1", "h_mTl0lZcandIso_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0lZcandIso_EE_SRSS1->Sumw2();
  h_mTl0lZcandIso_MM_SRSS1 = new TH2F("h_mTl0lZcandIso_MM_SRSS1", "h_mTl0lZcandIso_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0lZcandIso_MM_SRSS1->Sumw2();
  h_mTl0lZcandIso_EM_SRSS1 = new TH2F("h_mTl0lZcandIso_EM_SRSS1", "h_mTl0lZcandIso_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0lZcandIso_EM_SRSS1->Sumw2();
  
  h_ICl0lZcandIso_EE_SRSS1 = new TH2F("h_ICl0lZcandIso_EE_SRSS1", "h_ICl0lZcandIso_EE_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl0lZcandIso_EE_SRSS1->Sumw2();
  h_ICl0lZcandIso_MM_SRSS1 = new TH2F("h_ICl0lZcandIso_MM_SRSS1", "h_ICl0lZcandIso_MM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl0lZcandIso_MM_SRSS1->Sumw2();
  h_ICl0lZcandIso_EM_SRSS1 = new TH2F("h_ICl0lZcandIso_EM_SRSS1", "h_ICl0lZcandIso_EM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl0lZcandIso_EM_SRSS1->Sumw2();
  
  h_pTl0lZcandIso_EE_SRSS1 = new TH2F("h_pTl0lZcandIso_EE_SRSS1", "h_pTl0lZcandIso_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl0lZcandIso_EE_SRSS1->Sumw2();
  h_pTl0lZcandIso_MM_SRSS1 = new TH2F("h_pTl0lZcandIso_MM_SRSS1", "h_pTl0lZcandIso_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl0lZcandIso_MM_SRSS1->Sumw2();
  h_pTl0lZcandIso_EM_SRSS1 = new TH2F("h_pTl0lZcandIso_EM_SRSS1", "h_pTl0lZcandIso_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl0lZcandIso_EM_SRSS1->Sumw2();
  
  h_etal0lZcandIso_EE_SRSS1 = new TH2F("h_etal0lZcandIso_EE_SRSS1", "h_etal0lZcandIso_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal0lZcandIso_EE_SRSS1->Sumw2();
  h_etal0lZcandIso_MM_SRSS1 = new TH2F("h_etal0lZcandIso_MM_SRSS1", "h_etal0lZcandIso_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal0lZcandIso_MM_SRSS1->Sumw2();
  h_etal0lZcandIso_EM_SRSS1 = new TH2F("h_etal0lZcandIso_EM_SRSS1", "h_etal0lZcandIso_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal0lZcandIso_EM_SRSS1->Sumw2();
  
  h_ptcone30l0lZcandIso_EE_SRSS1 = new TH2F("h_ptcone30l0lZcandIso_EE_SRSS1", "h_ptcone30l0lZcandIso_EE_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l0lZcandIso_EE_SRSS1->Sumw2();
  h_ptcone30l0lZcandIso_MM_SRSS1 = new TH2F("h_ptcone30l0lZcandIso_MM_SRSS1", "h_ptcone30l0lZcandIso_MM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l0lZcandIso_MM_SRSS1->Sumw2();
  h_ptcone30l0lZcandIso_EM_SRSS1 = new TH2F("h_ptcone30l0lZcandIso_EM_SRSS1", "h_ptcone30l0lZcandIso_EM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l0lZcandIso_EM_SRSS1->Sumw2();
  
  h_d0Sigl0lZcandIso_EE_SRSS1 = new TH2F("h_d0Sigl0lZcandIso_EE_SRSS1", "h_d0Sigl0lZcandIso_EE_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl0lZcandIso_EE_SRSS1->Sumw2();
  h_d0Sigl0lZcandIso_MM_SRSS1 = new TH2F("h_d0Sigl0lZcandIso_MM_SRSS1", "h_d0Sigl0lZcandIso_MM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl0lZcandIso_MM_SRSS1->Sumw2();
  h_d0Sigl0lZcandIso_EM_SRSS1 = new TH2F("h_d0Sigl0lZcandIso_EM_SRSS1", "h_d0Sigl0lZcandIso_EM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl0lZcandIso_EM_SRSS1->Sumw2();
  
  h_z0SinThetal0lZcandIso_EE_SRSS1 = new TH2F("h_z0SinThetal0lZcandIso_EE_SRSS1", "h_z0SinThetal0lZcandIso_EE_SRSS1", 100, 0, 5 ,130, 0, 129);  h_z0SinThetal0lZcandIso_EE_SRSS1->Sumw2();
  h_z0SinThetal0lZcandIso_MM_SRSS1 = new TH2F("h_z0SinThetal0lZcandIso_MM_SRSS1", "h_z0SinThetal0lZcandIso_MM_SRSS1", 100, 0, 5 ,130, 0, 129);  h_z0SinThetal0lZcandIso_MM_SRSS1->Sumw2();
  h_z0SinThetal0lZcandIso_EM_SRSS1 = new TH2F("h_z0SinThetal0lZcandIso_EM_SRSS1", "h_z0SinThetal0lZcandIso_EM_SRSS1", 100, 0, 5 ,130, 0, 129);  h_z0SinThetal0lZcandIso_EM_SRSS1->Sumw2();
  
  h_ml1lZcandIso_EE_SRSS1 = new TH2F("h_ml1lZcandIso_EE_SRSS1", "h_ml1lZcandIso_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1lZcandIso_EE_SRSS1->Sumw2();
  h_ml1lZcandIso_MM_SRSS1 = new TH2F("h_ml1lZcandIso_MM_SRSS1", "h_ml1lZcandIso_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1lZcandIso_MM_SRSS1->Sumw2();
  h_ml1lZcandIso_EM_SRSS1 = new TH2F("h_ml1lZcandIso_EM_SRSS1", "h_ml1lZcandIso_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1lZcandIso_EM_SRSS1->Sumw2();
  
  h_mTl1lZcandIso_EE_SRSS1 = new TH2F("h_mTl1lZcandIso_EE_SRSS1", "h_mTl1lZcandIso_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1lZcandIso_EE_SRSS1->Sumw2();
  h_mTl1lZcandIso_MM_SRSS1 = new TH2F("h_mTl1lZcandIso_MM_SRSS1", "h_mTl1lZcandIso_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1lZcandIso_MM_SRSS1->Sumw2();
  h_mTl1lZcandIso_EM_SRSS1 = new TH2F("h_mTl1lZcandIso_EM_SRSS1", "h_mTl1lZcandIso_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1lZcandIso_EM_SRSS1->Sumw2();
  
  h_ICl1lZcandIso_EE_SRSS1 = new TH2F("h_ICl1lZcandIso_EE_SRSS1", "h_ICl1lZcandIso_EE_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl1lZcandIso_EE_SRSS1->Sumw2();
  h_ICl1lZcandIso_MM_SRSS1 = new TH2F("h_ICl1lZcandIso_MM_SRSS1", "h_ICl1lZcandIso_MM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl1lZcandIso_MM_SRSS1->Sumw2();
  h_ICl1lZcandIso_EM_SRSS1 = new TH2F("h_ICl1lZcandIso_EM_SRSS1", "h_ICl1lZcandIso_EM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl1lZcandIso_EM_SRSS1->Sumw2();
  
  h_pTl1lZcandIso_EE_SRSS1 = new TH2F("h_pTl1lZcandIso_EE_SRSS1", "h_pTl1lZcandIso_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl1lZcandIso_EE_SRSS1->Sumw2();
  h_pTl1lZcandIso_MM_SRSS1 = new TH2F("h_pTl1lZcandIso_MM_SRSS1", "h_pTl1lZcandIso_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl1lZcandIso_MM_SRSS1->Sumw2();
  h_pTl1lZcandIso_EM_SRSS1 = new TH2F("h_pTl1lZcandIso_EM_SRSS1", "h_pTl1lZcandIso_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl1lZcandIso_EM_SRSS1->Sumw2();
  
  h_etal1lZcandIso_EE_SRSS1 = new TH2F("h_etal1lZcandIso_EE_SRSS1", "h_etal1lZcandIso_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal1lZcandIso_EE_SRSS1->Sumw2();
  h_etal1lZcandIso_MM_SRSS1 = new TH2F("h_etal1lZcandIso_MM_SRSS1", "h_etal1lZcandIso_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal1lZcandIso_MM_SRSS1->Sumw2();
  h_etal1lZcandIso_EM_SRSS1 = new TH2F("h_etal1lZcandIso_EM_SRSS1", "h_etal1lZcandIso_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal1lZcandIso_EM_SRSS1->Sumw2();
  
  h_ptcone30l1lZcandIso_EE_SRSS1 = new TH2F("h_ptcone30l1lZcandIso_EE_SRSS1", "h_ptcone30l1lZcandIso_EE_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l1lZcandIso_EE_SRSS1->Sumw2();
  h_ptcone30l1lZcandIso_MM_SRSS1 = new TH2F("h_ptcone30l1lZcandIso_MM_SRSS1", "h_ptcone30l1lZcandIso_MM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l1lZcandIso_MM_SRSS1->Sumw2();
  h_ptcone30l1lZcandIso_EM_SRSS1 = new TH2F("h_ptcone30l1lZcandIso_EM_SRSS1", "h_ptcone30l1lZcandIso_EM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l1lZcandIso_EM_SRSS1->Sumw2();
  
  h_d0Sigl1lZcandIso_EE_SRSS1 = new TH2F("h_d0Sigl1lZcandIso_EE_SRSS1", "h_d0Sigl1lZcandIso_EE_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl1lZcandIso_EE_SRSS1->Sumw2();
  h_d0Sigl1lZcandIso_MM_SRSS1 = new TH2F("h_d0Sigl1lZcandIso_MM_SRSS1", "h_d0Sigl1lZcandIso_MM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl1lZcandIso_MM_SRSS1->Sumw2();
  h_d0Sigl1lZcandIso_EM_SRSS1 = new TH2F("h_d0Sigl1lZcandIso_EM_SRSS1", "h_d0Sigl1lZcandIso_EM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl1lZcandIso_EM_SRSS1->Sumw2();
 
  h_z0SinThetal1lZcandIso_EE_SRSS1 = new TH2F("h_z0SinThetal1lZcandIso_EE_SRSS1", "h_z0SinThetal1lZcandIso_EE_SRSS1", 100, 0, 5 ,130, 0, 129);  h_z0SinThetal1lZcandIso_EE_SRSS1->Sumw2();
  h_z0SinThetal1lZcandIso_MM_SRSS1 = new TH2F("h_z0SinThetal1lZcandIso_MM_SRSS1", "h_z0SinThetal1lZcandIso_MM_SRSS1", 100, 0, 5 ,130, 0, 129);  h_z0SinThetal1lZcandIso_MM_SRSS1->Sumw2();
  h_z0SinThetal1lZcandIso_EM_SRSS1 = new TH2F("h_z0SinThetal1lZcandIso_EM_SRSS1", "h_z0SinThetal1lZcandIso_EM_SRSS1", 100, 0, 5 ,130, 0, 129);  h_z0SinThetal1lZcandIso_EM_SRSS1->Sumw2();
  
  /*--------------------------------------------------------------------------------*/ 
  h_Mljj_EE_SRSS1 = new TH2F("h_Mljj_EE_SRSS1", "h_Mljj_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_Mljj_EE_SRSS1->Sumw2();
  h_Mljj_MM_SRSS1 = new TH2F("h_Mljj_MM_SRSS1", "h_Mljj_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_Mljj_MM_SRSS1->Sumw2();
  h_Mljj_EM_SRSS1 = new TH2F("h_Mljj_EM_SRSS1", "h_Mljj_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_Mljj_EM_SRSS1->Sumw2();
  /*--------------------------------------------------------------------------------*/ 
  h_DeltaRLeptons_EE_SRSS1 = new TH2F("h_DeltaRLeptons_EE_SRSS1", "h_DeltaRLeptons_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRLeptons_EE_SRSS1->Sumw2();
  h_DeltaRLeptons_EE_SRSS2 = new TH2F("h_DeltaRLeptons_EE_SRSS2", "h_DeltaRLeptons_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRLeptons_EE_SRSS2->Sumw2();
  h_DeltaRLeptons_MM_SRSS1 = new TH2F("h_DeltaRLeptons_MM_SRSS1", "h_DeltaRLeptons_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRLeptons_MM_SRSS1->Sumw2();
  h_DeltaRLeptons_MM_SRSS2 = new TH2F("h_DeltaRLeptons_MM_SRSS2", "h_DeltaRLeptons_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRLeptons_MM_SRSS2->Sumw2();
  h_DeltaRLeptons_MM_SRSS3 = new TH2F("h_DeltaRLeptons_MM_SRSS3", "h_DeltaRLeptons_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaRLeptons_MM_SRSS3->Sumw2();
  h_DeltaRLeptons_MM_SRSS4 = new TH2F("h_DeltaRLeptons_MM_SRSS4", "h_DeltaRLeptons_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaRLeptons_MM_SRSS4->Sumw2();
  h_DeltaRLeptons_EM_SRSS1 = new TH2F("h_DeltaRLeptons_EM_SRSS1", "h_DeltaRLeptons_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRLeptons_EM_SRSS1->Sumw2();  
  h_DeltaRLeptons_EM_SRSS2 = new TH2F("h_DeltaRLeptons_EM_SRSS2", "h_DeltaRLeptons_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRLeptons_EM_SRSS2->Sumw2();    
  h_DeltaRLeptons_EE_SROS1 = new TH2F("h_DeltaRLeptons_EE_SROS1", "h_DeltaRLeptons_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRLeptons_EE_SROS1->Sumw2();
  h_DeltaRLeptons_MM_SROS1 = new TH2F("h_DeltaRLeptons_MM_SROS1", "h_DeltaRLeptons_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRLeptons_MM_SROS1->Sumw2();
  h_DeltaRLeptons_EM_SROS1 = new TH2F("h_DeltaRLeptons_EM_SROS1", "h_DeltaRLeptons_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRLeptons_EM_SROS1->Sumw2();
  
  
  /*--------------------------------------------------------------------------------*/ 
  h_pTl0_EE_SRSS1 = new TH2F("h_pTl0_EE_SRSS1", "h_pTl0_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl0_EE_SRSS1->Sumw2();
  h_pTl0_EE_SRSS2 = new TH2F("h_pTl0_EE_SRSS2", "h_pTl0_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_pTl0_EE_SRSS2->Sumw2();
  h_pTl0_MM_SRSS1 = new TH2F("h_pTl0_MM_SRSS1", "h_pTl0_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl0_MM_SRSS1->Sumw2();
  h_pTl0_MM_SRSS2 = new TH2F("h_pTl0_MM_SRSS2", "h_pTl0_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_pTl0_MM_SRSS2->Sumw2();
  h_pTl0_MM_SRSS3 = new TH2F("h_pTl0_MM_SRSS3", "h_pTl0_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_pTl0_MM_SRSS3->Sumw2();
  h_pTl0_MM_SRSS4 = new TH2F("h_pTl0_MM_SRSS4", "h_pTl0_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_pTl0_MM_SRSS4->Sumw2();
  h_pTl0_EM_SRSS1 = new TH2F("h_pTl0_EM_SRSS1", "h_pTl0_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl0_EM_SRSS1->Sumw2();
  h_pTl0_EM_SRSS2 = new TH2F("h_pTl0_EM_SRSS2", "h_pTl0_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_pTl0_EM_SRSS2->Sumw2();
  h_pTl0_EE_SROS1 = new TH2F("h_pTl0_EE_SROS1", "h_pTl0_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_pTl0_EE_SROS1->Sumw2();
  h_pTl0_MM_SROS1 = new TH2F("h_pTl0_MM_SROS1", "h_pTl0_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_pTl0_MM_SROS1->Sumw2();
  h_pTl0_EM_SROS1 = new TH2F("h_pTl0_EM_SROS1", "h_pTl0_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_pTl0_EM_SROS1->Sumw2();
  
  /*--------------------------------------------------------------------------------*/ 
  h_pTl1_EE_SRSS1 = new TH2F("h_pTl1_EE_SRSS1", "h_pTl1_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl1_EE_SRSS1->Sumw2();
  h_pTl1_EE_SRSS2 = new TH2F("h_pTl1_EE_SRSS2", "h_pTl1_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_pTl1_EE_SRSS2->Sumw2();
  h_pTl1_MM_SRSS1 = new TH2F("h_pTl1_MM_SRSS1", "h_pTl1_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl1_MM_SRSS1->Sumw2();  
  h_pTl1_MM_SRSS2 = new TH2F("h_pTl1_MM_SRSS2", "h_pTl1_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_pTl1_MM_SRSS2->Sumw2();
  h_pTl1_MM_SRSS3 = new TH2F("h_pTl1_MM_SRSS3", "h_pTl1_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_pTl1_MM_SRSS3->Sumw2();
  h_pTl1_MM_SRSS4 = new TH2F("h_pTl1_MM_SRSS4", "h_pTl1_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_pTl1_MM_SRSS4->Sumw2();
  h_pTl1_EM_SRSS1 = new TH2F("h_pTl1_EM_SRSS1", "h_pTl1_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl1_EM_SRSS1->Sumw2();
  h_pTl1_EM_SRSS2 = new TH2F("h_pTl1_EM_SRSS2", "h_pTl1_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_pTl1_EM_SRSS2->Sumw2();
  h_pTl1_EE_SROS1 = new TH2F("h_pTl1_EE_SROS1", "h_pTl1_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_pTl1_EE_SROS1->Sumw2();
  h_pTl1_MM_SROS1 = new TH2F("h_pTl1_MM_SROS1", "h_pTl1_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_pTl1_MM_SROS1->Sumw2();
  h_pTl1_EM_SROS1 = new TH2F("h_pTl1_EM_SROS1", "h_pTl1_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_pTl1_EM_SROS1->Sumw2();
  
    /*--------------------------------------------------------------------------------*/ 
  h_pTj0_EE_SRSS1 = new TH2F("h_pTj0_EE_SRSS1", "h_pTj0_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTj0_EE_SRSS1->Sumw2();
  h_pTj0_EE_SRSS2 = new TH2F("h_pTj0_EE_SRSS2", "h_pTj0_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_pTj0_EE_SRSS2->Sumw2();
  h_pTj0_MM_SRSS1 = new TH2F("h_pTj0_MM_SRSS1", "h_pTj0_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTj0_MM_SRSS1->Sumw2();
  h_pTj0_MM_SRSS2 = new TH2F("h_pTj0_MM_SRSS2", "h_pTj0_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_pTj0_MM_SRSS2->Sumw2();
  h_pTj0_MM_SRSS3 = new TH2F("h_pTj0_MM_SRSS3", "h_pTj0_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_pTj0_MM_SRSS3->Sumw2();
  h_pTj0_MM_SRSS4 = new TH2F("h_pTj0_MM_SRSS4", "h_pTj0_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_pTj0_MM_SRSS4->Sumw2();
  h_pTj0_EM_SRSS1 = new TH2F("h_pTj0_EM_SRSS1", "h_pTj0_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTj0_EM_SRSS1->Sumw2();
  h_pTj0_EM_SRSS2 = new TH2F("h_pTj0_EM_SRSS2", "h_pTj0_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_pTj0_EM_SRSS2->Sumw2();
  h_pTj0_EE_SROS1 = new TH2F("h_pTj0_EE_SROS1", "h_pTj0_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_pTj0_EE_SROS1->Sumw2();
  h_pTj0_MM_SROS1 = new TH2F("h_pTj0_MM_SROS1", "h_pTj0_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_pTj0_MM_SROS1->Sumw2();
  h_pTj0_EM_SROS1 = new TH2F("h_pTj0_EM_SROS1", "h_pTj0_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_pTj0_EM_SROS1->Sumw2();
  
  /*--------------------------------------------------------------------------------*/ 
  h_pTj1_EE_SRSS1 = new TH2F("h_pTj1_EE_SRSS1", "h_pTj1_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTj1_EE_SRSS1->Sumw2();
  h_pTj1_EE_SRSS2 = new TH2F("h_pTj1_EE_SRSS2", "h_pTj1_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_pTj1_EE_SRSS2->Sumw2();
  h_pTj1_MM_SRSS1 = new TH2F("h_pTj1_MM_SRSS1", "h_pTj1_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTj1_MM_SRSS1->Sumw2();  
  h_pTj1_MM_SRSS2 = new TH2F("h_pTj1_MM_SRSS2", "h_pTj1_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_pTj1_MM_SRSS2->Sumw2();
  h_pTj1_MM_SRSS3 = new TH2F("h_pTj1_MM_SRSS3", "h_pTj1_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_pTj1_MM_SRSS3->Sumw2();
  h_pTj1_MM_SRSS4 = new TH2F("h_pTj1_MM_SRSS4", "h_pTj1_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_pTj1_MM_SRSS4->Sumw2();
  h_pTj1_EM_SRSS1 = new TH2F("h_pTj1_EM_SRSS1", "h_pTj1_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTj1_EM_SRSS1->Sumw2();
  h_pTj1_EM_SRSS2 = new TH2F("h_pTj1_EM_SRSS2", "h_pTj1_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_pTj1_EM_SRSS2->Sumw2();
  h_pTj1_EE_SROS1 = new TH2F("h_pTj1_EE_SROS1", "h_pTj1_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_pTj1_EE_SROS1->Sumw2();
  h_pTj1_MM_SROS1 = new TH2F("h_pTj1_MM_SROS1", "h_pTj1_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_pTj1_MM_SROS1->Sumw2();
  h_pTj1_EM_SROS1 = new TH2F("h_pTj1_EM_SROS1", "h_pTj1_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_pTj1_EM_SROS1->Sumw2();
  
  /*--------------------------------------------------------------------------------*/ 
  h_mll_EE_SRSS1 = new TH2F("h_mll_EE_SRSS1", "h_mll_EE_SRSS1", 100, 0, 500 ,130, 0, 129); h_mll_EE_SRSS1->Sumw2();
  h_mll_EE_SRSS2 = new TH2F("h_mll_EE_SRSS2", "h_mll_EE_SRSS2", 100, 0, 500 ,130, 0, 129); h_mll_EE_SRSS2->Sumw2();
  h_mll_MM_SRSS1 = new TH2F("h_mll_MM_SRSS1", "h_mll_MM_SRSS1", 100, 0, 500 ,130, 0, 129); h_mll_MM_SRSS1->Sumw2();  
  h_mll_MM_SRSS2 = new TH2F("h_mll_MM_SRSS2", "h_mll_MM_SRSS2", 100, 0, 500 ,130, 0, 129); h_mll_MM_SRSS2->Sumw2();
  h_mll_MM_SRSS3 = new TH2F("h_mll_MM_SRSS3", "h_mll_MM_SRSS3", 100, 0, 500 ,130, 0, 129); h_mll_MM_SRSS3->Sumw2();
  h_mll_MM_SRSS4 = new TH2F("h_mll_MM_SRSS4", "h_mll_MM_SRSS4", 100, 0, 500 ,130, 0, 129); h_mll_MM_SRSS4->Sumw2();
  h_mll_EM_SRSS1 = new TH2F("h_mll_EM_SRSS1", "h_mll_EM_SRSS1", 100, 0, 500 ,130, 0, 129); h_mll_EM_SRSS1->Sumw2();
  h_mll_EM_SRSS2 = new TH2F("h_mll_EM_SRSS2", "h_mll_EM_SRSS2", 100, 0, 500 ,130, 0, 129); h_mll_EM_SRSS2->Sumw2();
  h_mll_EE_SROS1 = new TH2F("h_mll_EE_SROS1", "h_mll_EE_SROS1", 100, 0, 500 ,130, 0, 129); h_mll_EE_SROS1->Sumw2();
  h_mll_MM_SROS1 = new TH2F("h_mll_MM_SROS1", "h_mll_MM_SROS1", 100, 0, 500 ,130, 0, 129); h_mll_MM_SROS1->Sumw2();
  h_mll_EM_SROS1 = new TH2F("h_mll_EM_SROS1", "h_mll_EM_SROS1", 100, 0, 500 ,130, 0, 129); h_mll_EM_SROS1->Sumw2();

  /*--------------------------------------------------------------------------------*/ 
  h_METrel_EE_SRSS1 = new TH2F("h_METrel_EE_SRSS1", "h_METrel_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_METrel_EE_SRSS1->Sumw2();
  h_METrel_EE_SRSS2 = new TH2F("h_METrel_EE_SRSS2", "h_METrel_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_METrel_EE_SRSS2->Sumw2();
  h_METrel_MM_SRSS1 = new TH2F("h_METrel_MM_SRSS1", "h_METrel_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_METrel_MM_SRSS1->Sumw2();  
  h_METrel_MM_SRSS2 = new TH2F("h_METrel_MM_SRSS2", "h_METrel_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_METrel_MM_SRSS2->Sumw2();  
  h_METrel_MM_SRSS3 = new TH2F("h_METrel_MM_SRSS3", "h_METrel_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_METrel_MM_SRSS3->Sumw2();
  h_METrel_MM_SRSS4 = new TH2F("h_METrel_MM_SRSS4", "h_METrel_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_METrel_MM_SRSS4->Sumw2();
  h_METrel_EM_SRSS1 = new TH2F("h_METrel_EM_SRSS1", "h_METrel_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_METrel_EM_SRSS1->Sumw2();
  h_METrel_EM_SRSS2 = new TH2F("h_METrel_EM_SRSS2", "h_METrel_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_METrel_EM_SRSS2->Sumw2();
  h_METrel_EE_SROS1 = new TH2F("h_METrel_EE_SROS1", "h_METrel_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_METrel_EE_SROS1->Sumw2();
  h_METrel_MM_SROS1 = new TH2F("h_METrel_MM_SROS1", "h_METrel_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_METrel_MM_SROS1->Sumw2();
  h_METrel_EM_SROS1 = new TH2F("h_METrel_EM_SROS1", "h_METrel_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_METrel_EM_SROS1->Sumw2();
  
  /*--------------------------------------------------------------------------------*/ 
  h_MET_EE_SRSS1 = new TH2F("h_MET_EE_SRSS1", "h_MET_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_MET_EE_SRSS1->Sumw2();
  h_MET_EE_SRSS2 = new TH2F("h_MET_EE_SRSS2", "h_MET_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_MET_EE_SRSS2->Sumw2();
  h_MET_MM_SRSS1 = new TH2F("h_MET_MM_SRSS1", "h_MET_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_MET_MM_SRSS1->Sumw2();  
  h_MET_MM_SRSS2 = new TH2F("h_MET_MM_SRSS2", "h_MET_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_MET_MM_SRSS2->Sumw2();  
  h_MET_MM_SRSS3 = new TH2F("h_MET_MM_SRSS3", "h_MET_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_MET_MM_SRSS3->Sumw2();
  h_MET_MM_SRSS4 = new TH2F("h_MET_MM_SRSS4", "h_MET_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_MET_MM_SRSS4->Sumw2();
  h_MET_EM_SRSS1 = new TH2F("h_MET_EM_SRSS1", "h_MET_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_MET_EM_SRSS1->Sumw2();
  h_MET_EM_SRSS2 = new TH2F("h_MET_EM_SRSS2", "h_MET_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_MET_EM_SRSS2->Sumw2();
  h_MET_EE_SROS1 = new TH2F("h_MET_EE_SROS1", "h_MET_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_MET_EE_SROS1->Sumw2();
  h_MET_MM_SROS1 = new TH2F("h_MET_MM_SROS1", "h_MET_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_MET_MM_SROS1->Sumw2();
  h_MET_EM_SROS1 = new TH2F("h_MET_EM_SROS1", "h_MET_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_MET_EM_SROS1->Sumw2();
  
  /*--------------------------------------------------------------------------------*/ 
  h_HT_EE_SRSS1 = new TH2F("h_HT_EE_SRSS1", "h_HT_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_HT_EE_SRSS1->Sumw2();
  h_HT_EE_SRSS2 = new TH2F("h_HT_EE_SRSS2", "h_HT_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_HT_EE_SRSS2->Sumw2();
  h_HT_MM_SRSS1 = new TH2F("h_HT_MM_SRSS1", "h_HT_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_HT_MM_SRSS1->Sumw2();  
  h_HT_MM_SRSS2 = new TH2F("h_HT_MM_SRSS2", "h_HT_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_HT_MM_SRSS2->Sumw2();
  h_HT_MM_SRSS3 = new TH2F("h_HT_MM_SRSS3", "h_HT_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_HT_MM_SRSS3->Sumw2();
  h_HT_MM_SRSS4 = new TH2F("h_HT_MM_SRSS4", "h_HT_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_HT_MM_SRSS4->Sumw2();
  h_HT_EM_SRSS1 = new TH2F("h_HT_EM_SRSS1", "h_HT_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_HT_EM_SRSS1->Sumw2();
  h_HT_EM_SRSS2 = new TH2F("h_HT_EM_SRSS2", "h_HT_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_HT_EM_SRSS2->Sumw2();
  h_HT_EE_SROS1 = new TH2F("h_HT_EE_SROS1", "h_HT_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_HT_EE_SROS1->Sumw2();
  h_HT_MM_SROS1 = new TH2F("h_HT_MM_SROS1", "h_HT_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_HT_MM_SROS1->Sumw2();
  h_HT_EM_SROS1 = new TH2F("h_HT_EM_SROS1", "h_HT_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_HT_EM_SROS1->Sumw2();
  
  /*--------------------------------------------------------------------------------*/ 
  h_mWWt_EE_SRSS1 = new TH2F("h_mWWt_EE_SRSS1", "h_mWWt_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mWWt_EE_SRSS1->Sumw2();
  h_mWWt_EE_SRSS2 = new TH2F("h_mWWt_EE_SRSS2", "h_mWWt_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mWWt_EE_SRSS2->Sumw2();
  h_mWWt_MM_SRSS1 = new TH2F("h_mWWt_MM_SRSS1", "h_mWWt_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mWWt_MM_SRSS1->Sumw2();  
  h_mWWt_MM_SRSS2 = new TH2F("h_mWWt_MM_SRSS2", "h_mWWt_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mWWt_MM_SRSS2->Sumw2();
  h_mWWt_MM_SRSS3 = new TH2F("h_mWWt_MM_SRSS3", "h_mWWt_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_mWWt_MM_SRSS3->Sumw2();
  h_mWWt_MM_SRSS4 = new TH2F("h_mWWt_MM_SRSS4", "h_mWWt_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_mWWt_MM_SRSS4->Sumw2();
  h_mWWt_EM_SRSS1 = new TH2F("h_mWWt_EM_SRSS1", "h_mWWt_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mWWt_EM_SRSS1->Sumw2();
  h_mWWt_EM_SRSS2 = new TH2F("h_mWWt_EM_SRSS2", "h_mWWt_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mWWt_EM_SRSS2->Sumw2();
  h_mWWt_EE_SROS1 = new TH2F("h_mWWt_EE_SROS1", "h_mWWt_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_mWWt_EE_SROS1->Sumw2();
  h_mWWt_MM_SROS1 = new TH2F("h_mWWt_MM_SROS1", "h_mWWt_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mWWt_MM_SROS1->Sumw2();
  h_mWWt_EM_SROS1 = new TH2F("h_mWWt_EM_SROS1", "h_mWWt_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mWWt_EM_SROS1->Sumw2();
  
  /*--------------------------------------------------------------------------------*/ 
  h_mTlmin_EE_SRSS1 = new TH2F("h_mTlmin_EE_SRSS1", "h_mTlmin_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTlmin_EE_SRSS1->Sumw2();
  h_mTlmin_EE_SRSS2 = new TH2F("h_mTlmin_EE_SRSS2", "h_mTlmin_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTlmin_EE_SRSS2->Sumw2();
  h_mTlmin_MM_SRSS1 = new TH2F("h_mTlmin_MM_SRSS1", "h_mTlmin_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTlmin_MM_SRSS1->Sumw2();  
  h_mTlmin_MM_SRSS2 = new TH2F("h_mTlmin_MM_SRSS2", "h_mTlmin_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTlmin_MM_SRSS2->Sumw2();
  h_mTlmin_MM_SRSS3 = new TH2F("h_mTlmin_MM_SRSS3", "h_mTlmin_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_mTlmin_MM_SRSS3->Sumw2();
  h_mTlmin_MM_SRSS4 = new TH2F("h_mTlmin_MM_SRSS4", "h_mTlmin_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_mTlmin_MM_SRSS4->Sumw2();
  h_mTlmin_EM_SRSS1 = new TH2F("h_mTlmin_EM_SRSS1", "h_mTlmin_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTlmin_EM_SRSS1->Sumw2();
  h_mTlmin_EM_SRSS2 = new TH2F("h_mTlmin_EM_SRSS2", "h_mTlmin_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTlmin_EM_SRSS2->Sumw2();
  h_mTlmin_EE_SROS1 = new TH2F("h_mTlmin_EE_SROS1", "h_mTlmin_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTlmin_EE_SROS1->Sumw2();
  h_mTlmin_MM_SROS1 = new TH2F("h_mTlmin_MM_SROS1", "h_mTlmin_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTlmin_MM_SROS1->Sumw2();
  h_mTlmin_EM_SROS1 = new TH2F("h_mTlmin_EM_SROS1", "h_mTlmin_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTlmin_EM_SROS1->Sumw2();
  
  /*--------------------------------------------------------------------------------*/ 
  h_mTlmax_EE_SRSS1 = new TH2F("h_mTlmax_EE_SRSS1", "h_mTlmax_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTlmax_EE_SRSS1->Sumw2();
  h_mTlmax_EE_SRSS2 = new TH2F("h_mTlmax_EE_SRSS2", "h_mTlmax_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTlmax_EE_SRSS2->Sumw2();
  h_mTlmax_MM_SRSS1 = new TH2F("h_mTlmax_MM_SRSS1", "h_mTlmax_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTlmax_MM_SRSS1->Sumw2();  
  h_mTlmax_MM_SRSS2 = new TH2F("h_mTlmax_MM_SRSS2", "h_mTlmax_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTlmax_MM_SRSS2->Sumw2();
  h_mTlmax_MM_SRSS3 = new TH2F("h_mTlmax_MM_SRSS3", "h_mTlmax_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_mTlmax_MM_SRSS3->Sumw2();
  h_mTlmax_MM_SRSS4 = new TH2F("h_mTlmax_MM_SRSS4", "h_mTlmax_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_mTlmax_MM_SRSS4->Sumw2();
  h_mTlmax_EM_SRSS1 = new TH2F("h_mTlmax_EM_SRSS1", "h_mTlmax_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTlmax_EM_SRSS1->Sumw2();
  h_mTlmax_EM_SRSS2 = new TH2F("h_mTlmax_EM_SRSS2", "h_mTlmax_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTlmax_EM_SRSS2->Sumw2();
  h_mTlmax_EE_SROS1 = new TH2F("h_mTlmax_EE_SROS1", "h_mTlmax_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTlmax_EE_SROS1->Sumw2();
  h_mTlmax_MM_SROS1 = new TH2F("h_mTlmax_MM_SROS1", "h_mTlmax_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTlmax_MM_SROS1->Sumw2();
  h_mTlmax_EM_SROS1 = new TH2F("h_mTlmax_EM_SROS1", "h_mTlmax_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTlmax_EM_SROS1->Sumw2();
  
  /*--------------------------------------------------------------------------------*/ 
  h_meff_EE_SRSS1 = new TH2F("h_meff_EE_SRSS1", "h_meff_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_meff_EE_SRSS1->Sumw2();
  h_meff_EE_SRSS2 = new TH2F("h_meff_EE_SRSS2", "h_meff_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_meff_EE_SRSS2->Sumw2();
  h_meff_MM_SRSS1 = new TH2F("h_meff_MM_SRSS1", "h_meff_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_meff_MM_SRSS1->Sumw2();
  h_meff_MM_SRSS2 = new TH2F("h_meff_MM_SRSS2", "h_meff_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_meff_MM_SRSS2->Sumw2();
  h_meff_MM_SRSS3 = new TH2F("h_meff_MM_SRSS3", "h_meff_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_meff_MM_SRSS3->Sumw2();
  h_meff_MM_SRSS4 = new TH2F("h_meff_MM_SRSS4", "h_meff_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_meff_MM_SRSS4->Sumw2();
  h_meff_EM_SRSS1 = new TH2F("h_meff_EM_SRSS1", "h_meff_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_meff_EM_SRSS1->Sumw2();
  h_meff_EM_SRSS2 = new TH2F("h_meff_EM_SRSS2", "h_meff_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_meff_EM_SRSS2->Sumw2();
  h_meff_EE_SROS1 = new TH2F("h_meff_EE_SROS1", "h_meff_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_meff_EE_SROS1->Sumw2();
  h_meff_MM_SROS1 = new TH2F("h_meff_MM_SROS1", "h_meff_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_meff_MM_SROS1->Sumw2();
  h_meff_EM_SROS1 = new TH2F("h_meff_EM_SROS1", "h_meff_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_meff_EM_SROS1->Sumw2();
  
  /*--------------------------------------------------------------------------------*/ 
  h_mT2_EE_SRSS1 = new TH2F("h_mT2_EE_SRSS1", "h_mT2_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mT2_EE_SRSS1->Sumw2();
  h_mT2_EE_SRSS2 = new TH2F("h_mT2_EE_SRSS2", "h_mT2_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mT2_EE_SRSS2->Sumw2();
  h_mT2_MM_SRSS1 = new TH2F("h_mT2_MM_SRSS1", "h_mT2_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mT2_MM_SRSS1->Sumw2();
  h_mT2_MM_SRSS2 = new TH2F("h_mT2_MM_SRSS2", "h_mT2_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mT2_MM_SRSS2->Sumw2();  
  h_mT2_MM_SRSS3 = new TH2F("h_mT2_MM_SRSS3", "h_mT2_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_mT2_MM_SRSS3->Sumw2();
  h_mT2_MM_SRSS4 = new TH2F("h_mT2_MM_SRSS4", "h_mT2_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_mT2_MM_SRSS4->Sumw2();
  h_mT2_EM_SRSS1 = new TH2F("h_mT2_EM_SRSS1", "h_mT2_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mT2_EM_SRSS1->Sumw2();
  h_mT2_EM_SRSS2 = new TH2F("h_mT2_EM_SRSS2", "h_mT2_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mT2_EM_SRSS2->Sumw2();
  h_mT2_EE_SROS1 = new TH2F("h_mT2_EE_SROS1", "h_mT2_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_mT2_EE_SROS1->Sumw2();
  h_mT2_MM_SROS1 = new TH2F("h_mT2_MM_SROS1", "h_mT2_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mT2_MM_SROS1->Sumw2();
  h_mT2_EM_SROS1 = new TH2F("h_mT2_EM_SROS1", "h_mT2_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mT2_EM_SROS1->Sumw2();
/*--------------------------------------------------------------------------------*/ 
  h_mT2J_EE_SRSS1 = new TH2F("h_mT2J_EE_SRSS1", "h_mT2J_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mT2J_EE_SRSS1->Sumw2();
  h_mT2J_EE_SRSS2 = new TH2F("h_mT2J_EE_SRSS2", "h_mT2J_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mT2J_EE_SRSS2->Sumw2();
  h_mT2J_MM_SRSS1 = new TH2F("h_mT2J_MM_SRSS1", "h_mT2J_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mT2J_MM_SRSS1->Sumw2();
  h_mT2J_MM_SRSS2 = new TH2F("h_mT2J_MM_SRSS2", "h_mT2J_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mT2J_MM_SRSS2->Sumw2();  
  h_mT2J_MM_SRSS3 = new TH2F("h_mT2J_MM_SRSS3", "h_mT2J_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_mT2J_MM_SRSS3->Sumw2();
  h_mT2J_MM_SRSS4 = new TH2F("h_mT2J_MM_SRSS4", "h_mT2J_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_mT2J_MM_SRSS4->Sumw2();
  h_mT2J_EM_SRSS1 = new TH2F("h_mT2J_EM_SRSS1", "h_mT2J_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mT2J_EM_SRSS1->Sumw2();
  h_mT2J_EM_SRSS2 = new TH2F("h_mT2J_EM_SRSS2", "h_mT2J_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mT2J_EM_SRSS2->Sumw2();
  h_mT2J_EE_SROS1 = new TH2F("h_mT2J_EE_SROS1", "h_mT2J_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_mT2J_EE_SROS1->Sumw2();
  h_mT2J_MM_SROS1 = new TH2F("h_mT2J_MM_SROS1", "h_mT2J_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mT2J_MM_SROS1->Sumw2();
  h_mT2J_EM_SROS1 = new TH2F("h_mT2J_EM_SROS1", "h_mT2J_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mT2J_EM_SROS1->Sumw2();  
  /*--------------------------------------------------------------------------------*/ 
  h_mjj_EE_SRSS1 = new TH2F("h_mjj_EE_SRSS1", "h_mjj_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mjj_EE_SRSS1->Sumw2();
  h_mjj_EE_SRSS2 = new TH2F("h_mjj_EE_SRSS2", "h_mjj_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mjj_EE_SRSS2->Sumw2();
  h_mjj_MM_SRSS1 = new TH2F("h_mjj_MM_SRSS1", "h_mjj_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mjj_MM_SRSS1->Sumw2();  
  h_mjj_MM_SRSS2 = new TH2F("h_mjj_MM_SRSS2", "h_mjj_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mjj_MM_SRSS2->Sumw2();
  h_mjj_MM_SRSS3 = new TH2F("h_mjj_MM_SRSS3", "h_mjj_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_mjj_MM_SRSS3->Sumw2();
  h_mjj_MM_SRSS4 = new TH2F("h_mjj_MM_SRSS4", "h_mjj_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_mjj_MM_SRSS4->Sumw2();
  h_mjj_EM_SRSS1 = new TH2F("h_mjj_EM_SRSS1", "h_mjj_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mjj_EM_SRSS1->Sumw2();
  h_mjj_EM_SRSS2 = new TH2F("h_mjj_EM_SRSS2", "h_mjj_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mjj_EM_SRSS2->Sumw2();
  h_mjj_EE_SROS1 = new TH2F("h_mjj_EE_SROS1", "h_mjj_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_mjj_EE_SROS1->Sumw2();
  h_mjj_MM_SROS1 = new TH2F("h_mjj_MM_SROS1", "h_mjj_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mjj_MM_SROS1->Sumw2();
  h_mjj_EM_SROS1 = new TH2F("h_mjj_EM_SROS1", "h_mjj_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mjj_EM_SROS1->Sumw2();
  
    /*--------------------------------------------------------------------------------*/ 
  h_DeltaPhiMETll_EE_SRSS1 = new TH2F("h_DeltaPhiMETll_EE_SRSS1", "h_DeltaPhiMETll_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETll_EE_SRSS1->Sumw2();
  h_DeltaPhiMETll_EE_SRSS2 = new TH2F("h_DeltaPhiMETll_EE_SRSS2", "h_DeltaPhiMETll_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETll_EE_SRSS2->Sumw2();
  h_DeltaPhiMETll_MM_SRSS1 = new TH2F("h_DeltaPhiMETll_MM_SRSS1", "h_DeltaPhiMETll_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETll_MM_SRSS1->Sumw2();  
  h_DeltaPhiMETll_MM_SRSS2 = new TH2F("h_DeltaPhiMETll_MM_SRSS2", "h_DeltaPhiMETll_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETll_MM_SRSS2->Sumw2();
  h_DeltaPhiMETll_MM_SRSS3 = new TH2F("h_DeltaPhiMETll_MM_SRSS3", "h_DeltaPhiMETll_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETll_MM_SRSS3->Sumw2();
  h_DeltaPhiMETll_MM_SRSS4 = new TH2F("h_DeltaPhiMETll_MM_SRSS4", "h_DeltaPhiMETll_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETll_MM_SRSS4->Sumw2();
  h_DeltaPhiMETll_EM_SRSS1 = new TH2F("h_DeltaPhiMETll_EM_SRSS1", "h_DeltaPhiMETll_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETll_EM_SRSS1->Sumw2();
  h_DeltaPhiMETll_EM_SRSS2 = new TH2F("h_DeltaPhiMETll_EM_SRSS2", "h_DeltaPhiMETll_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETll_EM_SRSS2->Sumw2();
  h_DeltaPhiMETll_EE_SROS1 = new TH2F("h_DeltaPhiMETll_EE_SROS1", "h_DeltaPhiMETll_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETll_EE_SROS1->Sumw2();
  h_DeltaPhiMETll_MM_SROS1 = new TH2F("h_DeltaPhiMETll_MM_SROS1", "h_DeltaPhiMETll_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETll_MM_SROS1->Sumw2();
  h_DeltaPhiMETll_EM_SROS1 = new TH2F("h_DeltaPhiMETll_EM_SROS1", "h_DeltaPhiMETll_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETll_EM_SROS1->Sumw2();
  
    /*--------------------------------------------------------------------------------*/ 
  h_DeltaPhill_EE_SRSS1 = new TH2F("h_DeltaPhill_EE_SRSS1", "h_DeltaPhill_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhill_EE_SRSS1->Sumw2();
  h_DeltaPhill_EE_SRSS2 = new TH2F("h_DeltaPhill_EE_SRSS2", "h_DeltaPhill_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaPhill_EE_SRSS2->Sumw2();
  h_DeltaPhill_MM_SRSS1 = new TH2F("h_DeltaPhill_MM_SRSS1", "h_DeltaPhill_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhill_MM_SRSS1->Sumw2();  
  h_DeltaPhill_MM_SRSS2 = new TH2F("h_DeltaPhill_MM_SRSS2", "h_DeltaPhill_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaPhill_MM_SRSS2->Sumw2();
  h_DeltaPhill_MM_SRSS3 = new TH2F("h_DeltaPhill_MM_SRSS3", "h_DeltaPhill_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaPhill_MM_SRSS3->Sumw2();
  h_DeltaPhill_MM_SRSS4 = new TH2F("h_DeltaPhill_MM_SRSS4", "h_DeltaPhill_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaPhill_MM_SRSS4->Sumw2();
  h_DeltaPhill_EM_SRSS1 = new TH2F("h_DeltaPhill_EM_SRSS1", "h_DeltaPhill_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhill_EM_SRSS1->Sumw2();
  h_DeltaPhill_EM_SRSS2 = new TH2F("h_DeltaPhill_EM_SRSS2", "h_DeltaPhill_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaPhill_EM_SRSS2->Sumw2();
  h_DeltaPhill_EE_SROS1 = new TH2F("h_DeltaPhill_EE_SROS1", "h_DeltaPhill_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhill_EE_SROS1->Sumw2();
  h_DeltaPhill_MM_SROS1 = new TH2F("h_DeltaPhill_MM_SROS1", "h_DeltaPhill_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhill_MM_SROS1->Sumw2();
  h_DeltaPhill_EM_SROS1 = new TH2F("h_DeltaPhill_EM_SROS1", "h_DeltaPhill_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhill_EM_SROS1->Sumw2();
  /*--------------------------------------------------------------------------------*/ 
  h_NBJets_EE_SRSS1 = new TH2F("h_NBJets_EE_SRSS1", "h_NBJets_EE_SRSS1", 11, -0.5, 10.5 ,130, 0, 129);  h_NBJets_EE_SRSS1->Sumw2();
  h_NBJets_EE_SRSS2 = new TH2F("h_NBJets_EE_SRSS2", "h_NBJets_EE_SRSS2", 11, -0.5, 10.5 ,130, 0, 129);  h_NBJets_EE_SRSS2->Sumw2();
  h_NBJets_MM_SRSS1 = new TH2F("h_NBJets_MM_SRSS1", "h_NBJets_MM_SRSS1", 11, -0.5, 10.5 ,130, 0, 129);  h_NBJets_MM_SRSS1->Sumw2();  
  h_NBJets_MM_SRSS2 = new TH2F("h_NBJets_MM_SRSS2", "h_NBJets_MM_SRSS2", 11, -0.5, 10.5 ,130, 0, 129);  h_NBJets_MM_SRSS2->Sumw2();
  h_NBJets_MM_SRSS3 = new TH2F("h_NBJets_MM_SRSS3", "h_NBJets_MM_SRSS3", 11, -0.5, 10.5 ,130, 0, 129);  h_NBJets_MM_SRSS3->Sumw2();
  h_NBJets_MM_SRSS4 = new TH2F("h_NBJets_MM_SRSS4", "h_NBJets_MM_SRSS4", 11, -0.5, 10.5 ,130, 0, 129);  h_NBJets_MM_SRSS4->Sumw2();
  h_NBJets_EM_SRSS1 = new TH2F("h_NBJets_EM_SRSS1", "h_NBJets_EM_SRSS1", 11, -0.5, 10.5 ,130, 0, 129);  h_NBJets_EM_SRSS1->Sumw2();
  h_NBJets_EM_SRSS2 = new TH2F("h_NBJets_EM_SRSS2", "h_NBJets_EM_SRSS2", 11, -0.5, 10.5 ,130, 0, 129);  h_NBJets_EM_SRSS2->Sumw2();
  h_NBJets_EE_SROS1 = new TH2F("h_NBJets_EE_SROS1", "h_NBJets_EE_SROS1", 11, -0.5, 10.5 ,130, 0, 129);  h_NBJets_EE_SROS1->Sumw2();
  h_NBJets_MM_SROS1 = new TH2F("h_NBJets_MM_SROS1", "h_NBJets_MM_SROS1", 11, -0.5, 10.5 ,130, 0, 129);  h_NBJets_MM_SROS1->Sumw2();
  h_NBJets_EM_SROS1 = new TH2F("h_NBJets_EM_SROS1", "h_NBJets_EM_SROS1", 11, -0.5, 10.5 ,130, 0, 129);  h_NBJets_EM_SROS1->Sumw2();
  /*--------------------------------------------------------------------------------*/ 
  h_NCJets_EE_SRSS1 = new TH2F("h_NCJets_EE_SRSS1", "h_NCJets_EE_SRSS1", 11, -0.5, 10.5 ,130, 0, 129);  h_NCJets_EE_SRSS1->Sumw2();
  h_NCJets_EE_SRSS2 = new TH2F("h_NCJets_EE_SRSS2", "h_NCJets_EE_SRSS2", 11, -0.5, 10.5 ,130, 0, 129);  h_NCJets_EE_SRSS2->Sumw2();
  h_NCJets_MM_SRSS1 = new TH2F("h_NCJets_MM_SRSS1", "h_NCJets_MM_SRSS1", 11, -0.5, 10.5 ,130, 0, 129);  h_NCJets_MM_SRSS1->Sumw2();  
  h_NCJets_MM_SRSS2 = new TH2F("h_NCJets_MM_SRSS2", "h_NCJets_MM_SRSS2", 11, -0.5, 10.5 ,130, 0, 129);  h_NCJets_MM_SRSS2->Sumw2();
  h_NCJets_MM_SRSS3 = new TH2F("h_NCJets_MM_SRSS3", "h_NCJets_MM_SRSS3", 11, -0.5, 10.5 ,130, 0, 129);  h_NCJets_MM_SRSS3->Sumw2();
  h_NCJets_MM_SRSS4 = new TH2F("h_NCJets_MM_SRSS4", "h_NCJets_MM_SRSS4", 11, -0.5, 10.5 ,130, 0, 129);  h_NCJets_MM_SRSS4->Sumw2();
  h_NCJets_EM_SRSS1 = new TH2F("h_NCJets_EM_SRSS1", "h_NCJets_EM_SRSS1", 11, -0.5, 10.5 ,130, 0, 129);  h_NCJets_EM_SRSS1->Sumw2();
  h_NCJets_EM_SRSS2 = new TH2F("h_NCJets_EM_SRSS2", "h_NCJets_EM_SRSS2", 11, -0.5, 10.5 ,130, 0, 129);  h_NCJets_EM_SRSS2->Sumw2();
  h_NCJets_EE_SROS1 = new TH2F("h_NCJets_EE_SROS1", "h_NCJets_EE_SROS1", 11, -0.5, 10.5 ,130, 0, 129);  h_NCJets_EE_SROS1->Sumw2();
  h_NCJets_MM_SROS1 = new TH2F("h_NCJets_MM_SROS1", "h_NCJets_MM_SROS1", 11, -0.5, 10.5 ,130, 0, 129);  h_NCJets_MM_SROS1->Sumw2();
  h_NCJets_EM_SROS1 = new TH2F("h_NCJets_EM_SROS1", "h_NCJets_EM_SROS1", 11, -0.5, 10.5 ,130, 0, 129);  h_NCJets_EM_SROS1->Sumw2();
  /*--------------------------------------------------------------------------------*/ 
  h_NFJets_EE_SRSS1 = new TH2F("h_NFJets_EE_SRSS1", "h_NFJets_EE_SRSS1", 11, -0.5, 10.5 ,130, 0, 129);  h_NFJets_EE_SRSS1->Sumw2();
  h_NFJets_EE_SRSS2 = new TH2F("h_NFJets_EE_SRSS2", "h_NFJets_EE_SRSS2", 11, -0.5, 10.5 ,130, 0, 129);  h_NFJets_EE_SRSS2->Sumw2();
  h_NFJets_MM_SRSS1 = new TH2F("h_NFJets_MM_SRSS1", "h_NFJets_MM_SRSS1", 11, -0.5, 10.5 ,130, 0, 129);  h_NFJets_MM_SRSS1->Sumw2();  
  h_NFJets_MM_SRSS2 = new TH2F("h_NFJets_MM_SRSS2", "h_NFJets_MM_SRSS2", 11, -0.5, 10.5 ,130, 0, 129);  h_NFJets_MM_SRSS2->Sumw2();
  h_NFJets_MM_SRSS3 = new TH2F("h_NFJets_MM_SRSS3", "h_NFJets_MM_SRSS3", 11, -0.5, 10.5 ,130, 0, 129);  h_NFJets_MM_SRSS3->Sumw2();
  h_NFJets_MM_SRSS4 = new TH2F("h_NFJets_MM_SRSS4", "h_NFJets_MM_SRSS4", 11, -0.5, 10.5 ,130, 0, 129);  h_NFJets_MM_SRSS4->Sumw2();
  h_NFJets_EM_SRSS1 = new TH2F("h_NFJets_EM_SRSS1", "h_NFJets_EM_SRSS1", 11, -0.5, 10.5 ,130, 0, 129);  h_NFJets_EM_SRSS1->Sumw2();
  h_NFJets_EM_SRSS2 = new TH2F("h_NFJets_EM_SRSS2", "h_NFJets_EM_SRSS2", 11, -0.5, 10.5 ,130, 0, 129);  h_NFJets_EM_SRSS2->Sumw2();
  h_NFJets_EE_SROS1 = new TH2F("h_NFJets_EE_SROS1", "h_NFJets_EE_SROS1", 11, -0.5, 10.5 ,130, 0, 129);  h_NFJets_EE_SROS1->Sumw2();
  h_NFJets_MM_SROS1 = new TH2F("h_NFJets_MM_SROS1", "h_NFJets_MM_SROS1", 11, -0.5, 10.5 ,130, 0, 129);  h_NFJets_MM_SROS1->Sumw2();
  h_NFJets_EM_SROS1 = new TH2F("h_NFJets_EM_SROS1", "h_NFJets_EM_SROS1", 11, -0.5, 10.5 ,130, 0, 129);  h_NFJets_EM_SROS1->Sumw2();
  
  /*--------------------------------------------------------------------------------*/ 
  h_mZTT_coll_EE_SRSS1 = new TH2F("h_mZTT_coll_EE_SRSS1", "h_mZTT_coll_EE_SRSS1", 500, -2, 498 ,130, 0, 129);  h_mZTT_coll_EE_SRSS1->Sumw2();
  h_mZTT_coll_EE_SRSS2 = new TH2F("h_mZTT_coll_EE_SRSS2", "h_mZTT_coll_EE_SRSS2", 500, -2, 498 ,130, 0, 129);  h_mZTT_coll_EE_SRSS2->Sumw2();
  h_mZTT_coll_MM_SRSS1 = new TH2F("h_mZTT_coll_MM_SRSS1", "h_mZTT_coll_MM_SRSS1", 500, -2, 498 ,130, 0, 129);  h_mZTT_coll_MM_SRSS1->Sumw2();  
  h_mZTT_coll_MM_SRSS2 = new TH2F("h_mZTT_coll_MM_SRSS2", "h_mZTT_coll_MM_SRSS2", 500, -2, 498 ,130, 0, 129);  h_mZTT_coll_MM_SRSS2->Sumw2();
  h_mZTT_coll_MM_SRSS3 = new TH2F("h_mZTT_coll_MM_SRSS3", "h_mZTT_coll_MM_SRSS3", 500, -2, 498 ,130, 0, 129);  h_mZTT_coll_MM_SRSS3->Sumw2();
  h_mZTT_coll_MM_SRSS4 = new TH2F("h_mZTT_coll_MM_SRSS4", "h_mZTT_coll_MM_SRSS4", 500, -2, 498 ,130, 0, 129);  h_mZTT_coll_MM_SRSS4->Sumw2();
  h_mZTT_coll_EM_SRSS1 = new TH2F("h_mZTT_coll_EM_SRSS1", "h_mZTT_coll_EM_SRSS1", 500, -2, 498 ,130, 0, 129);  h_mZTT_coll_EM_SRSS1->Sumw2();
  h_mZTT_coll_EM_SRSS2 = new TH2F("h_mZTT_coll_EM_SRSS2", "h_mZTT_coll_EM_SRSS2", 500, -2, 498 ,130, 0, 129);  h_mZTT_coll_EM_SRSS2->Sumw2();
  h_mZTT_coll_EE_SROS1 = new TH2F("h_mZTT_coll_EE_SROS1", "h_mZTT_coll_EE_SROS1", 500, -2, 498 ,130, 0, 129);  h_mZTT_coll_EE_SROS1->Sumw2();
  h_mZTT_coll_MM_SROS1 = new TH2F("h_mZTT_coll_MM_SROS1", "h_mZTT_coll_MM_SROS1", 500, -2, 498 ,130, 0, 129);  h_mZTT_coll_MM_SROS1->Sumw2();
  h_mZTT_coll_EM_SROS1 = new TH2F("h_mZTT_coll_EM_SROS1", "h_mZTT_coll_EM_SROS1", 500, -2, 498 ,130, 0, 129);  h_mZTT_coll_EM_SROS1->Sumw2();
  /*--------------------------------------------------------------------------------*/ 
  h_mZTT_mmc_EE_SRSS1 = new TH2F("h_mZTT_mmc_EE_SRSS1", "h_mZTT_mmc_EE_SRSS1", 500, -2, 498 ,130, 0, 129);  h_mZTT_mmc_EE_SRSS1->Sumw2();
  h_mZTT_mmc_EE_SRSS2 = new TH2F("h_mZTT_mmc_EE_SRSS2", "h_mZTT_mmc_EE_SRSS2", 500, -2, 498 ,130, 0, 129);  h_mZTT_mmc_EE_SRSS2->Sumw2();
  h_mZTT_mmc_MM_SRSS1 = new TH2F("h_mZTT_mmc_MM_SRSS1", "h_mZTT_mmc_MM_SRSS1", 500, -2, 498 ,130, 0, 129);  h_mZTT_mmc_MM_SRSS1->Sumw2();  
  h_mZTT_mmc_MM_SRSS2 = new TH2F("h_mZTT_mmc_MM_SRSS2", "h_mZTT_mmc_MM_SRSS2", 500, -2, 498 ,130, 0, 129);  h_mZTT_mmc_MM_SRSS2->Sumw2();
  h_mZTT_mmc_MM_SRSS3 = new TH2F("h_mZTT_mmc_MM_SRSS3", "h_mZTT_mmc_MM_SRSS3", 500, -2, 498 ,130, 0, 129);  h_mZTT_mmc_MM_SRSS3->Sumw2();
  h_mZTT_mmc_MM_SRSS4 = new TH2F("h_mZTT_mmc_MM_SRSS4", "h_mZTT_mmc_MM_SRSS4", 500, -2, 498 ,130, 0, 129);  h_mZTT_mmc_MM_SRSS4->Sumw2();
  h_mZTT_mmc_EM_SRSS1 = new TH2F("h_mZTT_mmc_EM_SRSS1", "h_mZTT_mmc_EM_SRSS1", 500, -2, 498 ,130, 0, 129);  h_mZTT_mmc_EM_SRSS1->Sumw2();
  h_mZTT_mmc_EM_SRSS2 = new TH2F("h_mZTT_mmc_EM_SRSS2", "h_mZTT_mmc_EM_SRSS2", 500, -2, 498 ,130, 0, 129);  h_mZTT_mmc_EM_SRSS2->Sumw2();
  h_mZTT_mmc_EE_SROS1 = new TH2F("h_mZTT_mmc_EE_SROS1", "h_mZTT_mmc_EE_SROS1", 500, -2, 498 ,130, 0, 129);  h_mZTT_mmc_EE_SROS1->Sumw2();
  h_mZTT_mmc_MM_SROS1 = new TH2F("h_mZTT_mmc_MM_SROS1", "h_mZTT_mmc_MM_SROS1", 500, -2, 498 ,130, 0, 129);  h_mZTT_mmc_MM_SROS1->Sumw2();
  h_mZTT_mmc_EM_SROS1 = new TH2F("h_mZTT_mmc_EM_SROS1", "h_mZTT_mmc_EM_SROS1", 500, -2, 498 ,130, 0, 129);  h_mZTT_mmc_EM_SROS1->Sumw2();
  
  /*--------------------------------------------------------------------------------*/ 
  h_DeltaPhijj_EE_SRSS1 = new TH2F("h_DeltaPhijj_EE_SRSS1", "h_DeltaPhijj_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhijj_EE_SRSS1->Sumw2();
  h_DeltaPhijj_EE_SRSS2 = new TH2F("h_DeltaPhijj_EE_SRSS2", "h_DeltaPhijj_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaPhijj_EE_SRSS2->Sumw2();
  h_DeltaPhijj_MM_SRSS1 = new TH2F("h_DeltaPhijj_MM_SRSS1", "h_DeltaPhijj_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhijj_MM_SRSS1->Sumw2();  
  h_DeltaPhijj_MM_SRSS2 = new TH2F("h_DeltaPhijj_MM_SRSS2", "h_DeltaPhijj_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaPhijj_MM_SRSS2->Sumw2();
  h_DeltaPhijj_MM_SRSS3 = new TH2F("h_DeltaPhijj_MM_SRSS3", "h_DeltaPhijj_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaPhijj_MM_SRSS3->Sumw2();
  h_DeltaPhijj_MM_SRSS4 = new TH2F("h_DeltaPhijj_MM_SRSS4", "h_DeltaPhijj_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaPhijj_MM_SRSS4->Sumw2();
  h_DeltaPhijj_EM_SRSS1 = new TH2F("h_DeltaPhijj_EM_SRSS1", "h_DeltaPhijj_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhijj_EM_SRSS1->Sumw2();
  h_DeltaPhijj_EM_SRSS2 = new TH2F("h_DeltaPhijj_EM_SRSS2", "h_DeltaPhijj_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaPhijj_EM_SRSS2->Sumw2();
  h_DeltaPhijj_EE_SROS1 = new TH2F("h_DeltaPhijj_EE_SROS1", "h_DeltaPhijj_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhijj_EE_SROS1->Sumw2();
  h_DeltaPhijj_MM_SROS1 = new TH2F("h_DeltaPhijj_MM_SROS1", "h_DeltaPhijj_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhijj_MM_SROS1->Sumw2();
  h_DeltaPhijj_EM_SROS1 = new TH2F("h_DeltaPhijj_EM_SROS1", "h_DeltaPhijj_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhijj_EM_SROS1->Sumw2();
  
  /*--------------------------------------------------------------------------------*/ 
  h_pTjj_EE_SRSS1 = new TH2F("h_pTjj_EE_SRSS1", "h_pTjj_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTjj_EE_SRSS1->Sumw2();
  h_pTjj_EE_SRSS2 = new TH2F("h_pTjj_EE_SRSS2", "h_pTjj_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_pTjj_EE_SRSS2->Sumw2();
  h_pTjj_MM_SRSS1 = new TH2F("h_pTjj_MM_SRSS1", "h_pTjj_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTjj_MM_SRSS1->Sumw2();
  h_pTjj_MM_SRSS2 = new TH2F("h_pTjj_MM_SRSS2", "h_pTjj_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_pTjj_MM_SRSS2->Sumw2();
  h_pTjj_MM_SRSS3 = new TH2F("h_pTjj_MM_SRSS3", "h_pTjj_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_pTjj_MM_SRSS3->Sumw2();
  h_pTjj_MM_SRSS4 = new TH2F("h_pTjj_MM_SRSS4", "h_pTjj_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_pTjj_MM_SRSS4->Sumw2();
  h_pTjj_EM_SRSS1 = new TH2F("h_pTjj_EM_SRSS1", "h_pTjj_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTjj_EM_SRSS1->Sumw2();
  h_pTjj_EM_SRSS2 = new TH2F("h_pTjj_EM_SRSS2", "h_pTjj_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_pTjj_EM_SRSS2->Sumw2();
  h_pTjj_EE_SROS1 = new TH2F("h_pTjj_EE_SROS1", "h_pTjj_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_pTjj_EE_SROS1->Sumw2();
  h_pTjj_MM_SROS1 = new TH2F("h_pTjj_MM_SROS1", "h_pTjj_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_pTjj_MM_SROS1->Sumw2();
  h_pTjj_EM_SROS1 = new TH2F("h_pTjj_EM_SROS1", "h_pTjj_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_pTjj_EM_SROS1->Sumw2();

  /*--------------------------------------------------------------------------------*/ 
  h_pTll_EE_SRSS1 = new TH2F("h_pTll_EE_SRSS1", "h_pTll_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTll_EE_SRSS1->Sumw2();
  h_pTll_EE_SRSS2 = new TH2F("h_pTll_EE_SRSS2", "h_pTll_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_pTll_EE_SRSS2->Sumw2();
  h_pTll_MM_SRSS1 = new TH2F("h_pTll_MM_SRSS1", "h_pTll_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTll_MM_SRSS1->Sumw2();  
  h_pTll_MM_SRSS2 = new TH2F("h_pTll_MM_SRSS2", "h_pTll_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_pTll_MM_SRSS2->Sumw2();
  h_pTll_MM_SRSS3 = new TH2F("h_pTll_MM_SRSS3", "h_pTll_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_pTll_MM_SRSS3->Sumw2();
  h_pTll_MM_SRSS4 = new TH2F("h_pTll_MM_SRSS4", "h_pTll_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_pTll_MM_SRSS4->Sumw2();
  h_pTll_EM_SRSS1 = new TH2F("h_pTll_EM_SRSS1", "h_pTll_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTll_EM_SRSS1->Sumw2();
  h_pTll_EM_SRSS2 = new TH2F("h_pTll_EM_SRSS2", "h_pTll_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_pTll_EM_SRSS2->Sumw2();
  h_pTll_EE_SROS1 = new TH2F("h_pTll_EE_SROS1", "h_pTll_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_pTll_EE_SROS1->Sumw2();
  h_pTll_MM_SROS1 = new TH2F("h_pTll_MM_SROS1", "h_pTll_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_pTll_MM_SROS1->Sumw2();
  h_pTll_EM_SROS1 = new TH2F("h_pTll_EM_SROS1", "h_pTll_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_pTll_EM_SROS1->Sumw2();
  
  /*--------------------------------------------------------------------------------*/ 
  h_DeltaPhiMETl0_EE_SRSS1 = new TH2F("h_DeltaPhiMETl0_EE_SRSS1", "h_DeltaPhiMETl0_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETl0_EE_SRSS1->Sumw2();
  h_DeltaPhiMETl0_EE_SRSS2 = new TH2F("h_DeltaPhiMETl0_EE_SRSS2", "h_DeltaPhiMETl0_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETl0_EE_SRSS2->Sumw2();
  h_DeltaPhiMETl0_MM_SRSS1 = new TH2F("h_DeltaPhiMETl0_MM_SRSS1", "h_DeltaPhiMETl0_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETl0_MM_SRSS1->Sumw2();  
  h_DeltaPhiMETl0_MM_SRSS2 = new TH2F("h_DeltaPhiMETl0_MM_SRSS2", "h_DeltaPhiMETl0_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETl0_MM_SRSS2->Sumw2();
  h_DeltaPhiMETl0_MM_SRSS3 = new TH2F("h_DeltaPhiMETl0_MM_SRSS3", "h_DeltaPhiMETl0_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETl0_MM_SRSS3->Sumw2();
  h_DeltaPhiMETl0_MM_SRSS4 = new TH2F("h_DeltaPhiMETl0_MM_SRSS4", "h_DeltaPhiMETl0_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETl0_MM_SRSS4->Sumw2();
  h_DeltaPhiMETl0_EM_SRSS1 = new TH2F("h_DeltaPhiMETl0_EM_SRSS1", "h_DeltaPhiMETl0_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETl0_EM_SRSS1->Sumw2();
  h_DeltaPhiMETl0_EM_SRSS2 = new TH2F("h_DeltaPhiMETl0_EM_SRSS2", "h_DeltaPhiMETl0_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETl0_EM_SRSS2->Sumw2();
  h_DeltaPhiMETl0_EE_SROS1 = new TH2F("h_DeltaPhiMETl0_EE_SROS1", "h_DeltaPhiMETl0_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETl0_EE_SROS1->Sumw2();
  h_DeltaPhiMETl0_MM_SROS1 = new TH2F("h_DeltaPhiMETl0_MM_SROS1", "h_DeltaPhiMETl0_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETl0_MM_SROS1->Sumw2();
  h_DeltaPhiMETl0_EM_SROS1 = new TH2F("h_DeltaPhiMETl0_EM_SROS1", "h_DeltaPhiMETl0_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETl0_EM_SROS1->Sumw2();

  /*--------------------------------------------------------------------------------*/ 
  h_DeltaPhiMETl1_EE_SRSS1 = new TH2F("h_DeltaPhiMETl1_EE_SRSS1", "h_DeltaPhiMETl1_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETl1_EE_SRSS1->Sumw2();
  h_DeltaPhiMETl1_EE_SRSS2 = new TH2F("h_DeltaPhiMETl1_EE_SRSS2", "h_DeltaPhiMETl1_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETl1_EE_SRSS2->Sumw2();
  h_DeltaPhiMETl1_MM_SRSS1 = new TH2F("h_DeltaPhiMETl1_MM_SRSS1", "h_DeltaPhiMETl1_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETl1_MM_SRSS1->Sumw2();  
  h_DeltaPhiMETl1_MM_SRSS2 = new TH2F("h_DeltaPhiMETl1_MM_SRSS2", "h_DeltaPhiMETl1_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETl1_MM_SRSS2->Sumw2();
  h_DeltaPhiMETl1_MM_SRSS3 = new TH2F("h_DeltaPhiMETl1_MM_SRSS3", "h_DeltaPhiMETl1_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETl1_MM_SRSS3->Sumw2();
  h_DeltaPhiMETl1_MM_SRSS4 = new TH2F("h_DeltaPhiMETl1_MM_SRSS4", "h_DeltaPhiMETl1_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETl1_MM_SRSS4->Sumw2();
  h_DeltaPhiMETl1_EM_SRSS1 = new TH2F("h_DeltaPhiMETl1_EM_SRSS1", "h_DeltaPhiMETl1_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETl1_EM_SRSS1->Sumw2();
  h_DeltaPhiMETl1_EM_SRSS2 = new TH2F("h_DeltaPhiMETl1_EM_SRSS2", "h_DeltaPhiMETl1_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETl1_EM_SRSS2->Sumw2();
  h_DeltaPhiMETl1_EE_SROS1 = new TH2F("h_DeltaPhiMETl1_EE_SROS1", "h_DeltaPhiMETl1_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETl1_EE_SROS1->Sumw2();
  h_DeltaPhiMETl1_MM_SROS1 = new TH2F("h_DeltaPhiMETl1_MM_SROS1", "h_DeltaPhiMETl1_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETl1_MM_SROS1->Sumw2();
  h_DeltaPhiMETl1_EM_SROS1 = new TH2F("h_DeltaPhiMETl1_EM_SROS1", "h_DeltaPhiMETl1_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETl1_EM_SROS1->Sumw2();
  
    /*--------------------------------------------------------------------------------*/ 
  h_DeltaPhiMETj0_EE_SRSS1 = new TH2F("h_DeltaPhiMETj0_EE_SRSS1", "h_DeltaPhiMETj0_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETj0_EE_SRSS1->Sumw2();
  h_DeltaPhiMETj0_EE_SRSS2 = new TH2F("h_DeltaPhiMETj0_EE_SRSS2", "h_DeltaPhiMETj0_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETj0_EE_SRSS2->Sumw2();
  h_DeltaPhiMETj0_MM_SRSS1 = new TH2F("h_DeltaPhiMETj0_MM_SRSS1", "h_DeltaPhiMETj0_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETj0_MM_SRSS1->Sumw2();  
  h_DeltaPhiMETj0_MM_SRSS2 = new TH2F("h_DeltaPhiMETj0_MM_SRSS2", "h_DeltaPhiMETj0_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETj0_MM_SRSS2->Sumw2();
  h_DeltaPhiMETj0_MM_SRSS3 = new TH2F("h_DeltaPhiMETj0_MM_SRSS3", "h_DeltaPhiMETj0_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETj0_MM_SRSS3->Sumw2();
  h_DeltaPhiMETj0_MM_SRSS4 = new TH2F("h_DeltaPhiMETj0_MM_SRSS4", "h_DeltaPhiMETj0_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETj0_MM_SRSS4->Sumw2();
  h_DeltaPhiMETj0_EM_SRSS1 = new TH2F("h_DeltaPhiMETj0_EM_SRSS1", "h_DeltaPhiMETj0_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETj0_EM_SRSS1->Sumw2();
  h_DeltaPhiMETj0_EM_SRSS2 = new TH2F("h_DeltaPhiMETj0_EM_SRSS2", "h_DeltaPhiMETj0_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETj0_EM_SRSS2->Sumw2();
  h_DeltaPhiMETj0_EE_SROS1 = new TH2F("h_DeltaPhiMETj0_EE_SROS1", "h_DeltaPhiMETj0_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETj0_EE_SROS1->Sumw2();
  h_DeltaPhiMETj0_MM_SROS1 = new TH2F("h_DeltaPhiMETj0_MM_SROS1", "h_DeltaPhiMETj0_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETj0_MM_SROS1->Sumw2();
  h_DeltaPhiMETj0_EM_SROS1 = new TH2F("h_DeltaPhiMETj0_EM_SROS1", "h_DeltaPhiMETj0_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETj0_EM_SROS1->Sumw2();
  /*--------------------------------------------------------------------------------*/ 
  h_DeltaPhiMETj1_EE_SRSS1 = new TH2F("h_DeltaPhiMETj1_EE_SRSS1", "h_DeltaPhiMETj1_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETj1_EE_SRSS1->Sumw2();
  h_DeltaPhiMETj1_EE_SRSS2 = new TH2F("h_DeltaPhiMETj1_EE_SRSS2", "h_DeltaPhiMETj1_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETj1_EE_SRSS2->Sumw2();
  h_DeltaPhiMETj1_MM_SRSS1 = new TH2F("h_DeltaPhiMETj1_MM_SRSS1", "h_DeltaPhiMETj1_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETj1_MM_SRSS1->Sumw2();  
  h_DeltaPhiMETj1_MM_SRSS2 = new TH2F("h_DeltaPhiMETj1_MM_SRSS2", "h_DeltaPhiMETj1_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETj1_MM_SRSS2->Sumw2();
  h_DeltaPhiMETj1_MM_SRSS3 = new TH2F("h_DeltaPhiMETj1_MM_SRSS3", "h_DeltaPhiMETj1_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETj1_MM_SRSS3->Sumw2();
  h_DeltaPhiMETj1_MM_SRSS4 = new TH2F("h_DeltaPhiMETj1_MM_SRSS4", "h_DeltaPhiMETj1_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETj1_MM_SRSS4->Sumw2();
  h_DeltaPhiMETj1_EM_SRSS1 = new TH2F("h_DeltaPhiMETj1_EM_SRSS1", "h_DeltaPhiMETj1_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETj1_EM_SRSS1->Sumw2();
  h_DeltaPhiMETj1_EM_SRSS2 = new TH2F("h_DeltaPhiMETj1_EM_SRSS2", "h_DeltaPhiMETj1_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETj1_EM_SRSS2->Sumw2();
  h_DeltaPhiMETj1_EE_SROS1 = new TH2F("h_DeltaPhiMETj1_EE_SROS1", "h_DeltaPhiMETj1_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETj1_EE_SROS1->Sumw2();
  h_DeltaPhiMETj1_MM_SROS1 = new TH2F("h_DeltaPhiMETj1_MM_SROS1", "h_DeltaPhiMETj1_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETj1_MM_SROS1->Sumw2();
  h_DeltaPhiMETj1_EM_SROS1 = new TH2F("h_DeltaPhiMETj1_EM_SROS1", "h_DeltaPhiMETj1_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETj1_EM_SROS1->Sumw2();

  /*--------------------------------------------------------------------------------*/ 
  h_DeltaPhiMETjj_EE_SRSS1 = new TH2F("h_DeltaPhiMETjj_EE_SRSS1", "h_DeltaPhiMETjj_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETjj_EE_SRSS1->Sumw2();
  h_DeltaPhiMETjj_EE_SRSS2 = new TH2F("h_DeltaPhiMETjj_EE_SRSS2", "h_DeltaPhiMETjj_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETjj_EE_SRSS2->Sumw2();
  h_DeltaPhiMETjj_MM_SRSS1 = new TH2F("h_DeltaPhiMETjj_MM_SRSS1", "h_DeltaPhiMETjj_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETjj_MM_SRSS1->Sumw2();  
  h_DeltaPhiMETjj_MM_SRSS2 = new TH2F("h_DeltaPhiMETjj_MM_SRSS2", "h_DeltaPhiMETjj_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETjj_MM_SRSS2->Sumw2();
  h_DeltaPhiMETjj_MM_SRSS3 = new TH2F("h_DeltaPhiMETjj_MM_SRSS3", "h_DeltaPhiMETjj_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETjj_MM_SRSS3->Sumw2();
  h_DeltaPhiMETjj_MM_SRSS4 = new TH2F("h_DeltaPhiMETjj_MM_SRSS4", "h_DeltaPhiMETjj_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETjj_MM_SRSS4->Sumw2();
  h_DeltaPhiMETjj_EM_SRSS1 = new TH2F("h_DeltaPhiMETjj_EM_SRSS1", "h_DeltaPhiMETjj_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETjj_EM_SRSS1->Sumw2();
  h_DeltaPhiMETjj_EM_SRSS2 = new TH2F("h_DeltaPhiMETjj_EM_SRSS2", "h_DeltaPhiMETjj_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETjj_EM_SRSS2->Sumw2();
  h_DeltaPhiMETjj_EE_SROS1 = new TH2F("h_DeltaPhiMETjj_EE_SROS1", "h_DeltaPhiMETjj_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETjj_EE_SROS1->Sumw2();
  h_DeltaPhiMETjj_MM_SROS1 = new TH2F("h_DeltaPhiMETjj_MM_SROS1", "h_DeltaPhiMETjj_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETjj_MM_SROS1->Sumw2();
  h_DeltaPhiMETjj_EM_SROS1 = new TH2F("h_DeltaPhiMETjj_EM_SROS1", "h_DeltaPhiMETjj_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhiMETjj_EM_SROS1->Sumw2();

    /*--------------------------------------------------------------------------------*/ 
  h_DeltaRjj_EE_SRSS1 = new TH2F("h_DeltaRjj_EE_SRSS1", "h_DeltaRjj_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRjj_EE_SRSS1->Sumw2();
  h_DeltaRjj_EE_SRSS2 = new TH2F("h_DeltaRjj_EE_SRSS2", "h_DeltaRjj_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRjj_EE_SRSS2->Sumw2();
  h_DeltaRjj_MM_SRSS1 = new TH2F("h_DeltaRjj_MM_SRSS1", "h_DeltaRjj_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRjj_MM_SRSS1->Sumw2();  
  h_DeltaRjj_MM_SRSS2 = new TH2F("h_DeltaRjj_MM_SRSS2", "h_DeltaRjj_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRjj_MM_SRSS2->Sumw2();
  h_DeltaRjj_MM_SRSS3 = new TH2F("h_DeltaRjj_MM_SRSS3", "h_DeltaRjj_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaRjj_MM_SRSS3->Sumw2();
  h_DeltaRjj_MM_SRSS4 = new TH2F("h_DeltaRjj_MM_SRSS4", "h_DeltaRjj_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaRjj_MM_SRSS4->Sumw2();
  h_DeltaRjj_EM_SRSS1 = new TH2F("h_DeltaRjj_EM_SRSS1", "h_DeltaRjj_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRjj_EM_SRSS1->Sumw2();
  h_DeltaRjj_EM_SRSS2 = new TH2F("h_DeltaRjj_EM_SRSS2", "h_DeltaRjj_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRjj_EM_SRSS2->Sumw2();
  h_DeltaRjj_EE_SROS1 = new TH2F("h_DeltaRjj_EE_SROS1", "h_DeltaRjj_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRjj_EE_SROS1->Sumw2();
  h_DeltaRjj_MM_SROS1 = new TH2F("h_DeltaRjj_MM_SROS1", "h_DeltaRjj_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRjj_MM_SROS1->Sumw2();
  h_DeltaRjj_EM_SROS1 = new TH2F("h_DeltaRjj_EM_SROS1", "h_DeltaRjj_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRjj_EM_SROS1->Sumw2();

  /*--------------------------------------------------------------------------------*/ 
  h_etal0_EE_SRSS1 = new TH2F("h_etal0_EE_SRSS1", "h_etal0_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal0_EE_SRSS1->Sumw2();
  h_etal0_EE_SRSS2 = new TH2F("h_etal0_EE_SRSS2", "h_etal0_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_etal0_EE_SRSS2->Sumw2();
  h_etal0_MM_SRSS1 = new TH2F("h_etal0_MM_SRSS1", "h_etal0_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal0_MM_SRSS1->Sumw2();  
  h_etal0_MM_SRSS2 = new TH2F("h_etal0_MM_SRSS2", "h_etal0_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_etal0_MM_SRSS2->Sumw2();
  h_etal0_MM_SRSS3 = new TH2F("h_etal0_MM_SRSS3", "h_etal0_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_etal0_MM_SRSS3->Sumw2();
  h_etal0_MM_SRSS4 = new TH2F("h_etal0_MM_SRSS4", "h_etal0_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_etal0_MM_SRSS4->Sumw2();
  h_etal0_EM_SRSS1 = new TH2F("h_etal0_EM_SRSS1", "h_etal0_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal0_EM_SRSS1->Sumw2();
  h_etal0_EM_SRSS2 = new TH2F("h_etal0_EM_SRSS2", "h_etal0_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_etal0_EM_SRSS2->Sumw2();
  h_etal0_EE_SROS1 = new TH2F("h_etal0_EE_SROS1", "h_etal0_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_etal0_EE_SROS1->Sumw2();
  h_etal0_MM_SROS1 = new TH2F("h_etal0_MM_SROS1", "h_etal0_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_etal0_MM_SROS1->Sumw2();
  h_etal0_EM_SROS1 = new TH2F("h_etal0_EM_SROS1", "h_etal0_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_etal0_EM_SROS1->Sumw2();
    /*--------------------------------------------------------------------------------*/ 
  h_etal1_EE_SRSS1 = new TH2F("h_etal1_EE_SRSS1", "h_etal1_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal1_EE_SRSS1->Sumw2();
  h_etal1_EE_SRSS2 = new TH2F("h_etal1_EE_SRSS2", "h_etal1_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_etal1_EE_SRSS2->Sumw2();
  h_etal1_MM_SRSS1 = new TH2F("h_etal1_MM_SRSS1", "h_etal1_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal1_MM_SRSS1->Sumw2();  
  h_etal1_MM_SRSS2 = new TH2F("h_etal1_MM_SRSS2", "h_etal1_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_etal1_MM_SRSS2->Sumw2();
  h_etal1_MM_SRSS3 = new TH2F("h_etal1_MM_SRSS3", "h_etal1_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_etal1_MM_SRSS3->Sumw2();
  h_etal1_MM_SRSS4 = new TH2F("h_etal1_MM_SRSS4", "h_etal1_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_etal1_MM_SRSS4->Sumw2();
  h_etal1_EM_SRSS1 = new TH2F("h_etal1_EM_SRSS1", "h_etal1_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal1_EM_SRSS1->Sumw2();
  h_etal1_EM_SRSS2 = new TH2F("h_etal1_EM_SRSS2", "h_etal1_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_etal1_EM_SRSS2->Sumw2();
  h_etal1_EE_SROS1 = new TH2F("h_etal1_EE_SROS1", "h_etal1_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_etal1_EE_SROS1->Sumw2();
  h_etal1_MM_SROS1 = new TH2F("h_etal1_MM_SROS1", "h_etal1_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_etal1_MM_SROS1->Sumw2();
  h_etal1_EM_SROS1 = new TH2F("h_etal1_EM_SROS1", "h_etal1_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_etal1_EM_SROS1->Sumw2();
    /*--------------------------------------------------------------------------------*/ 
  h_etaj0_EE_SRSS1 = new TH2F("h_etaj0_EE_SRSS1", "h_etaj0_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etaj0_EE_SRSS1->Sumw2();
  h_etaj0_EE_SRSS2 = new TH2F("h_etaj0_EE_SRSS2", "h_etaj0_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_etaj0_EE_SRSS2->Sumw2();
  h_etaj0_MM_SRSS1 = new TH2F("h_etaj0_MM_SRSS1", "h_etaj0_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etaj0_MM_SRSS1->Sumw2();  
  h_etaj0_MM_SRSS2 = new TH2F("h_etaj0_MM_SRSS2", "h_etaj0_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_etaj0_MM_SRSS2->Sumw2();
  h_etaj0_MM_SRSS3 = new TH2F("h_etaj0_MM_SRSS3", "h_etaj0_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_etaj0_MM_SRSS3->Sumw2();
  h_etaj0_MM_SRSS4 = new TH2F("h_etaj0_MM_SRSS4", "h_etaj0_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_etaj0_MM_SRSS4->Sumw2();
  h_etaj0_EM_SRSS1 = new TH2F("h_etaj0_EM_SRSS1", "h_etaj0_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etaj0_EM_SRSS1->Sumw2();
  h_etaj0_EM_SRSS2 = new TH2F("h_etaj0_EM_SRSS2", "h_etaj0_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_etaj0_EM_SRSS2->Sumw2();
  h_etaj0_EE_SROS1 = new TH2F("h_etaj0_EE_SROS1", "h_etaj0_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_etaj0_EE_SROS1->Sumw2();
  h_etaj0_MM_SROS1 = new TH2F("h_etaj0_MM_SROS1", "h_etaj0_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_etaj0_MM_SROS1->Sumw2();
  h_etaj0_EM_SROS1 = new TH2F("h_etaj0_EM_SROS1", "h_etaj0_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_etaj0_EM_SROS1->Sumw2();
    /*--------------------------------------------------------------------------------*/ 
  h_etaj1_EE_SRSS1 = new TH2F("h_etaj1_EE_SRSS1", "h_etaj1_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etaj1_EE_SRSS1->Sumw2();
  h_etaj1_EE_SRSS2 = new TH2F("h_etaj1_EE_SRSS2", "h_etaj1_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_etaj1_EE_SRSS2->Sumw2();
  h_etaj1_MM_SRSS1 = new TH2F("h_etaj1_MM_SRSS1", "h_etaj1_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etaj1_MM_SRSS1->Sumw2();  
  h_etaj1_MM_SRSS2 = new TH2F("h_etaj1_MM_SRSS2", "h_etaj1_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_etaj1_MM_SRSS2->Sumw2();
  h_etaj1_MM_SRSS3 = new TH2F("h_etaj1_MM_SRSS3", "h_etaj1_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_etaj1_MM_SRSS3->Sumw2();
  h_etaj1_MM_SRSS4 = new TH2F("h_etaj1_MM_SRSS4", "h_etaj1_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_etaj1_MM_SRSS4->Sumw2();
  h_etaj1_EM_SRSS1 = new TH2F("h_etaj1_EM_SRSS1", "h_etaj1_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etaj1_EM_SRSS1->Sumw2();
  h_etaj1_EM_SRSS2 = new TH2F("h_etaj1_EM_SRSS2", "h_etaj1_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_etaj1_EM_SRSS2->Sumw2();
  h_etaj1_EE_SROS1 = new TH2F("h_etaj1_EE_SROS1", "h_etaj1_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_etaj1_EE_SROS1->Sumw2();
  h_etaj1_MM_SROS1 = new TH2F("h_etaj1_MM_SROS1", "h_etaj1_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_etaj1_MM_SROS1->Sumw2();
  h_etaj1_EM_SROS1 = new TH2F("h_etaj1_EM_SROS1", "h_etaj1_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_etaj1_EM_SROS1->Sumw2();

  /*--------------------------------------------------------------------------------*/ 
  h_mTl0MET_EE_SRSS1 = new TH2F("h_mTl0MET_EE_SRSS1", "h_mTl0MET_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0MET_EE_SRSS1->Sumw2();
  h_mTl0MET_EE_SRSS2 = new TH2F("h_mTl0MET_EE_SRSS2", "h_mTl0MET_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl0MET_EE_SRSS2->Sumw2();
  h_mTl0MET_MM_SRSS1 = new TH2F("h_mTl0MET_MM_SRSS1", "h_mTl0MET_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0MET_MM_SRSS1->Sumw2();  
  h_mTl0MET_MM_SRSS2 = new TH2F("h_mTl0MET_MM_SRSS2", "h_mTl0MET_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl0MET_MM_SRSS2->Sumw2();
  h_mTl0MET_MM_SRSS3 = new TH2F("h_mTl0MET_MM_SRSS3", "h_mTl0MET_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_mTl0MET_MM_SRSS3->Sumw2();
  h_mTl0MET_MM_SRSS4 = new TH2F("h_mTl0MET_MM_SRSS4", "h_mTl0MET_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_mTl0MET_MM_SRSS4->Sumw2();
  h_mTl0MET_EM_SRSS1 = new TH2F("h_mTl0MET_EM_SRSS1", "h_mTl0MET_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0MET_EM_SRSS1->Sumw2();
  h_mTl0MET_EM_SRSS2 = new TH2F("h_mTl0MET_EM_SRSS2", "h_mTl0MET_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl0MET_EM_SRSS2->Sumw2();
  h_mTl0MET_EE_SROS1 = new TH2F("h_mTl0MET_EE_SROS1", "h_mTl0MET_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl0MET_EE_SROS1->Sumw2();
  h_mTl0MET_MM_SROS1 = new TH2F("h_mTl0MET_MM_SROS1", "h_mTl0MET_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl0MET_MM_SROS1->Sumw2();
  h_mTl0MET_EM_SROS1 = new TH2F("h_mTl0MET_EM_SROS1", "h_mTl0MET_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl0MET_EM_SROS1->Sumw2();
  /*--------------------------------------------------------------------------------*/ 
  h_mTl1MET_EE_SRSS1 = new TH2F("h_mTl1MET_EE_SRSS1", "h_mTl1MET_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1MET_EE_SRSS1->Sumw2();
  h_mTl1MET_EE_SRSS2 = new TH2F("h_mTl1MET_EE_SRSS2", "h_mTl1MET_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl1MET_EE_SRSS2->Sumw2();
  h_mTl1MET_MM_SRSS1 = new TH2F("h_mTl1MET_MM_SRSS1", "h_mTl1MET_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1MET_MM_SRSS1->Sumw2();  
  h_mTl1MET_MM_SRSS2 = new TH2F("h_mTl1MET_MM_SRSS2", "h_mTl1MET_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl1MET_MM_SRSS2->Sumw2();
  h_mTl1MET_MM_SRSS3 = new TH2F("h_mTl1MET_MM_SRSS3", "h_mTl1MET_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_mTl1MET_MM_SRSS3->Sumw2();
  h_mTl1MET_MM_SRSS4 = new TH2F("h_mTl1MET_MM_SRSS4", "h_mTl1MET_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_mTl1MET_MM_SRSS4->Sumw2();
  h_mTl1MET_EM_SRSS1 = new TH2F("h_mTl1MET_EM_SRSS1", "h_mTl1MET_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1MET_EM_SRSS1->Sumw2();
  h_mTl1MET_EM_SRSS2 = new TH2F("h_mTl1MET_EM_SRSS2", "h_mTl1MET_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl1MET_EM_SRSS2->Sumw2();
  h_mTl1MET_EE_SROS1 = new TH2F("h_mTl1MET_EE_SROS1", "h_mTl1MET_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl1MET_EE_SROS1->Sumw2();
  h_mTl1MET_MM_SROS1 = new TH2F("h_mTl1MET_MM_SROS1", "h_mTl1MET_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl1MET_MM_SROS1->Sumw2();
  h_mTl1MET_EM_SROS1 = new TH2F("h_mTl1MET_EM_SROS1", "h_mTl1MET_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl1MET_EM_SROS1->Sumw2();

      /*--------------------------------------------------------------------------------*/ 
  h_DeltaPhilljj_EE_SRSS1 = new TH2F("h_DeltaPhilljj_EE_SRSS1", "h_DeltaPhilljj_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhilljj_EE_SRSS1->Sumw2();
  h_DeltaPhilljj_EE_SRSS2 = new TH2F("h_DeltaPhilljj_EE_SRSS2", "h_DeltaPhilljj_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaPhilljj_EE_SRSS2->Sumw2();
  h_DeltaPhilljj_MM_SRSS1 = new TH2F("h_DeltaPhilljj_MM_SRSS1", "h_DeltaPhilljj_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhilljj_MM_SRSS1->Sumw2();  
  h_DeltaPhilljj_MM_SRSS2 = new TH2F("h_DeltaPhilljj_MM_SRSS2", "h_DeltaPhilljj_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaPhilljj_MM_SRSS2->Sumw2();
  h_DeltaPhilljj_MM_SRSS3 = new TH2F("h_DeltaPhilljj_MM_SRSS3", "h_DeltaPhilljj_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaPhilljj_MM_SRSS3->Sumw2();
  h_DeltaPhilljj_MM_SRSS4 = new TH2F("h_DeltaPhilljj_MM_SRSS4", "h_DeltaPhilljj_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaPhilljj_MM_SRSS4->Sumw2();
  h_DeltaPhilljj_EM_SRSS1 = new TH2F("h_DeltaPhilljj_EM_SRSS1", "h_DeltaPhilljj_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhilljj_EM_SRSS1->Sumw2();
  h_DeltaPhilljj_EM_SRSS2 = new TH2F("h_DeltaPhilljj_EM_SRSS2", "h_DeltaPhilljj_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaPhilljj_EM_SRSS2->Sumw2();
  h_DeltaPhilljj_EE_SROS1 = new TH2F("h_DeltaPhilljj_EE_SROS1", "h_DeltaPhilljj_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhilljj_EE_SROS1->Sumw2();
  h_DeltaPhilljj_MM_SROS1 = new TH2F("h_DeltaPhilljj_MM_SROS1", "h_DeltaPhilljj_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhilljj_MM_SROS1->Sumw2();
  h_DeltaPhilljj_EM_SROS1 = new TH2F("h_DeltaPhilljj_EM_SROS1", "h_DeltaPhilljj_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhilljj_EM_SROS1->Sumw2();
  /*--------------------------------------------------------------------------------*/ 
  h_DeltaPhil0jj_EE_SRSS1 = new TH2F("h_DeltaPhil0jj_EE_SRSS1", "h_DeltaPhil0jj_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhil0jj_EE_SRSS1->Sumw2();
  h_DeltaPhil0jj_EE_SRSS2 = new TH2F("h_DeltaPhil0jj_EE_SRSS2", "h_DeltaPhil0jj_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaPhil0jj_EE_SRSS2->Sumw2();
  h_DeltaPhil0jj_MM_SRSS1 = new TH2F("h_DeltaPhil0jj_MM_SRSS1", "h_DeltaPhil0jj_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhil0jj_MM_SRSS1->Sumw2();  
  h_DeltaPhil0jj_MM_SRSS2 = new TH2F("h_DeltaPhil0jj_MM_SRSS2", "h_DeltaPhil0jj_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaPhil0jj_MM_SRSS2->Sumw2();
  h_DeltaPhil0jj_MM_SRSS3 = new TH2F("h_DeltaPhil0jj_MM_SRSS3", "h_DeltaPhil0jj_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaPhil0jj_MM_SRSS3->Sumw2();
  h_DeltaPhil0jj_MM_SRSS4 = new TH2F("h_DeltaPhil0jj_MM_SRSS4", "h_DeltaPhil0jj_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaPhil0jj_MM_SRSS4->Sumw2();
  h_DeltaPhil0jj_EM_SRSS1 = new TH2F("h_DeltaPhil0jj_EM_SRSS1", "h_DeltaPhil0jj_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhil0jj_EM_SRSS1->Sumw2();
  h_DeltaPhil0jj_EM_SRSS2 = new TH2F("h_DeltaPhil0jj_EM_SRSS2", "h_DeltaPhil0jj_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaPhil0jj_EM_SRSS2->Sumw2();
  h_DeltaPhil0jj_EE_SROS1 = new TH2F("h_DeltaPhil0jj_EE_SROS1", "h_DeltaPhil0jj_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhil0jj_EE_SROS1->Sumw2();
  h_DeltaPhil0jj_MM_SROS1 = new TH2F("h_DeltaPhil0jj_MM_SROS1", "h_DeltaPhil0jj_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhil0jj_MM_SROS1->Sumw2();
  h_DeltaPhil0jj_EM_SROS1 = new TH2F("h_DeltaPhil0jj_EM_SROS1", "h_DeltaPhil0jj_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhil0jj_EM_SROS1->Sumw2();
  /*--------------------------------------------------------------------------------*/ 
  h_DeltaPhil1jj_EE_SRSS1 = new TH2F("h_DeltaPhil1jj_EE_SRSS1", "h_DeltaPhil1jj_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhil1jj_EE_SRSS1->Sumw2();
  h_DeltaPhil1jj_EE_SRSS2 = new TH2F("h_DeltaPhil1jj_EE_SRSS2", "h_DeltaPhil1jj_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaPhil1jj_EE_SRSS2->Sumw2();
  h_DeltaPhil1jj_MM_SRSS1 = new TH2F("h_DeltaPhil1jj_MM_SRSS1", "h_DeltaPhil1jj_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhil1jj_MM_SRSS1->Sumw2();  
  h_DeltaPhil1jj_MM_SRSS2 = new TH2F("h_DeltaPhil1jj_MM_SRSS2", "h_DeltaPhil1jj_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaPhil1jj_MM_SRSS2->Sumw2();
  h_DeltaPhil1jj_MM_SRSS3 = new TH2F("h_DeltaPhil1jj_MM_SRSS3", "h_DeltaPhil1jj_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaPhil1jj_MM_SRSS3->Sumw2();
  h_DeltaPhil1jj_MM_SRSS4 = new TH2F("h_DeltaPhil1jj_MM_SRSS4", "h_DeltaPhil1jj_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaPhil1jj_MM_SRSS4->Sumw2();
  h_DeltaPhil1jj_EM_SRSS1 = new TH2F("h_DeltaPhil1jj_EM_SRSS1", "h_DeltaPhil1jj_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhil1jj_EM_SRSS1->Sumw2();
  h_DeltaPhil1jj_EM_SRSS2 = new TH2F("h_DeltaPhil1jj_EM_SRSS2", "h_DeltaPhil1jj_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaPhil1jj_EM_SRSS2->Sumw2();
  h_DeltaPhil1jj_EE_SROS1 = new TH2F("h_DeltaPhil1jj_EE_SROS1", "h_DeltaPhil1jj_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhil1jj_EE_SROS1->Sumw2();
  h_DeltaPhil1jj_MM_SROS1 = new TH2F("h_DeltaPhil1jj_MM_SROS1", "h_DeltaPhil1jj_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhil1jj_MM_SROS1->Sumw2();
  h_DeltaPhil1jj_EM_SROS1 = new TH2F("h_DeltaPhil1jj_EM_SROS1", "h_DeltaPhil1jj_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaPhil1jj_EM_SROS1->Sumw2();

  /*--------------------------------------------------------------------------------*/ 
  h_DeltaRlljj_EE_SRSS1 = new TH2F("h_DeltaRlljj_EE_SRSS1", "h_DeltaRlljj_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRlljj_EE_SRSS1->Sumw2();
  h_DeltaRlljj_EE_SRSS2 = new TH2F("h_DeltaRlljj_EE_SRSS2", "h_DeltaRlljj_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRlljj_EE_SRSS2->Sumw2();
  h_DeltaRlljj_MM_SRSS1 = new TH2F("h_DeltaRlljj_MM_SRSS1", "h_DeltaRlljj_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRlljj_MM_SRSS1->Sumw2();  
  h_DeltaRlljj_MM_SRSS2 = new TH2F("h_DeltaRlljj_MM_SRSS2", "h_DeltaRlljj_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRlljj_MM_SRSS2->Sumw2();
  h_DeltaRlljj_MM_SRSS3 = new TH2F("h_DeltaRlljj_MM_SRSS3", "h_DeltaRlljj_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaRlljj_MM_SRSS3->Sumw2();
  h_DeltaRlljj_MM_SRSS4 = new TH2F("h_DeltaRlljj_MM_SRSS4", "h_DeltaRlljj_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaRlljj_MM_SRSS4->Sumw2();
  h_DeltaRlljj_EM_SRSS1 = new TH2F("h_DeltaRlljj_EM_SRSS1", "h_DeltaRlljj_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRlljj_EM_SRSS1->Sumw2();
  h_DeltaRlljj_EM_SRSS2 = new TH2F("h_DeltaRlljj_EM_SRSS2", "h_DeltaRlljj_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRlljj_EM_SRSS2->Sumw2();
  h_DeltaRlljj_EE_SROS1 = new TH2F("h_DeltaRlljj_EE_SROS1", "h_DeltaRlljj_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRlljj_EE_SROS1->Sumw2();
  h_DeltaRlljj_MM_SROS1 = new TH2F("h_DeltaRlljj_MM_SROS1", "h_DeltaRlljj_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRlljj_MM_SROS1->Sumw2();
  h_DeltaRlljj_EM_SROS1 = new TH2F("h_DeltaRlljj_EM_SROS1", "h_DeltaRlljj_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRlljj_EM_SROS1->Sumw2();

    /*--------------------------------------------------------------------------------*/ 
  h_DeltaEtajj_EE_SRSS1 = new TH2F("h_DeltaEtajj_EE_SRSS1", "h_DeltaEtajj_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtajj_EE_SRSS1->Sumw2();
  h_DeltaEtajj_EE_SRSS2 = new TH2F("h_DeltaEtajj_EE_SRSS2", "h_DeltaEtajj_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtajj_EE_SRSS2->Sumw2();
  h_DeltaEtajj_MM_SRSS1 = new TH2F("h_DeltaEtajj_MM_SRSS1", "h_DeltaEtajj_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtajj_MM_SRSS1->Sumw2();  
  h_DeltaEtajj_MM_SRSS2 = new TH2F("h_DeltaEtajj_MM_SRSS2", "h_DeltaEtajj_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtajj_MM_SRSS2->Sumw2();
  h_DeltaEtajj_MM_SRSS3 = new TH2F("h_DeltaEtajj_MM_SRSS3", "h_DeltaEtajj_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaEtajj_MM_SRSS3->Sumw2();
  h_DeltaEtajj_MM_SRSS4 = new TH2F("h_DeltaEtajj_MM_SRSS4", "h_DeltaEtajj_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaEtajj_MM_SRSS4->Sumw2();
  h_DeltaEtajj_EM_SRSS1 = new TH2F("h_DeltaEtajj_EM_SRSS1", "h_DeltaEtajj_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtajj_EM_SRSS1->Sumw2();
  h_DeltaEtajj_EM_SRSS2 = new TH2F("h_DeltaEtajj_EM_SRSS2", "h_DeltaEtajj_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtajj_EM_SRSS2->Sumw2();
  h_DeltaEtajj_EE_SROS1 = new TH2F("h_DeltaEtajj_EE_SROS1", "h_DeltaEtajj_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtajj_EE_SROS1->Sumw2();
  h_DeltaEtajj_MM_SROS1 = new TH2F("h_DeltaEtajj_MM_SROS1", "h_DeltaEtajj_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtajj_MM_SROS1->Sumw2();
  h_DeltaEtajj_EM_SROS1 = new TH2F("h_DeltaEtajj_EM_SROS1", "h_DeltaEtajj_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtajj_EM_SROS1->Sumw2();  
  
      /*--------------------------------------------------------------------------------*/ 
  h_DeltaEtall_EE_SRSS1 = new TH2F("h_DeltaEtall_EE_SRSS1", "h_DeltaEtall_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtall_EE_SRSS1->Sumw2();
  h_DeltaEtall_EE_SRSS2 = new TH2F("h_DeltaEtall_EE_SRSS2", "h_DeltaEtall_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtall_EE_SRSS2->Sumw2();
  h_DeltaEtall_MM_SRSS1 = new TH2F("h_DeltaEtall_MM_SRSS1", "h_DeltaEtall_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtall_MM_SRSS1->Sumw2();  
  h_DeltaEtall_MM_SRSS2 = new TH2F("h_DeltaEtall_MM_SRSS2", "h_DeltaEtall_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtall_MM_SRSS2->Sumw2();
  h_DeltaEtall_MM_SRSS3 = new TH2F("h_DeltaEtall_MM_SRSS3", "h_DeltaEtall_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaEtall_MM_SRSS3->Sumw2();
  h_DeltaEtall_MM_SRSS4 = new TH2F("h_DeltaEtall_MM_SRSS4", "h_DeltaEtall_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaEtall_MM_SRSS4->Sumw2();
  h_DeltaEtall_EM_SRSS1 = new TH2F("h_DeltaEtall_EM_SRSS1", "h_DeltaEtall_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtall_EM_SRSS1->Sumw2();
  h_DeltaEtall_EM_SRSS2 = new TH2F("h_DeltaEtall_EM_SRSS2", "h_DeltaEtall_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtall_EM_SRSS2->Sumw2();
  h_DeltaEtall_EE_SROS1 = new TH2F("h_DeltaEtall_EE_SROS1", "h_DeltaEtall_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtall_EE_SROS1->Sumw2();
  h_DeltaEtall_MM_SROS1 = new TH2F("h_DeltaEtall_MM_SROS1", "h_DeltaEtall_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtall_MM_SROS1->Sumw2();
  h_DeltaEtall_EM_SROS1 = new TH2F("h_DeltaEtall_EM_SROS1", "h_DeltaEtall_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtall_EM_SROS1->Sumw2();  


  /*--------------------------------------------------------------------------------*/ 
  h_mTll_EE_SRSS1 = new TH2F("h_mTll_EE_SRSS1", "h_mTll_EE_SRSS1", 1000, 0, 1000 ,130, 0, 129); h_mTll_EE_SRSS1->Sumw2();
  h_mTll_EE_SRSS2 = new TH2F("h_mTll_EE_SRSS2", "h_mTll_EE_SRSS2", 1000, 0, 1000 ,130, 0, 129); h_mTll_EE_SRSS2->Sumw2();
  h_mTll_MM_SRSS1 = new TH2F("h_mTll_MM_SRSS1", "h_mTll_MM_SRSS1", 1000, 0, 1000 ,130, 0, 129); h_mTll_MM_SRSS1->Sumw2();  
  h_mTll_MM_SRSS2 = new TH2F("h_mTll_MM_SRSS2", "h_mTll_MM_SRSS2", 1000, 0, 1000 ,130, 0, 129); h_mTll_MM_SRSS2->Sumw2();
  h_mTll_MM_SRSS3 = new TH2F("h_mTll_MM_SRSS3", "h_mTll_MM_SRSS3", 1000, 0, 1000 ,130, 0, 129); h_mTll_MM_SRSS3->Sumw2();
  h_mTll_MM_SRSS4 = new TH2F("h_mTll_MM_SRSS4", "h_mTll_MM_SRSS4", 1000, 0, 1000 ,130, 0, 129); h_mTll_MM_SRSS4->Sumw2();
  h_mTll_EM_SRSS1 = new TH2F("h_mTll_EM_SRSS1", "h_mTll_EM_SRSS1", 1000, 0, 1000 ,130, 0, 129); h_mTll_EM_SRSS1->Sumw2();
  h_mTll_EM_SRSS2 = new TH2F("h_mTll_EM_SRSS2", "h_mTll_EM_SRSS2", 1000, 0, 1000 ,130, 0, 129); h_mTll_EM_SRSS2->Sumw2();
  h_mTll_EE_SROS1 = new TH2F("h_mTll_EE_SROS1", "h_mTll_EE_SROS1", 1000, 0, 1000 ,130, 0, 129); h_mTll_EE_SROS1->Sumw2();
  h_mTll_MM_SROS1 = new TH2F("h_mTll_MM_SROS1", "h_mTll_MM_SROS1", 1000, 0, 1000 ,130, 0, 129); h_mTll_MM_SROS1->Sumw2();
  h_mTll_EM_SROS1 = new TH2F("h_mTll_EM_SROS1", "h_mTll_EM_SROS1", 1000, 0, 1000 ,130, 0, 129); h_mTll_EM_SROS1->Sumw2();


  /*--------------------------------------------------------------------------------*/ 
  h_mMETll_EE_SRSS1 = new TH2F("h_mMETll_EE_SRSS1", "h_mMETll_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mMETll_EE_SRSS1->Sumw2();
  h_mMETll_EE_SRSS2 = new TH2F("h_mMETll_EE_SRSS2", "h_mMETll_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mMETll_EE_SRSS2->Sumw2();
  h_mMETll_MM_SRSS1 = new TH2F("h_mMETll_MM_SRSS1", "h_mMETll_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mMETll_MM_SRSS1->Sumw2();  
  h_mMETll_MM_SRSS2 = new TH2F("h_mMETll_MM_SRSS2", "h_mMETll_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mMETll_MM_SRSS2->Sumw2();
  h_mMETll_MM_SRSS3 = new TH2F("h_mMETll_MM_SRSS3", "h_mMETll_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_mMETll_MM_SRSS3->Sumw2();
  h_mMETll_MM_SRSS4 = new TH2F("h_mMETll_MM_SRSS4", "h_mMETll_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_mMETll_MM_SRSS4->Sumw2();
  h_mMETll_EM_SRSS1 = new TH2F("h_mMETll_EM_SRSS1", "h_mMETll_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mMETll_EM_SRSS1->Sumw2();
  h_mMETll_EM_SRSS2 = new TH2F("h_mMETll_EM_SRSS2", "h_mMETll_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mMETll_EM_SRSS2->Sumw2();
  h_mMETll_EE_SROS1 = new TH2F("h_mMETll_EE_SROS1", "h_mMETll_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_mMETll_EE_SROS1->Sumw2();
  h_mMETll_MM_SROS1 = new TH2F("h_mMETll_MM_SROS1", "h_mMETll_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mMETll_MM_SROS1->Sumw2();
  h_mMETll_EM_SROS1 = new TH2F("h_mMETll_EM_SROS1", "h_mMETll_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mMETll_EM_SROS1->Sumw2();

  /*--------------------------------------------------------------------------------*/ 
  h_DeltaYjj_EE_SRSS1 = new TH2F("h_DeltaYjj_EE_SRSS1", "h_DeltaYjj_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaYjj_EE_SRSS1->Sumw2();
  h_DeltaYjj_EE_SRSS2 = new TH2F("h_DeltaYjj_EE_SRSS2", "h_DeltaYjj_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaYjj_EE_SRSS2->Sumw2();
  h_DeltaYjj_MM_SRSS1 = new TH2F("h_DeltaYjj_MM_SRSS1", "h_DeltaYjj_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaYjj_MM_SRSS1->Sumw2();  
  h_DeltaYjj_MM_SRSS2 = new TH2F("h_DeltaYjj_MM_SRSS2", "h_DeltaYjj_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaYjj_MM_SRSS2->Sumw2();
  h_DeltaYjj_MM_SRSS3 = new TH2F("h_DeltaYjj_MM_SRSS3", "h_DeltaYjj_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaYjj_MM_SRSS3->Sumw2();
  h_DeltaYjj_MM_SRSS4 = new TH2F("h_DeltaYjj_MM_SRSS4", "h_DeltaYjj_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaYjj_MM_SRSS4->Sumw2();
  h_DeltaYjj_EM_SRSS1 = new TH2F("h_DeltaYjj_EM_SRSS1", "h_DeltaYjj_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaYjj_EM_SRSS1->Sumw2();
  h_DeltaYjj_EM_SRSS2 = new TH2F("h_DeltaYjj_EM_SRSS2", "h_DeltaYjj_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaYjj_EM_SRSS2->Sumw2();
  h_DeltaYjj_EE_SROS1 = new TH2F("h_DeltaYjj_EE_SROS1", "h_DeltaYjj_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaYjj_EE_SROS1->Sumw2();
  h_DeltaYjj_MM_SROS1 = new TH2F("h_DeltaYjj_MM_SROS1", "h_DeltaYjj_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaYjj_MM_SROS1->Sumw2();
  h_DeltaYjj_EM_SROS1 = new TH2F("h_DeltaYjj_EM_SROS1", "h_DeltaYjj_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaYjj_EM_SROS1->Sumw2();
  
  /*--------------------------------------------------------------------------------*/ 
  h_D0_branch_l0_EE_SRSS1 = new TH2F("h_D0_branch_l0_EE_SRSS1", "h_D0_branch_l0_EE_SRSS1", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_branch_l0_EE_SRSS1->Sumw2();
  h_D0_branch_l0_EE_SRSS2 = new TH2F("h_D0_branch_l0_EE_SRSS2", "h_D0_branch_l0_EE_SRSS2", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_branch_l0_EE_SRSS2->Sumw2();
  h_D0_branch_l0_MM_SRSS1 = new TH2F("h_D0_branch_l0_MM_SRSS1", "h_D0_branch_l0_MM_SRSS1", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_branch_l0_MM_SRSS1->Sumw2();  
  h_D0_branch_l0_MM_SRSS2 = new TH2F("h_D0_branch_l0_MM_SRSS2", "h_D0_branch_l0_MM_SRSS2", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_branch_l0_MM_SRSS2->Sumw2();
  h_D0_branch_l0_MM_SRSS3 = new TH2F("h_D0_branch_l0_MM_SRSS3", "h_D0_branch_l0_MM_SRSS3", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_branch_l0_MM_SRSS3->Sumw2();
  h_D0_branch_l0_MM_SRSS4 = new TH2F("h_D0_branch_l0_MM_SRSS4", "h_D0_branch_l0_MM_SRSS4", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_branch_l0_MM_SRSS4->Sumw2();
  h_D0_branch_l0_EM_SRSS1 = new TH2F("h_D0_branch_l0_EM_SRSS1", "h_D0_branch_l0_EM_SRSS1", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_branch_l0_EM_SRSS1->Sumw2();
  h_D0_branch_l0_EM_SRSS2 = new TH2F("h_D0_branch_l0_EM_SRSS2", "h_D0_branch_l0_EM_SRSS2", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_branch_l0_EM_SRSS2->Sumw2();
  h_D0_branch_l0_EE_SROS1 = new TH2F("h_D0_branch_l0_EE_SROS1", "h_D0_branch_l0_EE_SROS1", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_branch_l0_EE_SROS1->Sumw2();
  h_D0_branch_l0_MM_SROS1 = new TH2F("h_D0_branch_l0_MM_SROS1", "h_D0_branch_l0_MM_SROS1", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_branch_l0_MM_SROS1->Sumw2();
  h_D0_branch_l0_EM_SROS1 = new TH2F("h_D0_branch_l0_EM_SROS1", "h_D0_branch_l0_EM_SROS1", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_branch_l0_EM_SROS1->Sumw2();
  
  /*--------------------------------------------------------------------------------*/ 
  h_D0_branch_l1_EE_SRSS1 = new TH2F("h_D0_branch_l1_EE_SRSS1", "h_D0_branch_l1_EE_SRSS1", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_branch_l1_EE_SRSS1->Sumw2();
  h_D0_branch_l1_EE_SRSS2 = new TH2F("h_D0_branch_l1_EE_SRSS2", "h_D0_branch_l1_EE_SRSS2", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_branch_l1_EE_SRSS2->Sumw2();
  h_D0_branch_l1_MM_SRSS1 = new TH2F("h_D0_branch_l1_MM_SRSS1", "h_D0_branch_l1_MM_SRSS1", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_branch_l1_MM_SRSS1->Sumw2();  
  h_D0_branch_l1_MM_SRSS2 = new TH2F("h_D0_branch_l1_MM_SRSS2", "h_D0_branch_l1_MM_SRSS2", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_branch_l1_MM_SRSS2->Sumw2();
  h_D0_branch_l1_MM_SRSS3 = new TH2F("h_D0_branch_l1_MM_SRSS3", "h_D0_branch_l1_MM_SRSS3", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_branch_l1_MM_SRSS3->Sumw2();
  h_D0_branch_l1_MM_SRSS4 = new TH2F("h_D0_branch_l1_MM_SRSS4", "h_D0_branch_l1_MM_SRSS4", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_branch_l1_MM_SRSS4->Sumw2();
  h_D0_branch_l1_EM_SRSS1 = new TH2F("h_D0_branch_l1_EM_SRSS1", "h_D0_branch_l1_EM_SRSS1", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_branch_l1_EM_SRSS1->Sumw2();
  h_D0_branch_l1_EM_SRSS2 = new TH2F("h_D0_branch_l1_EM_SRSS2", "h_D0_branch_l1_EM_SRSS2", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_branch_l1_EM_SRSS2->Sumw2();
  h_D0_branch_l1_EE_SROS1 = new TH2F("h_D0_branch_l1_EE_SROS1", "h_D0_branch_l1_EE_SROS1", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_branch_l1_EE_SROS1->Sumw2();
  h_D0_branch_l1_MM_SROS1 = new TH2F("h_D0_branch_l1_MM_SROS1", "h_D0_branch_l1_MM_SROS1", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_branch_l1_MM_SROS1->Sumw2();
  h_D0_branch_l1_EM_SROS1 = new TH2F("h_D0_branch_l1_EM_SROS1", "h_D0_branch_l1_EM_SROS1", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_branch_l1_EM_SROS1->Sumw2();
  
  /*--------------------------------------------------------------------------------*/ 
  h_D0Signif_branch_l0_EE_SRSS1 = new TH2F("h_D0Signif_branch_l0_EE_SRSS1", "h_D0Signif_branch_l0_EE_SRSS1", 200, -10, 10 ,130, 0, 129);  h_D0Signif_branch_l0_EE_SRSS1->Sumw2();
  h_D0Signif_branch_l0_EE_SRSS2 = new TH2F("h_D0Signif_branch_l0_EE_SRSS2", "h_D0Signif_branch_l0_EE_SRSS2", 200, -10, 10 ,130, 0, 129);  h_D0Signif_branch_l0_EE_SRSS2->Sumw2();
  h_D0Signif_branch_l0_MM_SRSS1 = new TH2F("h_D0Signif_branch_l0_MM_SRSS1", "h_D0Signif_branch_l0_MM_SRSS1", 200, -10, 10 ,130, 0, 129);  h_D0Signif_branch_l0_MM_SRSS1->Sumw2();  
  h_D0Signif_branch_l0_MM_SRSS2 = new TH2F("h_D0Signif_branch_l0_MM_SRSS2", "h_D0Signif_branch_l0_MM_SRSS2", 200, -10, 10 ,130, 0, 129);  h_D0Signif_branch_l0_MM_SRSS2->Sumw2();
  h_D0Signif_branch_l0_MM_SRSS3 = new TH2F("h_D0Signif_branch_l0_MM_SRSS3", "h_D0Signif_branch_l0_MM_SRSS3", 200, -10, 10 ,130, 0, 129);  h_D0Signif_branch_l0_MM_SRSS3->Sumw2();
  h_D0Signif_branch_l0_MM_SRSS4 = new TH2F("h_D0Signif_branch_l0_MM_SRSS4", "h_D0Signif_branch_l0_MM_SRSS4", 200, -10, 10 ,130, 0, 129);  h_D0Signif_branch_l0_MM_SRSS4->Sumw2();
  h_D0Signif_branch_l0_EM_SRSS1 = new TH2F("h_D0Signif_branch_l0_EM_SRSS1", "h_D0Signif_branch_l0_EM_SRSS1", 200, -10, 10 ,130, 0, 129);  h_D0Signif_branch_l0_EM_SRSS1->Sumw2();
  h_D0Signif_branch_l0_EM_SRSS2 = new TH2F("h_D0Signif_branch_l0_EM_SRSS2", "h_D0Signif_branch_l0_EM_SRSS2", 200, -10, 10 ,130, 0, 129);  h_D0Signif_branch_l0_EM_SRSS2->Sumw2();
  h_D0Signif_branch_l0_EE_SROS1 = new TH2F("h_D0Signif_branch_l0_EE_SROS1", "h_D0Signif_branch_l0_EE_SROS1", 200, -10, 10 ,130, 0, 129);  h_D0Signif_branch_l0_EE_SROS1->Sumw2();
  h_D0Signif_branch_l0_MM_SROS1 = new TH2F("h_D0Signif_branch_l0_MM_SROS1", "h_D0Signif_branch_l0_MM_SROS1", 200, -10, 10 ,130, 0, 129);  h_D0Signif_branch_l0_MM_SROS1->Sumw2();
  h_D0Signif_branch_l0_EM_SROS1 = new TH2F("h_D0Signif_branch_l0_EM_SROS1", "h_D0Signif_branch_l0_EM_SROS1", 200, -10, 10 ,130, 0, 129);  h_D0Signif_branch_l0_EM_SROS1->Sumw2();
  
  /*--------------------------------------------------------------------------------*/ 
  h_D0Signif_branch_l1_EE_SRSS1 = new TH2F("h_D0Signif_branch_l1_EE_SRSS1", "h_D0Signif_branch_l1_EE_SRSS1", 200, -10, 10 ,130, 0, 129);  h_D0Signif_branch_l1_EE_SRSS1->Sumw2();
  h_D0Signif_branch_l1_EE_SRSS2 = new TH2F("h_D0Signif_branch_l1_EE_SRSS2", "h_D0Signif_branch_l1_EE_SRSS2", 200, -10, 10 ,130, 0, 129);  h_D0Signif_branch_l1_EE_SRSS2->Sumw2();
  h_D0Signif_branch_l1_MM_SRSS1 = new TH2F("h_D0Signif_branch_l1_MM_SRSS1", "h_D0Signif_branch_l1_MM_SRSS1", 200, -10, 10 ,130, 0, 129);  h_D0Signif_branch_l1_MM_SRSS1->Sumw2();  
  h_D0Signif_branch_l1_MM_SRSS2 = new TH2F("h_D0Signif_branch_l1_MM_SRSS2", "h_D0Signif_branch_l1_MM_SRSS2", 200, -10, 10 ,130, 0, 129);  h_D0Signif_branch_l1_MM_SRSS2->Sumw2();
  h_D0Signif_branch_l1_MM_SRSS3 = new TH2F("h_D0Signif_branch_l1_MM_SRSS3", "h_D0Signif_branch_l1_MM_SRSS3", 200, -10, 10 ,130, 0, 129);  h_D0Signif_branch_l1_MM_SRSS3->Sumw2();
  h_D0Signif_branch_l1_MM_SRSS4 = new TH2F("h_D0Signif_branch_l1_MM_SRSS4", "h_D0Signif_branch_l1_MM_SRSS4", 200, -10, 10 ,130, 0, 129);  h_D0Signif_branch_l1_MM_SRSS4->Sumw2();
  h_D0Signif_branch_l1_EM_SRSS1 = new TH2F("h_D0Signif_branch_l1_EM_SRSS1", "h_D0Signif_branch_l1_EM_SRSS1", 200, -10, 10 ,130, 0, 129);  h_D0Signif_branch_l1_EM_SRSS1->Sumw2();
  h_D0Signif_branch_l1_EM_SRSS2 = new TH2F("h_D0Signif_branch_l1_EM_SRSS2", "h_D0Signif_branch_l1_EM_SRSS2", 200, -10, 10 ,130, 0, 129);  h_D0Signif_branch_l1_EM_SRSS2->Sumw2();
  h_D0Signif_branch_l1_EE_SROS1 = new TH2F("h_D0Signif_branch_l1_EE_SROS1", "h_D0Signif_branch_l1_EE_SROS1", 200, -10, 10 ,130, 0, 129);  h_D0Signif_branch_l1_EE_SROS1->Sumw2();
  h_D0Signif_branch_l1_MM_SROS1 = new TH2F("h_D0Signif_branch_l1_MM_SROS1", "h_D0Signif_branch_l1_MM_SROS1", 200, -10, 10 ,130, 0, 129);  h_D0Signif_branch_l1_MM_SROS1->Sumw2();
  h_D0Signif_branch_l1_EM_SROS1 = new TH2F("h_D0Signif_branch_l1_EM_SROS1", "h_D0Signif_branch_l1_EM_SROS1", 200, -10, 10 ,130, 0, 129);  h_D0Signif_branch_l1_EM_SROS1->Sumw2();
  
  /*--------------------------------------------------------------------------------*/ 




  
  return true;

}


bool TSelector_SusyNtuple::writeHistos(){

  bool EE_SRSS1 = true;
  bool EE_SRSS2 = false;
  bool MM_SRSS1 = true;
  bool MM_SRSS2 = false;
  bool MM_SRSS3 = false;
  bool MM_SRSS4 = false;
  bool EM_SRSS1 = true;
  bool EM_SRSS2 = false;
  bool EE_SROS1 = false;
  bool MM_SROS1 = false;
  bool EM_SROS1 = false;
  
    h_storeSumwMcid->Write();
    
    if(EE_SRSS1) h_DeltaRLeptons_EE_SRSS1->Write();
    if(EE_SRSS2) h_DeltaRLeptons_EE_SRSS2->Write();
    if(MM_SRSS1) h_DeltaRLeptons_MM_SRSS1->Write();
    if(MM_SRSS2) h_DeltaRLeptons_MM_SRSS2->Write();
    if(MM_SRSS3) h_DeltaRLeptons_MM_SRSS3->Write();
    if(MM_SRSS4) h_DeltaRLeptons_MM_SRSS4->Write();
    if(EM_SRSS1) h_DeltaRLeptons_EM_SRSS1->Write();
    if(EM_SRSS2) h_DeltaRLeptons_EM_SRSS2->Write();
    if(EE_SROS1) h_DeltaRLeptons_EE_SROS1->Write();
    if(MM_SROS1) h_DeltaRLeptons_MM_SROS1->Write();
    if(EM_SROS1) h_DeltaRLeptons_EM_SROS1->Write();
    
    if(EE_SRSS1) h_pTl0_EE_SRSS1->Write();
    if(EE_SRSS2) h_pTl0_EE_SRSS2->Write();
    if(MM_SRSS1) h_pTl0_MM_SRSS1->Write();
    if(MM_SRSS2) h_pTl0_MM_SRSS2->Write();
    if(MM_SRSS3) h_pTl0_MM_SRSS3->Write();
    if(MM_SRSS4) h_pTl0_MM_SRSS4->Write();
    if(EM_SRSS1) h_pTl0_EM_SRSS1->Write();
    if(EM_SRSS2) h_pTl0_EM_SRSS2->Write();
    if(EE_SROS1) h_pTl0_EE_SROS1->Write();
    if(MM_SROS1) h_pTl0_MM_SROS1->Write();
    if(EM_SROS1) h_pTl0_EM_SROS1->Write();
    
    /*--------------------------------------------------------------------------------*/ 
    if(EE_SRSS1) h_pTl1_EE_SRSS1->Write();
    if(EE_SRSS2) h_pTl1_EE_SRSS2->Write();
    if(MM_SRSS1) h_pTl1_MM_SRSS1->Write();
    if(MM_SRSS2) h_pTl1_MM_SRSS2->Write();
    if(MM_SRSS3) h_pTl1_MM_SRSS3->Write();
    if(MM_SRSS4) h_pTl1_MM_SRSS4->Write();
    if(EM_SRSS1) h_pTl1_EM_SRSS1->Write();
    if(EM_SRSS2) h_pTl1_EM_SRSS2->Write();
    if(EE_SROS1) h_pTl1_EE_SROS1->Write();
    if(MM_SROS1) h_pTl1_MM_SROS1->Write();
    if(EM_SROS1) h_pTl1_EM_SROS1->Write();
    
      /*--------------------------------------------------------------------------------*/ 
    if(EE_SRSS1) h_pTj0_EE_SRSS1->Write();
    if(EE_SRSS2) h_pTj0_EE_SRSS2->Write();
    if(MM_SRSS1) h_pTj0_MM_SRSS1->Write();
    if(MM_SRSS2) h_pTj0_MM_SRSS2->Write();
    if(MM_SRSS3) h_pTj0_MM_SRSS3->Write();
    if(MM_SRSS4) h_pTj0_MM_SRSS4->Write();
    if(EM_SRSS1) h_pTj0_EM_SRSS1->Write();
    if(EM_SRSS2) h_pTj0_EM_SRSS2->Write();
    if(EE_SROS1) h_pTj0_EE_SROS1->Write();
    if(MM_SROS1) h_pTj0_MM_SROS1->Write();
    if(EM_SROS1) h_pTj0_EM_SROS1->Write();
    
    /*--------------------------------------------------------------------------------*/ 
    if(EE_SRSS1) h_pTj1_EE_SRSS1->Write();
    if(EE_SRSS2) h_pTj1_EE_SRSS2->Write();
    if(MM_SRSS1) h_pTj1_MM_SRSS1->Write();  
    if(MM_SRSS2) h_pTj1_MM_SRSS2->Write();
    if(MM_SRSS3) h_pTj1_MM_SRSS3->Write();
    if(MM_SRSS4) h_pTj1_MM_SRSS4->Write();
    if(EM_SRSS1) h_pTj1_EM_SRSS1->Write();
    if(EM_SRSS2) h_pTj1_EM_SRSS2->Write();
    if(EE_SROS1) h_pTj1_EE_SROS1->Write();
    if(MM_SROS1) h_pTj1_MM_SROS1->Write();
    if(EM_SROS1) h_pTj1_EM_SROS1->Write();
    
    /*--------------------------------------------------------------------------------*/ 
    if(EE_SRSS1) h_mll_EE_SRSS1->Write();
    if(EE_SRSS2) h_mll_EE_SRSS2->Write();
    if(MM_SRSS1) h_mll_MM_SRSS1->Write(); 
    if(MM_SRSS2) h_mll_MM_SRSS2->Write();
    if(MM_SRSS3) h_mll_MM_SRSS3->Write();
    if(MM_SRSS4) h_mll_MM_SRSS4->Write();
    if(EM_SRSS1) h_mll_EM_SRSS1->Write();
    if(EM_SRSS2) h_mll_EM_SRSS2->Write();
    if(EE_SROS1) h_mll_EE_SROS1->Write();
    if(MM_SROS1) h_mll_MM_SROS1->Write();
    if(EM_SROS1) h_mll_EM_SROS1->Write();
    /*--------------------------------------------------------------------------------*/ 
    if(EE_SRSS1) h_METrel_EE_SRSS1->Write();
    if(EE_SRSS2) h_METrel_EE_SRSS2->Write();
    if(MM_SRSS1) h_METrel_MM_SRSS1->Write();  
    if(MM_SRSS2) h_METrel_MM_SRSS2->Write();  
    if(MM_SRSS3) h_METrel_MM_SRSS3->Write();
    if(MM_SRSS4) h_METrel_MM_SRSS4->Write();
    if(EM_SRSS1) h_METrel_EM_SRSS1->Write();
    if(EM_SRSS2) h_METrel_EM_SRSS2->Write();
    if(EE_SROS1) h_METrel_EE_SROS1->Write();
    if(MM_SROS1) h_METrel_MM_SROS1->Write();
    if(EM_SROS1) h_METrel_EM_SROS1->Write();
/*--------------------------------------------------------------------------------*/     
    if(EE_SRSS1) h_MET_EE_SRSS1->Write();
    if(EE_SRSS2) h_MET_EE_SRSS2->Write();
    if(MM_SRSS1) h_MET_MM_SRSS1->Write();  
    if(MM_SRSS2) h_MET_MM_SRSS2->Write();  
    if(MM_SRSS3) h_MET_MM_SRSS3->Write();
    if(MM_SRSS4) h_MET_MM_SRSS4->Write();
    if(EM_SRSS1) h_MET_EM_SRSS1->Write();
    if(EM_SRSS2) h_MET_EM_SRSS2->Write();
    if(EE_SROS1) h_MET_EE_SROS1->Write();
    if(MM_SROS1) h_MET_MM_SROS1->Write();
    if(EM_SROS1) h_MET_EM_SROS1->Write();
/*--------------------------------------------------------------------------------*/     
    if(EE_SRSS1) h_HT_EE_SRSS1->Write();
    if(EE_SRSS2) h_HT_EE_SRSS2->Write();
    if(MM_SRSS1) h_HT_MM_SRSS1->Write();  
    if(MM_SRSS2) h_HT_MM_SRSS2->Write();
    if(MM_SRSS3) h_HT_MM_SRSS3->Write();
    if(MM_SRSS4) h_HT_MM_SRSS4->Write();
    if(EM_SRSS1) h_HT_EM_SRSS1->Write();
    if(EM_SRSS2) h_HT_EM_SRSS2->Write();
    if(EE_SROS1) h_HT_EE_SROS1->Write();
    if(MM_SROS1) h_HT_MM_SROS1->Write();
    if(EM_SROS1) h_HT_EM_SROS1->Write();
/*--------------------------------------------------------------------------------*/     
    if(EE_SRSS1) h_mWWt_EE_SRSS1->Write();
    if(EE_SRSS2) h_mWWt_EE_SRSS2->Write();
    if(MM_SRSS1) h_mWWt_MM_SRSS1->Write();  
    if(MM_SRSS2) h_mWWt_MM_SRSS2->Write();
    if(MM_SRSS3) h_mWWt_MM_SRSS3->Write();
    if(MM_SRSS4) h_mWWt_MM_SRSS4->Write();
    if(EM_SRSS1) h_mWWt_EM_SRSS1->Write();
    if(EM_SRSS2) h_mWWt_EM_SRSS2->Write();
    if(EE_SROS1) h_mWWt_EE_SROS1->Write();
    if(MM_SROS1) h_mWWt_MM_SROS1->Write();
    if(EM_SROS1) h_mWWt_EM_SROS1->Write();
/*--------------------------------------------------------------------------------*/     
    if(EE_SRSS1) h_mTlmin_EE_SRSS1->Write();
    if(EE_SRSS2) h_mTlmin_EE_SRSS2->Write();
    if(MM_SRSS1) h_mTlmin_MM_SRSS1->Write();  
    if(MM_SRSS2) h_mTlmin_MM_SRSS2->Write();
    if(MM_SRSS3) h_mTlmin_MM_SRSS3->Write();
    if(MM_SRSS4) h_mTlmin_MM_SRSS4->Write();
    if(EM_SRSS1) h_mTlmin_EM_SRSS1->Write();
    if(EM_SRSS2) h_mTlmin_EM_SRSS2->Write();
    if(EE_SROS1) h_mTlmin_EE_SROS1->Write();
    if(MM_SROS1) h_mTlmin_MM_SROS1->Write();
    if(EM_SROS1) h_mTlmin_EM_SROS1->Write();
/*--------------------------------------------------------------------------------*/     
    if(EE_SRSS1) h_mTlmax_EE_SRSS1->Write();
    if(EE_SRSS2) h_mTlmax_EE_SRSS2->Write();
    if(MM_SRSS1) h_mTlmax_MM_SRSS1->Write();  
    if(MM_SRSS2) h_mTlmax_MM_SRSS2->Write();
    if(MM_SRSS3) h_mTlmax_MM_SRSS3->Write();
    if(MM_SRSS4) h_mTlmax_MM_SRSS4->Write();
    if(EM_SRSS1) h_mTlmax_EM_SRSS1->Write();
    if(EM_SRSS2) h_mTlmax_EM_SRSS2->Write();
    if(EE_SROS1) h_mTlmax_EE_SROS1->Write();
    if(MM_SROS1) h_mTlmax_MM_SROS1->Write();
    if(EM_SROS1) h_mTlmax_EM_SROS1->Write();
/*--------------------------------------------------------------------------------*/ 
    if(EE_SRSS1) h_meff_EE_SRSS1->Write();
    if(EE_SRSS2) h_meff_EE_SRSS2->Write();
    if(MM_SRSS1) h_meff_MM_SRSS1->Write();
    if(MM_SRSS2) h_meff_MM_SRSS2->Write();
    if(MM_SRSS3) h_meff_MM_SRSS3->Write();
    if(MM_SRSS4) h_meff_MM_SRSS4->Write();
    if(EM_SRSS1) h_meff_EM_SRSS1->Write();
    if(EM_SRSS2) h_meff_EM_SRSS2->Write();
    if(EE_SROS1) h_meff_EE_SROS1->Write();
    if(MM_SROS1) h_meff_MM_SROS1->Write();
    if(EM_SROS1) h_meff_EM_SROS1->Write();
/*--------------------------------------------------------------------------------*/     
    
    if(EE_SRSS1) h_mT2_EE_SRSS1->Write();
    if(EE_SRSS2) h_mT2_EE_SRSS2->Write();
    if(MM_SRSS1) h_mT2_MM_SRSS1->Write();
    if(MM_SRSS2) h_mT2_MM_SRSS2->Write();  
    if(MM_SRSS3) h_mT2_MM_SRSS3->Write();
    if(MM_SRSS4) h_mT2_MM_SRSS4->Write();
    if(EM_SRSS1) h_mT2_EM_SRSS1->Write();
    if(EM_SRSS2) h_mT2_EM_SRSS2->Write();
    if(EE_SROS1) h_mT2_EE_SROS1->Write();
    if(MM_SROS1) h_mT2_MM_SROS1->Write();
    if(EM_SROS1) h_mT2_EM_SROS1->Write();
/*--------------------------------------------------------------------------------*/     
    
    if(EE_SRSS1) h_mT2J_EE_SRSS1->Write();
    if(EE_SRSS2) h_mT2J_EE_SRSS2->Write();
    if(MM_SRSS1) h_mT2J_MM_SRSS1->Write();
    if(MM_SRSS2) h_mT2J_MM_SRSS2->Write();  
    if(MM_SRSS3) h_mT2J_MM_SRSS3->Write();
    if(MM_SRSS4) h_mT2J_MM_SRSS4->Write();
    if(EM_SRSS1) h_mT2J_EM_SRSS1->Write();
    if(EM_SRSS2) h_mT2J_EM_SRSS2->Write();
    if(EE_SROS1) h_mT2J_EE_SROS1->Write();
    if(MM_SROS1) h_mT2J_MM_SROS1->Write();
    if(EM_SROS1) h_mT2J_EM_SROS1->Write();          
/*--------------------------------------------------------------------------------*/ 
    if(EE_SRSS1) h_mjj_EE_SRSS1->Write();
    if(EE_SRSS2) h_mjj_EE_SRSS2->Write();
    if(MM_SRSS1) h_mjj_MM_SRSS1->Write();  
    if(MM_SRSS2) h_mjj_MM_SRSS2->Write();
    if(MM_SRSS3) h_mjj_MM_SRSS3->Write();
    if(MM_SRSS4) h_mjj_MM_SRSS4->Write();
    if(EM_SRSS1) h_mjj_EM_SRSS1->Write();
    if(EM_SRSS2) h_mjj_EM_SRSS2->Write();
    if(EE_SROS1) h_mjj_EE_SROS1->Write();
    if(MM_SROS1) h_mjj_MM_SROS1->Write();
    if(EM_SROS1) h_mjj_EM_SROS1->Write();
/*--------------------------------------------------------------------------------*/     
    if(EE_SRSS1) h_DeltaPhiMETll_EE_SRSS1->Write();
    if(EE_SRSS2) h_DeltaPhiMETll_EE_SRSS2->Write();
    if(MM_SRSS1) h_DeltaPhiMETll_MM_SRSS1->Write();  
    if(MM_SRSS2) h_DeltaPhiMETll_MM_SRSS2->Write();
    if(MM_SRSS3) h_DeltaPhiMETll_MM_SRSS3->Write();
    if(MM_SRSS4) h_DeltaPhiMETll_MM_SRSS4->Write();
    if(EM_SRSS1) h_DeltaPhiMETll_EM_SRSS1->Write();
    if(EM_SRSS2) h_DeltaPhiMETll_EM_SRSS2->Write();
    if(EE_SROS1) h_DeltaPhiMETll_EE_SROS1->Write();
    if(MM_SROS1) h_DeltaPhiMETll_MM_SROS1->Write();
    if(EM_SROS1) h_DeltaPhiMETll_EM_SROS1->Write();
/*--------------------------------------------------------------------------------*/     
    if(EE_SRSS1) h_DeltaPhill_EE_SRSS1->Write();
    if(EE_SRSS2) h_DeltaPhill_EE_SRSS2->Write();
    if(MM_SRSS1) h_DeltaPhill_MM_SRSS1->Write();  
    if(MM_SRSS2) h_DeltaPhill_MM_SRSS2->Write();
    if(MM_SRSS3) h_DeltaPhill_MM_SRSS3->Write();
    if(MM_SRSS4) h_DeltaPhill_MM_SRSS4->Write();
    if(EM_SRSS1) h_DeltaPhill_EM_SRSS1->Write();
    if(EM_SRSS2) h_DeltaPhill_EM_SRSS2->Write();
    if(EE_SROS1) h_DeltaPhill_EE_SROS1->Write();
    if(MM_SROS1) h_DeltaPhill_MM_SROS1->Write();
    if(EM_SROS1) h_DeltaPhill_EM_SROS1->Write();
/*--------------------------------------------------------------------------------*/ 
    if(EE_SRSS1) h_NBJets_EE_SRSS1->Write();
    if(EE_SRSS2) h_NBJets_EE_SRSS2->Write();
    if(MM_SRSS1) h_NBJets_MM_SRSS1->Write();  
    if(MM_SRSS2) h_NBJets_MM_SRSS2->Write();
    if(MM_SRSS3) h_NBJets_MM_SRSS3->Write();
    if(MM_SRSS4) h_NBJets_MM_SRSS4->Write();
    if(EM_SRSS1) h_NBJets_EM_SRSS1->Write();
    if(EM_SRSS2) h_NBJets_EM_SRSS2->Write();
    if(EE_SROS1) h_NBJets_EE_SROS1->Write();
    if(MM_SROS1) h_NBJets_MM_SROS1->Write();
    if(EM_SROS1) h_NBJets_EM_SROS1->Write();
/*--------------------------------------------------------------------------------*/ 
    if(EE_SRSS1) h_NCJets_EE_SRSS1->Write();
    if(EE_SRSS2) h_NCJets_EE_SRSS2->Write();
    if(MM_SRSS1) h_NCJets_MM_SRSS1->Write();  
    if(MM_SRSS2) h_NCJets_MM_SRSS2->Write();
    if(MM_SRSS3) h_NCJets_MM_SRSS3->Write();
    if(MM_SRSS4) h_NCJets_MM_SRSS4->Write();
    if(EM_SRSS1) h_NCJets_EM_SRSS1->Write();
    if(EM_SRSS2) h_NCJets_EM_SRSS2->Write();
    if(EE_SROS1) h_NCJets_EE_SROS1->Write();
    if(MM_SROS1) h_NCJets_MM_SROS1->Write();
    if(EM_SROS1) h_NCJets_EM_SROS1->Write();
/*--------------------------------------------------------------------------------*/ 
    if(EE_SRSS1) h_NFJets_EE_SRSS1->Write();
    if(EE_SRSS2) h_NFJets_EE_SRSS2->Write();
    if(MM_SRSS1) h_NFJets_MM_SRSS1->Write();  
    if(MM_SRSS2) h_NFJets_MM_SRSS2->Write();
    if(MM_SRSS3) h_NFJets_MM_SRSS3->Write();
    if(MM_SRSS4) h_NFJets_MM_SRSS4->Write();
    if(EM_SRSS1) h_NFJets_EM_SRSS1->Write();
    if(EM_SRSS2) h_NFJets_EM_SRSS2->Write();
    if(EE_SROS1) h_NFJets_EE_SROS1->Write();
    if(MM_SROS1) h_NFJets_MM_SROS1->Write();
    if(EM_SROS1) h_NFJets_EM_SROS1->Write();
/*--------------------------------------------------------------------------------*/     
 
    if(EE_SRSS1) h_mZTT_mmc_EE_SRSS1->Write();
    if(EE_SRSS2) h_mZTT_mmc_EE_SRSS2->Write();
    if(MM_SRSS1) h_mZTT_mmc_MM_SRSS1->Write();
    if(MM_SRSS2) h_mZTT_mmc_MM_SRSS2->Write();
    if(MM_SRSS3) h_mZTT_mmc_MM_SRSS3->Write();
    if(MM_SRSS4) h_mZTT_mmc_MM_SRSS4->Write();
    if(EM_SRSS1) h_mZTT_mmc_EM_SRSS1->Write();
    if(EM_SRSS2) h_mZTT_mmc_EM_SRSS2->Write();
    if(EE_SROS1) h_mZTT_mmc_EE_SROS1->Write();
    if(MM_SROS1) h_mZTT_mmc_MM_SROS1->Write();
    if(EM_SROS1) h_mZTT_mmc_EM_SROS1->Write();
/*--------------------------------------------------------------------------------*/  
    if(EE_SRSS1) h_mZTT_coll_EE_SRSS1->Write();
    if(EE_SRSS2) h_mZTT_coll_EE_SRSS2->Write();
    if(MM_SRSS1) h_mZTT_coll_MM_SRSS1->Write();
    if(MM_SRSS2) h_mZTT_coll_MM_SRSS2->Write();
    if(MM_SRSS3) h_mZTT_coll_MM_SRSS3->Write();
    if(MM_SRSS4) h_mZTT_coll_MM_SRSS4->Write();    
    if(EM_SRSS1) h_mZTT_coll_EM_SRSS1->Write();   
    if(EM_SRSS2) h_mZTT_coll_EM_SRSS2->Write();   
    if(EE_SROS1) h_mZTT_coll_EE_SROS1->Write();   
    if(MM_SROS1) h_mZTT_coll_MM_SROS1->Write();   
    if(EM_SROS1) h_mZTT_coll_EM_SROS1->Write();   
//     ---------------------------  
    
    
  /*--------------------------------------------------------------------------------*/ 
  if(EE_SRSS1) h_DeltaPhijj_EE_SRSS1->Write(); 
  if(EE_SRSS2) h_DeltaPhijj_EE_SRSS2->Write(); 
  if(MM_SRSS1) h_DeltaPhijj_MM_SRSS1->Write();   
  if(MM_SRSS2) h_DeltaPhijj_MM_SRSS2->Write(); 
  if(MM_SRSS3) h_DeltaPhijj_MM_SRSS3->Write(); 
  if(MM_SRSS4) h_DeltaPhijj_MM_SRSS4->Write(); 
  if(EM_SRSS1) h_DeltaPhijj_EM_SRSS1->Write(); 
  if(EM_SRSS2) h_DeltaPhijj_EM_SRSS2->Write(); 
  if(EE_SROS1) h_DeltaPhijj_EE_SROS1->Write(); 
  if(MM_SROS1) h_DeltaPhijj_MM_SROS1->Write(); 
  if(EM_SROS1) h_DeltaPhijj_EM_SROS1->Write(); 
  
  /*--------------------------------------------------------------------------------*/ 
  if(EE_SRSS1) h_pTjj_EE_SRSS1->Write(); 
  if(EE_SRSS2) h_pTjj_EE_SRSS2->Write(); 
  if(MM_SRSS1) h_pTjj_MM_SRSS1->Write(); 
  if(MM_SRSS2) h_pTjj_MM_SRSS2->Write(); 
  if(MM_SRSS3) h_pTjj_MM_SRSS3->Write(); 
  if(MM_SRSS4) h_pTjj_MM_SRSS4->Write(); 
  if(EM_SRSS1) h_pTjj_EM_SRSS1->Write(); 
  if(EM_SRSS2) h_pTjj_EM_SRSS2->Write(); 
  if(EE_SROS1) h_pTjj_EE_SROS1->Write(); 
  if(MM_SROS1) h_pTjj_MM_SROS1->Write(); 
  if(EM_SROS1) h_pTjj_EM_SROS1->Write(); 

  /*----------------------------------------------------------------------------*/ 
  if(EE_SRSS1) h_pTll_EE_SRSS1->Write(); 
  if(EE_SRSS2) h_pTll_EE_SRSS2->Write(); 
  if(MM_SRSS1) h_pTll_MM_SRSS1->Write();   
  if(MM_SRSS2) h_pTll_MM_SRSS2->Write(); 
  if(MM_SRSS3) h_pTll_MM_SRSS3->Write(); 
  if(MM_SRSS4) h_pTll_MM_SRSS4->Write(); 
  if(EM_SRSS1) h_pTll_EM_SRSS1->Write(); 
  if(EM_SRSS2) h_pTll_EM_SRSS2->Write(); 
  if(EE_SROS1) h_pTll_EE_SROS1->Write(); 
  if(MM_SROS1) h_pTll_MM_SROS1->Write(); 
  if(EM_SROS1) h_pTll_EM_SROS1->Write(); 
  
  /*--------------------------------------------------------------------------------*/ 
  if(EE_SRSS1) h_DeltaPhiMETl0_EE_SRSS1->Write(); 
  if(EE_SRSS2) h_DeltaPhiMETl0_EE_SRSS2->Write(); 
  if(MM_SRSS1) h_DeltaPhiMETl0_MM_SRSS1->Write();   
  if(MM_SRSS2) h_DeltaPhiMETl0_MM_SRSS2->Write(); 
  if(MM_SRSS3) h_DeltaPhiMETl0_MM_SRSS3->Write(); 
  if(MM_SRSS4) h_DeltaPhiMETl0_MM_SRSS4->Write(); 
  if(EM_SRSS1) h_DeltaPhiMETl0_EM_SRSS1->Write(); 
  if(EM_SRSS2) h_DeltaPhiMETl0_EM_SRSS2->Write(); 
  if(EE_SROS1) h_DeltaPhiMETl0_EE_SROS1->Write(); 
  if(MM_SROS1) h_DeltaPhiMETl0_MM_SROS1->Write(); 
  if(EM_SROS1) h_DeltaPhiMETl0_EM_SROS1->Write(); 

  /*-------------------------------------------------------------------------------------*/ 
  if(EE_SRSS1) h_DeltaPhiMETl1_EE_SRSS1->Write(); 
  if(EE_SRSS2) h_DeltaPhiMETl1_EE_SRSS2->Write(); 
  if(MM_SRSS1) h_DeltaPhiMETl1_MM_SRSS1->Write();   
  if(MM_SRSS2) h_DeltaPhiMETl1_MM_SRSS2->Write(); 
  if(MM_SRSS3) h_DeltaPhiMETl1_MM_SRSS3->Write(); 
  if(MM_SRSS4) h_DeltaPhiMETl1_MM_SRSS4->Write(); 
  if(EM_SRSS1) h_DeltaPhiMETl1_EM_SRSS1->Write(); 
  if(EM_SRSS2) h_DeltaPhiMETl1_EM_SRSS2->Write(); 
  if(EE_SROS1) h_DeltaPhiMETl1_EE_SROS1->Write(); 
  if(MM_SROS1) h_DeltaPhiMETl1_MM_SROS1->Write(); 
  if(EM_SROS1) h_DeltaPhiMETl1_EM_SROS1->Write(); 
  
    /*-----------------------------------------------------------------------------------*/ 
  if(EE_SRSS1) h_DeltaPhiMETj0_EE_SRSS1->Write(); 
  if(EE_SRSS2) h_DeltaPhiMETj0_EE_SRSS2->Write(); 
  if(MM_SRSS1) h_DeltaPhiMETj0_MM_SRSS1->Write();   
  if(MM_SRSS2) h_DeltaPhiMETj0_MM_SRSS2->Write(); 
  if(MM_SRSS3) h_DeltaPhiMETj0_MM_SRSS3->Write(); 
  if(MM_SRSS4) h_DeltaPhiMETj0_MM_SRSS4->Write(); 
  if(EM_SRSS1) h_DeltaPhiMETj0_EM_SRSS1->Write(); 
  if(EM_SRSS2) h_DeltaPhiMETj0_EM_SRSS2->Write(); 
  if(EE_SROS1) h_DeltaPhiMETj0_EE_SROS1->Write(); 
  if(MM_SROS1) h_DeltaPhiMETj0_MM_SROS1->Write(); 
  if(EM_SROS1) h_DeltaPhiMETj0_EM_SROS1->Write(); 
  /*-------------------------------------------------------------------------------------*/ 
  if(EE_SRSS1) h_DeltaPhiMETj1_EE_SRSS1->Write(); 
  if(EE_SRSS2) h_DeltaPhiMETj1_EE_SRSS2->Write(); 
  if(MM_SRSS1) h_DeltaPhiMETj1_MM_SRSS1->Write();   
  if(MM_SRSS2) h_DeltaPhiMETj1_MM_SRSS2->Write(); 
  if(MM_SRSS3) h_DeltaPhiMETj1_MM_SRSS3->Write(); 
  if(MM_SRSS4) h_DeltaPhiMETj1_MM_SRSS4->Write(); 
  if(EM_SRSS1) h_DeltaPhiMETj1_EM_SRSS1->Write(); 
  if(EM_SRSS2) h_DeltaPhiMETj1_EM_SRSS2->Write(); 
  if(EE_SROS1) h_DeltaPhiMETj1_EE_SROS1->Write(); 
  if(MM_SROS1) h_DeltaPhiMETj1_MM_SROS1->Write(); 
  if(EM_SROS1) h_DeltaPhiMETj1_EM_SROS1->Write(); 

  /*-------------------------------------------------------------------------------------*/ 
  if(EE_SRSS1) h_DeltaPhiMETjj_EE_SRSS1->Write(); 
  if(EE_SRSS2) h_DeltaPhiMETjj_EE_SRSS2->Write(); 
  if(MM_SRSS1) h_DeltaPhiMETjj_MM_SRSS1->Write();   
  if(MM_SRSS2) h_DeltaPhiMETjj_MM_SRSS2->Write(); 
  if(MM_SRSS3) h_DeltaPhiMETjj_MM_SRSS3->Write(); 
  if(MM_SRSS4) h_DeltaPhiMETjj_MM_SRSS4->Write(); 
  if(EM_SRSS1) h_DeltaPhiMETjj_EM_SRSS1->Write(); 
  if(EM_SRSS2) h_DeltaPhiMETjj_EM_SRSS2->Write(); 
  if(EE_SROS1) h_DeltaPhiMETjj_EE_SROS1->Write(); 
  if(MM_SROS1) h_DeltaPhiMETjj_MM_SROS1->Write(); 
  if(EM_SROS1) h_DeltaPhiMETjj_EM_SROS1->Write(); 

    /*--------------------------------------------------------------------------------*/ 
  if(EE_SRSS1) h_DeltaRjj_EE_SRSS1->Write(); 
  if(EE_SRSS2) h_DeltaRjj_EE_SRSS2->Write(); 
  if(MM_SRSS1) h_DeltaRjj_MM_SRSS1->Write();   
  if(MM_SRSS2) h_DeltaRjj_MM_SRSS2->Write(); 
  if(MM_SRSS3) h_DeltaRjj_MM_SRSS3->Write(); 
  if(MM_SRSS4) h_DeltaRjj_MM_SRSS4->Write(); 
  if(EM_SRSS1) h_DeltaRjj_EM_SRSS1->Write(); 
  if(EM_SRSS2) h_DeltaRjj_EM_SRSS2->Write(); 
  if(EE_SROS1) h_DeltaRjj_EE_SROS1->Write(); 
  if(MM_SROS1) h_DeltaRjj_MM_SROS1->Write(); 
  if(EM_SROS1) h_DeltaRjj_EM_SROS1->Write(); 

  /*--------------------------------------------------------------------------------*/ 
  if(EE_SRSS1) h_etal0_EE_SRSS1->Write(); 
  if(EE_SRSS2) h_etal0_EE_SRSS2->Write(); 
  if(MM_SRSS1) h_etal0_MM_SRSS1->Write();   
  if(MM_SRSS2) h_etal0_MM_SRSS2->Write(); 
  if(MM_SRSS3) h_etal0_MM_SRSS3->Write(); 
  if(MM_SRSS4) h_etal0_MM_SRSS4->Write(); 
  if(EM_SRSS1) h_etal0_EM_SRSS1->Write(); 
  if(EM_SRSS2) h_etal0_EM_SRSS2->Write(); 
  if(EE_SROS1) h_etal0_EE_SROS1->Write(); 
  if(MM_SROS1) h_etal0_MM_SROS1->Write(); 
  if(EM_SROS1) h_etal0_EM_SROS1->Write(); 
    /*---------------------------------------------------------------------------*/ 
  if(EE_SRSS1) h_etal1_EE_SRSS1->Write(); 
  if(EE_SRSS2) h_etal1_EE_SRSS2->Write(); 
  if(MM_SRSS1) h_etal1_MM_SRSS1->Write();   
  if(MM_SRSS2) h_etal1_MM_SRSS2->Write(); 
  if(MM_SRSS3) h_etal1_MM_SRSS3->Write(); 
  if(MM_SRSS4) h_etal1_MM_SRSS4->Write(); 
  if(EM_SRSS1) h_etal1_EM_SRSS1->Write(); 
  if(EM_SRSS2) h_etal1_EM_SRSS2->Write(); 
  if(EE_SROS1) h_etal1_EE_SROS1->Write(); 
  if(MM_SROS1) h_etal1_MM_SROS1->Write(); 
  if(EM_SROS1) h_etal1_EM_SROS1->Write(); 
    /*---------------------------------------------------------------------------*/ 
  if(EE_SRSS1) h_etaj0_EE_SRSS1->Write(); 
  if(EE_SRSS2) h_etaj0_EE_SRSS2->Write(); 
  if(MM_SRSS1) h_etaj0_MM_SRSS1->Write();   
  if(MM_SRSS2) h_etaj0_MM_SRSS2->Write(); 
  if(MM_SRSS3) h_etaj0_MM_SRSS3->Write(); 
  if(MM_SRSS4) h_etaj0_MM_SRSS4->Write(); 
  if(EM_SRSS1) h_etaj0_EM_SRSS1->Write(); 
  if(EM_SRSS2) h_etaj0_EM_SRSS2->Write(); 
  if(EE_SROS1) h_etaj0_EE_SROS1->Write(); 
  if(MM_SROS1) h_etaj0_MM_SROS1->Write(); 
  if(EM_SROS1) h_etaj0_EM_SROS1->Write(); 
    /*---------------------------------------------------------------------------*/ 
  if(EE_SRSS1) h_etaj1_EE_SRSS1->Write(); 
  if(EE_SRSS2) h_etaj1_EE_SRSS2->Write(); 
  if(MM_SRSS1) h_etaj1_MM_SRSS1->Write();   
  if(MM_SRSS2) h_etaj1_MM_SRSS2->Write(); 
  if(MM_SRSS3) h_etaj1_MM_SRSS3->Write(); 
  if(MM_SRSS4) h_etaj1_MM_SRSS4->Write(); 
  if(EM_SRSS1) h_etaj1_EM_SRSS1->Write(); 
  if(EM_SRSS2) h_etaj1_EM_SRSS2->Write(); 
  if(EE_SROS1) h_etaj1_EE_SROS1->Write(); 
  if(MM_SROS1) h_etaj1_MM_SROS1->Write(); 
  if(EM_SROS1) h_etaj1_EM_SROS1->Write(); 

  /*--------------------------------------------------------------------------------*/ 
  if(EE_SRSS1) h_mTl0MET_EE_SRSS1->Write(); 
  if(EE_SRSS2) h_mTl0MET_EE_SRSS2->Write(); 
  if(MM_SRSS1) h_mTl0MET_MM_SRSS1->Write();   
  if(MM_SRSS2) h_mTl0MET_MM_SRSS2->Write(); 
  if(MM_SRSS3) h_mTl0MET_MM_SRSS3->Write(); 
  if(MM_SRSS4) h_mTl0MET_MM_SRSS4->Write(); 
  if(EM_SRSS1) h_mTl0MET_EM_SRSS1->Write(); 
  if(EM_SRSS2) h_mTl0MET_EM_SRSS2->Write(); 
  if(EE_SROS1) h_mTl0MET_EE_SROS1->Write(); 
  if(MM_SROS1) h_mTl0MET_MM_SROS1->Write(); 
  if(EM_SROS1) h_mTl0MET_EM_SROS1->Write(); 
  /*-------------------------------------------------------------------------------*/ 
  if(EE_SRSS1) h_mTl1MET_EE_SRSS1->Write(); 
  if(EE_SRSS2) h_mTl1MET_EE_SRSS2->Write(); 
  if(MM_SRSS1) h_mTl1MET_MM_SRSS1->Write();   
  if(MM_SRSS2) h_mTl1MET_MM_SRSS2->Write(); 
  if(MM_SRSS3) h_mTl1MET_MM_SRSS3->Write(); 
  if(MM_SRSS4) h_mTl1MET_MM_SRSS4->Write(); 
  if(EM_SRSS1) h_mTl1MET_EM_SRSS1->Write(); 
  if(EM_SRSS2) h_mTl1MET_EM_SRSS2->Write(); 
  if(EE_SROS1) h_mTl1MET_EE_SROS1->Write(); 
  if(MM_SROS1) h_mTl1MET_MM_SROS1->Write(); 
  if(EM_SROS1) h_mTl1MET_EM_SROS1->Write(); 

      /*--------------------------------------------------------------------------------*/ 
  if(EE_SRSS1) h_DeltaPhilljj_EE_SRSS1->Write(); 
  if(EE_SRSS2) h_DeltaPhilljj_EE_SRSS2->Write(); 
  if(MM_SRSS1) h_DeltaPhilljj_MM_SRSS1->Write();   
  if(MM_SRSS2) h_DeltaPhilljj_MM_SRSS2->Write(); 
  if(MM_SRSS3) h_DeltaPhilljj_MM_SRSS3->Write(); 
  if(MM_SRSS4) h_DeltaPhilljj_MM_SRSS4->Write(); 
  if(EM_SRSS1) h_DeltaPhilljj_EM_SRSS1->Write(); 
  if(EM_SRSS2) h_DeltaPhilljj_EM_SRSS2->Write(); 
  if(EE_SROS1) h_DeltaPhilljj_EE_SROS1->Write(); 
  if(MM_SROS1) h_DeltaPhilljj_MM_SROS1->Write(); 
  if(EM_SROS1) h_DeltaPhilljj_EM_SROS1->Write(); 
  /*------------------------------------------------------------------------------------*/ 
  if(EE_SRSS1) h_DeltaPhil0jj_EE_SRSS1->Write(); 
  if(EE_SRSS2) h_DeltaPhil0jj_EE_SRSS2->Write(); 
  if(MM_SRSS1) h_DeltaPhil0jj_MM_SRSS1->Write();   
  if(MM_SRSS2) h_DeltaPhil0jj_MM_SRSS2->Write(); 
  if(MM_SRSS3) h_DeltaPhil0jj_MM_SRSS3->Write(); 
  if(MM_SRSS4) h_DeltaPhil0jj_MM_SRSS4->Write(); 
  if(EM_SRSS1) h_DeltaPhil0jj_EM_SRSS1->Write(); 
  if(EM_SRSS2) h_DeltaPhil0jj_EM_SRSS2->Write(); 
  if(EE_SROS1) h_DeltaPhil0jj_EE_SROS1->Write(); 
  if(MM_SROS1) h_DeltaPhil0jj_MM_SROS1->Write(); 
  if(EM_SROS1) h_DeltaPhil0jj_EM_SROS1->Write(); 
  /*------------------------------------------------------------------------------------*/ 
  if(EE_SRSS1) h_DeltaPhil1jj_EE_SRSS1->Write(); 
  if(EE_SRSS2) h_DeltaPhil1jj_EE_SRSS2->Write(); 
  if(MM_SRSS1) h_DeltaPhil1jj_MM_SRSS1->Write();   
  if(MM_SRSS2) h_DeltaPhil1jj_MM_SRSS2->Write(); 
  if(MM_SRSS3) h_DeltaPhil1jj_MM_SRSS3->Write(); 
  if(MM_SRSS4) h_DeltaPhil1jj_MM_SRSS4->Write(); 
  if(EM_SRSS1) h_DeltaPhil1jj_EM_SRSS1->Write(); 
  if(EM_SRSS2) h_DeltaPhil1jj_EM_SRSS2->Write(); 
  if(EE_SROS1) h_DeltaPhil1jj_EE_SROS1->Write(); 
  if(MM_SROS1) h_DeltaPhil1jj_MM_SROS1->Write(); 
  if(EM_SROS1) h_DeltaPhil1jj_EM_SROS1->Write(); 

  /*--------------------------------------------------------------------------------*/ 
  if(EE_SRSS1) h_DeltaRlljj_EE_SRSS1->Write(); 
  if(EE_SRSS2) h_DeltaRlljj_EE_SRSS2->Write(); 
  if(MM_SRSS1) h_DeltaRlljj_MM_SRSS1->Write();   
  if(MM_SRSS2) h_DeltaRlljj_MM_SRSS2->Write(); 
  if(MM_SRSS3) h_DeltaRlljj_MM_SRSS3->Write(); 
  if(MM_SRSS4) h_DeltaRlljj_MM_SRSS4->Write(); 
  if(EM_SRSS1) h_DeltaRlljj_EM_SRSS1->Write(); 
  if(EM_SRSS2) h_DeltaRlljj_EM_SRSS2->Write(); 
  if(EE_SROS1) h_DeltaRlljj_EE_SROS1->Write(); 
  if(MM_SROS1) h_DeltaRlljj_MM_SROS1->Write(); 
  if(EM_SROS1) h_DeltaRlljj_EM_SROS1->Write(); 

    /*--------------------------------------------------------------------------------*/   
  if(EE_SRSS1) h_DeltaEtajj_EE_SRSS1->Write(); 
  if(EE_SRSS2) h_DeltaEtajj_EE_SRSS2->Write(); 
  if(MM_SRSS1) h_DeltaEtajj_MM_SRSS1->Write();   
  if(MM_SRSS2) h_DeltaEtajj_MM_SRSS2->Write(); 
  if(MM_SRSS3) h_DeltaEtajj_MM_SRSS3->Write(); 
  if(MM_SRSS4) h_DeltaEtajj_MM_SRSS4->Write(); 
  if(EM_SRSS1) h_DeltaEtajj_EM_SRSS1->Write(); 
  if(EM_SRSS2) h_DeltaEtajj_EM_SRSS2->Write(); 
  if(EE_SROS1) h_DeltaEtajj_EE_SROS1->Write(); 
  if(MM_SROS1) h_DeltaEtajj_MM_SROS1->Write(); 
  if(EM_SROS1) h_DeltaEtajj_EM_SROS1->Write();   
  
      /*--------------------------------------------------------------------------------*/   
  if(EE_SRSS1) h_DeltaEtall_EE_SRSS1->Write(); 
  if(EE_SRSS2) h_DeltaEtall_EE_SRSS2->Write(); 
  if(MM_SRSS1) h_DeltaEtall_MM_SRSS1->Write();   
  if(MM_SRSS2) h_DeltaEtall_MM_SRSS2->Write(); 
  if(MM_SRSS3) h_DeltaEtall_MM_SRSS3->Write(); 
  if(MM_SRSS4) h_DeltaEtall_MM_SRSS4->Write(); 
  if(EM_SRSS1) h_DeltaEtall_EM_SRSS1->Write(); 
  if(EM_SRSS2) h_DeltaEtall_EM_SRSS2->Write(); 
  if(EE_SROS1) h_DeltaEtall_EE_SROS1->Write(); 
  if(MM_SROS1) h_DeltaEtall_MM_SROS1->Write(); 
  if(EM_SROS1) h_DeltaEtall_EM_SROS1->Write();  


  /*--------------------------------------------------------------------------------*/ 
  if(EE_SRSS1) h_mTll_EE_SRSS1->Write(); 
  if(EE_SRSS2) h_mTll_EE_SRSS2->Write(); 
  if(MM_SRSS1) h_mTll_MM_SRSS1->Write();   
  if(MM_SRSS2) h_mTll_MM_SRSS2->Write(); 
  if(MM_SRSS3) h_mTll_MM_SRSS3->Write(); 
  if(MM_SRSS4) h_mTll_MM_SRSS4->Write(); 
  if(EM_SRSS1) h_mTll_EM_SRSS1->Write(); 
  if(EM_SRSS2) h_mTll_EM_SRSS2->Write(); 
  if(EE_SROS1) h_mTll_EE_SROS1->Write(); 
  if(MM_SROS1) h_mTll_MM_SROS1->Write(); 
  if(EM_SROS1) h_mTll_EM_SROS1->Write(); 


  /*--------------------------------------------------------------------------------*/ 
  if(EE_SRSS1) h_mMETll_EE_SRSS1->Write(); 
  if(EE_SRSS2) h_mMETll_EE_SRSS2->Write(); 
  if(MM_SRSS1) h_mMETll_MM_SRSS1->Write();   
  if(MM_SRSS2) h_mMETll_MM_SRSS2->Write(); 
  if(MM_SRSS3) h_mMETll_MM_SRSS3->Write(); 
  if(MM_SRSS4) h_mMETll_MM_SRSS4->Write(); 
  if(EM_SRSS1) h_mMETll_EM_SRSS1->Write(); 
  if(EM_SRSS2) h_mMETll_EM_SRSS2->Write(); 
  if(EE_SROS1) h_mMETll_EE_SROS1->Write(); 
  if(MM_SROS1) h_mMETll_MM_SROS1->Write(); 
  if(EM_SROS1) h_mMETll_EM_SROS1->Write(); 

  /*--------------------------------------------------------------------------------*/ 
  if(EE_SRSS1) h_DeltaYjj_EE_SRSS1->Write(); 
  if(EE_SRSS2) h_DeltaYjj_EE_SRSS2->Write(); 
  if(MM_SRSS1) h_DeltaYjj_MM_SRSS1->Write();  
  if(MM_SRSS2) h_DeltaYjj_MM_SRSS2->Write(); 
  if(MM_SRSS3) h_DeltaYjj_MM_SRSS3->Write(); 
  if(MM_SRSS4) h_DeltaYjj_MM_SRSS4->Write(); 
  if(EM_SRSS1) h_DeltaYjj_EM_SRSS1->Write(); 
  if(EM_SRSS2) h_DeltaYjj_EM_SRSS2->Write(); 
  if(EE_SROS1) h_DeltaYjj_EE_SROS1->Write(); 
  if(MM_SROS1) h_DeltaYjj_MM_SROS1->Write(); 
  if(EM_SROS1) h_DeltaYjj_EM_SROS1->Write(); 

  /*--------------------------------------------------------------------------------*/ 
  if(EE_SRSS1) h_D0_branch_l0_EE_SRSS1->Write();
  if(EE_SRSS2) h_D0_branch_l0_EE_SRSS2->Write();
  if(MM_SRSS1) h_D0_branch_l0_MM_SRSS1->Write();  
  if(MM_SRSS2) h_D0_branch_l0_MM_SRSS2->Write();
  if(MM_SRSS3) h_D0_branch_l0_MM_SRSS3->Write();
  if(MM_SRSS4) h_D0_branch_l0_MM_SRSS4->Write();
  if(EM_SRSS1) h_D0_branch_l0_EM_SRSS1->Write();
  if(EM_SRSS2) h_D0_branch_l0_EM_SRSS2->Write();
  if(EE_SROS1) h_D0_branch_l0_EE_SROS1->Write();
  if(MM_SROS1) h_D0_branch_l0_MM_SROS1->Write();
  if(EM_SROS1) h_D0_branch_l0_EM_SROS1->Write();

    /*--------------------------------------------------------------------------------*/ 
  h_D0_branch_l1_EE_SRSS1->Write();
  h_D0_branch_l1_EE_SRSS2->Write();
  h_D0_branch_l1_MM_SRSS1->Write();  
  h_D0_branch_l1_MM_SRSS2->Write();
  h_D0_branch_l1_MM_SRSS3->Write();
  h_D0_branch_l1_MM_SRSS4->Write();
  h_D0_branch_l1_EM_SRSS1->Write();
  h_D0_branch_l1_EM_SRSS2->Write();
  h_D0_branch_l1_EE_SROS1->Write();
  h_D0_branch_l1_MM_SROS1->Write();
  h_D0_branch_l1_EM_SROS1->Write();

  /*--------------------------------------------------------------------------------*/ 
  if(EE_SRSS1) h_D0Signif_branch_l0_EE_SRSS1->Write();
  if(EE_SRSS2) h_D0Signif_branch_l0_EE_SRSS2->Write();
  if(MM_SRSS1) h_D0Signif_branch_l0_MM_SRSS1->Write();  
  if(MM_SRSS2) h_D0Signif_branch_l0_MM_SRSS2->Write();
  if(MM_SRSS3) h_D0Signif_branch_l0_MM_SRSS3->Write();
  if(MM_SRSS4) h_D0Signif_branch_l0_MM_SRSS4->Write();
  if(EM_SRSS1) h_D0Signif_branch_l0_EM_SRSS1->Write();
  if(EM_SRSS2) h_D0Signif_branch_l0_EM_SRSS2->Write();
  if(EE_SROS1) h_D0Signif_branch_l0_EE_SROS1->Write();
  if(MM_SROS1) h_D0Signif_branch_l0_MM_SROS1->Write();
  if(EM_SROS1) h_D0Signif_branch_l0_EM_SROS1->Write();

    /*--------------------------------------------------------------------------------*/ 
  if(EE_SRSS1) h_D0Signif_branch_l1_EE_SRSS1->Write();
  if(EE_SRSS2) h_D0Signif_branch_l1_EE_SRSS2->Write();
  if(MM_SRSS1) h_D0Signif_branch_l1_MM_SRSS1->Write();  
  if(MM_SRSS2) h_D0Signif_branch_l1_MM_SRSS2->Write();
  if(MM_SRSS3) h_D0Signif_branch_l1_MM_SRSS3->Write();
  if(MM_SRSS4) h_D0Signif_branch_l1_MM_SRSS4->Write();
  if(EM_SRSS1) h_D0Signif_branch_l1_EM_SRSS1->Write();
  if(EM_SRSS2) h_D0Signif_branch_l1_EM_SRSS2->Write();
  if(EE_SROS1) h_D0Signif_branch_l1_EE_SROS1->Write();
  if(MM_SROS1) h_D0Signif_branch_l1_MM_SROS1->Write();
  if(EM_SROS1) h_D0Signif_branch_l1_EM_SROS1->Write();
/*--------------------------------------------------------------------------------*/    
  cutflow_EE->Write();
  cutflow_EE_ALL->Write();  
  cutflow_MM->Write();
  cutflow_MM_ALL->Write();  
  cutflow_EM->Write();
  cutflow_EM_ALL->Write();
  
  h_DeltaR_l1jOR_EM->Write();
  h_DeltaR_ljOR_EE->Write();
  h_DeltaR_ljOR_MM->Write();
  h_DeltaR_l0jOR_EM->Write();
  
  h_mllCut_EE->Write();
  h_mllCut_MM->Write();
  h_mllCut_l0_EM->Write();
  h_mllCut_l1_EM->Write();
  
  h_DeltaR_em_EM->Write();
  
  h_failedSignalCriteria_l0_EE->Write();
  h_failedSignalCriteria_l1_EE->Write();
  h_failedSignalCriteria_l0_MM->Write();
  h_failedSignalCriteria_l1_MM->Write();
  h_failedSignalCriteria_l0_EM->Write();
  h_failedSignalCriteria_l1_EM->Write();

  h_etcone30l0lZcand_EE_SRSS1->Write();
  h_etcone30l0lZcandSoft_EE_SRSS1->Write();
  h_etcone30l0lZcandSimple_EE_SRSS1->Write();
  h_etcone30l0lZcandIso_EE_SRSS1->Write();
  
  h_etcone30l1lZcand_EE_SRSS1->Write();
  h_etcone30l1lZcandSoft_EE_SRSS1->Write();
  h_etcone30l1lZcandSimple_EE_SRSS1->Write();
  h_etcone30l1lZcandIso_EE_SRSS1->Write();
  
  h_etcone30l1lZcand_EM_SRSS1->Write();
  h_etcone30l1lZcandSoft_EM_SRSS1->Write();
  h_etcone30l1lZcandSimple_EM_SRSS1->Write();
  h_etcone30l1lZcandIso_EM_SRSS1->Write();
  
  h_Nleptons_Zcand_EE_SRSS1->Write();
  h_Nleptons_Zcand_MM_SRSS1->Write();
  h_Nleptons_Zcand_EM_SRSS1->Write();
  
  h_ml0lZcand_EE_SRSS1->Write();
  h_ml0lZcand_MM_SRSS1->Write();
  h_ml0lZcand_EM_SRSS1->Write();
  
  h_mTl0lZcand_EE_SRSS1->Write();
  h_mTl0lZcand_MM_SRSS1->Write();
  h_mTl0lZcand_EM_SRSS1->Write();    
  
  h_pTl0lZcand_EE_SRSS1->Write();
  h_pTl0lZcand_MM_SRSS1->Write();
  h_pTl0lZcand_EM_SRSS1->Write();
  
  h_ICl0lZcand_EE_SRSS1->Write();
  h_ICl0lZcand_MM_SRSS1->Write();
  h_ICl0lZcand_EM_SRSS1->Write();   
  
  h_etal0lZcand_EE_SRSS1->Write();
  h_etal0lZcand_MM_SRSS1->Write();
  h_etal0lZcand_EM_SRSS1->Write();
  
  h_ptcone30l0lZcand_EE_SRSS1->Write();
  h_ptcone30l0lZcand_MM_SRSS1->Write();
  h_ptcone30l0lZcand_EM_SRSS1->Write();
  
  h_d0Sigl0lZcand_EE_SRSS1->Write();
  h_d0Sigl0lZcand_MM_SRSS1->Write();
  h_d0Sigl0lZcand_EM_SRSS1->Write();
  
  h_z0SinThetal0lZcand_EE_SRSS1->Write();
  h_z0SinThetal0lZcand_MM_SRSS1->Write();
  h_z0SinThetal0lZcand_EM_SRSS1->Write();
  
  h_ml1lZcand_EE_SRSS1->Write();
  h_ml1lZcand_MM_SRSS1->Write();
  h_ml1lZcand_EM_SRSS1->Write();
  
  h_mTl1lZcand_EE_SRSS1->Write();
  h_mTl1lZcand_MM_SRSS1->Write();
  h_mTl1lZcand_EM_SRSS1->Write();    
  
  h_ICl1lZcand_EE_SRSS1->Write();
  h_ICl1lZcand_MM_SRSS1->Write();
  h_ICl1lZcand_EM_SRSS1->Write();    
  
  h_pTl1lZcand_EE_SRSS1->Write();
  h_pTl1lZcand_MM_SRSS1->Write();
  h_pTl1lZcand_EM_SRSS1->Write();
  
  h_etal1lZcand_EE_SRSS1->Write();
  h_etal1lZcand_MM_SRSS1->Write();
  h_etal1lZcand_EM_SRSS1->Write();
  
  h_ptcone30l1lZcand_EE_SRSS1->Write();
  h_ptcone30l1lZcand_MM_SRSS1->Write();
  h_ptcone30l1lZcand_EM_SRSS1->Write();
  
  h_d0Sigl1lZcand_EE_SRSS1->Write();
  h_d0Sigl1lZcand_MM_SRSS1->Write();
  h_d0Sigl1lZcand_EM_SRSS1->Write();
  
  h_z0SinThetal1lZcand_EE_SRSS1->Write();
  h_z0SinThetal1lZcand_MM_SRSS1->Write();
  h_z0SinThetal1lZcand_EM_SRSS1->Write();

  h_Nleptons_ZcandSoft_EE_SRSS1->Write();
  h_Nleptons_ZcandSoft_MM_SRSS1->Write();
  h_Nleptons_ZcandSoft_EM_SRSS1->Write();
  
  h_ml0lZcandSoft_EE_SRSS1->Write();
  h_ml0lZcandSoft_MM_SRSS1->Write();
  h_ml0lZcandSoft_EM_SRSS1->Write();
  
  h_mTl0lZcandSoft_EE_SRSS1->Write();    
  h_mTl0lZcandSoft_MM_SRSS1->Write();    
  h_mTl0lZcandSoft_EM_SRSS1->Write();    
  
  h_pTl0lZcandSoft_EE_SRSS1->Write();
  h_pTl0lZcandSoft_MM_SRSS1->Write();
  h_pTl0lZcandSoft_EM_SRSS1->Write();
  
  h_ICl0lZcandSoft_EE_SRSS1->Write();   
  h_ICl0lZcandSoft_MM_SRSS1->Write();   
  h_ICl0lZcandSoft_EM_SRSS1->Write();   
  
  h_etal0lZcandSoft_EE_SRSS1->Write();
  h_etal0lZcandSoft_MM_SRSS1->Write();
  h_etal0lZcandSoft_EM_SRSS1->Write();
  
  h_ptcone30l0lZcandSoft_EE_SRSS1->Write();
  h_ptcone30l0lZcandSoft_MM_SRSS1->Write();
  h_ptcone30l0lZcandSoft_EM_SRSS1->Write();
  
  h_d0Sigl0lZcandSoft_EE_SRSS1->Write();
  h_d0Sigl0lZcandSoft_MM_SRSS1->Write();
  h_d0Sigl0lZcandSoft_EM_SRSS1->Write();
  
  h_z0SinThetal0lZcandSoft_EE_SRSS1->Write();
  h_z0SinThetal0lZcandSoft_MM_SRSS1->Write();
  h_z0SinThetal0lZcandSoft_EM_SRSS1->Write();
  
  h_ml1lZcandSoft_EE_SRSS1->Write();
  h_ml1lZcandSoft_MM_SRSS1->Write();
  h_ml1lZcandSoft_EM_SRSS1->Write();
  
  h_mTl1lZcandSoft_EE_SRSS1->Write();    
  h_mTl1lZcandSoft_MM_SRSS1->Write();    
  h_mTl1lZcandSoft_EM_SRSS1->Write();    
  
  h_ICl1lZcandSoft_EE_SRSS1->Write();    
  h_ICl1lZcandSoft_MM_SRSS1->Write();    
  h_ICl1lZcandSoft_EM_SRSS1->Write();    
  
  h_pTl1lZcandSoft_EE_SRSS1->Write();
  h_pTl1lZcandSoft_MM_SRSS1->Write();
  h_pTl1lZcandSoft_EM_SRSS1->Write();
  
  h_etal1lZcandSoft_EE_SRSS1->Write();
  h_etal1lZcandSoft_MM_SRSS1->Write();
  h_etal1lZcandSoft_EM_SRSS1->Write();
  
  h_ptcone30l1lZcandSoft_EE_SRSS1->Write();
  h_ptcone30l1lZcandSoft_MM_SRSS1->Write();
  h_ptcone30l1lZcandSoft_EM_SRSS1->Write();
  
  h_d0Sigl1lZcandSoft_EE_SRSS1->Write();
  h_d0Sigl1lZcandSoft_MM_SRSS1->Write();
  h_d0Sigl1lZcandSoft_EM_SRSS1->Write();
  
  h_z0SinThetal1lZcandSoft_EE_SRSS1->Write();
  h_z0SinThetal1lZcandSoft_MM_SRSS1->Write();
  h_z0SinThetal1lZcandSoft_EM_SRSS1->Write();

    h_Nleptons_ZcandSimple_EE_SRSS1->Write();
  h_Nleptons_ZcandSimple_MM_SRSS1->Write();
  h_Nleptons_ZcandSimple_EM_SRSS1->Write();
  
  h_ml0lZcandSimple_EE_SRSS1->Write();
  h_ml0lZcandSimple_MM_SRSS1->Write();
  h_ml0lZcandSimple_EM_SRSS1->Write();
  
  h_mTl0lZcandSimple_EE_SRSS1->Write();    
  h_mTl0lZcandSimple_MM_SRSS1->Write();    
  h_mTl0lZcandSimple_EM_SRSS1->Write();    
  
  h_pTl0lZcandSimple_EE_SRSS1->Write();
  h_pTl0lZcandSimple_MM_SRSS1->Write();
  h_pTl0lZcandSimple_EM_SRSS1->Write();
  
  h_ICl0lZcandSimple_EE_SRSS1->Write();   
  h_ICl0lZcandSimple_MM_SRSS1->Write();   
  h_ICl0lZcandSimple_EM_SRSS1->Write();   
  
  h_etal0lZcandSimple_EE_SRSS1->Write();
  h_etal0lZcandSimple_MM_SRSS1->Write();
  h_etal0lZcandSimple_EM_SRSS1->Write();
  
  h_ptcone30l0lZcandSimple_EE_SRSS1->Write();
  h_ptcone30l0lZcandSimple_MM_SRSS1->Write();
  h_ptcone30l0lZcandSimple_EM_SRSS1->Write();
  
  h_d0Sigl0lZcandSimple_EE_SRSS1->Write();
  h_d0Sigl0lZcandSimple_MM_SRSS1->Write();
  h_d0Sigl0lZcandSimple_EM_SRSS1->Write();
  
  h_z0SinThetal0lZcandSimple_EE_SRSS1->Write();
  h_z0SinThetal0lZcandSimple_MM_SRSS1->Write();
  h_z0SinThetal0lZcandSimple_EM_SRSS1->Write();
  
  h_ml1lZcandSimple_EE_SRSS1->Write();
  h_ml1lZcandSimple_MM_SRSS1->Write();
  h_ml1lZcandSimple_EM_SRSS1->Write();
  
  h_mTl1lZcandSimple_EE_SRSS1->Write();    
  h_mTl1lZcandSimple_MM_SRSS1->Write();    
  h_mTl1lZcandSimple_EM_SRSS1->Write();    
  
  h_ICl1lZcandSimple_EE_SRSS1->Write();    
  h_ICl1lZcandSimple_MM_SRSS1->Write();    
  h_ICl1lZcandSimple_EM_SRSS1->Write();    
  
  h_pTl1lZcandSimple_EE_SRSS1->Write();
  h_pTl1lZcandSimple_MM_SRSS1->Write();
  h_pTl1lZcandSimple_EM_SRSS1->Write();
  
  h_etal1lZcandSimple_EE_SRSS1->Write();
  h_etal1lZcandSimple_MM_SRSS1->Write();
  h_etal1lZcandSimple_EM_SRSS1->Write();
  
  h_ptcone30l1lZcandSimple_EE_SRSS1->Write();
  h_ptcone30l1lZcandSimple_MM_SRSS1->Write();
  h_ptcone30l1lZcandSimple_EM_SRSS1->Write();
  
  h_d0Sigl1lZcandSimple_EE_SRSS1->Write();
  h_d0Sigl1lZcandSimple_MM_SRSS1->Write();
  h_d0Sigl1lZcandSimple_EM_SRSS1->Write();
  
  h_z0SinThetal1lZcandSimple_EE_SRSS1->Write();
  h_z0SinThetal1lZcandSimple_MM_SRSS1->Write();
  h_z0SinThetal1lZcandSimple_EM_SRSS1->Write();
  
  h_Nleptons_ZcandIso_EE_SRSS1->Write();
  h_Nleptons_ZcandIso_MM_SRSS1->Write();
  h_Nleptons_ZcandIso_EM_SRSS1->Write();
  
  h_ml0lZcandIso_EE_SRSS1->Write();
  h_ml0lZcandIso_MM_SRSS1->Write();
  h_ml0lZcandIso_EM_SRSS1->Write();
  
  h_mTl0lZcandIso_EE_SRSS1->Write();    
  h_mTl0lZcandIso_MM_SRSS1->Write();    
  h_mTl0lZcandIso_EM_SRSS1->Write();    
  
  h_pTl0lZcandIso_EE_SRSS1->Write();
  h_pTl0lZcandIso_MM_SRSS1->Write();
  h_pTl0lZcandIso_EM_SRSS1->Write();
  
  h_ICl0lZcandIso_EE_SRSS1->Write();   
  h_ICl0lZcandIso_MM_SRSS1->Write();   
  h_ICl0lZcandIso_EM_SRSS1->Write();   
  
  h_etal0lZcandIso_EE_SRSS1->Write();
  h_etal0lZcandIso_MM_SRSS1->Write();
  h_etal0lZcandIso_EM_SRSS1->Write();
  
  h_ptcone30l0lZcandIso_EE_SRSS1->Write();
  h_ptcone30l0lZcandIso_MM_SRSS1->Write();
  h_ptcone30l0lZcandIso_EM_SRSS1->Write();
  
  h_d0Sigl0lZcandIso_EE_SRSS1->Write();
  h_d0Sigl0lZcandIso_MM_SRSS1->Write();
  h_d0Sigl0lZcandIso_EM_SRSS1->Write();
  
  h_z0SinThetal0lZcandIso_EE_SRSS1->Write();
  h_z0SinThetal0lZcandIso_MM_SRSS1->Write();
  h_z0SinThetal0lZcandIso_EM_SRSS1->Write();
  
  h_ml1lZcandIso_EE_SRSS1->Write();
  h_ml1lZcandIso_MM_SRSS1->Write();
  h_ml1lZcandIso_EM_SRSS1->Write();
  
  h_mTl1lZcandIso_EE_SRSS1->Write();    
  h_mTl1lZcandIso_MM_SRSS1->Write();    
  h_mTl1lZcandIso_EM_SRSS1->Write();    
  
  h_ICl1lZcandIso_EE_SRSS1->Write();    
  h_ICl1lZcandIso_MM_SRSS1->Write();    
  h_ICl1lZcandIso_EM_SRSS1->Write();    
  
  h_pTl1lZcandIso_EE_SRSS1->Write();
  h_pTl1lZcandIso_MM_SRSS1->Write();
  h_pTl1lZcandIso_EM_SRSS1->Write();
  
  h_etal1lZcandIso_EE_SRSS1->Write();
  h_etal1lZcandIso_MM_SRSS1->Write();
  h_etal1lZcandIso_EM_SRSS1->Write();
  
  h_ptcone30l1lZcandIso_EE_SRSS1->Write();
  h_ptcone30l1lZcandIso_MM_SRSS1->Write();
  h_ptcone30l1lZcandIso_EM_SRSS1->Write();
  
  h_d0Sigl1lZcandIso_EE_SRSS1->Write();
  h_d0Sigl1lZcandIso_MM_SRSS1->Write();
  h_d0Sigl1lZcandIso_EM_SRSS1->Write();
  
  h_z0SinThetal1lZcandIso_EE_SRSS1->Write();
  h_z0SinThetal1lZcandIso_MM_SRSS1->Write();
  h_z0SinThetal1lZcandIso_EM_SRSS1->Write();
  
  h_Mljj_EE_SRSS1->Write();
  h_Mljj_MM_SRSS1->Write();
  h_Mljj_EM_SRSS1->Write();
  
  return true;
}

bool TSelector_SusyNtuple::addHistos(){

  //nEEded when running with Proof On Demand

//     fOutput->Add( h_storeSumwMcid);

  return true;
    
}
void TSelector_SusyNtuple::calcJet_variables(TLorentzVector met_TLV){
  
  TLorentzVector signalJet0_TLV;
  TLorentzVector signalJet1_TLV;
  nSignalJets = numberOfCLJets(m_signalJets2Lep);
  if(nSignalJets>0){
    signalJet0_TLV.SetPtEtaPhiE(m_signalJets2Lep.at(0)->pt, m_signalJets2Lep.at(0)->eta ,m_signalJets2Lep.at(0)->phi, m_signalJets2Lep.at(0)
    ->pt*cosh(m_signalJets2Lep.at(0)->eta));
    signalJet0_TLV.SetPtEtaPhiM(m_signalJets2Lep.at(0)->pt, m_signalJets2Lep.at(0)->eta ,m_signalJets2Lep.at(0)->phi, m_signalJets2Lep.at(0)
    ->m);
  }
  if(nSignalJets>1){
    signalJet1_TLV.SetPtEtaPhiE(m_signalJets2Lep.at(1)->pt, m_signalJets2Lep.at(1)->eta ,m_signalJets2Lep.at(1)->phi, m_signalJets2Lep.at(1)->pt*cosh(m_signalJets2Lep.at(1)->eta));
    signalJet1_TLV.SetPtEtaPhiM(m_signalJets2Lep.at(1)->pt, m_signalJets2Lep.at(1)->eta ,m_signalJets2Lep.at(1)->phi, m_signalJets2Lep.at(1)->m);
  }
  
  
  
  if(nSignalJets>0){
    pTj0 = signalJet0_TLV.Pt();
    pTj1 = (nSignalJets>1) ? signalJet1_TLV.Pt() : 0.;
    eta_j0 = signalJet0_TLV.Eta();
    eta_j1 = (nSignalJets>1) ? signalJet1_TLV.Eta() : 0.;
    mjj = (nSignalJets>1) ? (signalJet0_TLV + signalJet1_TLV).M() : signalJet0_TLV.M();
    DeltaPhijj = (nSignalJets>1) ? fabs(signalJet0_TLV.DeltaPhi(signalJet1_TLV)) : 0.;
    pTjj = (nSignalJets>1) ? (signalJet0_TLV + signalJet1_TLV).Pt() : signalJet0_TLV.Pt();
    DeltaPhiMETj0 = fabs(signalJet0_TLV.DeltaPhi(met_TLV));
    DeltaPhiMETj1 = (nSignalJets>1) ? fabs(signalJet1_TLV.DeltaPhi(met_TLV)) : 0.;
    DeltaRjj = (nSignalJets>1) ?  fabs(signalJet0_TLV.DeltaR(signalJet1_TLV)) : 0.;
    DeltaEtajj = (nSignalJets>1) ? fabs(signalJet0_TLV.Eta() - signalJet1_TLV.Eta()) : 0.;
    DeltaYjj = (nSignalJets>1) ? fabs(signalJet0_TLV.Rapidity() - signalJet1_TLV.Rapidity()) : 0.;
    DeltaPhiMETjj = (nSignalJets>1) ? fabs((signalJet0_TLV+ signalJet1_TLV).DeltaPhi(met_TLV)) : fabs(signalJet0_TLV.DeltaPhi(met_TLV));
    NBJets = numberOfCBJets(m_signalJets2Lep);
    NCJets = numberOfCLJets(m_signalJets2Lep);
    NFJets = numberOfFJets(m_signalJets2Lep);
    meff = calcMeff(met_TLV, m_signalJets2Lep);
  }
    
}
void TSelector_SusyNtuple::calc_EE_variables(LeptonVector &leptons, Electron* el0, Electron* el1, TLorentzVector el0_TLV, TLorentzVector el1_TLV, TLorentzVector met_TLV, TLorentzVector signalJet0_TLV, TLorentzVector signalJet1_TLV, bool useForwardJets, SusyNtObject* susyNt, float weight_EE){
  
  pTl0_EE = el0_TLV.Pt() > el1_TLV.Pt() ? el0_TLV.Pt() : el1_TLV.Pt();
  pTl1_EE = el0_TLV.Pt() > el1_TLV.Pt() ? el1_TLV.Pt() : el0_TLV.Pt();
  etal0_EE = el0_TLV.Eta();
  etal1_EE = el1_TLV.Eta();
  DeltaR_EE = fabs(el0_TLV.DeltaR(el1_TLV));
  pTll_EE = (el0_TLV + el1_TLV).Pt();
  Mll_EE = Mll(el0, el1);
  METrel_EE = recalcMetRel(met_TLV, el0_TLV, el1_TLV, m_signalJets2Lep, useForwardJets);
  MET_EE = met_TLV.Pt();
  HT_EE = calcHT(el0_TLV, el1_TLV, met_TLV, m_signalJets2Lep);
  mTWW_EE = calcMt((el0_TLV + el1_TLV), met_TLV);
  mT_EE = calcMt((el0_TLV+el1_TLV), met_TLV);
  mTmin_EE = (calcMt(el0_TLV, met_TLV) > calcMt(el1_TLV, met_TLV)) ? calcMt(el1_TLV, met_TLV) : calcMt(el0_TLV, met_TLV);
  mTmax_EE = (calcMt(el0_TLV, met_TLV) < calcMt(el1_TLV, met_TLV)) ? calcMt(el1_TLV, met_TLV) : calcMt(el0_TLV, met_TLV);
  mTl0MET_EE = calcMt(el0_TLV, met_TLV);
  mTl1MET_EE = calcMt(el1_TLV, met_TLV);
  mMET_EE = (el0_TLV + el1_TLV + met_TLV).M();
  DeltaPhi_EE = fabs(el0_TLV.DeltaPhi(el1_TLV));
  DeltaPhiMETl0_EE = fabs(el0_TLV.DeltaPhi(met_TLV));
  DeltaPhiMETl1_EE = fabs(el1_TLV.DeltaPhi(met_TLV));
  DeltaPhiMET_EE = fabs((el0_TLV + el1_TLV).DeltaPhi(met_TLV));
  
  if(nSignalJets>0){
     DeltaPhilljj_EE = (nSignalJets>1) ? fabs((el0_TLV + el1_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV)) : fabs((el0_TLV + el1_TLV).DeltaPhi(signalJet0_TLV));    
    DeltaPhil0jj_EE = (nSignalJets>1) ? ((el0_TLV.Pt()> el1_TLV.Pt()) ? (el0_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV) : (el1_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV)) : ((el0_TLV.Pt()> el1_TLV.Pt()) ? (el0_TLV).DeltaPhi(signalJet0_TLV) : (el1_TLV).DeltaPhi(signalJet0_TLV));
    DeltaPhil1jj_EE= (nSignalJets>1) ?  ((el0_TLV.Pt()< el1_TLV.Pt()) ? (el1_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV) : (el0_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV)) : ((el0_TLV.Pt()< el1_TLV.Pt()) ? (el1_TLV).DeltaPhi(signalJet0_TLV) : (el0_TLV).DeltaPhi(signalJet0_TLV));
    DeltaRlljj_EE = (nSignalJets>1) ? (el0_TLV + el1_TLV).DeltaR(signalJet0_TLV + signalJet1_TLV) : (el0_TLV + el1_TLV).DeltaR(signalJet0_TLV);
  }
  
  //Mljj: invariant mass of the lepton-dijet system formed by the two highest pT jets and the lepton closest to the dijet axis.
  Mljj_EE = -1.;
  if(nSignalJets>1){
    //find dijet axis:
    double DeltaRDijetEl0 = el0_TLV.DeltaR(signalJet0_TLV + signalJet1_TLV); //sqrt(pow(fabs(etaDijetAxis - el0_TLV.Eta()),2) + pow(fabs(phiDijetAxis - el0_TLV.Phi()),2));
    double DeltaRDijetEl1 = el1_TLV.DeltaR(signalJet0_TLV + signalJet1_TLV); //sqrt(pow(fabs(etaDijetAxis - el1_TLV.Eta()),2) + pow(fabs(phiDijetAxis - el1_TLV.Phi()),2));
    TLorentzVector closestElecDijetAxis_TLV = (DeltaRDijetEl0 > DeltaRDijetEl1) ? el1_TLV : el0_TLV;
    Mljj_EE = (signalJet0_TLV + signalJet1_TLV + closestElecDijetAxis_TLV).M();
  }
  
  mT2_EE = calcMT2(met_TLV, el0_TLV, el1_TLV);
  if(nSignalJets>1) mT2J_EE = calcMT2J(met_TLV, el0_TLV, el1_TLV, signalJet0_TLV, signalJet1_TLV);
  

  DeltaEtall_EE = fabs(el0_TLV.Eta() - el1_TLV.Eta());
    
  bool unbiased = true;
  if(unbiased){
    D0_branch_l0_EE = el0->d0Unbiased;
    D0_branch_l1_EE = el1->d0Unbiased;
    D0err_branch_l0_EE = el0->errD0Unbiased;
    D0err_branch_l1_EE = el1->errD0Unbiased;
  }
  else{
    D0_branch_l0_EE = el0->d0;
    D0_branch_l1_EE = el1->d0;
    D0err_branch_l0_EE = el0->errD0;
    D0err_branch_l1_EE = el1->errD0;
  }
  
  
  sD0Signif_branch_l0_EE = calc_D0(unbiased, leptons.at(0)) / D0err_branch_l0_EE;
  sD0Signif_branch_l1_EE = calc_D0(unbiased, leptons.at(1)) / D0err_branch_l1_EE;
  
  MuonVector MuonWOjOR_vec = getPreMuons(&nt, NtSys_NOM);   
  
   //perform the whole procedure as in SusyNtuple/SusyNtTools.cxx performOverlap()

  ElectronVector ElectronWOjOR_vec = getPreElectrons(&nt, NtSys_NOM);

  // Remove electrons from electrons
  e_e_overlap(ElectronWOjOR_vec, E_E_DR);
  
  // Remove electrons and muons that overlap


  e_m_overlap(ElectronWOjOR_vec, MuonWOjOR_vec, E_M_DR);

  m_m_overlap(MuonWOjOR_vec, M_M_DR);

  removeSFOSPair(MuonWOjOR_vec, MLL_MIN);
  


  
  //find electrons that were lost in e-m or m-m OR or due to mll cut:
  ml0lZcand_EE = -1.;      
  mTl0lZcand_EE = -1.;
  ICl0lZcand_EE = -5;
  pTl0lZcand_EE = -1.;
  etal0lZcand_EE = -1.;
  ptcone30l0lZcand_EE = -1.;
  etcone30l0lZcand_EE = -1.;
  d0Sigl0lZcand_EE = -1.;
  z0SinThetal0lZcand_EE = -1.;
  
  ml1lZcand_EE = -1.;
  mTl1lZcand_EE = -1.;
  ICl1lZcand_EE = -5;
  pTl1lZcand_EE = -1.;
  etal1lZcand_EE = -1.;
  ptcone30l1lZcand_EE = -1.;
  etcone30l1lZcand_EE = -1.;
  d0Sigl1lZcand_EE = -1.;
  z0SinThetal1lZcand_EE = -1.;
  
  

  //Zcand electrons: all electrons after the OR w/o m-j OR which are no signal electrons

  removeSFOSPair(ElectronWOjOR_vec, MLL_MIN);
  //can a preElectron be matched to an electron after OR?
  double DeltaMZ_l1lZcand = 99999.;
  double DeltaMZ_l0lZcand = 99999.;
  ElectronVector Electron_Zcand_vec;

  for(uint ie=0; ie<ElectronWOjOR_vec.size(); ie++){
    Electron* el_WOjOR = ElectronWOjOR_vec.at(ie);
    el_WOjOR->setState(NtSys_NOM);
    if((el_WOjOR->DeltaR(*el0) < 0.0001) || (el_WOjOR->DeltaR(*el1) < 0.0001)) continue; //no signal lepton
    
    TLorentzVector ZcandElec_TLV;
    ZcandElec_TLV.SetPtEtaPhiE(el_WOjOR->pt, el_WOjOR->eta ,el_WOjOR->phi, el_WOjOR->pt*cosh(el_WOjOR->eta));
    ZcandElec_TLV.SetPtEtaPhiM(el_WOjOR->pt, el_WOjOR->eta ,el_WOjOR->phi, el_WOjOR->m);
    if((el_WOjOR->q * el0->q)<0. || (el_WOjOR->q * el0->q)<0.){
      if(fabs(MZ - Mll(el0, el_WOjOR)) < fabs(MZ - Mll(el1, el_WOjOR))){
	if(fabs(MZ - Mll(el0, el_WOjOR)) < DeltaMZ_l0lZcand){
	  Electron_Zcand_vec.push_back(el_WOjOR);
	  ml0lZcand_EE = (el0_TLV + ZcandElec_TLV).M();      
	  mTl0lZcand_EE = calcMt(el0_TLV, ZcandElec_TLV);  
	  pTl0lZcand_EE = el_WOjOR->pt;
	  etal0lZcand_EE = fabs(el_WOjOR->eta);
	  float ptcone30 = elPtConeCorr(el_WOjOR, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	  ptcone30l0lZcand_EE = ptcone30/el_WOjOR->pt;
	  float etcone = elEtTopoConeCorr(el_WOjOR, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	  etcone30l0lZcand_EE = etcone/el_WOjOR->pt;		    	  
	  d0Sigl0lZcand_EE = fabs(el_WOjOR->d0Sig(true));
	  z0SinThetal0lZcand_EE = fabs(el_WOjOR->z0SinTheta(true));	
	  DeltaMZ_l0lZcand = fabs(MZ - Mll(el0, el_WOjOR));
	}
      }
      else{
	if(fabs(MZ - Mll(el1, el_WOjOR)) < DeltaMZ_l1lZcand){
	  Electron_Zcand_vec.push_back(el_WOjOR);
	  ml1lZcand_EE = (el1_TLV + ZcandElec_TLV).M();      
	  mTl1lZcand_EE = calcMt(el1_TLV, ZcandElec_TLV);  
	  pTl1lZcand_EE = el_WOjOR->pt;
	  etal1lZcand_EE = fabs(el_WOjOR->eta);
	  float ptcone30 = elPtConeCorr(el_WOjOR, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	  ptcone30l1lZcand_EE = ptcone30/el_WOjOR->pt;
	  float etcone = elEtTopoConeCorr(el_WOjOR, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	  etcone30l1lZcand_EE = etcone/el_WOjOR->pt;		    	  
	  d0Sigl1lZcand_EE = fabs(el_WOjOR->d0Sig(true));
	  z0SinThetal1lZcand_EE = fabs(el_WOjOR->z0SinTheta(true));	
	  DeltaMZ_l1lZcand = fabs(MZ - Mll(el1, el_WOjOR));
	}
      }
    }
  }
  
  if(DeltaMZ_l0lZcand < DeltaMZ_l1lZcand){
    ml1lZcand_EE = -1.;
    mTl1lZcand_EE = -1.;
    pTl1lZcand_EE = -1.;
    etal1lZcand_EE = -1.;
    ptcone30l1lZcand_EE = -1.;
    etcone30l1lZcand_EE = -1.;
    d0Sigl1lZcand_EE = -1.;
    z0SinThetal1lZcand_EE = -1.;
  }
  else{
    ml0lZcand_EE = -1.;
    mTl0lZcand_EE = -1.;
    pTl0lZcand_EE = -1.;
    etal0lZcand_EE = -1.;
    ptcone30l0lZcand_EE = -1.;
    etcone30l0lZcand_EE = -1.;
    d0Sigl0lZcand_EE = -1.;
    z0SinThetal0lZcand_EE = -1.;
  }
  
  Nleptons_Zcand_EE = Electron_Zcand_vec.size(); 
  
  ml0lZcandSoft_EE = -1.;      
  mTl0lZcandSoft_EE = -1.;
  ICl0lZcandSoft_EE = -5;
  pTl0lZcandSoft_EE = -1.;
  etal0lZcandSoft_EE = -1.;
  ptcone30l0lZcandSoft_EE = -1.;
  etcone30l0lZcandSoft_EE = -1.;
  d0Sigl0lZcandSoft_EE = -1.;
  z0SinThetal0lZcandSoft_EE = -1.;
  
  ml1lZcandSoft_EE = -1.;
  mTl1lZcandSoft_EE = -1.;
  ICl1lZcandSoft_EE = -5;
  pTl1lZcandSoft_EE = -1.;
  etal1lZcandSoft_EE = -1.;
  ptcone30l1lZcandSoft_EE = -1.;
  etcone30l1lZcandSoft_EE = -1.;
  d0Sigl1lZcandSoft_EE = -1.;
  z0SinThetal1lZcandSoft_EE = -1.;
    
  MuonVector Muons_all_vec;
  for(uint im=0; im<susyNt->muo()->size(); ++im){
    Muon* mu = & susyNt->muo()->at(im);
    mu->setState(NtSys_NOM);    
    Muons_all_vec.push_back(mu);
  }
  
  ElectronVector Electrons_all_vec;
  for(uint ie=0; ie<susyNt->ele()->size(); ++ie){
    Electron* e = & susyNt->ele()->at(ie);
    e->setState(NtSys_NOM);

    Electrons_all_vec.push_back(e);
  }
  MuonVector Muons_noJOR_vec = Muons_all_vec;
  ElectronVector Electrons_noJOR_vec = Electrons_all_vec;
  e_e_overlap(Electrons_noJOR_vec, E_E_DR);
  // Remove electrons and muons that overlap
  e_m_overlap(Electrons_noJOR_vec, Muons_noJOR_vec, E_M_DR);
  m_m_overlap(Muons_noJOR_vec, M_M_DR);
  removeSFOSPair(Muons_noJOR_vec, MLL_MIN);

  //ZcandSoft electrons: all electrons after the OR w/o m-j OR which are no signal electrons
 

  removeSFOSPair(Electrons_noJOR_vec, MLL_MIN);
  //can a preElectron be matched to an electron after OR?
  double DeltaMZ_l1lZcandSoft = 99999.;
  double DeltaMZ_l0lZcandSoft = 99999.;
  ElectronVector Electron_ZcandSoft_vec;
  
  for(uint ie=0; ie<Electrons_noJOR_vec.size(); ie++){
    Electron* el_WOjOR = Electrons_noJOR_vec.at(ie);
    el_WOjOR->setState(NtSys_NOM);
    if((el_WOjOR->DeltaR(*el0) < 0.0001) || (el_WOjOR->DeltaR(*el1) < 0.0001)) continue; //no signal lepton
    TLorentzVector ZcandSoftElec_TLV;
    ZcandSoftElec_TLV.SetPtEtaPhiE(el_WOjOR->pt, el_WOjOR->eta ,el_WOjOR->phi, el_WOjOR->pt*cosh(el_WOjOR->eta));
    ZcandSoftElec_TLV.SetPtEtaPhiM(el_WOjOR->pt, el_WOjOR->eta ,el_WOjOR->phi, el_WOjOR->m);
    if((el_WOjOR->q * el0->q)<0. || (el_WOjOR->q * el1->q)<0.){
      if(fabs(MZ - Mll(el0, el_WOjOR)) < fabs(MZ - Mll(el1, el_WOjOR))){
	if(fabs(MZ - Mll(el0, el_WOjOR)) < DeltaMZ_l0lZcandSoft){
	  Electron_ZcandSoft_vec.push_back(el_WOjOR);
	  ml0lZcandSoft_EE = (el0_TLV + ZcandSoftElec_TLV).M();      
	  mTl0lZcandSoft_EE = calcMt(el0_TLV, ZcandSoftElec_TLV);  
	  pTl0lZcandSoft_EE = el_WOjOR->pt;
	  etal0lZcandSoft_EE = fabs(el_WOjOR->eta);
	  float ptcone30 = elPtConeCorr(el_WOjOR, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	  ptcone30l0lZcandSoft_EE = ptcone30/el_WOjOR->pt;
	  float etcone = elEtTopoConeCorr(el_WOjOR, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	  etcone30l0lZcandSoft_EE = etcone/el_WOjOR->pt;		    	  
	  d0Sigl0lZcandSoft_EE = fabs(el_WOjOR->d0Sig(true));
	  z0SinThetal0lZcandSoft_EE = fabs(el_WOjOR->z0SinTheta(true));	
	  DeltaMZ_l0lZcandSoft = fabs(MZ - Mll(el0, el_WOjOR));
	}
      }
      else{
	if(fabs(MZ - Mll(el1, el_WOjOR)) < DeltaMZ_l1lZcandSoft){
	  Electron_ZcandSoft_vec.push_back(el_WOjOR);
	  ml1lZcandSoft_EE = (el1_TLV + ZcandSoftElec_TLV).M();      
	  mTl1lZcandSoft_EE = calcMt(el1_TLV, ZcandSoftElec_TLV);  
	  pTl1lZcandSoft_EE = el_WOjOR->pt;
	  etal1lZcandSoft_EE = fabs(el_WOjOR->eta);
	  float ptcone30 = elPtConeCorr(el_WOjOR, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	  ptcone30l1lZcandSoft_EE = ptcone30/el_WOjOR->pt;
	  float etcone = elEtTopoConeCorr(el_WOjOR, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	  etcone30l1lZcandSoft_EE = etcone/el_WOjOR->pt;		    	  
	  d0Sigl1lZcandSoft_EE = fabs(el_WOjOR->d0Sig(true));
	  z0SinThetal1lZcandSoft_EE = fabs(el_WOjOR->z0SinTheta(true));	
	  DeltaMZ_l1lZcandSoft = fabs(MZ - Mll(el1, el_WOjOR));
	}
      }
    }
  }
  
  if(DeltaMZ_l0lZcandSoft < DeltaMZ_l1lZcandSoft){
    ml1lZcandSoft_EE = -1.;
    mTl1lZcandSoft_EE = -1.;
    pTl1lZcandSoft_EE = -1.;
    etal1lZcandSoft_EE = -1.;
    ptcone30l1lZcandSoft_EE = -1.;
    etcone30l1lZcandSoft_EE = -1.;
    d0Sigl1lZcandSoft_EE = -1.;
    z0SinThetal1lZcandSoft_EE = -1.;
    
    }
  else{
    ml0lZcandSoft_EE = -1.;
    mTl0lZcandSoft_EE = -1.;
    pTl0lZcandSoft_EE = -1.;
    etal0lZcandSoft_EE = -1.;
    ptcone30l0lZcandSoft_EE = -1.;
    etcone30l0lZcandSoft_EE = -1.;
    d0Sigl0lZcandSoft_EE = -1.;
    z0SinThetal0lZcandSoft_EE = -1.;
  }
  
  Nleptons_ZcandSoft_EE = Electron_ZcandSoft_vec.size();
  
  //ZcandSimple electrons: all electrons after the OR w/o m-j OR which are no signal electrons
  ml0lZcandSimple_EE = -1.;      
  mTl0lZcandSimple_EE = -1.;
  ICl0lZcandSimple_EE = -5;
  pTl0lZcandSimple_EE = -1.;
  etal0lZcandSimple_EE = -1.;
  ptcone30l0lZcandSimple_EE = -1.;
  etcone30l0lZcandSimple_EE = -1.;
  d0Sigl0lZcandSimple_EE = -1.;
  z0SinThetal0lZcandSimple_EE = -1.;
  
  ml1lZcandSimple_EE = -1.;
  mTl1lZcandSimple_EE = -1.;
  ICl1lZcandSimple_EE = -5;
  pTl1lZcandSimple_EE = -1.;
  etal1lZcandSimple_EE = -1.;
  ptcone30l1lZcandSimple_EE = -1.;
  etcone30l1lZcandSimple_EE = -1.;
  d0Sigl1lZcandSimple_EE = -1.;
  z0SinThetal1lZcandSimple_EE = -1.;
  
  ZcandLep_l0passesPT_EE = true;
  ZcandLep_l0passesEta_EE = true;
  ZcandLep_l0passesPTcone_EE = true;
  ZcandLep_l0passesETcone_EE = true;
  ZcandLep_l0passesD0_EE = true; 
  ZcandLep_l0passesZ0_EE = true; 
  ZcandLep_l0PassesMedium_EE = true;
  ZcandLep_l0PassesTight_EE = true; 
  ZcandLep_l0PassesORAndMllCut_EE = true;
  
  ZcandLep_l1passesPT_EE = true;
  ZcandLep_l1passesEta_EE = true;
  ZcandLep_l1passesPTcone_EE = true;
  ZcandLep_l1passesETcone_EE = true;
  ZcandLep_l1passesD0_EE = true; 
  ZcandLep_l1passesZ0_EE = true; 
  ZcandLep_l1PassesMedium_EE = true;
  ZcandLep_l1PassesTight_EE = true;
  ZcandLep_l1PassesORAndMllCut_EE = true;
  
  
  
  double DeltaMZ_l1lZcandSimple = 99999.;
  double DeltaMZ_l0lZcandSimple = 99999.;
  ElectronVector Electron_ZcandSimple_vec;
  Electron* el_lost_ZcandSimple;
  bool l0ZcandSimple_medium = true;
  bool l0ZcandSimple_tight = true;
  bool l1ZcandSimple_medium = true;
  bool l1ZcandSimple_tight = true;
  for(uint ie=0; ie<Electrons_all_vec.size(); ie++){
    Electron* el_ZcandSimple = Electrons_all_vec.at(ie);
    el_ZcandSimple->setState(NtSys_NOM);
    if((el_ZcandSimple->DeltaR(*el0) < 0.05) || (el_ZcandSimple->DeltaR(*el1) < 0.05)) continue; //no overlap w/ signal lepton

    TLorentzVector ZcandSimpleElec_TLV;
    ZcandSimpleElec_TLV.SetPtEtaPhiE(el_ZcandSimple->pt, el_ZcandSimple->eta ,el_ZcandSimple->phi, el_ZcandSimple->pt*cosh(el_ZcandSimple->eta));
    ZcandSimpleElec_TLV.SetPtEtaPhiM(el_ZcandSimple->pt, el_ZcandSimple->eta ,el_ZcandSimple->phi, el_ZcandSimple->m);
    
    if((el_ZcandSimple->q * el0->q)<0. || (el_ZcandSimple->q * el1->q)<0.){
      if(fabs(MZ - Mll(el0, el_ZcandSimple)) < fabs(MZ - Mll(el1, el_ZcandSimple))){
	if(fabs(MZ - Mll(el0, el_ZcandSimple)) < DeltaMZ_l0lZcandSimple){
	  Electron_ZcandSimple_vec.push_back(el_ZcandSimple);
	  ml0lZcandSimple_EE = (el0_TLV + ZcandSimpleElec_TLV).M();      
	  mTl0lZcandSimple_EE = calcMt(el0_TLV, ZcandSimpleElec_TLV);  
	  pTl0lZcandSimple_EE = el_ZcandSimple->pt;
	  etal0lZcandSimple_EE = fabs(el_ZcandSimple->eta);
	  float ptcone30 = elPtConeCorr(el_ZcandSimple, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	  ptcone30l0lZcandSimple_EE = ptcone30/el_ZcandSimple->pt;
	  float etcone = elEtTopoConeCorr(el_ZcandSimple, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	  etcone30l0lZcandSimple_EE = etcone/el_ZcandSimple->pt;		    	  
	  d0Sigl0lZcandSimple_EE = fabs(el_ZcandSimple->d0Sig(true));
	  z0SinThetal0lZcandSimple_EE = fabs(el_ZcandSimple->z0SinTheta(true));	
	  DeltaMZ_l0lZcandSimple = fabs(MZ - Mll(el0, el_ZcandSimple));
	  l0ZcandSimple_medium = el_ZcandSimple->mediumPP;
	  l0ZcandSimple_tight = el_ZcandSimple->tightPP;
	  el_lost_ZcandSimple = el_ZcandSimple;
	}
      }
      else{
	if(fabs(MZ - Mll(el1, el_ZcandSimple)) < DeltaMZ_l1lZcandSimple){
	  Electron_ZcandSimple_vec.push_back(el_ZcandSimple);
	  ml1lZcandSimple_EE = (el1_TLV + ZcandSimpleElec_TLV).M();      
	  mTl1lZcandSimple_EE = calcMt(el1_TLV, ZcandSimpleElec_TLV);  
	  pTl1lZcandSimple_EE = el_ZcandSimple->pt;
	  etal1lZcandSimple_EE = fabs(el_ZcandSimple->eta);
	  float ptcone30 = elPtConeCorr(el_ZcandSimple, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	  ptcone30l1lZcandSimple_EE = ptcone30/el_ZcandSimple->pt;
	  float etcone = elEtTopoConeCorr(el_ZcandSimple, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	  etcone30l1lZcandSimple_EE = etcone/el_ZcandSimple->pt;		    	  
	  d0Sigl1lZcandSimple_EE = fabs(el_ZcandSimple->d0Sig(true));
	  z0SinThetal1lZcandSimple_EE = fabs(el_ZcandSimple->z0SinTheta(true));	
	  DeltaMZ_l1lZcandSimple = fabs(MZ - Mll(el1, el_ZcandSimple));
	  l1ZcandSimple_medium = el_ZcandSimple->mediumPP;
	  l1ZcandSimple_tight = el_ZcandSimple->tightPP;
	  el_lost_ZcandSimple = el_ZcandSimple;
	}
      }
    }
  }

  
  if(DeltaMZ_l0lZcandSimple < DeltaMZ_l1lZcandSimple){
    ml1lZcandSimple_EE = -1.;
    mTl1lZcandSimple_EE = -1.;
    pTl1lZcandSimple_EE = -1.;
    etal1lZcandSimple_EE = -1.;
    ptcone30l1lZcandSimple_EE = -1.;
    etcone30l1lZcandSimple_EE = -1.;
    d0Sigl1lZcandSimple_EE = -1.;
    z0SinThetal1lZcandSimple_EE = -1.;
    
    if(pTl0lZcandSimple_EE < 10.) ZcandLep_l0passesPT_EE = false;
    if(ptcone30l0lZcandSimple_EE >= ELECTRON_PTCONE30_PT_CUT) ZcandLep_l0passesPTcone_EE = false;
    if(etcone30l0lZcandSimple_EE >= ELECTRON_TOPOCONE30_PT_CUT) ZcandLep_l0passesETcone_EE = false;
    if(d0Sigl0lZcandSimple_EE >= ELECTRON_D0SIG_CUT_WH) ZcandLep_l0passesD0_EE = false;
    if(z0SinThetal0lZcandSimple_EE >= ELECTRON_Z0_SINTHETA_CUT) ZcandLep_l0passesZ0_EE = false;
    if(!l0ZcandSimple_medium) ZcandLep_l0PassesMedium_EE = false;
    if(!l0ZcandSimple_tight) ZcandLep_l0PassesTight_EE = false;
    
    if(Electron_ZcandSimple_vec.size() > 0){
      ZcandLep_l0PassesORAndMllCut_EE = false;    
      for(uint ie=0; ie<Electrons_noJOR_vec.size(); ie++){
	Electron* el_WOjOR = Electrons_noJOR_vec.at(ie);
	el_WOjOR->setState(NtSys_NOM);
	if((el_WOjOR->DeltaR(*el_lost_ZcandSimple) < 0.0001)) ZcandLep_l0PassesORAndMllCut_EE = true;
      }
    }
  }
  else{
    ml0lZcandSimple_EE = -1.;
    mTl0lZcandSimple_EE = -1.;
    pTl0lZcandSimple_EE = -1.;
    etal0lZcandSimple_EE = -1.;
    ptcone30l0lZcandSimple_EE = -1.;
    etcone30l0lZcandSimple_EE = -1.;
    d0Sigl0lZcandSimple_EE = -1.;
    z0SinThetal0lZcandSimple_EE = -1.;
    
    if(pTl1lZcandSimple_EE < 10.) ZcandLep_l1passesPT_EE = false;
    if(ptcone30l1lZcandSimple_EE >= ELECTRON_PTCONE30_PT_CUT) ZcandLep_l1passesPTcone_EE = false;
    if(etcone30l1lZcandSimple_EE >= ELECTRON_TOPOCONE30_PT_CUT) ZcandLep_l1passesETcone_EE = false;
    if(d0Sigl1lZcandSimple_EE >= ELECTRON_D0SIG_CUT_WH) ZcandLep_l1passesD0_EE = false;
    if(z0SinThetal1lZcandSimple_EE >= ELECTRON_Z0_SINTHETA_CUT) ZcandLep_l1passesZ0_EE = false;
    if(!l1ZcandSimple_medium) ZcandLep_l1PassesMedium_EE = false;
    if(!l1ZcandSimple_tight) ZcandLep_l1PassesTight_EE = false;
    
    if(Electron_ZcandSimple_vec.size() > 0){
      ZcandLep_l1PassesORAndMllCut_EE = false;    
      for(uint ie=0; ie<Electrons_noJOR_vec.size(); ie++){
	Electron* el_WOjOR = Electrons_noJOR_vec.at(ie);
	el_WOjOR->setState(NtSys_NOM);
          if((el_WOjOR->DeltaR(*el_lost_ZcandSimple) < 0.0001)) ZcandLep_l1PassesORAndMllCut_EE = true;
      }
    }
  }
  
  Nleptons_ZcandSimple_EE = Electron_ZcandSimple_vec.size();
  
 JetVector prejets = getPreJets(&nt, NtSys_NOM); 
 for(uint ie=0; ie<Electron_ZcandSimple_vec.size(); ie++){
    Electron* el_ZcandSimple = Electron_ZcandSimple_vec.at(ie);
    for(uint ij=0; ij<prejets.size(); ij++){ 
      h_DeltaR_ljOR_EE->Fill(el_ZcandSimple->DeltaR(*prejets.at(ij)), weight_EE);
    }
    for(uint ie2=0; ie2<Electron_ZcandSimple_vec.size(); ie2++){
      if(el_ZcandSimple->DeltaR(*Electron_ZcandSimple_vec.at(ie2)) < 0.0001) continue;
      h_mllCut_EE->Fill(Mll(el_ZcandSimple, Electron_ZcandSimple_vec.at(ie2)), weight_EE);
    }
 }
 
//  
   //ZcandIso electrons: all electrons after the OR w/o m-j OR which are no signal electrons
  ml0lZcandIso_EE = -1.;      
  mTl0lZcandIso_EE = -1.;
  ICl0lZcandIso_EE = -5;
  pTl0lZcandIso_EE = -1.;
  etal0lZcandIso_EE = -1.;
  ptcone30l0lZcandIso_EE = -1.;
  etcone30l0lZcandIso_EE = -1.;
  d0Sigl0lZcandIso_EE = -1.;
  z0SinThetal0lZcandIso_EE = -1.;
  
  ml1lZcandIso_EE = -1.;
  mTl1lZcandIso_EE = -1.;
  ICl1lZcandIso_EE = -5;
  pTl1lZcandIso_EE = -1.;
  etal1lZcandIso_EE = -1.;
  ptcone30l1lZcandIso_EE = -1.;
  etcone30l1lZcandIso_EE = -1.;
  d0Sigl1lZcandIso_EE = -1.;
  z0SinThetal1lZcandIso_EE = -1.;
  
  double DeltaMZ_l1lZcandIso = 99999.;
  double DeltaMZ_l0lZcandIso = 99999.;
  ElectronVector Electron_ZcandIso_vec;
  Electron* el_lost_ZcandIso;

  for(uint ie=0; ie<Electrons_all_vec.size(); ie++){
    Electron* el_ZcandIso = Electrons_all_vec.at(ie);
    el_ZcandIso->setState(NtSys_NOM);
    if((el_ZcandIso->DeltaR(*el0) < 0.05) || (el_ZcandIso->DeltaR(*el1) < 0.05)) continue; //no overlap w/ signal lepton
    if((elPtConeCorr(el_ZcandIso, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC) / el_ZcandIso->pt) >= ELECTRON_PTCONE30_PT_CUT) continue;
    if((elEtTopoConeCorr(el_ZcandIso, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC) / el_ZcandIso->pt) >= ELECTRON_TOPOCONE30_PT_CUT) continue;

    TLorentzVector ZcandIsoElec_TLV;
    ZcandIsoElec_TLV.SetPtEtaPhiE(el_ZcandIso->pt, el_ZcandIso->eta ,el_ZcandIso->phi, el_ZcandIso->pt*cosh(el_ZcandIso->eta));
    ZcandIsoElec_TLV.SetPtEtaPhiM(el_ZcandIso->pt, el_ZcandIso->eta ,el_ZcandIso->phi, el_ZcandIso->m);
    
    if((el_ZcandIso->q * el0->q)<0. || (el_ZcandIso->q * el1->q)<0.){
      if(fabs(MZ - Mll(el0, el_ZcandIso)) < fabs(MZ - Mll(el1, el_ZcandIso))){
	if(fabs(MZ - Mll(el0, el_ZcandIso)) < DeltaMZ_l0lZcandIso){
	  Electron_ZcandIso_vec.push_back(el_ZcandIso);
	  ml0lZcandIso_EE = (el0_TLV + ZcandIsoElec_TLV).M();      
	  mTl0lZcandIso_EE = calcMt(el0_TLV, ZcandIsoElec_TLV);  
	  pTl0lZcandIso_EE = el_ZcandIso->pt;
	  etal0lZcandIso_EE = fabs(el_ZcandIso->eta);
	  float ptcone30 = elPtConeCorr(el_ZcandIso, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	  ptcone30l0lZcandIso_EE = ptcone30/el_ZcandIso->pt;
	  float etcone = elEtTopoConeCorr(el_ZcandIso, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	  etcone30l0lZcandIso_EE = etcone/el_ZcandIso->pt;		    	  
	  d0Sigl0lZcandIso_EE = fabs(el_ZcandIso->d0Sig(true));
	  z0SinThetal0lZcandIso_EE = fabs(el_ZcandIso->z0SinTheta(true));	
	  DeltaMZ_l0lZcandIso = fabs(MZ - Mll(el0, el_ZcandIso));
	}
      }
      else{
	if(fabs(MZ - Mll(el1, el_ZcandIso)) < DeltaMZ_l1lZcandIso){
	  Electron_ZcandIso_vec.push_back(el_ZcandIso);
	  ml1lZcandIso_EE = (el1_TLV + ZcandIsoElec_TLV).M();      
	  mTl1lZcandIso_EE = calcMt(el1_TLV, ZcandIsoElec_TLV);  
	  pTl1lZcandIso_EE = el_ZcandIso->pt;
	  etal1lZcandIso_EE = fabs(el_ZcandIso->eta);
	  float ptcone30 = elPtConeCorr(el_ZcandIso, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	  ptcone30l1lZcandIso_EE = ptcone30/el_ZcandIso->pt;
	  float etcone = elEtTopoConeCorr(el_ZcandIso, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	  etcone30l1lZcandIso_EE = etcone/el_ZcandIso->pt;		    	  
	  d0Sigl1lZcandIso_EE = fabs(el_ZcandIso->d0Sig(true));
	  z0SinThetal1lZcandIso_EE = fabs(el_ZcandIso->z0SinTheta(true));	
	  DeltaMZ_l1lZcandIso = fabs(MZ - Mll(el1, el_ZcandIso));
	}
      }
    }
  }

  
  if(DeltaMZ_l0lZcandIso < DeltaMZ_l1lZcandIso){
    ml1lZcandIso_EE = -1.;
    mTl1lZcandIso_EE = -1.;
    pTl1lZcandIso_EE = -1.;
    etal1lZcandIso_EE = -1.;
    ptcone30l1lZcandIso_EE = -1.;
    etcone30l1lZcandIso_EE = -1.;
    d0Sigl1lZcandIso_EE = -1.;
    z0SinThetal1lZcandIso_EE = -1.;
  }
  else{
    ml0lZcandIso_EE = -1.;
    mTl0lZcandIso_EE = -1.;
    pTl0lZcandIso_EE = -1.;
    etal0lZcandIso_EE = -1.;
    ptcone30l0lZcandIso_EE = -1.;
    etcone30l0lZcandIso_EE = -1.;
    d0Sigl0lZcandIso_EE = -1.;
    z0SinThetal0lZcandIso_EE = -1.;
    
  }
  
  Nleptons_ZcandIso_EE = Electron_ZcandIso_vec.size();

  		  
   mZTT_coll = calcMZTauTau_coll(el0_TLV, el1_TLV, met_TLV); 
}

void TSelector_SusyNtuple::calc_MM_variables(LeptonVector &leptons, Muon* mu0, Muon* mu1, TLorentzVector mu0_TLV, TLorentzVector mu1_TLV, TLorentzVector met_TLV, TLorentzVector signalJet0_TLV, TLorentzVector signalJet1_TLV, bool useForwardJets, SusyNtObject* susyNt, float weight_MM){
  
  TLorentzVector mu0_TLV_n, mu1_TLV_n;
  mu0_TLV_n.SetPtEtaPhiE(mu0->pt, mu0->eta ,mu0->phi, mu0->pt*cosh(mu0->eta));
  mu0_TLV_n.SetPtEtaPhiM(mu0->pt, mu0->eta ,mu0->phi, mu0->m);
  mu0_TLV_n.SetPtEtaPhiE(mu1->pt, mu1->eta ,mu1->phi, mu1->pt*cosh(mu1->eta));
  mu0_TLV_n.SetPtEtaPhiM(mu1->pt, mu1->eta ,mu1->phi, mu1->m);
  
  DeltaR_MM = mu0_TLV.DeltaR(mu1_TLV);
  pTl0_MM = mu0_TLV.Pt() > mu1_TLV.Pt() ? mu0_TLV.Pt() : mu1_TLV.Pt();
  pTl1_MM = mu0_TLV.Pt() > mu1_TLV.Pt() ? mu1_TLV.Pt() : mu0_TLV.Pt();
  etal0_MM = mu0_TLV.Eta();
  etal1_MM = mu1_TLV.Eta();
  pTll_MM = (mu0_TLV_n + mu1_TLV_n).Pt();
  Mll_MM = Mll(mu0, mu1);
  METrel_MM = recalcMetRel(met_TLV, mu0_TLV, mu1_TLV, m_signalJets2Lep, useForwardJets);
  MET_MM = met_TLV.Pt();
  HT_MM = calcHT(mu0_TLV, mu1_TLV, met_TLV, m_signalJets2Lep);
  mTWW_MM = calcMt((mu0_TLV + mu1_TLV), met_TLV);

  mT_MM = calcMt((mu0_TLV+mu1_TLV), met_TLV);
  mTmin_MM = (calcMt(mu0_TLV, met_TLV) > calcMt(mu1_TLV, met_TLV)) ? calcMt(mu1_TLV, met_TLV) : calcMt(mu0_TLV, met_TLV);
  mTmax_MM = (calcMt(mu0_TLV, met_TLV) < calcMt(mu1_TLV, met_TLV)) ? calcMt(mu1_TLV, met_TLV) : calcMt(mu0_TLV, met_TLV);
  mTl0MET_MM = calcMt(mu0_TLV, met_TLV);
  mTl1MET_MM = calcMt(mu1_TLV, met_TLV);
  mMET_MM = (mu0_TLV + mu1_TLV + met_TLV).M();
  DeltaPhi_MM = fabs(mu0_TLV.DeltaPhi(mu1_TLV));
  DeltaPhiMETl0_MM = fabs(mu0_TLV.DeltaPhi(met_TLV));
  DeltaPhiMETl1_MM = fabs(mu1_TLV.DeltaPhi(met_TLV));
  DeltaPhiMET_MM = fabs((mu0_TLV + mu1_TLV).DeltaPhi(met_TLV));
  if(nSignalJets>0){
    DeltaPhilljj_MM = (nSignalJets>1) ? fabs((mu0_TLV + mu1_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV)) : fabs((mu0_TLV + mu1_TLV).DeltaPhi(signalJet0_TLV));
    DeltaPhil0jj_MM = (nSignalJets>1) ?  ((mu0_TLV.Pt()> mu1_TLV.Pt()) ? (mu0_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV) : (mu1_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV)) : ((mu0_TLV.Pt()> mu1_TLV.Pt()) ? (mu0_TLV).DeltaPhi(signalJet0_TLV) : (mu1_TLV).DeltaPhi(signalJet0_TLV));
    DeltaPhil1jj_MM= (nSignalJets>1) ?  ((mu0_TLV.Pt()< mu1_TLV.Pt()) ? (mu1_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV) : (mu0_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV)) : ((mu0_TLV.Pt()< mu1_TLV.Pt()) ? (mu1_TLV).DeltaPhi(signalJet0_TLV) : (mu0_TLV).DeltaPhi(signalJet0_TLV));
    DeltaRlljj_MM = (nSignalJets>1) ?  (mu0_TLV + mu1_TLV).DeltaR(signalJet0_TLV + signalJet1_TLV) : (mu0_TLV + mu1_TLV).DeltaR(signalJet0_TLV);
  }
  
  //Mljj: invariant mass of the lepton-dijet system formed by the two highest pT jets and the lepton closest to the dijet axis.
  Mljj_MM = -1.;
  if(nSignalJets>1){
    double DeltaRDijetMu0 = mu0_TLV.DeltaR(signalJet0_TLV + signalJet1_TLV); //sqrt(pow(fabs(etaDijetAxis - mu0_TLV.Eta()),2) + pow(fabs(phiDijetAxis - mu0_TLV.Phi()),2));
    double DeltaRDijetMu1 = mu1_TLV.DeltaR(signalJet0_TLV + signalJet1_TLV); //sqrt(pow(fabs(etaDijetAxis - mu1_TLV.Eta()),2) + pow(fabs(phiDijetAxis - mu1_TLV.Phi()),2));
    TLorentzVector closestMuonDijetAxis_TLV = (DeltaRDijetMu0 > DeltaRDijetMu1) ? mu1_TLV : mu0_TLV;
    Mljj_MM = (signalJet0_TLV + signalJet1_TLV + closestMuonDijetAxis_TLV).M();
  }
  
  mT2_MM = calcMT2(met_TLV, mu0_TLV, mu1_TLV);
  if(nSignalJets>1){
    mT2J_MM = calcMT2J(met_TLV, mu0_TLV, mu1_TLV, signalJet0_TLV, signalJet1_TLV);
  }
  
  DeltaEtall_MM = fabs(mu0_TLV.Eta() - mu1_TLV.Eta());
  
bool unbiased = true;
  if(unbiased){
    D0_branch_l0_MM = mu0->d0Unbiased;
    D0_branch_l1_MM = mu1->d0Unbiased;
    D0err_branch_l0_MM = mu0->errD0Unbiased;
    D0err_branch_l1_MM = mu1->errD0Unbiased;
  }
  else{
    D0_branch_l0_MM = mu0->d0;
    D0_branch_l1_MM = mu1->d0;
    D0err_branch_l0_MM = mu0->errD0;
    D0err_branch_l1_MM = mu1->errD0;
  }
  
  sD0Signif_branch_l0_MM = calc_D0(unbiased, leptons.at(0)) / D0err_branch_l0_MM;
  sD0Signif_branch_l1_MM = calc_D0(unbiased, leptons.at(1)) / D0err_branch_l1_MM;

  ElectronVector preElectrons = getPreElectrons(&nt, NtSys_NOM);
  
  // Remove electrons from electrons
  e_e_overlap(preElectrons, E_E_DR);
  ElectronVector ElectronsAfterORWSFLepton_vec = preElectrons;

  //find muons that were lost in e-m or m-m OR or due to mll cut:
  ml0lZcand_MM = -1.;      
  mTl0lZcand_MM = -1.;
  pTl0lZcand_MM = -1.;
  etal0lZcand_MM = -1.;
  ptcone30l0lZcand_MM = -1.;
  d0Sigl0lZcand_MM = -1.;
  z0SinThetal0lZcand_MM = -1.;
  
  ml1lZcand_MM = -1.;
  mTl1lZcand_MM = -1.;
  pTl1lZcand_MM = -1.;
  etal1lZcand_MM = -1.;
  ptcone30l1lZcand_MM = -1.;
  d0Sigl1lZcand_MM = -1.;
  z0SinThetal1lZcand_MM = -1.;
  
  MuonVector MuonWOjOR_vec = getPreMuons(&nt, NtSys_NOM);  
  e_m_overlap(ElectronsAfterORWSFLepton_vec, MuonWOjOR_vec, E_M_DR);
  m_m_overlap(MuonWOjOR_vec, M_M_DR);
  removeSFOSPair(MuonWOjOR_vec, MLL_MIN);
  
  //Zcand muons: all muons after the OR w/o m-j OR which are no signal muons
  double DeltaMZ_l0lZcand = 99999.;
  double DeltaMZ_l1lZcand = 99999.;
  MuonVector Muon_Zcand_vec;  

  for(uint im=0; im<MuonWOjOR_vec.size(); im++){
    Muon* mu_WOjOR = MuonWOjOR_vec.at(im);
    mu_WOjOR->setState(NtSys_NOM);
    if((mu_WOjOR->DeltaR(*mu0) < 0.0001) || (mu_WOjOR->DeltaR(*mu1) < 0.0001)) continue; //no signal lepton

    TLorentzVector ZcandMuon_TLV;
    ZcandMuon_TLV.SetPtEtaPhiE(mu_WOjOR->pt, mu_WOjOR->eta ,mu_WOjOR->phi, mu_WOjOR->pt*cosh(mu_WOjOR->eta));
    ZcandMuon_TLV.SetPtEtaPhiM(mu_WOjOR->pt, mu_WOjOR->eta ,mu_WOjOR->phi, mu_WOjOR->m);
    if((mu_WOjOR->q * mu0->q)<0. || (mu_WOjOR->q * mu1->q)<0.){
      
      if(fabs(MZ - Mll(mu0, mu_WOjOR)) < fabs(MZ - Mll(mu1, mu_WOjOR))){
	if(fabs(MZ - Mll(mu0, mu_WOjOR)) < DeltaMZ_l0lZcand){
	  Muon_Zcand_vec.push_back(mu_WOjOR);
	  ml0lZcand_MM = Mll(mu0, mu_WOjOR);      
	  mTl0lZcand_MM = calcMt(mu0_TLV, ZcandMuon_TLV);  
	  ICl0lZcand_MM = mu_WOjOR->isCombined;
	  pTl0lZcand_MM = mu_WOjOR->pt;
	  etal0lZcand_MM = fabs(mu_WOjOR->eta);
	  ptcone30l0lZcand_MM = mu_WOjOR->ptcone30ElStyle/mu_WOjOR->pt;
	  d0Sigl0lZcand_MM = fabs(mu_WOjOR->d0Sig(true));
	  z0SinThetal0lZcand_MM = fabs(mu_WOjOR->z0SinTheta(true));	
	  DeltaMZ_l0lZcand = fabs(MZ - Mll(mu0, mu_WOjOR));
	}
      }
      else{
	if(fabs(MZ - Mll(mu1, mu_WOjOR)) < DeltaMZ_l1lZcand){
	  Muon_Zcand_vec.push_back(mu_WOjOR);
	  ml1lZcand_MM = (mu1_TLV + ZcandMuon_TLV).M();      
	  mTl1lZcand_MM = calcMt(mu1_TLV, ZcandMuon_TLV);  
	  ICl1lZcand_MM = mu_WOjOR->isCombined;
	  pTl1lZcand_MM = mu_WOjOR->pt;
	  etal1lZcand_MM = fabs(mu_WOjOR->eta);
	  ptcone30l1lZcand_MM = mu_WOjOR->ptcone30ElStyle/mu_WOjOR->pt;
	  d0Sigl1lZcand_MM = fabs(mu_WOjOR->d0Sig(true));
	  z0SinThetal1lZcand_MM = fabs(mu_WOjOR->z0SinTheta(true));	
	  DeltaMZ_l1lZcand = fabs(MZ - Mll(mu1, mu_WOjOR));
	}
      }
    }
      
  }
  
  if(DeltaMZ_l0lZcand < DeltaMZ_l1lZcand){
    ml1lZcand_MM = -1.;
    mTl1lZcand_MM = -1.;
    pTl1lZcand_MM = -1.;
    etal1lZcand_MM = -1.;
    ptcone30l1lZcand_MM = -1.;
    d0Sigl1lZcand_MM = -1.;
    z0SinThetal1lZcand_MM = -1.;
  }
  else{
    ml0lZcand_MM = -1.;      
    mTl0lZcand_MM = -1.;
    ICl0lZcand_MM = -5.;
    pTl0lZcand_MM = -1.;
    etal0lZcand_MM = -1.;
    ptcone30l0lZcand_MM = -1.;
    d0Sigl0lZcand_MM = -1.;
    z0SinThetal0lZcand_MM = -1.;
  }
  
 
  Nleptons_Zcand_MM = Muon_Zcand_vec.size();
  
  //find muons that were lost in e-m or m-m OR or due to mll cut:
  ml0lZcandSoft_MM = -1.;      
  mTl0lZcandSoft_MM = -1.;
  pTl0lZcandSoft_MM = -1.;
  etal0lZcandSoft_MM = -1.;
  ptcone30l0lZcandSoft_MM = -1.;
  d0Sigl0lZcandSoft_MM = -1.;
  z0SinThetal0lZcandSoft_MM = -1.;
  
  ml1lZcandSoft_MM = -1.;
  mTl1lZcandSoft_MM = -1.;
  pTl1lZcandSoft_MM = -1.;
  etal1lZcandSoft_MM = -1.;
  ptcone30l1lZcandSoft_MM = -1.;
  d0Sigl1lZcandSoft_MM = -1.;
  z0SinThetal1lZcandSoft_MM = -1.;
  
  MuonVector Muons_all_vec;
  for(uint im=0; im<susyNt->muo()->size(); ++im){
    Muon* mu = & susyNt->muo()->at(im);
    mu->setState(NtSys_NOM);    
    Muons_all_vec.push_back(mu);
  }
  
  ElectronVector Electrons_all_vec;
  for(uint ie=0; ie<susyNt->ele()->size(); ++ie){
    Electron* e = & susyNt->ele()->at(ie);
    e->setState(NtSys_NOM);

    Electrons_all_vec.push_back(e);
  }
  ElectronVector Electrons_noJOR_vec = Electrons_all_vec;
  MuonVector Muons_noJOR_vec = Muons_all_vec;
  e_e_overlap(Electrons_noJOR_vec, E_E_DR);
  // Remove electrons and muons that overlap
  e_m_overlap(Electrons_noJOR_vec, Muons_noJOR_vec, E_M_DR);
  m_m_overlap(Muons_noJOR_vec, M_M_DR);
  removeSFOSPair(Muons_noJOR_vec, MLL_MIN);
  
  //ZcandSoft muons: all muons after the OR w/o m-j OR which are no signal muons
  double DeltaMZ_l0lZcandSoft = 99999.;
  double DeltaMZ_l1lZcandSoft = 99999.;
  MuonVector Muon_ZcandSoft_vec;  

  for(uint im=0; im<Muons_noJOR_vec.size(); im++){
    Muon* mu_WOjOR = Muons_noJOR_vec.at(im);
    mu_WOjOR->setState(NtSys_NOM);
    if((mu_WOjOR->DeltaR(*mu0) < 0.0001) || (mu_WOjOR->DeltaR(*mu1) < 0.0001)) continue; //no signal lepton
//     if(fabs(mu_WOjOR->d0Sig(true)) >= MUON_D0SIG_CUT) continue;
    TLorentzVector ZcandSoftMuon_TLV;
    ZcandSoftMuon_TLV.SetPtEtaPhiE(mu_WOjOR->pt, mu_WOjOR->eta ,mu_WOjOR->phi, mu_WOjOR->pt*cosh(mu_WOjOR->eta));
    ZcandSoftMuon_TLV.SetPtEtaPhiM(mu_WOjOR->pt, mu_WOjOR->eta ,mu_WOjOR->phi, mu_WOjOR->m);
    if((mu_WOjOR->q * mu0->q)<0. || (mu_WOjOR->q * mu1->q)<0.){
      
      if(fabs(MZ - Mll(mu0, mu_WOjOR)) < fabs(MZ - Mll(mu1, mu_WOjOR))){
	if(fabs(MZ - Mll(mu0, mu_WOjOR)) < DeltaMZ_l0lZcandSoft){
	  Muon_ZcandSoft_vec.push_back(mu_WOjOR);
	  ml0lZcandSoft_MM = Mll(mu0, mu_WOjOR);      
	  mTl0lZcandSoft_MM = calcMt(mu0_TLV, ZcandSoftMuon_TLV);  
	  ICl0lZcandSoft_MM = mu_WOjOR->isCombined;
	  pTl0lZcandSoft_MM = mu_WOjOR->pt;
	  etal0lZcandSoft_MM = fabs(mu_WOjOR->eta);
	  ptcone30l0lZcandSoft_MM = mu_WOjOR->ptcone30ElStyle/mu_WOjOR->pt;
	  d0Sigl0lZcandSoft_MM = fabs(mu_WOjOR->d0Sig(true));
	  z0SinThetal0lZcandSoft_MM = fabs(mu_WOjOR->z0SinTheta(true));	
	  DeltaMZ_l0lZcandSoft = fabs(MZ - Mll(mu0, mu_WOjOR));
	}
      }
      else{
	if(fabs(MZ - Mll(mu1, mu_WOjOR)) < DeltaMZ_l1lZcandSoft){
	  Muon_ZcandSoft_vec.push_back(mu_WOjOR);
	  ml1lZcandSoft_MM = (mu1_TLV + ZcandSoftMuon_TLV).M();      
	  mTl1lZcandSoft_MM = calcMt(mu1_TLV, ZcandSoftMuon_TLV);  
	  ICl1lZcandSoft_MM = mu_WOjOR->isCombined;
	  pTl1lZcandSoft_MM = mu_WOjOR->pt;
	  etal1lZcandSoft_MM = fabs(mu_WOjOR->eta);
	  ptcone30l1lZcandSoft_MM = mu_WOjOR->ptcone30ElStyle/mu_WOjOR->pt;
	  d0Sigl1lZcandSoft_MM = fabs(mu_WOjOR->d0Sig(true));
	  z0SinThetal1lZcandSoft_MM = fabs(mu_WOjOR->z0SinTheta(true));	
	  DeltaMZ_l1lZcandSoft = fabs(MZ - Mll(mu1, mu_WOjOR));
	}
      }
    }
      
  } 
  
    
  if(DeltaMZ_l0lZcandSoft < DeltaMZ_l1lZcandSoft){
    ml1lZcandSoft_MM = -1.;
    mTl1lZcandSoft_MM = -1.;
    pTl1lZcandSoft_MM = -1.;
    etal1lZcandSoft_MM = -1.;
    ptcone30l1lZcandSoft_MM = -1.;
    d0Sigl1lZcandSoft_MM = -1.;
    z0SinThetal1lZcandSoft_MM = -1.;
  }
  else{
    ml0lZcandSoft_MM = -1.;      
    mTl0lZcandSoft_MM = -1.;
    ICl0lZcandSoft_MM = -5.;
    pTl0lZcandSoft_MM = -1.;
    etal0lZcandSoft_MM = -1.;
    ptcone30l0lZcandSoft_MM = -1.;
    d0Sigl0lZcandSoft_MM = -1.;
    z0SinThetal0lZcandSoft_MM = -1.;
  }
  
  Nleptons_ZcandSoft_MM = Muon_ZcandSoft_vec.size();
  
  
  ml0lZcandSimple_MM = -1.;      
  mTl0lZcandSimple_MM = -1.;
  pTl0lZcandSimple_MM = -1.;
  etal0lZcandSimple_MM = -1.;
  ptcone30l0lZcandSimple_MM = -1.;
  d0Sigl0lZcandSimple_MM = -1.;
  z0SinThetal0lZcandSimple_MM = -1.;
  
  ml1lZcandSimple_MM = -1.;
  mTl1lZcandSimple_MM = -1.;
  pTl1lZcandSimple_MM = -1.;
  etal1lZcandSimple_MM = -1.;
  ptcone30l1lZcandSimple_MM = -1.;
  d0Sigl1lZcandSimple_MM = -1.;
  z0SinThetal1lZcandSimple_MM = -1.;
  //ZcandSimple muons: all muons, only check for distance to signal muons
  double DeltaMZ_l0lZcandSimple = 99999.;
  double DeltaMZ_l1lZcandSimple = 99999.;
  MuonVector Muon_ZcandSimple_vec;
  Muon* mu_lost_ZcandSimple;
  for(uint im=0; im<Muons_all_vec.size(); im++){
    Muon* mu_ZcandSimple = Muons_all_vec.at(im);
    mu_ZcandSimple->setState(NtSys_NOM);
    if((mu_ZcandSimple->DeltaR(*mu0) < 0.05) || (mu_ZcandSimple->DeltaR(*mu1) < 0.05)) continue; //only check for separation of signal leptons

    TLorentzVector ZcandSimple_TLV;
    ZcandSimple_TLV.SetPtEtaPhiE(mu_ZcandSimple->pt, mu_ZcandSimple->eta ,mu_ZcandSimple->phi, mu_ZcandSimple->pt*cosh(mu_ZcandSimple->eta));
    ZcandSimple_TLV.SetPtEtaPhiM(mu_ZcandSimple->pt, mu_ZcandSimple->eta ,mu_ZcandSimple->phi, mu_ZcandSimple->m);
    if((mu_ZcandSimple->q * mu0->q)<0. || (mu_ZcandSimple->q * mu1->q)<0.){
      
      if(fabs(MZ - Mll(mu0, mu_ZcandSimple)) < fabs(MZ - Mll(mu1, mu_ZcandSimple))){
	if(fabs(MZ - Mll(mu0, mu_ZcandSimple)) < DeltaMZ_l0lZcandSimple){
	  Muon_ZcandSimple_vec.push_back(mu_ZcandSimple);
	  ml0lZcandSimple_MM = Mll(mu0, mu_ZcandSimple);      
	  mTl0lZcandSimple_MM = calcMt(mu0_TLV, ZcandSimple_TLV);  
	  ICl0lZcandSimple_MM = mu_ZcandSimple->isCombined;
	  pTl0lZcandSimple_MM = mu_ZcandSimple->pt;
	  etal0lZcandSimple_MM = fabs(mu_ZcandSimple->eta);
	  ptcone30l0lZcandSimple_MM = mu_ZcandSimple->ptcone30ElStyle/mu_ZcandSimple->pt;
	  d0Sigl0lZcandSimple_MM = fabs(mu_ZcandSimple->d0Sig(true));
	  z0SinThetal0lZcandSimple_MM = fabs(mu_ZcandSimple->z0SinTheta(true));	
	  DeltaMZ_l0lZcandSimple = fabs(MZ - Mll(mu0, mu_ZcandSimple));
	  mu_lost_ZcandSimple = mu_ZcandSimple;
	  
	}
      }
      else{
	if(fabs(MZ - Mll(mu1, mu_ZcandSimple)) < DeltaMZ_l1lZcandSimple){
	  Muon_ZcandSimple_vec.push_back(mu_ZcandSimple);
	  ml1lZcandSimple_MM = (mu1_TLV + ZcandSimple_TLV).M();      
	  mTl1lZcandSimple_MM = calcMt(mu1_TLV, ZcandSimple_TLV);  
	  ICl1lZcandSimple_MM = mu_ZcandSimple->isCombined;
	  pTl1lZcandSimple_MM = mu_ZcandSimple->pt;
	  etal1lZcandSimple_MM = fabs(mu_ZcandSimple->eta);
	  ptcone30l1lZcandSimple_MM = mu_ZcandSimple->ptcone30ElStyle/mu_ZcandSimple->pt;
	  d0Sigl1lZcandSimple_MM = fabs(mu_ZcandSimple->d0Sig(true));
	  z0SinThetal1lZcandSimple_MM = fabs(mu_ZcandSimple->z0SinTheta(true));	
	  DeltaMZ_l1lZcandSimple = fabs(MZ - Mll(mu1, mu_ZcandSimple));
	  mu_lost_ZcandSimple = mu_ZcandSimple;
	}
      }
    }
      
  }
 Nleptons_ZcandSimple_MM = Muon_ZcandSimple_vec.size(); 
 
 JetVector prejets = getPreJets(&nt, NtSys_NOM); 
 for(uint im=0; im<Muon_ZcandSimple_vec.size(); im++){
    Muon* mu_ZcandSimple = Muon_ZcandSimple_vec.at(im);
    for(uint ij=0; ij<prejets.size(); ij++){ 
      h_DeltaR_ljOR_MM->Fill(mu_ZcandSimple->DeltaR(*prejets.at(ij)), weight_MM);
    }
    for(uint im2=0; im2<Muon_ZcandSimple_vec.size(); im2++){
      if(mu_ZcandSimple->DeltaR(*Muon_ZcandSimple_vec.at(im2)) < 0.0001)continue;
      h_mllCut_MM->Fill(Mll(mu_ZcandSimple, Muon_ZcandSimple_vec.at(im2)), weight_MM);
    }
 }
 
 
  
  
  ZcandLep_l0passesPT_MM = true;
  ZcandLep_l0passesEta_MM = true;
  ZcandLep_l0passesPTcone_MM = true;
  ZcandLep_l0passesETcone_MM = true;
  ZcandLep_l0passesD0_MM = true; 
  ZcandLep_l0passesZ0_MM = true; 
  ZcandLep_l0PassesMedium_MM = true;
  ZcandLep_l0PassesTight_MM = true; 
  ZcandLep_l0PassesORAndMllCut_MM = true; 
  
  ZcandLep_l1passesPT_MM = true;
  ZcandLep_l1passesEta_MM = true;
  ZcandLep_l1passesPTcone_MM = true;
  ZcandLep_l1passesETcone_MM = true;
  ZcandLep_l1passesD0_MM = true; 
  ZcandLep_l1passesZ0_MM = true; 
  ZcandLep_l1PassesMedium_MM = true;
  ZcandLep_l1PassesTight_MM = true;
  ZcandLep_l1PassesORAndMllCut_MM = true;

  if(DeltaMZ_l0lZcandSimple < DeltaMZ_l1lZcandSimple){
    ml1lZcandSimple_MM = -1.;
    mTl1lZcandSimple_MM = -1.;
    pTl1lZcandSimple_MM = -1.;
    etal1lZcandSimple_MM = -1.;
    ptcone30l1lZcandSimple_MM = -1.;
    d0Sigl1lZcandSimple_MM = -1.;
    z0SinThetal1lZcandSimple_MM = -1.;
    
    if(pTl0lZcandSimple_MM < 10.) ZcandLep_l0passesPT_MM = false;
    if(etal0lZcandSimple_MM >= 2.4) ZcandLep_l0passesEta_MM = false;
    if(ptcone30l0lZcandSimple_MM >= MUON_PTCONE30ELSTYLE_PT_CUT) ZcandLep_l0passesPTcone_MM = false;
    if(d0Sigl0lZcandSimple_MM >= MUON_D0SIG_CUT) ZcandLep_l0passesD0_MM = false;
    if(z0SinThetal0lZcandSimple_MM >= MUON_Z0_SINTHETA_CUT) ZcandLep_l0passesZ0_MM = false;
    if(Muon_ZcandSimple_vec.size() > 0){
      ZcandLep_l0PassesORAndMllCut_MM = false; 
      for(uint im=0; im<Muons_noJOR_vec.size(); im++){
	Muon* mu_WOjOR = Muons_noJOR_vec.at(im);
	mu_WOjOR->setState(NtSys_NOM);
	if((mu_WOjOR->DeltaR(*mu_lost_ZcandSimple) < 0.0001)) ZcandLep_l0PassesORAndMllCut_MM = true;
      }
    }
  }
  else{
    ml0lZcandSimple_MM = -1.;      
    mTl0lZcandSimple_MM = -1.;
    ICl0lZcandSimple_MM = -5.;
    pTl0lZcandSimple_MM = -1.;
    etal0lZcandSimple_MM = -1.;
    ptcone30l0lZcandSimple_MM = -1.;
    d0Sigl0lZcandSimple_MM = -1.;
    z0SinThetal0lZcandSimple_MM = -1.;
    
    if(pTl1lZcandSimple_MM < 10.) ZcandLep_l1passesPT_MM = false;
    if(etal1lZcandSimple_MM >= 2.4) ZcandLep_l1passesEta_MM = false;
    if(ptcone30l1lZcandSimple_MM >= MUON_PTCONE30ELSTYLE_PT_CUT) ZcandLep_l1passesPTcone_MM = false;
    if(d0Sigl1lZcandSimple_MM >= MUON_D0SIG_CUT) ZcandLep_l1passesD0_MM = false;
    if(z0SinThetal1lZcandSimple_MM >= MUON_Z0_SINTHETA_CUT) ZcandLep_l1passesZ0_MM = false;

    if(Muon_ZcandSimple_vec.size() > 0){
      ZcandLep_l1PassesORAndMllCut_MM = false;
      for(uint im=0; im<Muons_noJOR_vec.size(); im++){
	Muon* mu_WOjOR = Muons_noJOR_vec.at(im);
	mu_WOjOR->setState(NtSys_NOM);
	if((mu_WOjOR->DeltaR(*mu_lost_ZcandSimple) < 0.0001)) ZcandLep_l1PassesORAndMllCut_MM = true;
      }
    }
  }
  
  
//ZcandIso muons: all muons, only check for distance to signal muons
  ml0lZcandIso_MM = -1.;      
  mTl0lZcandIso_MM = -1.;
  pTl0lZcandIso_MM = -1.;
  etal0lZcandIso_MM = -1.;
  ptcone30l0lZcandIso_MM = -1.;
  d0Sigl0lZcandIso_MM = -1.;
  z0SinThetal0lZcandIso_MM = -1.;
  
  ml1lZcandIso_MM = -1.;
  mTl1lZcandIso_MM = -1.;
  pTl1lZcandIso_MM = -1.;
  etal1lZcandIso_MM = -1.;
  ptcone30l1lZcandIso_MM = -1.;
  d0Sigl1lZcandIso_MM = -1.;
  z0SinThetal1lZcandIso_MM = -1.;
  
  double DeltaMZ_l0lZcandIso = 99999.;
  double DeltaMZ_l1lZcandIso = 99999.;
  MuonVector Muon_ZcandIso_vec;
  Muon* mu_lost_ZcandIso;
  for(uint im=0; im<Muons_all_vec.size(); im++){
    Muon* mu_ZcandIso = Muons_all_vec.at(im);
    mu_ZcandIso->setState(NtSys_NOM);
    if((mu_ZcandIso->DeltaR(*mu0) < 0.05) || (mu_ZcandIso->DeltaR(*mu1) < 0.05)) continue; //only check for separation of signal leptons
    if(mu_ZcandIso->ptcone30ElStyle/mu_ZcandIso->pt >= MUON_PTCONE30ELSTYLE_PT_CUT) continue;

    TLorentzVector ZcandIso_TLV;
    ZcandIso_TLV.SetPtEtaPhiE(mu_ZcandIso->pt, mu_ZcandIso->eta ,mu_ZcandIso->phi, mu_ZcandIso->pt*cosh(mu_ZcandIso->eta));
    ZcandIso_TLV.SetPtEtaPhiM(mu_ZcandIso->pt, mu_ZcandIso->eta ,mu_ZcandIso->phi, mu_ZcandIso->m);
    if((mu_ZcandIso->q * mu0->q)<0. || (mu_ZcandIso->q * mu1->q)<0.){
      
      if(fabs(MZ - Mll(mu0, mu_ZcandIso)) < fabs(MZ - Mll(mu1, mu_ZcandIso))){
	if(fabs(MZ - Mll(mu0, mu_ZcandIso)) < DeltaMZ_l0lZcandIso){
	  Muon_ZcandIso_vec.push_back(mu_ZcandIso);
	  ml0lZcandIso_MM = Mll(mu0, mu_ZcandIso);      
	  mTl0lZcandIso_MM = calcMt(mu0_TLV, ZcandIso_TLV);  
	  ICl0lZcandIso_MM = mu_ZcandIso->isCombined;
	  pTl0lZcandIso_MM = mu_ZcandIso->pt;
	  etal0lZcandIso_MM = fabs(mu_ZcandIso->eta);
	  ptcone30l0lZcandIso_MM = mu_ZcandIso->ptcone30ElStyle/mu_ZcandIso->pt;
	  d0Sigl0lZcandIso_MM = fabs(mu_ZcandIso->d0Sig(true));
	  z0SinThetal0lZcandIso_MM = fabs(mu_ZcandIso->z0SinTheta(true));	
	  DeltaMZ_l0lZcandIso = fabs(MZ - Mll(mu0, mu_ZcandIso));
	  mu_lost_ZcandIso = mu_ZcandIso;
	  
	}
      }
      else{
	if(fabs(MZ - Mll(mu1, mu_ZcandIso)) < DeltaMZ_l1lZcandIso){
	  Muon_ZcandIso_vec.push_back(mu_ZcandIso);
	  ml1lZcandIso_MM = (mu1_TLV + ZcandIso_TLV).M();      
	  mTl1lZcandIso_MM = calcMt(mu1_TLV, ZcandIso_TLV);  
	  ICl1lZcandIso_MM = mu_ZcandIso->isCombined;
	  pTl1lZcandIso_MM = mu_ZcandIso->pt;
	  etal1lZcandIso_MM = fabs(mu_ZcandIso->eta);
	  ptcone30l1lZcandIso_MM = mu_ZcandIso->ptcone30ElStyle/mu_ZcandIso->pt;
	  d0Sigl1lZcandIso_MM = fabs(mu_ZcandIso->d0Sig(true));
	  z0SinThetal1lZcandIso_MM = fabs(mu_ZcandIso->z0SinTheta(true));	
	  DeltaMZ_l1lZcandIso = fabs(MZ - Mll(mu1, mu_ZcandIso));
	  mu_lost_ZcandIso = mu_ZcandIso;
	}
      }
    }
      
  }
 Nleptons_ZcandIso_MM = Muon_ZcandIso_vec.size(); 

 
  if(DeltaMZ_l0lZcandIso < DeltaMZ_l1lZcandIso){
    ml1lZcandIso_MM = -1.;
    mTl1lZcandIso_MM = -1.;
    pTl1lZcandIso_MM = -1.;
    etal1lZcandIso_MM = -1.;
    ptcone30l1lZcandIso_MM = -1.;
    d0Sigl1lZcandIso_MM = -1.;
    z0SinThetal1lZcandIso_MM = -1.;

  }
  else{
    ml0lZcandIso_MM = -1.;      
    mTl0lZcandIso_MM = -1.;
    ICl0lZcandIso_MM = -5.;
    pTl0lZcandIso_MM = -1.;
    etal0lZcandIso_MM = -1.;
    ptcone30l0lZcandIso_MM = -1.;
    d0Sigl0lZcandIso_MM = -1.;
    z0SinThetal0lZcandIso_MM = -1.;

  }  
  
    
  mZTT_coll = calcMZTauTau_coll(mu0_TLV, mu1_TLV, met_TLV); 
}

void TSelector_SusyNtuple::calc_EM_variables(LeptonVector &leptons, Electron* el, Muon* mu, TLorentzVector mu_TLV, TLorentzVector el_TLV, TLorentzVector met_TLV, TLorentzVector signalJet0_TLV, TLorentzVector signalJet1_TLV, bool useForwardJets, SusyNtObject* susyNt, float weight_EM){
  
  pTl0_EM = (el_TLV.Pt() > mu_TLV.Pt()) ? el_TLV.Pt() : mu_TLV.Pt();
  pTl1_EM = (el_TLV.Pt() > mu_TLV.Pt()) ? mu_TLV.Pt() : el_TLV.Pt();
  etal0_EM = (el_TLV.Pt() > mu_TLV.Pt()) ? el_TLV.Eta() : mu_TLV.Eta();
  etal1_EM = (el_TLV.Pt() > mu_TLV.Pt()) ? mu_TLV.Eta() : el_TLV.Eta();
  DeltaR_EM = fabs(mu_TLV.DeltaR(el_TLV));
  pTll_EM = (mu_TLV + el_TLV).Pt();
  Mll_EM= Mll(mu, el);
  METrel_EM = recalcMetRel(met_TLV, mu_TLV, el_TLV, m_signalJets2Lep, useForwardJets);
  MET_EM = met_TLV.Pt();
  HT_EM = calcHT(mu_TLV, el_TLV, met_TLV, m_signalJets2Lep);
  mTWW_EM = calcMt((mu_TLV + el_TLV), met_TLV);
  mT_EM= calcMt((mu_TLV+el_TLV), met_TLV);
  mTmin_EM = (calcMt(mu_TLV, met_TLV) > calcMt(el_TLV, met_TLV)) ? calcMt(el_TLV, met_TLV) : calcMt(mu_TLV, met_TLV);
  mTmax_EM = (calcMt(mu_TLV, met_TLV) < calcMt(el_TLV, met_TLV)) ? calcMt(el_TLV, met_TLV) : calcMt(mu_TLV, met_TLV);
  mTl0MET_EM = (el_TLV.Pt() > mu_TLV.Pt()) ? calcMt(el_TLV, met_TLV) : calcMt(mu_TLV, met_TLV);
  mTl1MET_EM = (el_TLV.Pt() > mu_TLV.Pt()) ? calcMt(mu_TLV, met_TLV) : calcMt(el_TLV, met_TLV);
  mMET_EM = (mu_TLV + el_TLV + met_TLV).M();
  DeltaPhi_EM = fabs(mu_TLV.DeltaPhi(el_TLV));
  DeltaPhiMETl0_EM = (el_TLV.Pt() > mu_TLV.Pt()) ? fabs(el_TLV.DeltaPhi(met_TLV)) : fabs(mu_TLV.DeltaPhi(met_TLV));
  DeltaPhiMETl1_EM = (el_TLV.Pt() > mu_TLV.Pt()) ? fabs(mu_TLV.DeltaPhi(met_TLV)) : fabs(el_TLV.DeltaPhi(met_TLV));
  DeltaPhiMET_EM = fabs((mu_TLV + el_TLV).DeltaPhi(met_TLV));
  if(nSignalJets>0){
    DeltaPhilljj_EM = (nSignalJets>1) ? fabs((el_TLV + mu_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV)) : fabs((el_TLV + mu_TLV).DeltaPhi(signalJet0_TLV));
    DeltaPhil0jj_EM = (nSignalJets>1) ? ((mu_TLV.Pt()> el_TLV.Pt()) ? (mu_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV) : (el_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV)) : ((mu_TLV.Pt()> el_TLV.Pt()) ? (mu_TLV).DeltaPhi(signalJet0_TLV) : (el_TLV).DeltaPhi(signalJet0_TLV));
    DeltaPhil1jj_EM = (nSignalJets>1) ? ((mu_TLV.Pt()< el_TLV.Pt()) ? (el_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV) : (mu_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV)) : ((mu_TLV.Pt()< el_TLV.Pt()) ? (el_TLV).DeltaPhi(signalJet0_TLV) : (mu_TLV).DeltaPhi(signalJet0_TLV));
    DeltaRlljj_EM = (nSignalJets>1) ? (mu_TLV + el_TLV).DeltaR(signalJet0_TLV + signalJet1_TLV) : (mu_TLV + el_TLV).DeltaR(signalJet0_TLV);
  }
  
  //Mljj: invariant mass of the lepton-dijet system formed by the two highest pT jets and the lepton closest to the dijet axis.
  Mljj_EM = -1.;
  if(nSignalJets>1){
    //find dijet axis:
    double DeltaRDijetMu = mu_TLV.DeltaR(signalJet0_TLV + signalJet1_TLV); //sqrt(pow(fabs(etaDijetAxis - mu_TLV.Eta()),2) + pow(fabs(phiDijetAxis - mu_TLV.Phi()),2));
    double DeltaRDijetEl = el_TLV.DeltaR(signalJet0_TLV + signalJet1_TLV); //sqrt(pow(fabs(etaDijetAxis - el_TLV.Eta()),2) + pow(fabs(phiDijetAxis - el_TLV.Phi()),2));
    TLorentzVector closestLepDijetAxis_TLV = (DeltaRDijetMu > DeltaRDijetEl) ? el_TLV : mu_TLV;

    Mljj_EM = (signalJet0_TLV + signalJet1_TLV + closestLepDijetAxis_TLV).M();

  }
  
  mT2_EM = calcMT2(met_TLV, el_TLV, mu_TLV);
  if(nSignalJets>1) mT2J_EM = calcMT2J(met_TLV, el_TLV, mu_TLV, signalJet0_TLV, signalJet1_TLV);
  
  DeltaEtall_EM = fabs(mu_TLV.Eta() - el_TLV.Eta());  
  
bool unbiased = true;
  if(unbiased){
    D0_branch_l0_EM = leptons.at(0)->d0Unbiased;
    D0_branch_l1_EM = leptons.at(1)->d0Unbiased;
    D0err_branch_l0_EM = leptons.at(0)->errD0Unbiased;
    D0err_branch_l1_EM = leptons.at(1)->errD0Unbiased;
  }
  else{
    D0_branch_l0_EM = leptons.at(0)->d0;
    D0_branch_l1_EM = leptons.at(1)->d0;
    D0err_branch_l0_EM = leptons.at(0)->errD0;
    D0err_branch_l1_EM = leptons.at(1)->errD0;
  }
  
  sD0Signif_branch_l0_EM = calc_D0(unbiased, leptons.at(0)) / D0err_branch_l0_EM;
  sD0Signif_branch_l1_EM = calc_D0(unbiased, leptons.at(1)) / D0err_branch_l1_EM;
  
  
  
  
  
  MuonVector MuonWOjOR_vec = getPreMuons(&nt, NtSys_NOM);   
  
   //perform the whole procedure as in SusyNtuple/SusyNtTools.cxx performOverlap()

  ElectronVector ElectronWOjOR_vec = getPreElectrons(&nt, NtSys_NOM);

  // Remove electrons from electrons
  e_e_overlap(ElectronWOjOR_vec, E_E_DR);
  
  // Remove electrons and muons that overlap


  e_m_overlap(ElectronWOjOR_vec, MuonWOjOR_vec, E_M_DR);

  m_m_overlap(MuonWOjOR_vec, M_M_DR);

  removeSFOSPair(MuonWOjOR_vec, MLL_MIN);
  


  
  //find muons that were lost in e-m or m-m OR or due to mll cut:
  ml0lZcand_EM = -1.;      
  mTl0lZcand_EM = -1.;
  ICl0lZcand_EM = -5;
  pTl0lZcand_EM = -1.;
  etal0lZcand_EM = -1.;
  ptcone30l0lZcand_EM = -1.;
  d0Sigl0lZcand_EM = -1.;
  z0SinThetal0lZcand_EM = -1.;
  
  ml1lZcand_EM = -1.;
  mTl1lZcand_EM = -1.;
  ICl1lZcand_EM = -5;
  pTl1lZcand_EM = -1.;
  etal1lZcand_EM = -1.;
  ptcone30l1lZcand_EM = -1.;
  etcone30l1lZcand_EM = -1.;
  d0Sigl1lZcand_EM = -1.;
  z0SinThetal1lZcand_EM = -1.;
  
  

  //Zcand muons: all muons after the OR w/o m-j OR which are no signal muons
  double DeltaMZ_l0lZcand = 99999.;
  MuonVector Muon_Zcand_vec;

  for(uint im=0; im<MuonWOjOR_vec.size(); im++){
    Muon* mu_WOjOR = MuonWOjOR_vec.at(im);

    mu_WOjOR->setState(NtSys_NOM);
    if((mu_WOjOR->DeltaR(*mu) < 0.0001)) continue; //no signal lepton
    TLorentzVector ZcandMuon_TLV;
    ZcandMuon_TLV.SetPtEtaPhiE(mu_WOjOR->pt, mu_WOjOR->eta ,mu_WOjOR->phi, mu_WOjOR->pt*cosh(mu_WOjOR->eta));
    ZcandMuon_TLV.SetPtEtaPhiM(mu_WOjOR->pt, mu_WOjOR->eta ,mu_WOjOR->phi, mu_WOjOR->m);
    if((mu_WOjOR->q * mu->q)<0.){
      if(fabs(MZ - Mll(mu, mu_WOjOR)) < DeltaMZ_l0lZcand){
	Muon_Zcand_vec.push_back(mu_WOjOR);
	ml0lZcand_EM = Mll(mu, mu_WOjOR);      
	mTl0lZcand_EM = calcMt(mu_TLV, ZcandMuon_TLV);  
	ICl0lZcand_EM = mu_WOjOR->isCombined;
	pTl0lZcand_EM = mu_WOjOR->pt;
	etal0lZcand_EM = fabs(mu_WOjOR->eta);
	ptcone30l0lZcand_EM = mu_WOjOR->ptcone30ElStyle/mu_WOjOR->pt;
	d0Sigl0lZcand_EM = fabs(mu_WOjOR->d0Sig(true));
	z0SinThetal0lZcand_EM = fabs(mu_WOjOR->z0SinTheta(true));	  
	DeltaMZ_l0lZcand = fabs(MZ - Mll(mu, mu_WOjOR));
      }
    }
  }


  removeSFOSPair(ElectronWOjOR_vec, MLL_MIN);
  //can a preElectron be matched to an electron after OR?
  double DeltaMZ_l1lZcand = 99999.;
  ElectronVector Electron_Zcand_vec;

  for(uint ie=0; ie<ElectronWOjOR_vec.size(); ie++){
    Electron* el_WOjOR = ElectronWOjOR_vec.at(ie);
    el_WOjOR->setState(NtSys_NOM);
    if((el_WOjOR->DeltaR(*el) < 0.0001)) continue; //no signal lepton
    
    TLorentzVector ZcandElec_TLV;
    ZcandElec_TLV.SetPtEtaPhiE(el_WOjOR->pt, el_WOjOR->eta ,el_WOjOR->phi, el_WOjOR->pt*cosh(el_WOjOR->eta));
    ZcandElec_TLV.SetPtEtaPhiM(el_WOjOR->pt, el_WOjOR->eta ,el_WOjOR->phi, el_WOjOR->m);
    if((el_WOjOR->q * el->q)<0.){
      if(fabs(MZ - Mll(el, el_WOjOR)) < DeltaMZ_l1lZcand){
	Electron_Zcand_vec.push_back(el_WOjOR);
	ml1lZcand_EM = Mll(el, el_WOjOR);      
	mTl1lZcand_EM = calcMt(el_TLV, ZcandElec_TLV);      
	pTl1lZcand_EM = el_WOjOR->pt;
	etal1lZcand_EM = fabs(el_WOjOR->eta);
	float ptcone30 = elPtConeCorr(el_WOjOR, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	ptcone30l1lZcand_EM = ptcone30/el_WOjOR->pt;
	float etcone = elEtTopoConeCorr(el_WOjOR, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	etcone30l1lZcand_EM = etcone/el_WOjOR->pt;		    	  
	d0Sigl1lZcand_EM = fabs(el_WOjOR->d0Sig(true));
	z0SinThetal1lZcand_EM = fabs(el_WOjOR->z0SinTheta(true));	 	  
	DeltaMZ_l1lZcand = fabs(MZ - Mll(el, el_WOjOR));
      }
    }
  }
  
  if(DeltaMZ_l0lZcand < DeltaMZ_l1lZcand){
    ml1lZcand_EM = -1.;
    mTl1lZcand_EM = -1.;
    pTl1lZcand_EM = -1.;
    etal1lZcand_EM = -1.;
    ptcone30l1lZcand_EM = -1.;
    etcone30l1lZcand_EM = -1.;
    d0Sigl1lZcand_EM = -1.;
    z0SinThetal1lZcand_EM = -1.;
  }
  else{
    ml0lZcand_EM = -1.;      
    mTl0lZcand_EM = -1.;
    ICl0lZcand_EM = -5;
    pTl0lZcand_EM = -1.;
    etal0lZcand_EM = -1.;
    ptcone30l0lZcand_EM = -1.;
    d0Sigl0lZcand_EM = -1.;
    z0SinThetal0lZcand_EM = -1.;
  }
  
  Nleptons_Zcand_EM = Muon_Zcand_vec.size() + Electron_Zcand_vec.size(); 
  
  ml0lZcandSoft_EM = -1.;      
  mTl0lZcandSoft_EM = -1.;
  ICl0lZcandSoft_EM = -5;
  pTl0lZcandSoft_EM = -1.;
  etal0lZcandSoft_EM = -1.;
  ptcone30l0lZcandSoft_EM = -1.;
  d0Sigl0lZcandSoft_EM = -1.;
  z0SinThetal0lZcandSoft_EM = -1.;
  
  ml1lZcandSoft_EM = -1.;
  mTl1lZcandSoft_EM = -1.;
  ICl1lZcandSoft_EM = -5;
  pTl1lZcandSoft_EM = -1.;
  etal1lZcandSoft_EM = -1.;
  ptcone30l1lZcandSoft_EM = -1.;
  etcone30l1lZcandSoft_EM = -1.;
  d0Sigl1lZcandSoft_EM = -1.;
  z0SinThetal1lZcandSoft_EM = -1.;
    
  MuonVector Muons_all_vec;
  for(uint im=0; im<susyNt->muo()->size(); ++im){
    Muon* mu = & susyNt->muo()->at(im);
    mu->setState(NtSys_NOM);    
    Muons_all_vec.push_back(mu);
  }
  
  ElectronVector Electrons_all_vec;
  for(uint ie=0; ie<susyNt->ele()->size(); ++ie){
    Electron* e = & susyNt->ele()->at(ie);
    e->setState(NtSys_NOM);

    Electrons_all_vec.push_back(e);
  }
  MuonVector Muons_noJOR_vec = Muons_all_vec;
  ElectronVector Electrons_noJOR_vec = Electrons_all_vec;
  e_e_overlap(Electrons_noJOR_vec, E_E_DR);
  // Remove electrons and muons that overlap
  e_m_overlap(Electrons_noJOR_vec, Muons_noJOR_vec, E_M_DR);
  m_m_overlap(Muons_noJOR_vec, M_M_DR);
  removeSFOSPair(Muons_noJOR_vec, MLL_MIN);

  //ZcandSoft muons: all muons after the OR w/o m-j OR which are no signal muons
  double DeltaMZ_l0lZcandSoft = 99999.;
  MuonVector Muon_ZcandSoft_vec;
  
    
  for(uint im=0; im<Muons_noJOR_vec.size(); im++){
    Muon* mu_WOjOR = Muons_noJOR_vec.at(im);
    mu_WOjOR->setState(NtSys_NOM);
    if((mu_WOjOR->DeltaR(*mu) < 0.0001)) continue; //no signal lepton
//     if(fabs(mu_WOjOR->d0Sig(true)) >= MUON_D0SIG_CUT) continue;
    TLorentzVector ZcandSoftMuon_TLV;
    ZcandSoftMuon_TLV.SetPtEtaPhiE(mu_WOjOR->pt, mu_WOjOR->eta ,mu_WOjOR->phi, mu_WOjOR->pt*cosh(mu_WOjOR->eta));
    ZcandSoftMuon_TLV.SetPtEtaPhiM(mu_WOjOR->pt, mu_WOjOR->eta ,mu_WOjOR->phi, mu_WOjOR->m);
    if((mu_WOjOR->q * mu->q)<0.){
      if(fabs(MZ - Mll(mu, mu_WOjOR)) < DeltaMZ_l0lZcandSoft){
	Muon_ZcandSoft_vec.push_back(mu_WOjOR);
	ml0lZcandSoft_EM = Mll(mu, mu_WOjOR);      
	mTl0lZcandSoft_EM = calcMt(mu_TLV, ZcandSoftMuon_TLV);  
	ICl0lZcandSoft_EM = mu_WOjOR->isCombined;
	pTl0lZcandSoft_EM = mu_WOjOR->pt;
	etal0lZcandSoft_EM = fabs(mu_WOjOR->eta);
	ptcone30l0lZcandSoft_EM = mu_WOjOR->ptcone30ElStyle/mu_WOjOR->pt;
	d0Sigl0lZcandSoft_EM = fabs(mu_WOjOR->d0Sig(true));
	z0SinThetal0lZcandSoft_EM = fabs(mu_WOjOR->z0SinTheta(true));	  
	DeltaMZ_l0lZcandSoft = fabs(MZ - Mll(mu, mu_WOjOR));
      }
    }
  }
 

  removeSFOSPair(Electrons_noJOR_vec, MLL_MIN);
  //can a preElectron be matched to an electron after OR?
  double DeltaMZ_l1lZcandSoft = 99999.;
  ElectronVector Electron_ZcandSoft_vec;
  
  for(uint ie=0; ie<Electrons_noJOR_vec.size(); ie++){
    Electron* el_WOjOR = Electrons_noJOR_vec.at(ie);
    el_WOjOR->setState(NtSys_NOM);
    if((el_WOjOR->DeltaR(*el) < 0.0001)) continue; //no signal lepton
//     if(fabs(el_WOjOR->d0Sig(true)) >= ELECTRON_D0SIG_CUT_WH) continue;
    TLorentzVector ZcandSoftElec_TLV;
    ZcandSoftElec_TLV.SetPtEtaPhiE(el_WOjOR->pt, el_WOjOR->eta ,el_WOjOR->phi, el_WOjOR->pt*cosh(el_WOjOR->eta));
    ZcandSoftElec_TLV.SetPtEtaPhiM(el_WOjOR->pt, el_WOjOR->eta ,el_WOjOR->phi, el_WOjOR->m);
    if((el_WOjOR->q * el->q)<0.){
      if(fabs(MZ - Mll(el, el_WOjOR)) < DeltaMZ_l1lZcandSoft){
	Electron_ZcandSoft_vec.push_back(el_WOjOR);
	ml1lZcandSoft_EM = Mll(el, el_WOjOR);      
	mTl1lZcandSoft_EM = calcMt(el_TLV, ZcandSoftElec_TLV);      
	pTl1lZcandSoft_EM = el_WOjOR->pt;
	etal1lZcandSoft_EM = fabs(el_WOjOR->eta);
	float ptcone30 = elPtConeCorr(el_WOjOR, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	ptcone30l1lZcandSoft_EM = ptcone30/el_WOjOR->pt;
	float etcone = elEtTopoConeCorr(el_WOjOR, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	etcone30l1lZcandSoft_EM = etcone/el_WOjOR->pt;		    	  
	d0Sigl1lZcandSoft_EM = fabs(el_WOjOR->d0Sig(true));
	z0SinThetal1lZcandSoft_EM = fabs(el_WOjOR->z0SinTheta(true));	 	  
	DeltaMZ_l1lZcandSoft = fabs(MZ - Mll(el, el_WOjOR));
      }
    }
  }
  
  if(DeltaMZ_l0lZcandSoft < DeltaMZ_l1lZcandSoft){
    ml1lZcandSoft_EM = -1.;
    mTl1lZcandSoft_EM = -1.;
    pTl1lZcandSoft_EM = -1.;
    etal1lZcandSoft_EM = -1.;
    ptcone30l1lZcandSoft_EM = -1.;
    etcone30l1lZcandSoft_EM = -1.;
    d0Sigl1lZcandSoft_EM = -1.;
    z0SinThetal1lZcandSoft_EM = -1.;
    
    }
  else{
    ml0lZcandSoft_EM = -1.;      
    mTl0lZcandSoft_EM = -1.;
    ICl0lZcandSoft_EM = -5;
    pTl0lZcandSoft_EM = -1.;
    etal0lZcandSoft_EM = -1.;
    ptcone30l0lZcandSoft_EM = -1.;
    d0Sigl0lZcandSoft_EM = -1.;
    z0SinThetal0lZcandSoft_EM = -1.;
  }
  
  Nleptons_ZcandSoft_EM = Muon_ZcandSoft_vec.size() + Electron_ZcandSoft_vec.size();
  
  //ZcandSimple muons: all muons after the OR w/o m-j OR which are no signal muons
  ml0lZcandSimple_EM = -1.;      
  mTl0lZcandSimple_EM = -1.;
  ICl0lZcandSimple_EM = -5;
  pTl0lZcandSimple_EM = -1.;
  etal0lZcandSimple_EM = -1.;
  ptcone30l0lZcandSimple_EM = -1.;
  d0Sigl0lZcandSimple_EM = -1.;
  z0SinThetal0lZcandSimple_EM = -1.;
  
  ml1lZcandSimple_EM = -1.;
  mTl1lZcandSimple_EM = -1.;
  ICl1lZcandSimple_EM = -5;
  pTl1lZcandSimple_EM = -1.;
  etal1lZcandSimple_EM = -1.;
  ptcone30l1lZcandSimple_EM = -1.;
  etcone30l1lZcandSimple_EM = -1.;
  d0Sigl1lZcandSimple_EM = -1.;
  z0SinThetal1lZcandSimple_EM = -1.;
  
  double DeltaMZ_l0lZcandSimple = 99999.;
  MuonVector Muon_ZcandSimple_vec;
  Muon* mu_lost_ZcandSimple;
  
    
  for(uint im=0; im<Muons_all_vec.size(); im++){
    Muon* mu_ZcandSimple = Muons_all_vec.at(im);
    mu_ZcandSimple->setState(NtSys_NOM);
    if((mu_ZcandSimple->DeltaR(*mu) < 0.05)) continue; //no overlap w/ signal lepton
    TLorentzVector ZcandSimpleMuon_TLV;
    ZcandSimpleMuon_TLV.SetPtEtaPhiE(mu_ZcandSimple->pt, mu_ZcandSimple->eta ,mu_ZcandSimple->phi, mu_ZcandSimple->pt*cosh(mu_ZcandSimple->eta));
    ZcandSimpleMuon_TLV.SetPtEtaPhiM(mu_ZcandSimple->pt, mu_ZcandSimple->eta ,mu_ZcandSimple->phi, mu_ZcandSimple->m);
    if((mu_ZcandSimple->q * mu->q)<0.){
      if(fabs(MZ - Mll(mu, mu_ZcandSimple)) < DeltaMZ_l0lZcandSimple){
	Muon_ZcandSimple_vec.push_back(mu_ZcandSimple);
	ml0lZcandSimple_EM = Mll(mu, mu_ZcandSimple);      
	mTl0lZcandSimple_EM = calcMt(mu_TLV, ZcandSimpleMuon_TLV);  
	ICl0lZcandSimple_EM = mu_ZcandSimple->isCombined;
	pTl0lZcandSimple_EM = mu_ZcandSimple->pt;
	etal0lZcandSimple_EM = fabs(mu_ZcandSimple->eta);
	ptcone30l0lZcandSimple_EM = mu_ZcandSimple->ptcone30ElStyle/mu_ZcandSimple->pt;
	d0Sigl0lZcandSimple_EM = fabs(mu_ZcandSimple->d0Sig(true));
	z0SinThetal0lZcandSimple_EM = fabs(mu_ZcandSimple->z0SinTheta(true));	  
	DeltaMZ_l0lZcandSimple = fabs(MZ - Mll(mu, mu_ZcandSimple));
	mu_lost_ZcandSimple = mu_ZcandSimple;
      }
    }
  }
  
  
   
  ZcandLep_l0passesPT_EM = true;
  ZcandLep_l0passesEta_EM = true;
  ZcandLep_l0passesPTcone_EM = true;
  ZcandLep_l0passesETcone_EM = true;
  ZcandLep_l0passesD0_EM = true; 
  ZcandLep_l0passesZ0_EM = true; 
  ZcandLep_l0PassesMedium_EM = true;
  ZcandLep_l0PassesTight_EM = true; 
  ZcandLep_l0PassesORAndMllCut_EM = true;
  
  ZcandLep_l1passesPT_EM = true;
  ZcandLep_l1passesEta_EM = true;
  ZcandLep_l1passesPTcone_EM = true;
  ZcandLep_l1passesETcone_EM = true;
  ZcandLep_l1passesD0_EM = true; 
  ZcandLep_l1passesZ0_EM = true; 
  ZcandLep_l1PassesMedium_EM = true;
  ZcandLep_l1PassesTight_EM = true;
  ZcandLep_l1PassesORAndMllCut_EM = true;
  
  
  
  double DeltaMZ_l1lZcandSimple = 99999.;
  ElectronVector Electron_ZcandSimple_vec;
  Electron* el_lost_ZcandSimple;
  bool l1ZcandSimple_medium = true;
  bool l1ZcandSimple_tight = true;
  for(uint ie=0; ie<Electrons_all_vec.size(); ie++){
    Electron* el_ZcandSimple = Electrons_all_vec.at(ie);
    el_ZcandSimple->setState(NtSys_NOM);
    if((el_ZcandSimple->DeltaR(*el) < 0.05)) continue; //no overlap w/ signal lepton

    TLorentzVector ZcandSimpleElec_TLV;
    ZcandSimpleElec_TLV.SetPtEtaPhiE(el_ZcandSimple->pt, el_ZcandSimple->eta ,el_ZcandSimple->phi, el_ZcandSimple->pt*cosh(el_ZcandSimple->eta));
    ZcandSimpleElec_TLV.SetPtEtaPhiM(el_ZcandSimple->pt, el_ZcandSimple->eta ,el_ZcandSimple->phi, el_ZcandSimple->m);
    
    if((el_ZcandSimple->q * el->q)<0.){
      if(fabs(MZ - Mll(el, el_ZcandSimple)) < DeltaMZ_l1lZcandSimple){
	Electron_ZcandSimple_vec.push_back(el_ZcandSimple);
	ml1lZcandSimple_EM = Mll(el, el_ZcandSimple);      
	mTl1lZcandSimple_EM = calcMt(el_TLV, ZcandSimpleElec_TLV);      
	pTl1lZcandSimple_EM = el_ZcandSimple->pt;
	etal1lZcandSimple_EM = fabs(el_ZcandSimple->eta);
	float ptcone30 = elPtConeCorr(el_ZcandSimple, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	ptcone30l1lZcandSimple_EM = ptcone30/el_ZcandSimple->pt;
	float etcone = elEtTopoConeCorr(el_ZcandSimple, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	etcone30l1lZcandSimple_EM = etcone/el_ZcandSimple->pt;		    	  
	d0Sigl1lZcandSimple_EM = fabs(el_ZcandSimple->d0Sig(true));
	z0SinThetal1lZcandSimple_EM = fabs(el_ZcandSimple->z0SinTheta(true));	 	  
	DeltaMZ_l1lZcandSimple = fabs(MZ - Mll(el, el_ZcandSimple));
	l1ZcandSimple_medium = el_ZcandSimple->mediumPP;
	l1ZcandSimple_tight = el_ZcandSimple->tightPP;
	el_lost_ZcandSimple = el_ZcandSimple;
      }
    }
  }

  
  if(DeltaMZ_l0lZcandSimple < DeltaMZ_l1lZcandSimple){
    ml1lZcandSimple_EM = -1.;
    mTl1lZcandSimple_EM = -1.;
    pTl1lZcandSimple_EM = -1.;
    etal1lZcandSimple_EM = -1.;
    ptcone30l1lZcandSimple_EM = -1.;
    etcone30l1lZcandSimple_EM = -1.;
    d0Sigl1lZcandSimple_EM = -1.;
    z0SinThetal1lZcandSimple_EM = -1.;
    
    if(pTl0lZcandSimple_EM < 10.) ZcandLep_l0passesPT_EM = false;
    if(fabs(etal0lZcand_EM) >= 2.4) ZcandLep_l0passesEta_EM = false;
    if(ptcone30l0lZcandSimple_EM >= MUON_PTCONE30ELSTYLE_PT_CUT) ZcandLep_l0passesPTcone_EM = false;
    if(d0Sigl0lZcandSimple_EM >= MUON_D0SIG_CUT) ZcandLep_l0passesD0_EM = false;
    if(z0SinThetal0lZcandSimple_EM >= MUON_Z0_SINTHETA_CUT) ZcandLep_l0passesZ0_EM = false;
    if(Muon_ZcandSimple_vec.size() > 0){
      ZcandLep_l0PassesORAndMllCut_EM = false;
      for(uint im=0; im<Muons_noJOR_vec.size(); im++){
	Muon* mu_WOjOR = Muons_noJOR_vec.at(im);
	mu_WOjOR->setState(NtSys_NOM);
	if((mu_WOjOR->DeltaR(*mu_lost_ZcandSimple) < 0.0001)) ZcandLep_l0PassesORAndMllCut_EM = true;
      }
      
    }
  }
  else{
    ml0lZcandSimple_EM = -1.;      
    mTl0lZcandSimple_EM = -1.;
    ICl0lZcandSimple_EM = -5;
    pTl0lZcandSimple_EM = -1.;
    etal0lZcandSimple_EM = -1.;
    ptcone30l0lZcandSimple_EM = -1.;
    d0Sigl0lZcandSimple_EM = -1.;
    z0SinThetal0lZcandSimple_EM = -1.;
    
    if(pTl1lZcandSimple_EM < 10.) ZcandLep_l1passesPT_EM = false;
    if(ptcone30l1lZcandSimple_EM >= ELECTRON_PTCONE30_PT_CUT) ZcandLep_l1passesPTcone_EM = false;
    if(etcone30l1lZcandSimple_EM >= ELECTRON_TOPOCONE30_PT_CUT) ZcandLep_l1passesETcone_EM = false;
    if(d0Sigl1lZcandSimple_EM >= ELECTRON_D0SIG_CUT_WH) ZcandLep_l1passesD0_EM = false;
    if(z0SinThetal1lZcandSimple_EM >= ELECTRON_Z0_SINTHETA_CUT) ZcandLep_l1passesZ0_EM = false;
    if(!l1ZcandSimple_medium) ZcandLep_l1PassesMedium_EM = false;
    if(!l1ZcandSimple_tight) ZcandLep_l1PassesTight_EM = false;
    
    if(Electron_ZcandSimple_vec.size() > 0){
      ZcandLep_l1PassesORAndMllCut_EM = false;    
      for(uint ie=0; ie<Electrons_noJOR_vec.size(); ie++){
	Electron* el_WOjOR = Electrons_noJOR_vec.at(ie);
	el_WOjOR->setState(NtSys_NOM);
          if((el_WOjOR->DeltaR(*el_lost_ZcandSimple) < 0.0001)) ZcandLep_l1PassesORAndMllCut_EM = true;
      }
    }
  }
  
  Nleptons_ZcandSimple_EM = Muon_ZcandSimple_vec.size() + Electron_ZcandSimple_vec.size();
  
 JetVector prejets = getPreJets(&nt, NtSys_NOM); 
 for(uint im=0; im<Muon_ZcandSimple_vec.size(); im++){
    Muon* mu_ZcandSimple = Muon_ZcandSimple_vec.at(im);
    for(uint ij=0; ij<prejets.size(); ij++){ 
      h_DeltaR_l0jOR_EM->Fill(mu_ZcandSimple->DeltaR(*prejets.at(ij)), weight_EM);
    }
    for(uint im2=0; im2<Muon_ZcandSimple_vec.size(); im2++){
      if(mu_ZcandSimple->DeltaR(*Muon_ZcandSimple_vec.at(im2)) < 0.0001)continue;
      h_mllCut_l0_EM->Fill(Mll(mu_ZcandSimple, Muon_ZcandSimple_vec.at(im2)), weight_EM);
    }
    for(uint ie=0; ie<Electron_ZcandSimple_vec.size(); ie++){  
      Electron* el_ZcandSimple = Electron_ZcandSimple_vec.at(ie);
      h_DeltaR_em_EM->Fill(el_ZcandSimple->DeltaR(*mu_ZcandSimple), weight_EM);
    }
 }
 
  for(uint ie=0; ie<Electron_ZcandSimple_vec.size(); ie++){
    Electron* el_ZcandSimple = Electron_ZcandSimple_vec.at(ie);
    for(uint ij=0; ij<prejets.size(); ij++){ 
      h_DeltaR_l1jOR_EM->Fill(el_ZcandSimple->DeltaR(*prejets.at(ij)), weight_EM);
    }
    for(uint ie2=0; ie2<Electron_ZcandSimple_vec.size(); ie2++){
      if(el_ZcandSimple->DeltaR(*Electron_ZcandSimple_vec.at(ie2)) < 0.0001)continue;
      h_mllCut_l1_EM->Fill(Mll(el_ZcandSimple, Electron_ZcandSimple_vec.at(ie2)), weight_EM);      
    }
 }
 
 
   //ZcandIso muons: all muons after the OR w/o m-j OR which are no signal muons
  ml0lZcandIso_EM = -1.;      
  mTl0lZcandIso_EM = -1.;
  ICl0lZcandIso_EM = -5;
  pTl0lZcandIso_EM = -1.;
  etal0lZcandIso_EM = -1.;
  ptcone30l0lZcandIso_EM = -1.;
  d0Sigl0lZcandIso_EM = -1.;
  z0SinThetal0lZcandIso_EM = -1.;
  
  ml1lZcandIso_EM = -1.;
  mTl1lZcandIso_EM = -1.;
  ICl1lZcandIso_EM = -5;
  pTl1lZcandIso_EM = -1.;
  etal1lZcandIso_EM = -1.;
  ptcone30l1lZcandIso_EM = -1.;
  etcone30l1lZcandIso_EM = -1.;
  d0Sigl1lZcandIso_EM = -1.;
  z0SinThetal1lZcandIso_EM = -1.;
  
  double DeltaMZ_l0lZcandIso = 99999.;
  MuonVector Muon_ZcandIso_vec;
  Muon* mu_lost_ZcandIso;
  
    
  for(uint im=0; im<Muons_all_vec.size(); im++){
    Muon* mu_ZcandIso = Muons_all_vec.at(im);
    mu_ZcandIso->setState(NtSys_NOM);
    if((mu_ZcandIso->DeltaR(*mu) < 0.05)) continue; //no overlap w/ signal lepton
    if(mu_ZcandIso->ptcone30ElStyle/mu_ZcandIso->pt >= MUON_PTCONE30ELSTYLE_PT_CUT) continue;
    TLorentzVector ZcandIsoMuon_TLV;
    ZcandIsoMuon_TLV.SetPtEtaPhiE(mu_ZcandIso->pt, mu_ZcandIso->eta ,mu_ZcandIso->phi, mu_ZcandIso->pt*cosh(mu_ZcandIso->eta));
    ZcandIsoMuon_TLV.SetPtEtaPhiM(mu_ZcandIso->pt, mu_ZcandIso->eta ,mu_ZcandIso->phi, mu_ZcandIso->m);
    if((mu_ZcandIso->q * mu->q)<0.){
      if(fabs(MZ - Mll(mu, mu_ZcandIso)) < DeltaMZ_l0lZcandIso){
	Muon_ZcandIso_vec.push_back(mu_ZcandIso);
	ml0lZcandIso_EM = Mll(mu, mu_ZcandIso);      
	mTl0lZcandIso_EM = calcMt(mu_TLV, ZcandIsoMuon_TLV);  
	ICl0lZcandIso_EM = mu_ZcandIso->isCombined;
	pTl0lZcandIso_EM = mu_ZcandIso->pt;
	etal0lZcandIso_EM = fabs(mu_ZcandIso->eta);
	ptcone30l0lZcandIso_EM = mu_ZcandIso->ptcone30ElStyle/mu_ZcandIso->pt;
	d0Sigl0lZcandIso_EM = fabs(mu_ZcandIso->d0Sig(true));
	z0SinThetal0lZcandIso_EM = fabs(mu_ZcandIso->z0SinTheta(true));	  
	DeltaMZ_l0lZcandIso = fabs(MZ - Mll(mu, mu_ZcandIso));
	mu_lost_ZcandIso = mu_ZcandIso;
      }
    }
  } 
  
  double DeltaMZ_l1lZcandIso = 99999.;
  ElectronVector Electron_ZcandIso_vec;
  Electron* el_lost_ZcandIso;

  for(uint ie=0; ie<Electrons_all_vec.size(); ie++){
    Electron* el_ZcandIso = Electrons_all_vec.at(ie);
    el_ZcandIso->setState(NtSys_NOM);
    if((el_ZcandIso->DeltaR(*el) < 0.05)) continue; //no overlap w/ signal lepton
    if((elPtConeCorr(el_ZcandIso, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC) / el_ZcandIso->pt) >= ELECTRON_PTCONE30_PT_CUT) continue;
    if((elEtTopoConeCorr(el_ZcandIso, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC) / el_ZcandIso->pt) >= ELECTRON_TOPOCONE30_PT_CUT) continue;

    TLorentzVector ZcandIsoElec_TLV;
    ZcandIsoElec_TLV.SetPtEtaPhiE(el_ZcandIso->pt, el_ZcandIso->eta ,el_ZcandIso->phi, el_ZcandIso->pt*cosh(el_ZcandIso->eta));
    ZcandIsoElec_TLV.SetPtEtaPhiM(el_ZcandIso->pt, el_ZcandIso->eta ,el_ZcandIso->phi, el_ZcandIso->m);
    
    if((el_ZcandIso->q * el->q)<0.){
      if(fabs(MZ - Mll(el, el_ZcandIso)) < DeltaMZ_l1lZcandIso){
	Electron_ZcandIso_vec.push_back(el_ZcandIso);
	ml1lZcandIso_EM = Mll(el, el_ZcandIso);      
	mTl1lZcandIso_EM = calcMt(el_TLV, ZcandIsoElec_TLV);      
	pTl1lZcandIso_EM = el_ZcandIso->pt;
	etal1lZcandIso_EM = fabs(el_ZcandIso->eta);
	float ptcone30 = elPtConeCorr(el_ZcandIso, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	ptcone30l1lZcandIso_EM = ptcone30/el_ZcandIso->pt;
	float etcone = elEtTopoConeCorr(el_ZcandIso, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	etcone30l1lZcandIso_EM = etcone/el_ZcandIso->pt;		    	  
	d0Sigl1lZcandIso_EM = fabs(el_ZcandIso->d0Sig(true));
	z0SinThetal1lZcandIso_EM = fabs(el_ZcandIso->z0SinTheta(true));	 	  
	DeltaMZ_l1lZcandIso = fabs(MZ - Mll(el, el_ZcandIso));
      }
    }
  }

  
  if(DeltaMZ_l0lZcandIso < DeltaMZ_l1lZcandIso){
    ml1lZcandIso_EM = -1.;
    mTl1lZcandIso_EM = -1.;
    pTl1lZcandIso_EM = -1.;
    etal1lZcandIso_EM = -1.;
    ptcone30l1lZcandIso_EM = -1.;
    etcone30l1lZcandIso_EM = -1.;
    d0Sigl1lZcandIso_EM = -1.;
    z0SinThetal1lZcandIso_EM = -1.;      
  }
  else{
    ml0lZcandIso_EM = -1.;      
    mTl0lZcandIso_EM = -1.;
    ICl0lZcandIso_EM = -5;
    pTl0lZcandIso_EM = -1.;
    etal0lZcandIso_EM = -1.;
    ptcone30l0lZcandIso_EM = -1.;
    d0Sigl0lZcandIso_EM = -1.;
    z0SinThetal0lZcandIso_EM = -1.;
  }
  
  Nleptons_ZcandIso_EM = Muon_ZcandIso_vec.size() + Electron_ZcandIso_vec.size();
  
  
  mZTT_coll = calcMZTauTau_coll(el_TLV, mu_TLV, met_TLV); 
}

void TSelector_SusyNtuple::fillHistos_EE_SRSS1(float cut_EE, float weight_ALL_EE){
  fillHistos_EE(cut_EE, weight_ALL_EE);
  h_DeltaRLeptons_EE_SRSS1->Fill(DeltaR_EE, cut_EE, weight_ALL_EE); 
  h_pTl0_EE_SRSS1->Fill(pTl0_EE, cut_EE, weight_ALL_EE); 
  h_pTl1_EE_SRSS1->Fill(pTl1_EE, cut_EE, weight_ALL_EE); 
  h_pTj0_EE_SRSS1->Fill(pTj0, cut_EE, weight_ALL_EE); 
  h_pTj1_EE_SRSS1->Fill(pTj1, cut_EE, weight_ALL_EE); 
  h_mll_EE_SRSS1->Fill(Mll_EE, cut_EE, weight_ALL_EE); 
  h_METrel_EE_SRSS1->Fill(METrel_EE, cut_EE, weight_ALL_EE); 
  h_MET_EE_SRSS1->Fill(MET_EE, cut_EE, weight_ALL_EE); 
  h_HT_EE_SRSS1->Fill(HT_EE, cut_EE, weight_ALL_EE); 
  h_mWWt_EE_SRSS1->Fill(mTWW_EE, cut_EE, weight_ALL_EE); 
  h_mTlmin_EE_SRSS1->Fill(mTmin_EE, cut_EE, weight_ALL_EE); 
  h_mTlmax_EE_SRSS1->Fill(mTmax_EE, cut_EE, weight_ALL_EE); 
  h_meff_EE_SRSS1->Fill(meff, cut_EE, weight_ALL_EE); 
  h_mT2_EE_SRSS1->Fill(mT2_EE, cut_EE, weight_ALL_EE); 
  h_mT2J_EE_SRSS1->Fill(mT2J_EE, cut_EE, weight_ALL_EE); 
  h_mjj_EE_SRSS1->Fill(mjj, cut_EE, weight_ALL_EE); 
  h_DeltaPhiMETll_EE_SRSS1->Fill(DeltaR_EE, cut_EE, weight_ALL_EE); 
  h_DeltaPhill_EE_SRSS1->Fill(DeltaPhi_EE, cut_EE, weight_ALL_EE); 
  h_NBJets_EE_SRSS1->Fill(NBJets, cut_EE, weight_ALL_EE); 
  h_NCJets_EE_SRSS1->Fill(NCJets, cut_EE, weight_ALL_EE); 
  h_NFJets_EE_SRSS1->Fill(NFJets, cut_EE, weight_ALL_EE); 
  h_mZTT_coll_EE_SRSS1->Fill(mZTT_coll, cut_EE, weight_ALL_EE); 
  h_mZTT_mmc_EE_SRSS1->Fill(mZTT_mmc, cut_EE, weight_ALL_EE); 
  
  h_DeltaPhijj_EE_SRSS1->Fill(DeltaPhijj, cut_EE, weight_ALL_EE);  
  h_pTjj_EE_SRSS1->Fill(pTjj, cut_EE, weight_ALL_EE);  
  h_pTll_EE_SRSS1->Fill(pTll_EE, cut_EE, weight_ALL_EE);  
  h_DeltaPhiMETl0_EE_SRSS1->Fill(DeltaPhiMETl0_EE, cut_EE, weight_ALL_EE);  
  h_DeltaPhiMETl1_EE_SRSS1->Fill(DeltaPhiMETl1_EE, cut_EE, weight_ALL_EE);    
  h_DeltaPhiMETj0_EE_SRSS1->Fill(DeltaPhiMETj0, cut_EE, weight_ALL_EE);  
  h_DeltaPhiMETj1_EE_SRSS1->Fill(DeltaPhiMETj1, cut_EE, weight_ALL_EE);  
  h_DeltaPhiMETjj_EE_SRSS1->Fill(DeltaPhiMETjj, cut_EE, weight_ALL_EE);  
  h_DeltaRjj_EE_SRSS1->Fill(DeltaRjj, cut_EE, weight_ALL_EE);  

  h_etal0_EE_SRSS1->Fill(fabs(etal0_EE), cut_EE, weight_ALL_EE);  
  h_etal1_EE_SRSS1->Fill(fabs(etal1_EE), cut_EE, weight_ALL_EE);  
  h_etaj0_EE_SRSS1->Fill(fabs(eta_j0), cut_EE, weight_ALL_EE);  
  h_etaj1_EE_SRSS1->Fill(fabs(eta_j1), cut_EE, weight_ALL_EE);  
  h_mTl0MET_EE_SRSS1->Fill(mTl0MET_EE, cut_EE, weight_ALL_EE);  
  h_mTl1MET_EE_SRSS1->Fill(mTl1MET_EE, cut_EE, weight_ALL_EE);  
  h_DeltaPhilljj_EE_SRSS1->Fill(DeltaPhilljj_EE, cut_EE, weight_ALL_EE);  
  h_DeltaPhil0jj_EE_SRSS1->Fill(DeltaPhil0jj_EE, cut_EE, weight_ALL_EE);  
  h_DeltaPhil1jj_EE_SRSS1->Fill(DeltaPhil1jj_EE, cut_EE, weight_ALL_EE);  
  h_DeltaRlljj_EE_SRSS1->Fill(DeltaRlljj_EE, cut_EE, weight_ALL_EE);  
  h_DeltaEtajj_EE_SRSS1->Fill(DeltaEtajj, cut_EE, weight_ALL_EE);  
  h_DeltaEtall_EE_SRSS1->Fill(DeltaEtall_EE, cut_EE, weight_ALL_EE);  
  h_mTll_EE_SRSS1->Fill(mT_EE, cut_EE, weight_ALL_EE);  
  h_mMETll_EE_SRSS1->Fill(mMET_EE, cut_EE, weight_ALL_EE);  
  h_DeltaYjj_EE_SRSS1->Fill(DeltaYjj, cut_EE, weight_ALL_EE);  
  
  h_D0_branch_l0_EE_SRSS1->Fill(D0_branch_l0_EE, cut_EE, weight_ALL_EE);  
  h_D0_branch_l1_EE_SRSS1->Fill(D0_branch_l1_EE, cut_EE, weight_ALL_EE);  
  h_D0Signif_branch_l0_EE_SRSS1->Fill(sD0Signif_branch_l0_EE, cut_EE, weight_ALL_EE);  
  h_D0Signif_branch_l1_EE_SRSS1->Fill(sD0Signif_branch_l1_EE, cut_EE, weight_ALL_EE);  

  h_Mljj_EE_SRSS1->Fill(Mljj_EE, cut_EE, weight_ALL_EE);  

  h_etcone30l0lZcand_EE_SRSS1->Fill(etcone30l0lZcand_EE, cut_EE, weight_ALL_EE);  
  h_etcone30l0lZcandSoft_EE_SRSS1->Fill(etcone30l0lZcandSoft_EE, cut_EE, weight_ALL_EE);  
  h_etcone30l0lZcandSimple_EE_SRSS1->Fill(etcone30l0lZcandSimple_EE, cut_EE, weight_ALL_EE);  
  h_etcone30l0lZcandIso_EE_SRSS1->Fill(etcone30l0lZcandIso_EE, cut_EE, weight_ALL_EE);  
  
  h_etcone30l1lZcand_EE_SRSS1->Fill(etcone30l1lZcand_EE, cut_EE, weight_ALL_EE);  
  h_etcone30l1lZcandSoft_EE_SRSS1->Fill(etcone30l1lZcandSoft_EE, cut_EE, weight_ALL_EE);  
  h_etcone30l1lZcandSimple_EE_SRSS1->Fill(etcone30l1lZcandSimple_EE, cut_EE, weight_ALL_EE);  
  h_etcone30l1lZcandIso_EE_SRSS1->Fill(etcone30l1lZcandIso_EE, cut_EE, weight_ALL_EE);  
    
  h_Nleptons_Zcand_EE_SRSS1->Fill(Nleptons_Zcand_EE, cut_EE, weight_ALL_EE);  
  h_ml0lZcand_EE_SRSS1->Fill(ml0lZcand_EE, cut_EE, weight_ALL_EE);  
  h_mTl0lZcand_EE_SRSS1->Fill(mTl0lZcand_EE, cut_EE, weight_ALL_EE);  
  h_ICl0lZcand_EE_SRSS1->Fill(ICl0lZcand_EE, cut_EE, weight_ALL_EE);
  h_pTl0lZcand_EE_SRSS1->Fill(pTl0lZcand_EE, cut_EE, weight_ALL_EE);  
  h_etal0lZcand_EE_SRSS1->Fill(etal0lZcand_EE, cut_EE, weight_ALL_EE);  
  h_ptcone30l0lZcand_EE_SRSS1->Fill(ptcone30l0lZcand_EE, cut_EE, weight_ALL_EE);  
  h_d0Sigl0lZcand_EE_SRSS1->Fill(d0Sigl0lZcand_EE, cut_EE, weight_ALL_EE);  
  h_z0SinThetal0lZcand_EE_SRSS1->Fill(z0SinThetal0lZcand_EE, cut_EE, weight_ALL_EE);  
  h_ml1lZcand_EE_SRSS1->Fill(ml1lZcand_EE, cut_EE, weight_ALL_EE);  
  h_mTl1lZcand_EE_SRSS1->Fill(mTl1lZcand_EE, cut_EE, weight_ALL_EE);
  h_ICl1lZcand_EE_SRSS1->Fill(ICl1lZcand_EE, cut_EE, weight_ALL_EE);
  h_pTl1lZcand_EE_SRSS1->Fill(pTl1lZcand_EE, cut_EE, weight_ALL_EE);  
  h_etal1lZcand_EE_SRSS1->Fill(etal1lZcand_EE, cut_EE, weight_ALL_EE);  
  h_ptcone30l1lZcand_EE_SRSS1->Fill(ptcone30l1lZcand_EE, cut_EE, weight_ALL_EE);  
  h_d0Sigl1lZcand_EE_SRSS1->Fill(d0Sigl1lZcand_EE, cut_EE, weight_ALL_EE);  
  h_z0SinThetal1lZcand_EE_SRSS1->Fill(z0SinThetal1lZcand_EE, cut_EE, weight_ALL_EE);
  
  h_Nleptons_ZcandSoft_EE_SRSS1->Fill(Nleptons_ZcandSoft_EE, cut_EE, weight_ALL_EE);  
  h_ml0lZcandSoft_EE_SRSS1->Fill(ml0lZcandSoft_EE, cut_EE, weight_ALL_EE);  
  h_mTl0lZcandSoft_EE_SRSS1->Fill(mTl0lZcandSoft_EE, cut_EE, weight_ALL_EE);  
  h_ICl0lZcandSoft_EE_SRSS1->Fill(ICl0lZcandSoft_EE, cut_EE, weight_ALL_EE);
  h_pTl0lZcandSoft_EE_SRSS1->Fill(pTl0lZcandSoft_EE, cut_EE, weight_ALL_EE);  
  h_etal0lZcandSoft_EE_SRSS1->Fill(etal0lZcandSoft_EE, cut_EE, weight_ALL_EE);  
  h_ptcone30l0lZcandSoft_EE_SRSS1->Fill(ptcone30l0lZcandSoft_EE, cut_EE, weight_ALL_EE);  
  h_d0Sigl0lZcandSoft_EE_SRSS1->Fill(d0Sigl0lZcandSoft_EE, cut_EE, weight_ALL_EE);  
  h_z0SinThetal0lZcandSoft_EE_SRSS1->Fill(z0SinThetal0lZcandSoft_EE, cut_EE, weight_ALL_EE);  
  h_ml1lZcandSoft_EE_SRSS1->Fill(ml1lZcandSoft_EE, cut_EE, weight_ALL_EE);  
  h_mTl1lZcandSoft_EE_SRSS1->Fill(mTl1lZcandSoft_EE, cut_EE, weight_ALL_EE);
  h_ICl1lZcandSoft_EE_SRSS1->Fill(ICl1lZcandSoft_EE, cut_EE, weight_ALL_EE);
  h_pTl1lZcandSoft_EE_SRSS1->Fill(pTl1lZcandSoft_EE, cut_EE, weight_ALL_EE);  
  h_etal1lZcandSoft_EE_SRSS1->Fill(etal1lZcandSoft_EE, cut_EE, weight_ALL_EE);  
  h_ptcone30l1lZcandSoft_EE_SRSS1->Fill(ptcone30l1lZcandSoft_EE, cut_EE, weight_ALL_EE);  
  h_d0Sigl1lZcandSoft_EE_SRSS1->Fill(d0Sigl1lZcandSoft_EE, cut_EE, weight_ALL_EE);  
  h_z0SinThetal1lZcandSoft_EE_SRSS1->Fill(z0SinThetal1lZcandSoft_EE, cut_EE, weight_ALL_EE);
  
  h_Nleptons_ZcandSimple_EE_SRSS1->Fill(Nleptons_ZcandSimple_EE, cut_EE, weight_ALL_EE);  
  h_ml0lZcandSimple_EE_SRSS1->Fill(ml0lZcandSimple_EE, cut_EE, weight_ALL_EE);  
  h_mTl0lZcandSimple_EE_SRSS1->Fill(mTl0lZcandSimple_EE, cut_EE, weight_ALL_EE);  
  h_ICl0lZcandSimple_EE_SRSS1->Fill(ICl0lZcandSimple_EE, cut_EE, weight_ALL_EE);
  h_pTl0lZcandSimple_EE_SRSS1->Fill(pTl0lZcandSimple_EE, cut_EE, weight_ALL_EE);  
  h_etal0lZcandSimple_EE_SRSS1->Fill(etal0lZcandSimple_EE, cut_EE, weight_ALL_EE);  
  h_ptcone30l0lZcandSimple_EE_SRSS1->Fill(ptcone30l0lZcandSimple_EE, cut_EE, weight_ALL_EE);  
  h_d0Sigl0lZcandSimple_EE_SRSS1->Fill(d0Sigl0lZcandSimple_EE, cut_EE, weight_ALL_EE);  
  h_z0SinThetal0lZcandSimple_EE_SRSS1->Fill(z0SinThetal0lZcandSimple_EE, cut_EE, weight_ALL_EE);  
  h_ml1lZcandSimple_EE_SRSS1->Fill(ml1lZcandSimple_EE, cut_EE, weight_ALL_EE);  
  h_mTl1lZcandSimple_EE_SRSS1->Fill(mTl1lZcandSimple_EE, cut_EE, weight_ALL_EE);
  h_ICl1lZcandSimple_EE_SRSS1->Fill(ICl1lZcandSimple_EE, cut_EE, weight_ALL_EE);
  h_pTl1lZcandSimple_EE_SRSS1->Fill(pTl1lZcandSimple_EE, cut_EE, weight_ALL_EE);  
  h_etal1lZcandSimple_EE_SRSS1->Fill(etal1lZcandSimple_EE, cut_EE, weight_ALL_EE);  
  h_ptcone30l1lZcandSimple_EE_SRSS1->Fill(ptcone30l1lZcandSimple_EE, cut_EE, weight_ALL_EE);  
  h_d0Sigl1lZcandSimple_EE_SRSS1->Fill(d0Sigl1lZcandSimple_EE, cut_EE, weight_ALL_EE);  
  h_z0SinThetal1lZcandSimple_EE_SRSS1->Fill(z0SinThetal1lZcandSimple_EE, cut_EE, weight_ALL_EE);
  
   h_Nleptons_ZcandIso_EE_SRSS1->Fill(Nleptons_ZcandIso_EE, cut_EE, weight_ALL_EE);  
  h_ml0lZcandIso_EE_SRSS1->Fill(ml0lZcandIso_EE, cut_EE, weight_ALL_EE);  
  h_mTl0lZcandIso_EE_SRSS1->Fill(mTl0lZcandIso_EE, cut_EE, weight_ALL_EE);  
  h_ICl0lZcandIso_EE_SRSS1->Fill(ICl0lZcandIso_EE, cut_EE, weight_ALL_EE);
  h_pTl0lZcandIso_EE_SRSS1->Fill(pTl0lZcandIso_EE, cut_EE, weight_ALL_EE);  
  h_etal0lZcandIso_EE_SRSS1->Fill(etal0lZcandIso_EE, cut_EE, weight_ALL_EE);  
  h_ptcone30l0lZcandIso_EE_SRSS1->Fill(ptcone30l0lZcandIso_EE, cut_EE, weight_ALL_EE);  
  h_d0Sigl0lZcandIso_EE_SRSS1->Fill(d0Sigl0lZcandIso_EE, cut_EE, weight_ALL_EE);  
  h_z0SinThetal0lZcandIso_EE_SRSS1->Fill(z0SinThetal0lZcandIso_EE, cut_EE, weight_ALL_EE);  
  h_ml1lZcandIso_EE_SRSS1->Fill(ml1lZcandIso_EE, cut_EE, weight_ALL_EE);  
  h_mTl1lZcandIso_EE_SRSS1->Fill(mTl1lZcandIso_EE, cut_EE, weight_ALL_EE);
  h_ICl1lZcandIso_EE_SRSS1->Fill(ICl1lZcandIso_EE, cut_EE, weight_ALL_EE);
  h_pTl1lZcandIso_EE_SRSS1->Fill(pTl1lZcandIso_EE, cut_EE, weight_ALL_EE);  
  h_etal1lZcandIso_EE_SRSS1->Fill(etal1lZcandIso_EE, cut_EE, weight_ALL_EE);  
  h_ptcone30l1lZcandIso_EE_SRSS1->Fill(ptcone30l1lZcandIso_EE, cut_EE, weight_ALL_EE);  
  h_d0Sigl1lZcandIso_EE_SRSS1->Fill(d0Sigl1lZcandIso_EE, cut_EE, weight_ALL_EE);  
  h_z0SinThetal1lZcandIso_EE_SRSS1->Fill(z0SinThetal1lZcandIso_EE, cut_EE, weight_ALL_EE);
  
  h_failedSignalCriteria_l0_EE->Fill(1., cut_EE, weight_ALL_EE);
  if(!ZcandLep_l0passesPT_EE) h_failedSignalCriteria_l0_EE->Fill(2., cut_EE, weight_ALL_EE);
//   if(!ZcandLep_l0passesEta_EE) h_failedSignalCriteria_l0_EE->Fill(3., cut_EE, weight_ALL_EE);
  if(!ZcandLep_l0passesPTcone_EE) h_failedSignalCriteria_l0_EE->Fill(4., cut_EE, weight_ALL_EE);
  if(!ZcandLep_l0passesETcone_EE) h_failedSignalCriteria_l0_EE->Fill(5., cut_EE, weight_ALL_EE);
  if(!ZcandLep_l0passesD0_EE) h_failedSignalCriteria_l0_EE->Fill(6., cut_EE, weight_ALL_EE);
  if(!ZcandLep_l0passesZ0_EE) h_failedSignalCriteria_l0_EE->Fill(7., cut_EE, weight_ALL_EE);
  if(!ZcandLep_l0PassesMedium_EE) h_failedSignalCriteria_l0_EE->Fill(8., cut_EE, weight_ALL_EE);
  if(!ZcandLep_l0PassesTight_EE) h_failedSignalCriteria_l0_EE->Fill(9., cut_EE, weight_ALL_EE);
  if(!ZcandLep_l0PassesORAndMllCut_EE) h_failedSignalCriteria_l0_EE->Fill(10., cut_EE, weight_ALL_EE);   
  
  h_failedSignalCriteria_l1_EE->Fill(1., cut_EE, weight_ALL_EE);
  if(!ZcandLep_l1passesPT_EE) h_failedSignalCriteria_l1_EE->Fill(2., cut_EE, weight_ALL_EE);
//   if(!ZcandLep_l1passesEta_EE) h_failedSignalCriteria_l0_EE->Fill(3., cut_EE, weight_ALL_EE);
  if(!ZcandLep_l1passesPTcone_EE) h_failedSignalCriteria_l1_EE->Fill(4., cut_EE, weight_ALL_EE);
  if(!ZcandLep_l1passesETcone_EE) h_failedSignalCriteria_l1_EE->Fill(5., cut_EE, weight_ALL_EE);
  if(!ZcandLep_l1passesD0_EE) h_failedSignalCriteria_l1_EE->Fill(6., cut_EE, weight_ALL_EE);
  if(!ZcandLep_l1passesZ0_EE) h_failedSignalCriteria_l1_EE->Fill(7., cut_EE, weight_ALL_EE);
  if(!ZcandLep_l1PassesMedium_EE) h_failedSignalCriteria_l1_EE->Fill(8., cut_EE, weight_ALL_EE);
  if(!ZcandLep_l1PassesTight_EE) h_failedSignalCriteria_l1_EE->Fill(9., cut_EE, weight_ALL_EE);
  if(!ZcandLep_l1PassesORAndMllCut_EE) h_failedSignalCriteria_l1_EE->Fill(10., cut_EE, weight_ALL_EE);  

}


void TSelector_SusyNtuple::fillHistos_MM_SRSS1(float cut_MM, float weight_ALL_MM){
  
  fillHistos_MM(cut_MM, weight_ALL_MM);

  h_DeltaRLeptons_MM_SRSS1->Fill(DeltaR_MM, cut_MM, weight_ALL_MM); 
  h_pTl0_MM_SRSS1->Fill(pTl0_MM, cut_MM, weight_ALL_MM); 
  h_pTl1_MM_SRSS1->Fill(pTl1_MM, cut_MM, weight_ALL_MM); 
  h_pTj0_MM_SRSS1->Fill(pTj0, cut_MM, weight_ALL_MM); 
  h_pTj1_MM_SRSS1->Fill(pTj1, cut_MM, weight_ALL_MM); 
  h_mll_MM_SRSS1->Fill(Mll_MM, cut_MM, weight_ALL_MM); 
  h_METrel_MM_SRSS1->Fill(METrel_MM, cut_MM, weight_ALL_MM); 
  h_MET_MM_SRSS1->Fill(MET_MM, cut_MM, weight_ALL_MM); 
  h_HT_MM_SRSS1->Fill(HT_MM, cut_MM, weight_ALL_MM); 
  h_mWWt_MM_SRSS1->Fill(mTWW_MM, cut_MM, weight_ALL_MM); 
  h_mTlmin_MM_SRSS1->Fill(mTmin_MM, cut_MM, weight_ALL_MM); 
  h_mTlmax_MM_SRSS1->Fill(mTmax_MM, cut_MM, weight_ALL_MM); 
  h_meff_MM_SRSS1->Fill(meff, cut_MM, weight_ALL_MM); 
  h_mT2_MM_SRSS1->Fill(mT2_MM, cut_MM, weight_ALL_MM); 
  h_mT2J_MM_SRSS1->Fill(mT2J_MM, cut_MM, weight_ALL_MM); 
  h_mjj_MM_SRSS1->Fill(mjj, cut_MM, weight_ALL_MM); 
  h_DeltaPhiMETll_MM_SRSS1->Fill(DeltaR_MM, cut_MM, weight_ALL_MM); 
  h_DeltaPhill_MM_SRSS1->Fill(DeltaPhi_MM, cut_MM, weight_ALL_MM); 
  h_NBJets_MM_SRSS1->Fill(NBJets, cut_MM, weight_ALL_MM); 
  h_NCJets_MM_SRSS1->Fill(NCJets, cut_MM, weight_ALL_MM); 
  h_NFJets_MM_SRSS1->Fill(NFJets, cut_MM, weight_ALL_MM); 
  h_mZTT_coll_MM_SRSS1->Fill(mZTT_coll, cut_MM, weight_ALL_MM); 
  h_mZTT_mmc_MM_SRSS1->Fill(mZTT_mmc, cut_MM, weight_ALL_MM); 
  
  h_DeltaPhijj_MM_SRSS1->Fill(DeltaPhijj, cut_MM, weight_ALL_MM);  
  h_pTjj_MM_SRSS1->Fill(pTjj, cut_MM, weight_ALL_MM);  
  h_pTll_MM_SRSS1->Fill(pTll_MM, cut_MM, weight_ALL_MM);  
  h_DeltaPhiMETl0_MM_SRSS1->Fill(DeltaPhiMETl0_MM, cut_MM, weight_ALL_MM);  
  h_DeltaPhiMETl1_MM_SRSS1->Fill(DeltaPhiMETl1_MM, cut_MM, weight_ALL_MM);    
  h_DeltaPhiMETj0_MM_SRSS1->Fill(DeltaPhiMETj0, cut_MM, weight_ALL_MM);  
  h_DeltaPhiMETj1_MM_SRSS1->Fill(DeltaPhiMETj1, cut_MM, weight_ALL_MM);  
  h_DeltaPhiMETjj_MM_SRSS1->Fill(DeltaPhiMETjj, cut_MM, weight_ALL_MM);  
  h_DeltaRjj_MM_SRSS1->Fill(DeltaRjj, cut_MM, weight_ALL_MM);  

  h_etal0_MM_SRSS1->Fill(fabs(etal0_MM), cut_MM, weight_ALL_MM);  
  h_etal1_MM_SRSS1->Fill(fabs(etal1_MM), cut_MM, weight_ALL_MM);  
  h_etaj0_MM_SRSS1->Fill(fabs(eta_j0), cut_MM, weight_ALL_MM);  
  h_etaj1_MM_SRSS1->Fill(fabs(eta_j1), cut_MM, weight_ALL_MM);  
  h_mTl0MET_MM_SRSS1->Fill(mTl0MET_MM, cut_MM, weight_ALL_MM);  
  h_mTl1MET_MM_SRSS1->Fill(mTl1MET_MM, cut_MM, weight_ALL_MM);  
  h_DeltaPhilljj_MM_SRSS1->Fill(DeltaPhilljj_MM, cut_MM, weight_ALL_MM);  
  h_DeltaPhil0jj_MM_SRSS1->Fill(DeltaPhil0jj_MM, cut_MM, weight_ALL_MM);  
  h_DeltaPhil1jj_MM_SRSS1->Fill(DeltaPhil1jj_MM, cut_MM, weight_ALL_MM);  
  h_DeltaRlljj_MM_SRSS1->Fill(DeltaRlljj_MM, cut_MM, weight_ALL_MM);  
  h_DeltaEtajj_MM_SRSS1->Fill(DeltaEtajj, cut_MM, weight_ALL_MM);  
  h_DeltaEtall_MM_SRSS1->Fill(DeltaEtall_MM, cut_MM, weight_ALL_MM);  
  h_mTll_MM_SRSS1->Fill(mT_MM, cut_MM, weight_ALL_MM);  
  h_mMETll_MM_SRSS1->Fill(mMET_MM, cut_MM, weight_ALL_MM);  
  h_DeltaYjj_MM_SRSS1->Fill(DeltaYjj, cut_MM, weight_ALL_MM);  
  
  h_D0_branch_l0_MM_SRSS1->Fill(D0_branch_l0_MM, cut_MM, weight_ALL_MM);  
  h_D0_branch_l1_MM_SRSS1->Fill(D0_branch_l1_MM, cut_MM, weight_ALL_MM);  
  h_D0Signif_branch_l0_MM_SRSS1->Fill(sD0Signif_branch_l0_MM, cut_MM, weight_ALL_MM);  
  h_D0Signif_branch_l1_MM_SRSS1->Fill(sD0Signif_branch_l1_MM, cut_MM, weight_ALL_MM);  
  
  h_Mljj_MM_SRSS1->Fill(Mljj_MM, cut_MM, weight_ALL_MM);
    
  h_Nleptons_Zcand_MM_SRSS1->Fill(Nleptons_Zcand_MM, cut_MM, weight_ALL_MM);  
  h_ml0lZcand_MM_SRSS1->Fill(ml0lZcand_MM, cut_MM, weight_ALL_MM);  
  h_mTl0lZcand_MM_SRSS1->Fill(mTl0lZcand_MM, cut_MM, weight_ALL_MM);  
  h_ICl0lZcand_MM_SRSS1->Fill(ICl0lZcand_MM, cut_MM, weight_ALL_MM);
  h_pTl0lZcand_MM_SRSS1->Fill(pTl0lZcand_MM, cut_MM, weight_ALL_MM);  
  h_etal0lZcand_MM_SRSS1->Fill(etal0lZcand_MM, cut_MM, weight_ALL_MM);  
  h_ptcone30l0lZcand_MM_SRSS1->Fill(ptcone30l0lZcand_MM, cut_MM, weight_ALL_MM);  
  h_d0Sigl0lZcand_MM_SRSS1->Fill(d0Sigl0lZcand_MM, cut_MM, weight_ALL_MM);  
  h_z0SinThetal0lZcand_MM_SRSS1->Fill(z0SinThetal0lZcand_MM, cut_MM, weight_ALL_MM);  
  h_ml1lZcand_MM_SRSS1->Fill(ml1lZcand_MM, cut_MM, weight_ALL_MM);  
  h_mTl1lZcand_MM_SRSS1->Fill(mTl1lZcand_MM, cut_MM, weight_ALL_MM);
  h_ICl1lZcand_MM_SRSS1->Fill(ICl1lZcand_MM, cut_MM, weight_ALL_MM);
  h_pTl1lZcand_MM_SRSS1->Fill(pTl1lZcand_MM, cut_MM, weight_ALL_MM);  
  h_etal1lZcand_MM_SRSS1->Fill(etal1lZcand_MM, cut_MM, weight_ALL_MM);  
  h_ptcone30l1lZcand_MM_SRSS1->Fill(ptcone30l1lZcand_MM, cut_MM, weight_ALL_MM);  
  h_d0Sigl1lZcand_MM_SRSS1->Fill(d0Sigl1lZcand_MM, cut_MM, weight_ALL_MM);  
  h_z0SinThetal1lZcand_MM_SRSS1->Fill(z0SinThetal1lZcand_MM, cut_MM, weight_ALL_MM);
  
  h_Nleptons_ZcandSoft_MM_SRSS1->Fill(Nleptons_ZcandSoft_MM, cut_MM, weight_ALL_MM);  
  h_ml0lZcandSoft_MM_SRSS1->Fill(ml0lZcandSoft_MM, cut_MM, weight_ALL_MM);  
  h_mTl0lZcandSoft_MM_SRSS1->Fill(mTl0lZcandSoft_MM, cut_MM, weight_ALL_MM);  
  h_ICl0lZcandSoft_MM_SRSS1->Fill(ICl0lZcandSoft_MM, cut_MM, weight_ALL_MM);
  h_pTl0lZcandSoft_MM_SRSS1->Fill(pTl0lZcandSoft_MM, cut_MM, weight_ALL_MM);  
  h_etal0lZcandSoft_MM_SRSS1->Fill(etal0lZcandSoft_MM, cut_MM, weight_ALL_MM);  
  h_ptcone30l0lZcandSoft_MM_SRSS1->Fill(ptcone30l0lZcandSoft_MM, cut_MM, weight_ALL_MM);  
  h_d0Sigl0lZcandSoft_MM_SRSS1->Fill(d0Sigl0lZcandSoft_MM, cut_MM, weight_ALL_MM);  
  h_z0SinThetal0lZcandSoft_MM_SRSS1->Fill(z0SinThetal0lZcandSoft_MM, cut_MM, weight_ALL_MM);  
  h_ml1lZcandSoft_MM_SRSS1->Fill(ml1lZcandSoft_MM, cut_MM, weight_ALL_MM);  
  h_mTl1lZcandSoft_MM_SRSS1->Fill(mTl1lZcandSoft_MM, cut_MM, weight_ALL_MM);
  h_ICl1lZcandSoft_MM_SRSS1->Fill(ICl1lZcandSoft_MM, cut_MM, weight_ALL_MM);
  h_pTl1lZcandSoft_MM_SRSS1->Fill(pTl1lZcandSoft_MM, cut_MM, weight_ALL_MM);  
  h_etal1lZcandSoft_MM_SRSS1->Fill(etal1lZcandSoft_MM, cut_MM, weight_ALL_MM);  
  h_ptcone30l1lZcandSoft_MM_SRSS1->Fill(ptcone30l1lZcandSoft_MM, cut_MM, weight_ALL_MM);  
  h_d0Sigl1lZcandSoft_MM_SRSS1->Fill(d0Sigl1lZcandSoft_MM, cut_MM, weight_ALL_MM);  
  h_z0SinThetal1lZcandSoft_MM_SRSS1->Fill(z0SinThetal1lZcandSoft_MM, cut_MM, weight_ALL_MM);
  
  h_Nleptons_ZcandSimple_MM_SRSS1->Fill(Nleptons_ZcandSimple_MM, cut_MM, weight_ALL_MM);  
  h_ml0lZcandSimple_MM_SRSS1->Fill(ml0lZcandSimple_MM, cut_MM, weight_ALL_MM);  
  h_mTl0lZcandSimple_MM_SRSS1->Fill(mTl0lZcandSimple_MM, cut_MM, weight_ALL_MM);  
  h_ICl0lZcandSimple_MM_SRSS1->Fill(ICl0lZcandSimple_MM, cut_MM, weight_ALL_MM);
  h_pTl0lZcandSimple_MM_SRSS1->Fill(pTl0lZcandSimple_MM, cut_MM, weight_ALL_MM);  
  h_etal0lZcandSimple_MM_SRSS1->Fill(etal0lZcandSimple_MM, cut_MM, weight_ALL_MM);  
  h_ptcone30l0lZcandSimple_MM_SRSS1->Fill(ptcone30l0lZcandSimple_MM, cut_MM, weight_ALL_MM);  
  h_d0Sigl0lZcandSimple_MM_SRSS1->Fill(d0Sigl0lZcandSimple_MM, cut_MM, weight_ALL_MM);  
  h_z0SinThetal0lZcandSimple_MM_SRSS1->Fill(z0SinThetal0lZcandSimple_MM, cut_MM, weight_ALL_MM);  
  h_ml1lZcandSimple_MM_SRSS1->Fill(ml1lZcandSimple_MM, cut_MM, weight_ALL_MM);  
  h_mTl1lZcandSimple_MM_SRSS1->Fill(mTl1lZcandSimple_MM, cut_MM, weight_ALL_MM);
  h_ICl1lZcandSimple_MM_SRSS1->Fill(ICl1lZcandSimple_MM, cut_MM, weight_ALL_MM);
  h_pTl1lZcandSimple_MM_SRSS1->Fill(pTl1lZcandSimple_MM, cut_MM, weight_ALL_MM);  
  h_etal1lZcandSimple_MM_SRSS1->Fill(etal1lZcandSimple_MM, cut_MM, weight_ALL_MM);  
  h_ptcone30l1lZcandSimple_MM_SRSS1->Fill(ptcone30l1lZcandSimple_MM, cut_MM, weight_ALL_MM);  
  h_d0Sigl1lZcandSimple_MM_SRSS1->Fill(d0Sigl1lZcandSimple_MM, cut_MM, weight_ALL_MM);  
  h_z0SinThetal1lZcandSimple_MM_SRSS1->Fill(z0SinThetal1lZcandSimple_MM, cut_MM, weight_ALL_MM);
  
  h_Nleptons_ZcandIso_MM_SRSS1->Fill(Nleptons_ZcandIso_MM, cut_MM, weight_ALL_MM);  
  h_ml0lZcandIso_MM_SRSS1->Fill(ml0lZcandIso_MM, cut_MM, weight_ALL_MM);  
  h_mTl0lZcandIso_MM_SRSS1->Fill(mTl0lZcandIso_MM, cut_MM, weight_ALL_MM);  
  h_ICl0lZcandIso_MM_SRSS1->Fill(ICl0lZcandIso_MM, cut_MM, weight_ALL_MM);
  h_pTl0lZcandIso_MM_SRSS1->Fill(pTl0lZcandIso_MM, cut_MM, weight_ALL_MM);  
  h_etal0lZcandIso_MM_SRSS1->Fill(etal0lZcandIso_MM, cut_MM, weight_ALL_MM);  
  h_ptcone30l0lZcandIso_MM_SRSS1->Fill(ptcone30l0lZcandIso_MM, cut_MM, weight_ALL_MM);  
  h_d0Sigl0lZcandIso_MM_SRSS1->Fill(d0Sigl0lZcandIso_MM, cut_MM, weight_ALL_MM);  
  h_z0SinThetal0lZcandIso_MM_SRSS1->Fill(z0SinThetal0lZcandIso_MM, cut_MM, weight_ALL_MM);  
  h_ml1lZcandIso_MM_SRSS1->Fill(ml1lZcandIso_MM, cut_MM, weight_ALL_MM);  
  h_mTl1lZcandIso_MM_SRSS1->Fill(mTl1lZcandIso_MM, cut_MM, weight_ALL_MM);
  h_ICl1lZcandIso_MM_SRSS1->Fill(ICl1lZcandIso_MM, cut_MM, weight_ALL_MM);
  h_pTl1lZcandIso_MM_SRSS1->Fill(pTl1lZcandIso_MM, cut_MM, weight_ALL_MM);  
  h_etal1lZcandIso_MM_SRSS1->Fill(etal1lZcandIso_MM, cut_MM, weight_ALL_MM);  
  h_ptcone30l1lZcandIso_MM_SRSS1->Fill(ptcone30l1lZcandIso_MM, cut_MM, weight_ALL_MM);  
  h_d0Sigl1lZcandIso_MM_SRSS1->Fill(d0Sigl1lZcandIso_MM, cut_MM, weight_ALL_MM);  
  h_z0SinThetal1lZcandIso_MM_SRSS1->Fill(z0SinThetal1lZcandIso_MM, cut_MM, weight_ALL_MM);
  
  h_failedSignalCriteria_l0_MM->Fill(1., cut_MM, weight_ALL_MM);
  if(!ZcandLep_l0passesPT_MM) h_failedSignalCriteria_l0_MM->Fill(2., cut_MM, weight_ALL_MM);
  if(!ZcandLep_l0passesEta_MM) h_failedSignalCriteria_l0_MM->Fill(3., cut_MM, weight_ALL_MM);
  if(!ZcandLep_l0passesPTcone_MM) h_failedSignalCriteria_l0_MM->Fill(4., cut_MM, weight_ALL_MM);
  if(!ZcandLep_l0passesD0_MM) h_failedSignalCriteria_l0_MM->Fill(6., cut_MM, weight_ALL_MM);
  if(!ZcandLep_l0passesZ0_MM) h_failedSignalCriteria_l0_MM->Fill(7., cut_MM, weight_ALL_MM);
  if(!ZcandLep_l0PassesORAndMllCut_MM) h_failedSignalCriteria_l0_MM->Fill(10., cut_MM, weight_ALL_MM);  
  
  h_failedSignalCriteria_l1_MM->Fill(1., cut_MM, weight_ALL_MM);
  if(!ZcandLep_l1passesPT_MM) h_failedSignalCriteria_l1_MM->Fill(2., cut_MM, weight_ALL_MM);
  if(!ZcandLep_l1passesEta_MM) h_failedSignalCriteria_l1_MM->Fill(3., cut_MM, weight_ALL_MM);
  if(!ZcandLep_l1passesPTcone_MM) h_failedSignalCriteria_l1_MM->Fill(4., cut_MM, weight_ALL_MM);
  if(!ZcandLep_l1passesD0_MM) h_failedSignalCriteria_l1_MM->Fill(6., cut_MM, weight_ALL_MM);
  if(!ZcandLep_l1passesZ0_MM) h_failedSignalCriteria_l1_MM->Fill(7., cut_MM, weight_ALL_MM);
  if(!ZcandLep_l1PassesORAndMllCut_MM) h_failedSignalCriteria_l1_MM->Fill(10., cut_MM, weight_ALL_MM);  
}

void TSelector_SusyNtuple::fillHistos_EM_SRSS1(float cut_EM, float weight_ALL_EM){

  fillHistos_EM(cut_EM, weight_ALL_EM);
  h_DeltaRLeptons_EM_SRSS1->Fill(DeltaR_EM, cut_EM, weight_ALL_EM); 
  h_pTl0_EM_SRSS1->Fill(pTl0_EM, cut_EM, weight_ALL_EM); 
  h_pTl1_EM_SRSS1->Fill(pTl1_EM, cut_EM, weight_ALL_EM); 
  h_pTj0_EM_SRSS1->Fill(pTj0, cut_EM, weight_ALL_EM); 
  h_pTj1_EM_SRSS1->Fill(pTj1, cut_EM, weight_ALL_EM); 
  h_mll_EM_SRSS1->Fill(Mll_EM, cut_EM, weight_ALL_EM); 
  h_METrel_EM_SRSS1->Fill(METrel_EM, cut_EM, weight_ALL_EM); 
  h_MET_EM_SRSS1->Fill(MET_EM, cut_EM, weight_ALL_EM); 
  h_HT_EM_SRSS1->Fill(HT_EM, cut_EM, weight_ALL_EM); 
  h_mWWt_EM_SRSS1->Fill(mTWW_EM, cut_EM, weight_ALL_EM); 
  h_mTlmin_EM_SRSS1->Fill(mTmin_EM, cut_EM, weight_ALL_EM); 
  h_mTlmax_EM_SRSS1->Fill(mTmax_EM, cut_EM, weight_ALL_EM); 
  h_meff_EM_SRSS1->Fill(meff, cut_EM, weight_ALL_EM); 
  h_mT2_EM_SRSS1->Fill(mT2_EM, cut_EM, weight_ALL_EM); 
  h_mT2J_EM_SRSS1->Fill(mT2J_EM, cut_EM, weight_ALL_EM); 
  h_mjj_EM_SRSS1->Fill(mjj, cut_EM, weight_ALL_EM); 
  h_DeltaPhiMETll_EM_SRSS1->Fill(DeltaR_EM, cut_EM, weight_ALL_EM); 
  h_DeltaPhill_EM_SRSS1->Fill(DeltaPhi_EM, cut_EM, weight_ALL_EM); 
  h_NBJets_EM_SRSS1->Fill(NBJets, cut_EM, weight_ALL_EM); 
  h_NCJets_EM_SRSS1->Fill(NCJets, cut_EM, weight_ALL_EM); 
  h_NFJets_EM_SRSS1->Fill(NFJets, cut_EM, weight_ALL_EM); 
  h_mZTT_coll_EM_SRSS1->Fill(mZTT_coll, cut_EM, weight_ALL_EM); 
  h_mZTT_mmc_EM_SRSS1->Fill(mZTT_mmc, cut_EM, weight_ALL_EM); 
  
  h_DeltaPhijj_EM_SRSS1->Fill(DeltaPhijj, cut_EM, weight_ALL_EM);  
  h_pTjj_EM_SRSS1->Fill(pTjj, cut_EM, weight_ALL_EM);  
  h_pTll_EM_SRSS1->Fill(pTll_EM, cut_EM, weight_ALL_EM);  
  h_DeltaPhiMETl0_EM_SRSS1->Fill(DeltaPhiMETl0_EM, cut_EM, weight_ALL_EM);  
  h_DeltaPhiMETl1_EM_SRSS1->Fill(DeltaPhiMETl1_EM, cut_EM, weight_ALL_EM);    
  h_DeltaPhiMETj0_EM_SRSS1->Fill(DeltaPhiMETj0, cut_EM, weight_ALL_EM);  
  h_DeltaPhiMETj1_EM_SRSS1->Fill(DeltaPhiMETj1, cut_EM, weight_ALL_EM);  
  h_DeltaPhiMETjj_EM_SRSS1->Fill(DeltaPhiMETjj, cut_EM, weight_ALL_EM);  
  h_DeltaRjj_EM_SRSS1->Fill(DeltaRjj, cut_EM, weight_ALL_EM);  

  h_etal0_EM_SRSS1->Fill(fabs(etal0_EM), cut_EM, weight_ALL_EM);  
  h_etal1_EM_SRSS1->Fill(fabs(etal1_EM), cut_EM, weight_ALL_EM);  
  h_etaj0_EM_SRSS1->Fill(fabs(eta_j0), cut_EM, weight_ALL_EM);  
  h_etaj1_EM_SRSS1->Fill(fabs(eta_j1), cut_EM, weight_ALL_EM);  
  h_mTl0MET_EM_SRSS1->Fill(mTl0MET_EM, cut_EM, weight_ALL_EM);  
  h_mTl1MET_EM_SRSS1->Fill(mTl1MET_EM, cut_EM, weight_ALL_EM);  
  h_DeltaPhilljj_EM_SRSS1->Fill(DeltaPhilljj_EM, cut_EM, weight_ALL_EM);  
  h_DeltaPhil0jj_EM_SRSS1->Fill(DeltaPhil0jj_EM, cut_EM, weight_ALL_EM);  
  h_DeltaPhil1jj_EM_SRSS1->Fill(DeltaPhil1jj_EM, cut_EM, weight_ALL_EM);  
  h_DeltaRlljj_EM_SRSS1->Fill(DeltaRlljj_EM, cut_EM, weight_ALL_EM);  
  h_DeltaEtajj_EM_SRSS1->Fill(DeltaEtajj, cut_EM, weight_ALL_EM);  
  h_DeltaEtall_EM_SRSS1->Fill(DeltaEtall_EM, cut_EM, weight_ALL_EM);  
  h_mTll_EM_SRSS1->Fill(mT_EM, cut_EM, weight_ALL_EM);  
  h_mMETll_EM_SRSS1->Fill(mMET_EM, cut_EM, weight_ALL_EM);  
  h_DeltaYjj_EM_SRSS1->Fill(DeltaYjj, cut_EM, weight_ALL_EM);  
  
  h_D0_branch_l0_EM_SRSS1->Fill(D0_branch_l0_EM, cut_EM, weight_ALL_EM);  
  h_D0_branch_l1_EM_SRSS1->Fill(D0_branch_l1_EM, cut_EM, weight_ALL_EM);  
  h_D0Signif_branch_l0_EM_SRSS1->Fill(sD0Signif_branch_l0_EM, cut_EM, weight_ALL_EM);  
  h_D0Signif_branch_l1_EM_SRSS1->Fill(sD0Signif_branch_l1_EM, cut_EM, weight_ALL_EM);  

  h_Mljj_EM_SRSS1->Fill(Mljj_EM, cut_EM, weight_ALL_EM);  

  h_etcone30l1lZcand_EM_SRSS1->Fill(etcone30l1lZcand_EM, cut_EM, weight_ALL_EM);  
  h_etcone30l1lZcandSoft_EM_SRSS1->Fill(etcone30l1lZcandSoft_EM, cut_EM, weight_ALL_EM);  
  h_etcone30l1lZcandSimple_EM_SRSS1->Fill(etcone30l1lZcandSimple_EM, cut_EM, weight_ALL_EM);  
  h_etcone30l1lZcandIso_EM_SRSS1->Fill(etcone30l1lZcandIso_EM, cut_EM, weight_ALL_EM);  
    
  h_Nleptons_Zcand_EM_SRSS1->Fill(Nleptons_Zcand_EM, cut_EM, weight_ALL_EM);  
  h_ml0lZcand_EM_SRSS1->Fill(ml0lZcand_EM, cut_EM, weight_ALL_EM);  
  h_mTl0lZcand_EM_SRSS1->Fill(mTl0lZcand_EM, cut_EM, weight_ALL_EM);  
  h_ICl0lZcand_EM_SRSS1->Fill(ICl0lZcand_EM, cut_EM, weight_ALL_EM);
  h_pTl0lZcand_EM_SRSS1->Fill(pTl0lZcand_EM, cut_EM, weight_ALL_EM);  
  h_etal0lZcand_EM_SRSS1->Fill(etal0lZcand_EM, cut_EM, weight_ALL_EM);  
  h_ptcone30l0lZcand_EM_SRSS1->Fill(ptcone30l0lZcand_EM, cut_EM, weight_ALL_EM);  
  h_d0Sigl0lZcand_EM_SRSS1->Fill(d0Sigl0lZcand_EM, cut_EM, weight_ALL_EM);  
  h_z0SinThetal0lZcand_EM_SRSS1->Fill(z0SinThetal0lZcand_EM, cut_EM, weight_ALL_EM);  
  h_ml1lZcand_EM_SRSS1->Fill(ml1lZcand_EM, cut_EM, weight_ALL_EM);  
  h_mTl1lZcand_EM_SRSS1->Fill(mTl1lZcand_EM, cut_EM, weight_ALL_EM);
  h_ICl1lZcand_EM_SRSS1->Fill(ICl1lZcand_EM, cut_EM, weight_ALL_EM);
  h_pTl1lZcand_EM_SRSS1->Fill(pTl1lZcand_EM, cut_EM, weight_ALL_EM);  
  h_etal1lZcand_EM_SRSS1->Fill(etal1lZcand_EM, cut_EM, weight_ALL_EM);  
  h_ptcone30l1lZcand_EM_SRSS1->Fill(ptcone30l1lZcand_EM, cut_EM, weight_ALL_EM);  
  h_d0Sigl1lZcand_EM_SRSS1->Fill(d0Sigl1lZcand_EM, cut_EM, weight_ALL_EM);  
  h_z0SinThetal1lZcand_EM_SRSS1->Fill(z0SinThetal1lZcand_EM, cut_EM, weight_ALL_EM);
  
  h_Nleptons_ZcandSoft_EM_SRSS1->Fill(Nleptons_ZcandSoft_EM, cut_EM, weight_ALL_EM);  
  h_ml0lZcandSoft_EM_SRSS1->Fill(ml0lZcandSoft_EM, cut_EM, weight_ALL_EM);  
  h_mTl0lZcandSoft_EM_SRSS1->Fill(mTl0lZcandSoft_EM, cut_EM, weight_ALL_EM);  
  h_ICl0lZcandSoft_EM_SRSS1->Fill(ICl0lZcandSoft_EM, cut_EM, weight_ALL_EM);
  h_pTl0lZcandSoft_EM_SRSS1->Fill(pTl0lZcandSoft_EM, cut_EM, weight_ALL_EM);  
  h_etal0lZcandSoft_EM_SRSS1->Fill(etal0lZcandSoft_EM, cut_EM, weight_ALL_EM);  
  h_ptcone30l0lZcandSoft_EM_SRSS1->Fill(ptcone30l0lZcandSoft_EM, cut_EM, weight_ALL_EM);  
  h_d0Sigl0lZcandSoft_EM_SRSS1->Fill(d0Sigl0lZcandSoft_EM, cut_EM, weight_ALL_EM);  
  h_z0SinThetal0lZcandSoft_EM_SRSS1->Fill(z0SinThetal0lZcandSoft_EM, cut_EM, weight_ALL_EM);  
  h_ml1lZcandSoft_EM_SRSS1->Fill(ml1lZcandSoft_EM, cut_EM, weight_ALL_EM);  
  h_mTl1lZcandSoft_EM_SRSS1->Fill(mTl1lZcandSoft_EM, cut_EM, weight_ALL_EM);
  h_ICl1lZcandSoft_EM_SRSS1->Fill(ICl1lZcandSoft_EM, cut_EM, weight_ALL_EM);
  h_pTl1lZcandSoft_EM_SRSS1->Fill(pTl1lZcandSoft_EM, cut_EM, weight_ALL_EM);  
  h_etal1lZcandSoft_EM_SRSS1->Fill(etal1lZcandSoft_EM, cut_EM, weight_ALL_EM);  
  h_ptcone30l1lZcandSoft_EM_SRSS1->Fill(ptcone30l1lZcandSoft_EM, cut_EM, weight_ALL_EM);  
  h_d0Sigl1lZcandSoft_EM_SRSS1->Fill(d0Sigl1lZcandSoft_EM, cut_EM, weight_ALL_EM);  
  h_z0SinThetal1lZcandSoft_EM_SRSS1->Fill(z0SinThetal1lZcandSoft_EM, cut_EM, weight_ALL_EM);
  
  h_Nleptons_ZcandSimple_EM_SRSS1->Fill(Nleptons_ZcandSimple_EM, cut_EM, weight_ALL_EM);  
  h_ml0lZcandSimple_EM_SRSS1->Fill(ml0lZcandSimple_EM, cut_EM, weight_ALL_EM);  
  h_mTl0lZcandSimple_EM_SRSS1->Fill(mTl0lZcandSimple_EM, cut_EM, weight_ALL_EM);  
  h_ICl0lZcandSimple_EM_SRSS1->Fill(ICl0lZcandSimple_EM, cut_EM, weight_ALL_EM);
  h_pTl0lZcandSimple_EM_SRSS1->Fill(pTl0lZcandSimple_EM, cut_EM, weight_ALL_EM);  
  h_etal0lZcandSimple_EM_SRSS1->Fill(etal0lZcandSimple_EM, cut_EM, weight_ALL_EM);  
  h_ptcone30l0lZcandSimple_EM_SRSS1->Fill(ptcone30l0lZcandSimple_EM, cut_EM, weight_ALL_EM);  
  h_d0Sigl0lZcandSimple_EM_SRSS1->Fill(d0Sigl0lZcandSimple_EM, cut_EM, weight_ALL_EM);  
  h_z0SinThetal0lZcandSimple_EM_SRSS1->Fill(z0SinThetal0lZcandSimple_EM, cut_EM, weight_ALL_EM);  
  h_ml1lZcandSimple_EM_SRSS1->Fill(ml1lZcandSimple_EM, cut_EM, weight_ALL_EM);  
  h_mTl1lZcandSimple_EM_SRSS1->Fill(mTl1lZcandSimple_EM, cut_EM, weight_ALL_EM);
  h_ICl1lZcandSimple_EM_SRSS1->Fill(ICl1lZcandSimple_EM, cut_EM, weight_ALL_EM);
  h_pTl1lZcandSimple_EM_SRSS1->Fill(pTl1lZcandSimple_EM, cut_EM, weight_ALL_EM);  
  h_etal1lZcandSimple_EM_SRSS1->Fill(etal1lZcandSimple_EM, cut_EM, weight_ALL_EM);  
  h_ptcone30l1lZcandSimple_EM_SRSS1->Fill(ptcone30l1lZcandSimple_EM, cut_EM, weight_ALL_EM);  
  h_d0Sigl1lZcandSimple_EM_SRSS1->Fill(d0Sigl1lZcandSimple_EM, cut_EM, weight_ALL_EM);  
  h_z0SinThetal1lZcandSimple_EM_SRSS1->Fill(z0SinThetal1lZcandSimple_EM, cut_EM, weight_ALL_EM);
  
   h_Nleptons_ZcandIso_EM_SRSS1->Fill(Nleptons_ZcandIso_EM, cut_EM, weight_ALL_EM);  
  h_ml0lZcandIso_EM_SRSS1->Fill(ml0lZcandIso_EM, cut_EM, weight_ALL_EM);  
  h_mTl0lZcandIso_EM_SRSS1->Fill(mTl0lZcandIso_EM, cut_EM, weight_ALL_EM);  
  h_ICl0lZcandIso_EM_SRSS1->Fill(ICl0lZcandIso_EM, cut_EM, weight_ALL_EM);
  h_pTl0lZcandIso_EM_SRSS1->Fill(pTl0lZcandIso_EM, cut_EM, weight_ALL_EM);  
  h_etal0lZcandIso_EM_SRSS1->Fill(etal0lZcandIso_EM, cut_EM, weight_ALL_EM);  
  h_ptcone30l0lZcandIso_EM_SRSS1->Fill(ptcone30l0lZcandIso_EM, cut_EM, weight_ALL_EM);  
  h_d0Sigl0lZcandIso_EM_SRSS1->Fill(d0Sigl0lZcandIso_EM, cut_EM, weight_ALL_EM);  
  h_z0SinThetal0lZcandIso_EM_SRSS1->Fill(z0SinThetal0lZcandIso_EM, cut_EM, weight_ALL_EM);  
  h_ml1lZcandIso_EM_SRSS1->Fill(ml1lZcandIso_EM, cut_EM, weight_ALL_EM);  
  h_mTl1lZcandIso_EM_SRSS1->Fill(mTl1lZcandIso_EM, cut_EM, weight_ALL_EM);
  h_ICl1lZcandIso_EM_SRSS1->Fill(ICl1lZcandIso_EM, cut_EM, weight_ALL_EM);
  h_pTl1lZcandIso_EM_SRSS1->Fill(pTl1lZcandIso_EM, cut_EM, weight_ALL_EM);  
  h_etal1lZcandIso_EM_SRSS1->Fill(etal1lZcandIso_EM, cut_EM, weight_ALL_EM);  
  h_ptcone30l1lZcandIso_EM_SRSS1->Fill(ptcone30l1lZcandIso_EM, cut_EM, weight_ALL_EM);  
  h_d0Sigl1lZcandIso_EM_SRSS1->Fill(d0Sigl1lZcandIso_EM, cut_EM, weight_ALL_EM);  
  h_z0SinThetal1lZcandIso_EM_SRSS1->Fill(z0SinThetal1lZcandIso_EM, cut_EM, weight_ALL_EM);
  
  h_failedSignalCriteria_l0_EM->Fill(1., cut_EM, weight_ALL_EM);
  if(!ZcandLep_l0passesPT_EM) h_failedSignalCriteria_l0_EM->Fill(2., cut_EM, weight_ALL_EM);
  if(!ZcandLep_l0passesEta_EM) h_failedSignalCriteria_l0_EM->Fill(3., cut_EM, weight_ALL_EM);
  if(!ZcandLep_l0passesPTcone_EM) h_failedSignalCriteria_l0_EM->Fill(4., cut_EM, weight_ALL_EM);
//   if(!ZcandLep_l0passesETcone_EM) h_failedSignalCriteria_l0_EM->Fill(5., cut_EM, weight_ALL_EM);
  if(!ZcandLep_l0passesD0_EM) h_failedSignalCriteria_l0_EM->Fill(6., cut_EM, weight_ALL_EM);
  if(!ZcandLep_l0passesZ0_EM) h_failedSignalCriteria_l0_EM->Fill(7., cut_EM, weight_ALL_EM);
//   if(!ZcandLepPassesMedium_EM) h_failedSignalCriteria_l0_EM->Fill(8., cut_EM, weight_ALL_EM);
//   if(!ZcandLepPassesTight_EM) h_failedSignalCriteria_l0_EM->Fill(9., cut_EM, weight_ALL_EM);
  if(!ZcandLep_l0PassesORAndMllCut_EM) h_failedSignalCriteria_l0_EM->Fill(10., cut_EM, weight_ALL_EM);  
  
  h_failedSignalCriteria_l1_EM->Fill(1., cut_EM, weight_ALL_EM);
  if(!ZcandLep_l1passesPT_EM) h_failedSignalCriteria_l1_EM->Fill(2., cut_EM, weight_ALL_EM);
//   if(!ZcandLep_l1passesEta_EM) h_failedSignalCriteria_l0_EM->Fill(3., cut_EM, weight_ALL_EM);
  if(!ZcandLep_l1passesPTcone_EM) h_failedSignalCriteria_l1_EM->Fill(4., cut_EM, weight_ALL_EM);
  if(!ZcandLep_l1passesETcone_EM) h_failedSignalCriteria_l1_EM->Fill(5., cut_EM, weight_ALL_EM);
  if(!ZcandLep_l1passesD0_EM) h_failedSignalCriteria_l1_EM->Fill(6., cut_EM, weight_ALL_EM);
  if(!ZcandLep_l1passesZ0_EM) h_failedSignalCriteria_l1_EM->Fill(7., cut_EM, weight_ALL_EM);
  if(!ZcandLep_l1PassesMedium_EM) h_failedSignalCriteria_l1_EM->Fill(8., cut_EM, weight_ALL_EM);
  if(!ZcandLep_l1PassesTight_EM) h_failedSignalCriteria_l1_EM->Fill(9., cut_EM, weight_ALL_EM);
  if(!ZcandLep_l1PassesORAndMllCut_EM) h_failedSignalCriteria_l1_EM->Fill(10., cut_EM, weight_ALL_EM);  
    
}

