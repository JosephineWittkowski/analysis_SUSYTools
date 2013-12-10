bool TSelector_SusyNtuple::defineHistos(){

  h_storeSumwMcid = new TH1F("h_storeSumwMcid", "h_storeSumwMcid", 200000, 0, 200000.);  h_storeSumwMcid->Sumw2();
  
  cutflow_EE = new TH1F("cutflow_EE", "cutflow_EE" ,130, 0, 129);
  cutflow_EE_ALL = new TH1F("cutflow_EE_ALL", "cutflow_EE_ALL" ,130, 0, 129);

  cutflow_MM = new TH1F("cutflow_MM", "cutflow_MM" ,130, 0, 129);
  cutflow_MM_ALL = new TH1F("cutflow_MM_ALL", "cutflow_MM_ALL" ,130, 0, 129);

  cutflow_EM = new TH1F("cutflow_EM", "cutflow_EM" ,130, 0, 129);
  cutflow_EM_ALL = new TH1F("cutflow_EM_ALL", "cutflow_EM_ALL" ,130, 0, 129);  
  
  h_DeltaR_l1jOR_EM = new TH1F("h_DeltaR_l1jOR_EM", "h_DeltaR_l1jOR_EM", 70, 0, 7);
  h_DeltaR_ljOR_MM = new TH1F("h_DeltaR_ljOR_MM", "h_DeltaR_ljOR_MM", 70, 0, 7);
  h_DeltaR_l0jOR_EM = new TH1F("h_DeltaR_l0jOR_EM", "h_DeltaR_l0jOR_EM", 70, 0, 7);
  
  h_N_MuonToBeChecked_afterORWJet_MM = new TH2F("h_N_MuonToBeChecked_afterORWJet_MM", "h_N_MuonToBeChecked_afterORWJet_MM", 11, -0.5, 10.5, 130, 0, 129); h_N_MuonToBeChecked_afterORWJet_MM->Sumw2();
  h_N_MuonToBeChecked_afterORWOFLepton_MM = new TH2F("h_N_MuonToBeChecked_afterORWOFLepton_MM", "h_N_MuonToBeChecked_afterORWOFLepton_MM", 11, -0.5, 10.5, 130, 0, 129); h_N_MuonToBeChecked_afterORWOFLepton_MM->Sumw2();
  h_N_MuonToBeChecked_afterORWSFLepton_MM = new TH2F("h_N_MuonToBeChecked_afterORWSFLepton_MM", "h_N_MuonToBeChecked_afterORWSFLepton_MM", 11, -0.5, 10.5, 130, 0, 129); h_N_MuonToBeChecked_afterORWSFLepton_MM->Sumw2();
  h_N_MuonToBeChecked_afterMllCut_MM = new TH2F("h_N_MuonToBeChecked_afterMllCut_MM", "h_N_MuonToBeChecked_afterMllCut_MM", 11, -0.5, 10.5, 130, 0, 129); h_N_MuonToBeChecked_afterMllCut_MM->Sumw2();  
  
  h_N_MuonToBeChecked_afterORWJet_EM = new TH2F("h_N_MuonToBeChecked_afterORWJet_EM", "h_N_MuonToBeChecked_afterORWJet_EM", 11, -0.5, 10.5, 130, 0, 129); h_N_MuonToBeChecked_afterORWJet_EM->Sumw2();
  h_N_MuonToBeChecked_afterORWOFLepton_EM = new TH2F("h_N_MuonToBeChecked_afterORWOFLepton_EM", "h_N_MuonToBeChecked_afterORWOFLepton_EM", 11, -0.5, 10.5, 130, 0, 129); h_N_MuonToBeChecked_afterORWOFLepton_EM->Sumw2();
  h_N_MuonToBeChecked_afterORWSFLepton_EM = new TH2F("h_N_MuonToBeChecked_afterORWSFLepton_EM", "h_N_MuonToBeChecked_afterORWSFLepton_EM", 11, -0.5, 10.5, 130, 0, 129); h_N_MuonToBeChecked_afterORWSFLepton_EM->Sumw2();
  h_N_MuonToBeChecked_afterMllCut_EM = new TH2F("h_N_MuonToBeChecked_afterMllCut_EM", "h_N_MuonToBeChecked_afterMllCut_EM", 11, -0.5, 10.5, 130, 0, 129); h_N_MuonToBeChecked_afterMllCut_EM->Sumw2(); 
  
  h_N_ElectronToBeChecked_afterORWJet_EM = new TH2F("h_N_ElectronToBeChecked_afterORWJet_EM", "h_N_ElectronToBeChecked_afterORWJet_EM", 11, -0.5, 10.5, 130, 0, 129); h_N_ElectronToBeChecked_afterORWJet_EM->Sumw2();
  h_N_ElectronToBeChecked_afterORWOFLepton_EM = new TH2F("h_N_ElectronToBeChecked_afterORWOFLepton_EM", "h_N_ElectronToBeChecked_afterORWOFLepton_EM", 11, -0.5, 10.5, 130, 0, 129); h_N_ElectronToBeChecked_afterORWOFLepton_EM->Sumw2();  
  h_N_ElectronToBeChecked_afterMllCut_EM = new TH2F("h_N_ElectronToBeChecked_afterMllCut_EM", "h_N_ElectronToBeChecked_afterMllCut_EM", 11, -0.5, 10.5, 130, 0, 129); h_N_ElectronToBeChecked_afterMllCut_EM->Sumw2(); 

  h_etcone30l1llost_EM_SRSS1 = new TH2F("h_etcone30l1llost_EM_SRSS1", "h_etcone30l1llost_EM_SRSS1", 100, 0, 1 ,130, 0, 129); h_etcone30l1llost_EM_SRSS1->Sumw2();
  h_etcone30l1lsoft_EM_SRSS1 = new TH2F("h_etcone30l1lsoft_EM_SRSS1", "h_etcone30l1lsoft_EM_SRSS1", 100, 0, 1 ,130, 0, 129); h_etcone30l1lsoft_EM_SRSS1->Sumw2();
  h_etcone30l1loverlap_EM_SRSS1 = new TH2F("h_etcone30l1loverlap_EM_SRSS1", "h_etcone30l1loverlap_EM_SRSS1", 100, 0, 1 ,130, 0, 129); h_etcone30l1loverlap_EM_SRSS1->Sumw2();
  h_etcone30l1loverlapWJet_EM_SRSS1 = new TH2F("h_etcone30l1loverlapWJet_EM_SRSS1", "h_etcone30l1loverlapWJet_EM_SRSS1", 100, 0, 1 ,130, 0, 129); h_etcone30l1loverlapWJet_EM_SRSS1->Sumw2();
  h_etcone30l1loverlapWOFLepton_EM_SRSS1 = new TH2F("h_etcone30l1loverlapWOFLepton_EM_SRSS1", "h_etcone30l1loverlapWOFLepton_EM_SRSS1", 100, 0, 1 ,130, 0, 129); h_etcone30l1loverlapWOFLepton_EM_SRSS1->Sumw2();
  h_etcone30l1loverlapWSFLepton_EM_SRSS1 = new TH2F("h_etcone30l1loverlapWSFLepton_EM_SRSS1", "h_etcone30l1loverlapWSFLepton_EM_SRSS1", 100, 0, 1 ,130, 0, 129); h_etcone30l1loverlapWSFLepton_EM_SRSS1->Sumw2();
  h_etcone30l1lZcand_EM_SRSS1 = new TH2F("h_etcone30l1lZcand_EM_SRSS1", "h_etcone30l1lZcand_EM_SRSS1", 100, 0, 1 ,130, 0, 129); h_etcone30l1lZcand_EM_SRSS1->Sumw2();
  h_etcone30l1lZcandSoft_EM_SRSS1 = new TH2F("h_etcone30l1lZcandSoft_EM_SRSS1", "h_etcone30l1lZcandSoft_EM_SRSS1", 100, 0, 1 ,130, 0, 129); h_etcone30l1lZcandSoft_EM_SRSS1->Sumw2();
    
  //lost
  h_Nleptons_lost_EE_SRSS1 = new TH2F("h_Nleptons_lost_EE_SRSS1", "h_Nleptons_lost_EE_SRSS1", 11, -0.5, 10.5, 130, 0, 129); h_Nleptons_lost_EE_SRSS1->Sumw2();
  h_Nleptons_lost_MM_SRSS1 = new TH2F("h_Nleptons_lost_MM_SRSS1", "h_Nleptons_lost_MM_SRSS1", 11, -0.5, 10.5, 130, 0, 129); h_Nleptons_lost_MM_SRSS1->Sumw2();
  h_Nleptons_lost_EM_SRSS1 = new TH2F("h_Nleptons_lost_EM_SRSS1", "h_Nleptons_lost_EM_SRSS1", 11, -0.5, 10.5, 130, 0, 129); h_Nleptons_lost_EM_SRSS1->Sumw2();
  
  h_ml0llost_EE_SRSS1 = new TH2F("h_ml0llost_EE_SRSS1", "h_ml0llost_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0llost_EE_SRSS1->Sumw2();
  h_ml0llost_MM_SRSS1 = new TH2F("h_ml0llost_MM_SRSS1", "h_ml0llost_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0llost_MM_SRSS1->Sumw2();
  h_ml0llost_EM_SRSS1 = new TH2F("h_ml0llost_EM_SRSS1", "h_ml0llost_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0llost_EM_SRSS1->Sumw2();  
   
  h_mTl0llost_EE_SRSS1 = new TH2F("h_mTl0llost_EE_SRSS1", "h_mTl0llost_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0llost_EE_SRSS1->Sumw2();
  h_mTl0llost_MM_SRSS1 = new TH2F("h_mTl0llost_MM_SRSS1", "h_mTl0llost_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0llost_MM_SRSS1->Sumw2();
  h_mTl0llost_EM_SRSS1 = new TH2F("h_mTl0llost_EM_SRSS1", "h_mTl0llost_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0llost_EM_SRSS1->Sumw2();
  
  h_ICl0llost_EE_SRSS1 = new TH2F("h_ICl0llost_EE_SRSS1", "h_ICl0llost_EE_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl0llost_EE_SRSS1->Sumw2();
  h_ICl0llost_MM_SRSS1 = new TH2F("h_ICl0llost_MM_SRSS1", "h_ICl0llost_MM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl0llost_MM_SRSS1->Sumw2();
  h_ICl0llost_EM_SRSS1 = new TH2F("h_ICl0llost_EM_SRSS1", "h_ICl0llost_EM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl0llost_EM_SRSS1->Sumw2();
  
  h_pTl0llost_EE_SRSS1 = new TH2F("h_pTl0llost_EE_SRSS1", "h_pTl0llost_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl0llost_EE_SRSS1->Sumw2();
  h_pTl0llost_MM_SRSS1 = new TH2F("h_pTl0llost_MM_SRSS1", "h_pTl0llost_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl0llost_MM_SRSS1->Sumw2();
  h_pTl0llost_EM_SRSS1 = new TH2F("h_pTl0llost_EM_SRSS1", "h_pTl0llost_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl0llost_EM_SRSS1->Sumw2();
  
  h_etal0llost_EE_SRSS1 = new TH2F("h_etal0llost_EE_SRSS1", "h_etal0llost_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal0llost_EE_SRSS1->Sumw2();
  h_etal0llost_MM_SRSS1 = new TH2F("h_etal0llost_MM_SRSS1", "h_etal0llost_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal0llost_MM_SRSS1->Sumw2();
  h_etal0llost_EM_SRSS1 = new TH2F("h_etal0llost_EM_SRSS1", "h_etal0llost_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal0llost_EM_SRSS1->Sumw2();
  
  h_ptcone30l0llost_EE_SRSS1 = new TH2F("h_ptcone30l0llost_EE_SRSS1", "h_ptcone30l0llost_EE_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l0llost_EE_SRSS1->Sumw2();
  h_ptcone30l0llost_MM_SRSS1 = new TH2F("h_ptcone30l0llost_MM_SRSS1", "h_ptcone30l0llost_MM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l0llost_MM_SRSS1->Sumw2();
  h_ptcone30l0llost_EM_SRSS1 = new TH2F("h_ptcone30l0llost_EM_SRSS1", "h_ptcone30l0llost_EM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l0llost_EM_SRSS1->Sumw2();
  
  h_d0Sigl0llost_EE_SRSS1 = new TH2F("h_d0Sigl0llost_EE_SRSS1", "h_d0Sigl0llost_EE_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl0llost_EE_SRSS1->Sumw2();
  h_d0Sigl0llost_MM_SRSS1 = new TH2F("h_d0Sigl0llost_MM_SRSS1", "h_d0Sigl0llost_MM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl0llost_MM_SRSS1->Sumw2();
  h_d0Sigl0llost_EM_SRSS1 = new TH2F("h_d0Sigl0llost_EM_SRSS1", "h_d0Sigl0llost_EM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl0llost_EM_SRSS1->Sumw2();
  
  h_z0SinThetal0llost_EE_SRSS1 = new TH2F("h_z0SinThetal0llost_EE_SRSS1", "h_z0SinThetal0llost_EE_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal0llost_EE_SRSS1->Sumw2();
  h_z0SinThetal0llost_MM_SRSS1 = new TH2F("h_z0SinThetal0llost_MM_SRSS1", "h_z0SinThetal0llost_MM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal0llost_MM_SRSS1->Sumw2();
  h_z0SinThetal0llost_EM_SRSS1 = new TH2F("h_z0SinThetal0llost_EM_SRSS1", "h_z0SinThetal0llost_EM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal0llost_EM_SRSS1->Sumw2();
  
  h_ml1llost_EE_SRSS1 = new TH2F("h_ml1llost_EE_SRSS1", "h_ml1llost_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1llost_EE_SRSS1->Sumw2();
  h_ml1llost_MM_SRSS1 = new TH2F("h_ml1llost_MM_SRSS1", "h_ml1llost_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1llost_MM_SRSS1->Sumw2();
  h_ml1llost_EM_SRSS1 = new TH2F("h_ml1llost_EM_SRSS1", "h_ml1llost_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1llost_EM_SRSS1->Sumw2();
   
  h_mTl1llost_EE_SRSS1 = new TH2F("h_mTl1llost_EE_SRSS1", "h_mTl1llost_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1llost_EE_SRSS1->Sumw2();
  h_mTl1llost_MM_SRSS1 = new TH2F("h_mTl1llost_MM_SRSS1", "h_mTl1llost_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1llost_MM_SRSS1->Sumw2();
  h_mTl1llost_EM_SRSS1 = new TH2F("h_mTl1llost_EM_SRSS1", "h_mTl1llost_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1llost_EM_SRSS1->Sumw2();
  
  h_ICl1llost_EE_SRSS1 = new TH2F("h_ICl1llost_EE_SRSS1", "h_ICl1llost_EE_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl1llost_EE_SRSS1->Sumw2();
  h_ICl1llost_MM_SRSS1 = new TH2F("h_ICl1llost_MM_SRSS1", "h_ICl1llost_MM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl1llost_MM_SRSS1->Sumw2();
  h_ICl1llost_EM_SRSS1 = new TH2F("h_ICl1llost_EM_SRSS1", "h_ICl1llost_EM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl1llost_EM_SRSS1->Sumw2();
  
  h_pTl1llost_EE_SRSS1 = new TH2F("h_pTl1llost_EE_SRSS1", "h_pTl1llost_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl1llost_EE_SRSS1->Sumw2();
  h_pTl1llost_MM_SRSS1 = new TH2F("h_pTl1llost_MM_SRSS1", "h_pTl1llost_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl1llost_MM_SRSS1->Sumw2();
  h_pTl1llost_EM_SRSS1 = new TH2F("h_pTl1llost_EM_SRSS1", "h_pTl1llost_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl1llost_EM_SRSS1->Sumw2();
  
  h_etal1llost_EE_SRSS1 = new TH2F("h_etal1llost_EE_SRSS1", "h_etal1llost_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal1llost_EE_SRSS1->Sumw2();
  h_etal1llost_MM_SRSS1 = new TH2F("h_etal1llost_MM_SRSS1", "h_etal1llost_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal1llost_MM_SRSS1->Sumw2();
  h_etal1llost_EM_SRSS1 = new TH2F("h_etal1llost_EM_SRSS1", "h_etal1llost_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal1llost_EM_SRSS1->Sumw2();
  
  h_ptcone30l1llost_EE_SRSS1 = new TH2F("h_ptcone30l1llost_EE_SRSS1", "h_ptcone30l1llost_EE_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l1llost_EE_SRSS1->Sumw2();
  h_ptcone30l1llost_MM_SRSS1 = new TH2F("h_ptcone30l1llost_MM_SRSS1", "h_ptcone30l1llost_MM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l1llost_MM_SRSS1->Sumw2();
  h_ptcone30l1llost_EM_SRSS1 = new TH2F("h_ptcone30l1llost_EM_SRSS1", "h_ptcone30l1llost_EM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l1llost_EM_SRSS1->Sumw2();
  
  h_d0Sigl1llost_EE_SRSS1 = new TH2F("h_d0Sigl1llost_EE_SRSS1", "h_d0Sigl1llost_EE_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl1llost_EE_SRSS1->Sumw2();
  h_d0Sigl1llost_MM_SRSS1 = new TH2F("h_d0Sigl1llost_MM_SRSS1", "h_d0Sigl1llost_MM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl1llost_MM_SRSS1->Sumw2();
  h_d0Sigl1llost_EM_SRSS1 = new TH2F("h_d0Sigl1llost_EM_SRSS1", "h_d0Sigl1llost_EM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl1llost_EM_SRSS1->Sumw2();
  
  h_z0SinThetal1llost_EE_SRSS1 = new TH2F("h_z0SinThetal1llost_EE_SRSS1", "h_z0SinThetal1llost_EE_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal1llost_EE_SRSS1->Sumw2();
  h_z0SinThetal1llost_MM_SRSS1 = new TH2F("h_z0SinThetal1llost_MM_SRSS1", "h_z0SinThetal1llost_MM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal1llost_MM_SRSS1->Sumw2();
  h_z0SinThetal1llost_EM_SRSS1 = new TH2F("h_z0SinThetal1llost_EM_SRSS1", "h_z0SinThetal1llost_EM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal1llost_EM_SRSS1->Sumw2();
  
  //soft
  h_Nleptons_soft_EE_SRSS1 = new TH2F("h_Nleptons_soft_EE_SRSS1", "h_Nleptons_soft_EE_SRSS1", 11, -0.5, 10.5, 130, 0, 129); h_Nleptons_soft_EE_SRSS1->Sumw2();
  h_Nleptons_soft_MM_SRSS1 = new TH2F("h_Nleptons_soft_MM_SRSS1", "h_Nleptons_soft_MM_SRSS1", 11, -0.5, 10.5, 130, 0, 129); h_Nleptons_soft_MM_SRSS1->Sumw2();
  h_Nleptons_soft_EM_SRSS1 = new TH2F("h_Nleptons_soft_EM_SRSS1", "h_Nleptons_soft_EM_SRSS1", 11, -0.5, 10.5, 130, 0, 129); h_Nleptons_soft_EM_SRSS1->Sumw2();
  
  h_ml0lsoft_EE_SRSS1 = new TH2F("h_ml0lsoft_EE_SRSS1", "h_ml0lsoft_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0lsoft_EE_SRSS1->Sumw2();
  h_ml0lsoft_MM_SRSS1 = new TH2F("h_ml0lsoft_MM_SRSS1", "h_ml0lsoft_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0lsoft_MM_SRSS1->Sumw2();
  h_ml0lsoft_EM_SRSS1 = new TH2F("h_ml0lsoft_EM_SRSS1", "h_ml0lsoft_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0lsoft_EM_SRSS1->Sumw2();  
   
  h_mTl0lsoft_EE_SRSS1 = new TH2F("h_mTl0lsoft_EE_SRSS1", "h_mTl0lsoft_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0lsoft_EE_SRSS1->Sumw2();
  h_mTl0lsoft_MM_SRSS1 = new TH2F("h_mTl0lsoft_MM_SRSS1", "h_mTl0lsoft_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0lsoft_MM_SRSS1->Sumw2();
  h_mTl0lsoft_EM_SRSS1 = new TH2F("h_mTl0lsoft_EM_SRSS1", "h_mTl0lsoft_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0lsoft_EM_SRSS1->Sumw2();
  
  h_ICl0lsoft_EE_SRSS1 = new TH2F("h_ICl0lsoft_EE_SRSS1", "h_ICl0lsoft_EE_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl0lsoft_EE_SRSS1->Sumw2();
  h_ICl0lsoft_MM_SRSS1 = new TH2F("h_ICl0lsoft_MM_SRSS1", "h_ICl0lsoft_MM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl0lsoft_MM_SRSS1->Sumw2();
  h_ICl0lsoft_EM_SRSS1 = new TH2F("h_ICl0lsoft_EM_SRSS1", "h_ICl0lsoft_EM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl0lsoft_EM_SRSS1->Sumw2();
  
  h_pTl0lsoft_EE_SRSS1 = new TH2F("h_pTl0lsoft_EE_SRSS1", "h_pTl0lsoft_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl0lsoft_EE_SRSS1->Sumw2();
  h_pTl0lsoft_MM_SRSS1 = new TH2F("h_pTl0lsoft_MM_SRSS1", "h_pTl0lsoft_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl0lsoft_MM_SRSS1->Sumw2();
  h_pTl0lsoft_EM_SRSS1 = new TH2F("h_pTl0lsoft_EM_SRSS1", "h_pTl0lsoft_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl0lsoft_EM_SRSS1->Sumw2();
  
  h_etal0lsoft_EE_SRSS1 = new TH2F("h_etal0lsoft_EE_SRSS1", "h_etal0lsoft_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal0lsoft_EE_SRSS1->Sumw2();
  h_etal0lsoft_MM_SRSS1 = new TH2F("h_etal0lsoft_MM_SRSS1", "h_etal0lsoft_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal0lsoft_MM_SRSS1->Sumw2();
  h_etal0lsoft_EM_SRSS1 = new TH2F("h_etal0lsoft_EM_SRSS1", "h_etal0lsoft_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal0lsoft_EM_SRSS1->Sumw2();
  
  h_ptcone30l0lsoft_EE_SRSS1 = new TH2F("h_ptcone30l0lsoft_EE_SRSS1", "h_ptcone30l0lsoft_EE_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l0lsoft_EE_SRSS1->Sumw2();
  h_ptcone30l0lsoft_MM_SRSS1 = new TH2F("h_ptcone30l0lsoft_MM_SRSS1", "h_ptcone30l0lsoft_MM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l0lsoft_MM_SRSS1->Sumw2();
  h_ptcone30l0lsoft_EM_SRSS1 = new TH2F("h_ptcone30l0lsoft_EM_SRSS1", "h_ptcone30l0lsoft_EM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l0lsoft_EM_SRSS1->Sumw2();
  
  h_d0Sigl0lsoft_EE_SRSS1 = new TH2F("h_d0Sigl0lsoft_EE_SRSS1", "h_d0Sigl0lsoft_EE_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl0lsoft_EE_SRSS1->Sumw2();
  h_d0Sigl0lsoft_MM_SRSS1 = new TH2F("h_d0Sigl0lsoft_MM_SRSS1", "h_d0Sigl0lsoft_MM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl0lsoft_MM_SRSS1->Sumw2();
  h_d0Sigl0lsoft_EM_SRSS1 = new TH2F("h_d0Sigl0lsoft_EM_SRSS1", "h_d0Sigl0lsoft_EM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl0lsoft_EM_SRSS1->Sumw2();
  
  h_z0SinThetal0lsoft_EE_SRSS1 = new TH2F("h_z0SinThetal0lsoft_EE_SRSS1", "h_z0SinThetal0lsoft_EE_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal0lsoft_EE_SRSS1->Sumw2();
  h_z0SinThetal0lsoft_MM_SRSS1 = new TH2F("h_z0SinThetal0lsoft_MM_SRSS1", "h_z0SinThetal0lsoft_MM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal0lsoft_MM_SRSS1->Sumw2();
  h_z0SinThetal0lsoft_EM_SRSS1 = new TH2F("h_z0SinThetal0lsoft_EM_SRSS1", "h_z0SinThetal0lsoft_EM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal0lsoft_EM_SRSS1->Sumw2();
  
  h_ml1lsoft_EE_SRSS1 = new TH2F("h_ml1lsoft_EE_SRSS1", "h_ml1lsoft_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1lsoft_EE_SRSS1->Sumw2();
  h_ml1lsoft_MM_SRSS1 = new TH2F("h_ml1lsoft_MM_SRSS1", "h_ml1lsoft_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1lsoft_MM_SRSS1->Sumw2();
  h_ml1lsoft_EM_SRSS1 = new TH2F("h_ml1lsoft_EM_SRSS1", "h_ml1lsoft_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1lsoft_EM_SRSS1->Sumw2();
   
  h_mTl1lsoft_EE_SRSS1 = new TH2F("h_mTl1lsoft_EE_SRSS1", "h_mTl1lsoft_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1lsoft_EE_SRSS1->Sumw2();
  h_mTl1lsoft_MM_SRSS1 = new TH2F("h_mTl1lsoft_MM_SRSS1", "h_mTl1lsoft_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1lsoft_MM_SRSS1->Sumw2();
  h_mTl1lsoft_EM_SRSS1 = new TH2F("h_mTl1lsoft_EM_SRSS1", "h_mTl1lsoft_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1lsoft_EM_SRSS1->Sumw2();
  
  h_ICl1lsoft_EE_SRSS1 = new TH2F("h_ICl1lsoft_EE_SRSS1", "h_ICl1lsoft_EE_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl1lsoft_EE_SRSS1->Sumw2();
  h_ICl1lsoft_MM_SRSS1 = new TH2F("h_ICl1lsoft_MM_SRSS1", "h_ICl1lsoft_MM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl1lsoft_MM_SRSS1->Sumw2();
  h_ICl1lsoft_EM_SRSS1 = new TH2F("h_ICl1lsoft_EM_SRSS1", "h_ICl1lsoft_EM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl1lsoft_EM_SRSS1->Sumw2();
  
  h_pTl1lsoft_EE_SRSS1 = new TH2F("h_pTl1lsoft_EE_SRSS1", "h_pTl1lsoft_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl1lsoft_EE_SRSS1->Sumw2();
  h_pTl1lsoft_MM_SRSS1 = new TH2F("h_pTl1lsoft_MM_SRSS1", "h_pTl1lsoft_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl1lsoft_MM_SRSS1->Sumw2();
  h_pTl1lsoft_EM_SRSS1 = new TH2F("h_pTl1lsoft_EM_SRSS1", "h_pTl1lsoft_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl1lsoft_EM_SRSS1->Sumw2();
  
  h_etal1lsoft_EE_SRSS1 = new TH2F("h_etal1lsoft_EE_SRSS1", "h_etal1lsoft_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal1lsoft_EE_SRSS1->Sumw2();
  h_etal1lsoft_MM_SRSS1 = new TH2F("h_etal1lsoft_MM_SRSS1", "h_etal1lsoft_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal1lsoft_MM_SRSS1->Sumw2();
  h_etal1lsoft_EM_SRSS1 = new TH2F("h_etal1lsoft_EM_SRSS1", "h_etal1lsoft_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal1lsoft_EM_SRSS1->Sumw2();
  
  h_ptcone30l1lsoft_EE_SRSS1 = new TH2F("h_ptcone30l1lsoft_EE_SRSS1", "h_ptcone30l1lsoft_EE_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l1lsoft_EE_SRSS1->Sumw2();
  h_ptcone30l1lsoft_MM_SRSS1 = new TH2F("h_ptcone30l1lsoft_MM_SRSS1", "h_ptcone30l1lsoft_MM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l1lsoft_MM_SRSS1->Sumw2();
  h_ptcone30l1lsoft_EM_SRSS1 = new TH2F("h_ptcone30l1lsoft_EM_SRSS1", "h_ptcone30l1lsoft_EM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l1lsoft_EM_SRSS1->Sumw2();
  
  h_d0Sigl1lsoft_EE_SRSS1 = new TH2F("h_d0Sigl1lsoft_EE_SRSS1", "h_d0Sigl1lsoft_EE_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl1lsoft_EE_SRSS1->Sumw2();
  h_d0Sigl1lsoft_MM_SRSS1 = new TH2F("h_d0Sigl1lsoft_MM_SRSS1", "h_d0Sigl1lsoft_MM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl1lsoft_MM_SRSS1->Sumw2();
  h_d0Sigl1lsoft_EM_SRSS1 = new TH2F("h_d0Sigl1lsoft_EM_SRSS1", "h_d0Sigl1lsoft_EM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl1lsoft_EM_SRSS1->Sumw2();
  
  h_z0SinThetal1lsoft_EE_SRSS1 = new TH2F("h_z0SinThetal1lsoft_EE_SRSS1", "h_z0SinThetal1lsoft_EE_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal1lsoft_EE_SRSS1->Sumw2();
  h_z0SinThetal1lsoft_MM_SRSS1 = new TH2F("h_z0SinThetal1lsoft_MM_SRSS1", "h_z0SinThetal1lsoft_MM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal1lsoft_MM_SRSS1->Sumw2();
  h_z0SinThetal1lsoft_EM_SRSS1 = new TH2F("h_z0SinThetal1lsoft_EM_SRSS1", "h_z0SinThetal1lsoft_EM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal1lsoft_EM_SRSS1->Sumw2();
  
  //overlap
  h_Nleptons_overlap_EE_SRSS1 = new TH2F("h_Nleptons_overlap_EE_SRSS1", "h_Nleptons_overlap_EE_SRSS1", 11, -0.5, 10.5, 130, 0, 129); h_Nleptons_overlap_EE_SRSS1->Sumw2();
  h_Nleptons_overlap_MM_SRSS1 = new TH2F("h_Nleptons_overlap_MM_SRSS1", "h_Nleptons_overlap_MM_SRSS1", 11, -0.5, 10.5, 130, 0, 129); h_Nleptons_overlap_MM_SRSS1->Sumw2();
  h_Nleptons_overlap_EM_SRSS1 = new TH2F("h_Nleptons_overlap_EM_SRSS1", "h_Nleptons_overlap_EM_SRSS1", 11, -0.5, 10.5, 130, 0, 129); h_Nleptons_overlap_EM_SRSS1->Sumw2();
  
  h_ml0loverlap_EE_SRSS1 = new TH2F("h_ml0loverlap_EE_SRSS1", "h_ml0loverlap_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0loverlap_EE_SRSS1->Sumw2();
  h_ml0loverlap_MM_SRSS1 = new TH2F("h_ml0loverlap_MM_SRSS1", "h_ml0loverlap_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0loverlap_MM_SRSS1->Sumw2();
  h_ml0loverlap_EM_SRSS1 = new TH2F("h_ml0loverlap_EM_SRSS1", "h_ml0loverlap_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0loverlap_EM_SRSS1->Sumw2();  
   
  h_mTl0loverlap_EE_SRSS1 = new TH2F("h_mTl0loverlap_EE_SRSS1", "h_mTl0loverlap_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlap_EE_SRSS1->Sumw2();
  h_mTl0loverlap_MM_SRSS1 = new TH2F("h_mTl0loverlap_MM_SRSS1", "h_mTl0loverlap_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlap_MM_SRSS1->Sumw2();
  h_mTl0loverlap_EM_SRSS1 = new TH2F("h_mTl0loverlap_EM_SRSS1", "h_mTl0loverlap_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlap_EM_SRSS1->Sumw2();
  
  h_ICl0loverlap_EE_SRSS1 = new TH2F("h_ICl0loverlap_EE_SRSS1", "h_ICl0loverlap_EE_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl0loverlap_EE_SRSS1->Sumw2();
  h_ICl0loverlap_MM_SRSS1 = new TH2F("h_ICl0loverlap_MM_SRSS1", "h_ICl0loverlap_MM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl0loverlap_MM_SRSS1->Sumw2();
  h_ICl0loverlap_EM_SRSS1 = new TH2F("h_ICl0loverlap_EM_SRSS1", "h_ICl0loverlap_EM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl0loverlap_EM_SRSS1->Sumw2();
  
  h_pTl0loverlap_EE_SRSS1 = new TH2F("h_pTl0loverlap_EE_SRSS1", "h_pTl0loverlap_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl0loverlap_EE_SRSS1->Sumw2();
  h_pTl0loverlap_MM_SRSS1 = new TH2F("h_pTl0loverlap_MM_SRSS1", "h_pTl0loverlap_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl0loverlap_MM_SRSS1->Sumw2();
  h_pTl0loverlap_EM_SRSS1 = new TH2F("h_pTl0loverlap_EM_SRSS1", "h_pTl0loverlap_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl0loverlap_EM_SRSS1->Sumw2();
  
  h_etal0loverlap_EE_SRSS1 = new TH2F("h_etal0loverlap_EE_SRSS1", "h_etal0loverlap_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal0loverlap_EE_SRSS1->Sumw2();
  h_etal0loverlap_MM_SRSS1 = new TH2F("h_etal0loverlap_MM_SRSS1", "h_etal0loverlap_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal0loverlap_MM_SRSS1->Sumw2();
  h_etal0loverlap_EM_SRSS1 = new TH2F("h_etal0loverlap_EM_SRSS1", "h_etal0loverlap_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal0loverlap_EM_SRSS1->Sumw2();
  
  h_ptcone30l0loverlap_EE_SRSS1 = new TH2F("h_ptcone30l0loverlap_EE_SRSS1", "h_ptcone30l0loverlap_EE_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l0loverlap_EE_SRSS1->Sumw2();
  h_ptcone30l0loverlap_MM_SRSS1 = new TH2F("h_ptcone30l0loverlap_MM_SRSS1", "h_ptcone30l0loverlap_MM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l0loverlap_MM_SRSS1->Sumw2();
  h_ptcone30l0loverlap_EM_SRSS1 = new TH2F("h_ptcone30l0loverlap_EM_SRSS1", "h_ptcone30l0loverlap_EM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l0loverlap_EM_SRSS1->Sumw2();
  
  h_d0Sigl0loverlap_EE_SRSS1 = new TH2F("h_d0Sigl0loverlap_EE_SRSS1", "h_d0Sigl0loverlap_EE_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl0loverlap_EE_SRSS1->Sumw2();
  h_d0Sigl0loverlap_MM_SRSS1 = new TH2F("h_d0Sigl0loverlap_MM_SRSS1", "h_d0Sigl0loverlap_MM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl0loverlap_MM_SRSS1->Sumw2();
  h_d0Sigl0loverlap_EM_SRSS1 = new TH2F("h_d0Sigl0loverlap_EM_SRSS1", "h_d0Sigl0loverlap_EM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl0loverlap_EM_SRSS1->Sumw2();
  
  h_z0SinThetal0loverlap_EE_SRSS1 = new TH2F("h_z0SinThetal0loverlap_EE_SRSS1", "h_z0SinThetal0loverlap_EE_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal0loverlap_EE_SRSS1->Sumw2();
  h_z0SinThetal0loverlap_MM_SRSS1 = new TH2F("h_z0SinThetal0loverlap_MM_SRSS1", "h_z0SinThetal0loverlap_MM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal0loverlap_MM_SRSS1->Sumw2();
  h_z0SinThetal0loverlap_EM_SRSS1 = new TH2F("h_z0SinThetal0loverlap_EM_SRSS1", "h_z0SinThetal0loverlap_EM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal0loverlap_EM_SRSS1->Sumw2();
  
  h_ml1loverlap_EE_SRSS1 = new TH2F("h_ml1loverlap_EE_SRSS1", "h_ml1loverlap_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1loverlap_EE_SRSS1->Sumw2();
  h_ml1loverlap_MM_SRSS1 = new TH2F("h_ml1loverlap_MM_SRSS1", "h_ml1loverlap_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1loverlap_MM_SRSS1->Sumw2();
  h_ml1loverlap_EM_SRSS1 = new TH2F("h_ml1loverlap_EM_SRSS1", "h_ml1loverlap_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1loverlap_EM_SRSS1->Sumw2();
   
  h_mTl1loverlap_EE_SRSS1 = new TH2F("h_mTl1loverlap_EE_SRSS1", "h_mTl1loverlap_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlap_EE_SRSS1->Sumw2();
  h_mTl1loverlap_MM_SRSS1 = new TH2F("h_mTl1loverlap_MM_SRSS1", "h_mTl1loverlap_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlap_MM_SRSS1->Sumw2();
  h_mTl1loverlap_EM_SRSS1 = new TH2F("h_mTl1loverlap_EM_SRSS1", "h_mTl1loverlap_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlap_EM_SRSS1->Sumw2();
  
  h_ICl1loverlap_EE_SRSS1 = new TH2F("h_ICl1loverlap_EE_SRSS1", "h_ICl1loverlap_EE_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl1loverlap_EE_SRSS1->Sumw2();
  h_ICl1loverlap_MM_SRSS1 = new TH2F("h_ICl1loverlap_MM_SRSS1", "h_ICl1loverlap_MM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl1loverlap_MM_SRSS1->Sumw2();
  h_ICl1loverlap_EM_SRSS1 = new TH2F("h_ICl1loverlap_EM_SRSS1", "h_ICl1loverlap_EM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl1loverlap_EM_SRSS1->Sumw2();
  
  h_pTl1loverlap_EE_SRSS1 = new TH2F("h_pTl1loverlap_EE_SRSS1", "h_pTl1loverlap_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl1loverlap_EE_SRSS1->Sumw2();
  h_pTl1loverlap_MM_SRSS1 = new TH2F("h_pTl1loverlap_MM_SRSS1", "h_pTl1loverlap_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl1loverlap_MM_SRSS1->Sumw2();
  h_pTl1loverlap_EM_SRSS1 = new TH2F("h_pTl1loverlap_EM_SRSS1", "h_pTl1loverlap_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl1loverlap_EM_SRSS1->Sumw2();
  
  h_etal1loverlap_EE_SRSS1 = new TH2F("h_etal1loverlap_EE_SRSS1", "h_etal1loverlap_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal1loverlap_EE_SRSS1->Sumw2();
  h_etal1loverlap_MM_SRSS1 = new TH2F("h_etal1loverlap_MM_SRSS1", "h_etal1loverlap_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal1loverlap_MM_SRSS1->Sumw2();
  h_etal1loverlap_EM_SRSS1 = new TH2F("h_etal1loverlap_EM_SRSS1", "h_etal1loverlap_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal1loverlap_EM_SRSS1->Sumw2();
  
  h_ptcone30l1loverlap_EE_SRSS1 = new TH2F("h_ptcone30l1loverlap_EE_SRSS1", "h_ptcone30l1loverlap_EE_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l1loverlap_EE_SRSS1->Sumw2();
  h_ptcone30l1loverlap_MM_SRSS1 = new TH2F("h_ptcone30l1loverlap_MM_SRSS1", "h_ptcone30l1loverlap_MM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l1loverlap_MM_SRSS1->Sumw2();
  h_ptcone30l1loverlap_EM_SRSS1 = new TH2F("h_ptcone30l1loverlap_EM_SRSS1", "h_ptcone30l1loverlap_EM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l1loverlap_EM_SRSS1->Sumw2();
  
  h_d0Sigl1loverlap_EE_SRSS1 = new TH2F("h_d0Sigl1loverlap_EE_SRSS1", "h_d0Sigl1loverlap_EE_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl1loverlap_EE_SRSS1->Sumw2();
  h_d0Sigl1loverlap_MM_SRSS1 = new TH2F("h_d0Sigl1loverlap_MM_SRSS1", "h_d0Sigl1loverlap_MM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl1loverlap_MM_SRSS1->Sumw2();
  h_d0Sigl1loverlap_EM_SRSS1 = new TH2F("h_d0Sigl1loverlap_EM_SRSS1", "h_d0Sigl1loverlap_EM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl1loverlap_EM_SRSS1->Sumw2();
  
  h_z0SinThetal1loverlap_EE_SRSS1 = new TH2F("h_z0SinThetal1loverlap_EE_SRSS1", "h_z0SinThetal1loverlap_EE_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal1loverlap_EE_SRSS1->Sumw2();
  h_z0SinThetal1loverlap_MM_SRSS1 = new TH2F("h_z0SinThetal1loverlap_MM_SRSS1", "h_z0SinThetal1loverlap_MM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal1loverlap_MM_SRSS1->Sumw2();
  h_z0SinThetal1loverlap_EM_SRSS1 = new TH2F("h_z0SinThetal1loverlap_EM_SRSS1", "h_z0SinThetal1loverlap_EM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal1loverlap_EM_SRSS1->Sumw2();
  
 //overlapWJet
  
  h_Nleptons_overlapWJet_EE_SRSS1 = new TH2F("h_Nleptons_overlapWJet_EE_SRSS1", "h_Nleptons_overlapWJet_EE_SRSS1", 11, -0.5, 10.5, 130, 0, 129); h_Nleptons_overlapWJet_EE_SRSS1->Sumw2();
  h_Nleptons_overlapWJet_MM_SRSS1 = new TH2F("h_Nleptons_overlapWJet_MM_SRSS1", "h_Nleptons_overlapWJet_MM_SRSS1", 11, -0.5, 10.5, 130, 0, 129); h_Nleptons_overlapWJet_MM_SRSS1->Sumw2();
  h_Nleptons_overlapWJet_EM_SRSS1 = new TH2F("h_Nleptons_overlapWJet_EM_SRSS1", "h_Nleptons_overlapWJet_EM_SRSS1", 11, -0.5, 10.5, 130, 0, 129); h_Nleptons_overlapWJet_EM_SRSS1->Sumw2();
  
  h_ml0loverlapWJet_EE_SRSS1 = new TH2F("h_ml0loverlapWJet_EE_SRSS1", "h_ml0loverlapWJet_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0loverlapWJet_EE_SRSS1->Sumw2();
  h_ml0loverlapWJet_MM_SRSS1 = new TH2F("h_ml0loverlapWJet_MM_SRSS1", "h_ml0loverlapWJet_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0loverlapWJet_MM_SRSS1->Sumw2();
  h_ml0loverlapWJet_EM_SRSS1 = new TH2F("h_ml0loverlapWJet_EM_SRSS1", "h_ml0loverlapWJet_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0loverlapWJet_EM_SRSS1->Sumw2();  
   
  h_mTl0loverlapWJet_EE_SRSS1 = new TH2F("h_mTl0loverlapWJet_EE_SRSS1", "h_mTl0loverlapWJet_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlapWJet_EE_SRSS1->Sumw2();
  h_mTl0loverlapWJet_MM_SRSS1 = new TH2F("h_mTl0loverlapWJet_MM_SRSS1", "h_mTl0loverlapWJet_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlapWJet_MM_SRSS1->Sumw2();
  h_mTl0loverlapWJet_EM_SRSS1 = new TH2F("h_mTl0loverlapWJet_EM_SRSS1", "h_mTl0loverlapWJet_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlapWJet_EM_SRSS1->Sumw2();
  
  h_ICl0loverlapWJet_EE_SRSS1 = new TH2F("h_ICl0loverlapWJet_EE_SRSS1", "h_ICl0loverlapWJet_EE_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl0loverlapWJet_EE_SRSS1->Sumw2();
  h_ICl0loverlapWJet_MM_SRSS1 = new TH2F("h_ICl0loverlapWJet_MM_SRSS1", "h_ICl0loverlapWJet_MM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl0loverlapWJet_MM_SRSS1->Sumw2();
  h_ICl0loverlapWJet_EM_SRSS1 = new TH2F("h_ICl0loverlapWJet_EM_SRSS1", "h_ICl0loverlapWJet_EM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl0loverlapWJet_EM_SRSS1->Sumw2();
  
  h_pTl0loverlapWJet_EE_SRSS1 = new TH2F("h_pTl0loverlapWJet_EE_SRSS1", "h_pTl0loverlapWJet_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl0loverlapWJet_EE_SRSS1->Sumw2();
  h_pTl0loverlapWJet_MM_SRSS1 = new TH2F("h_pTl0loverlapWJet_MM_SRSS1", "h_pTl0loverlapWJet_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl0loverlapWJet_MM_SRSS1->Sumw2();
  h_pTl0loverlapWJet_EM_SRSS1 = new TH2F("h_pTl0loverlapWJet_EM_SRSS1", "h_pTl0loverlapWJet_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl0loverlapWJet_EM_SRSS1->Sumw2();
  
  h_etal0loverlapWJet_EE_SRSS1 = new TH2F("h_etal0loverlapWJet_EE_SRSS1", "h_etal0loverlapWJet_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal0loverlapWJet_EE_SRSS1->Sumw2();
  h_etal0loverlapWJet_MM_SRSS1 = new TH2F("h_etal0loverlapWJet_MM_SRSS1", "h_etal0loverlapWJet_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal0loverlapWJet_MM_SRSS1->Sumw2();
  h_etal0loverlapWJet_EM_SRSS1 = new TH2F("h_etal0loverlapWJet_EM_SRSS1", "h_etal0loverlapWJet_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal0loverlapWJet_EM_SRSS1->Sumw2();
  
  h_ptcone30l0loverlapWJet_EE_SRSS1 = new TH2F("h_ptcone30l0loverlapWJet_EE_SRSS1", "h_ptcone30l0loverlapWJet_EE_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l0loverlapWJet_EE_SRSS1->Sumw2();
  h_ptcone30l0loverlapWJet_MM_SRSS1 = new TH2F("h_ptcone30l0loverlapWJet_MM_SRSS1", "h_ptcone30l0loverlapWJet_MM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l0loverlapWJet_MM_SRSS1->Sumw2();
  h_ptcone30l0loverlapWJet_EM_SRSS1 = new TH2F("h_ptcone30l0loverlapWJet_EM_SRSS1", "h_ptcone30l0loverlapWJet_EM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l0loverlapWJet_EM_SRSS1->Sumw2();
  
  h_d0Sigl0loverlapWJet_EE_SRSS1 = new TH2F("h_d0Sigl0loverlapWJet_EE_SRSS1", "h_d0Sigl0loverlapWJet_EE_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl0loverlapWJet_EE_SRSS1->Sumw2();
  h_d0Sigl0loverlapWJet_MM_SRSS1 = new TH2F("h_d0Sigl0loverlapWJet_MM_SRSS1", "h_d0Sigl0loverlapWJet_MM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl0loverlapWJet_MM_SRSS1->Sumw2();
  h_d0Sigl0loverlapWJet_EM_SRSS1 = new TH2F("h_d0Sigl0loverlapWJet_EM_SRSS1", "h_d0Sigl0loverlapWJet_EM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl0loverlapWJet_EM_SRSS1->Sumw2();
  
  h_z0SinThetal0loverlapWJet_EE_SRSS1 = new TH2F("h_z0SinThetal0loverlapWJet_EE_SRSS1", "h_z0SinThetal0loverlapWJet_EE_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal0loverlapWJet_EE_SRSS1->Sumw2();
  h_z0SinThetal0loverlapWJet_MM_SRSS1 = new TH2F("h_z0SinThetal0loverlapWJet_MM_SRSS1", "h_z0SinThetal0loverlapWJet_MM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal0loverlapWJet_MM_SRSS1->Sumw2();
  h_z0SinThetal0loverlapWJet_EM_SRSS1 = new TH2F("h_z0SinThetal0loverlapWJet_EM_SRSS1", "h_z0SinThetal0loverlapWJet_EM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal0loverlapWJet_EM_SRSS1->Sumw2();
  
  h_ml1loverlapWJet_EE_SRSS1 = new TH2F("h_ml1loverlapWJet_EE_SRSS1", "h_ml1loverlapWJet_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1loverlapWJet_EE_SRSS1->Sumw2();
  h_ml1loverlapWJet_MM_SRSS1 = new TH2F("h_ml1loverlapWJet_MM_SRSS1", "h_ml1loverlapWJet_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1loverlapWJet_MM_SRSS1->Sumw2();
  h_ml1loverlapWJet_EM_SRSS1 = new TH2F("h_ml1loverlapWJet_EM_SRSS1", "h_ml1loverlapWJet_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1loverlapWJet_EM_SRSS1->Sumw2();  
   
  h_mTl1loverlapWJet_EE_SRSS1 = new TH2F("h_mTl1loverlapWJet_EE_SRSS1", "h_mTl1loverlapWJet_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlapWJet_EE_SRSS1->Sumw2();
  h_mTl1loverlapWJet_MM_SRSS1 = new TH2F("h_mTl1loverlapWJet_MM_SRSS1", "h_mTl1loverlapWJet_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlapWJet_MM_SRSS1->Sumw2();
  h_mTl1loverlapWJet_EM_SRSS1 = new TH2F("h_mTl1loverlapWJet_EM_SRSS1", "h_mTl1loverlapWJet_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlapWJet_EM_SRSS1->Sumw2();
  
  h_ICl1loverlapWJet_EE_SRSS1 = new TH2F("h_ICl1loverlapWJet_EE_SRSS1", "h_ICl1loverlapWJet_EE_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl1loverlapWJet_EE_SRSS1->Sumw2();
  h_ICl1loverlapWJet_MM_SRSS1 = new TH2F("h_ICl1loverlapWJet_MM_SRSS1", "h_ICl1loverlapWJet_MM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl1loverlapWJet_MM_SRSS1->Sumw2();
  h_ICl1loverlapWJet_EM_SRSS1 = new TH2F("h_ICl1loverlapWJet_EM_SRSS1", "h_ICl1loverlapWJet_EM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl1loverlapWJet_EM_SRSS1->Sumw2();
  
  h_pTl1loverlapWJet_EE_SRSS1 = new TH2F("h_pTl1loverlapWJet_EE_SRSS1", "h_pTl1loverlapWJet_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl1loverlapWJet_EE_SRSS1->Sumw2();
  h_pTl1loverlapWJet_MM_SRSS1 = new TH2F("h_pTl1loverlapWJet_MM_SRSS1", "h_pTl1loverlapWJet_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl1loverlapWJet_MM_SRSS1->Sumw2();
  h_pTl1loverlapWJet_EM_SRSS1 = new TH2F("h_pTl1loverlapWJet_EM_SRSS1", "h_pTl1loverlapWJet_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl1loverlapWJet_EM_SRSS1->Sumw2();
  
  h_etal1loverlapWJet_EE_SRSS1 = new TH2F("h_etal1loverlapWJet_EE_SRSS1", "h_etal1loverlapWJet_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal1loverlapWJet_EE_SRSS1->Sumw2();
  h_etal1loverlapWJet_MM_SRSS1 = new TH2F("h_etal1loverlapWJet_MM_SRSS1", "h_etal1loverlapWJet_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal1loverlapWJet_MM_SRSS1->Sumw2();
  h_etal1loverlapWJet_EM_SRSS1 = new TH2F("h_etal1loverlapWJet_EM_SRSS1", "h_etal1loverlapWJet_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal1loverlapWJet_EM_SRSS1->Sumw2();
  
  h_ptcone30l1loverlapWJet_EE_SRSS1 = new TH2F("h_ptcone30l1loverlapWJet_EE_SRSS1", "h_ptcone30l1loverlapWJet_EE_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l1loverlapWJet_EE_SRSS1->Sumw2();
  h_ptcone30l1loverlapWJet_MM_SRSS1 = new TH2F("h_ptcone30l1loverlapWJet_MM_SRSS1", "h_ptcone30l1loverlapWJet_MM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l1loverlapWJet_MM_SRSS1->Sumw2();
  h_ptcone30l1loverlapWJet_EM_SRSS1 = new TH2F("h_ptcone30l1loverlapWJet_EM_SRSS1", "h_ptcone30l1loverlapWJet_EM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l1loverlapWJet_EM_SRSS1->Sumw2();
  
  h_d0Sigl1loverlapWJet_EE_SRSS1 = new TH2F("h_d0Sigl1loverlapWJet_EE_SRSS1", "h_d0Sigl1loverlapWJet_EE_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl1loverlapWJet_EE_SRSS1->Sumw2();
  h_d0Sigl1loverlapWJet_MM_SRSS1 = new TH2F("h_d0Sigl1loverlapWJet_MM_SRSS1", "h_d0Sigl1loverlapWJet_MM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl1loverlapWJet_MM_SRSS1->Sumw2();
  h_d0Sigl1loverlapWJet_EM_SRSS1 = new TH2F("h_d0Sigl1loverlapWJet_EM_SRSS1", "h_d0Sigl1loverlapWJet_EM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl1loverlapWJet_EM_SRSS1->Sumw2();
  
  h_z0SinThetal1loverlapWJet_EE_SRSS1 = new TH2F("h_z0SinThetal1loverlapWJet_EE_SRSS1", "h_z0SinThetal1loverlapWJet_EE_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal1loverlapWJet_EE_SRSS1->Sumw2();
  h_z0SinThetal1loverlapWJet_MM_SRSS1 = new TH2F("h_z0SinThetal1loverlapWJet_MM_SRSS1", "h_z0SinThetal1loverlapWJet_MM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal1loverlapWJet_MM_SRSS1->Sumw2();
  h_z0SinThetal1loverlapWJet_EM_SRSS1 = new TH2F("h_z0SinThetal1loverlapWJet_EM_SRSS1", "h_z0SinThetal1loverlapWJet_EM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal1loverlapWJet_EM_SRSS1->Sumw2();  
  //overlapWOFLepton
  h_Nleptons_overlapWOFLepton_EE_SRSS1 = new TH2F("h_Nleptons_overlapWOFLepton_EE_SRSS1", "h_Nleptons_overlapWOFLepton_EE_SRSS1", 11, -0.5, 10.5, 130, 0, 129); h_Nleptons_overlapWOFLepton_EE_SRSS1->Sumw2();
  h_Nleptons_overlapWOFLepton_MM_SRSS1 = new TH2F("h_Nleptons_overlapWOFLepton_MM_SRSS1", "h_Nleptons_overlapWOFLepton_MM_SRSS1", 11, -0.5, 10.5, 130, 0, 129); h_Nleptons_overlapWOFLepton_MM_SRSS1->Sumw2();
  h_Nleptons_overlapWOFLepton_EM_SRSS1 = new TH2F("h_Nleptons_overlapWOFLepton_EM_SRSS1", "h_Nleptons_overlapWOFLepton_EM_SRSS1", 11, -0.5, 10.5, 130, 0, 129); h_Nleptons_overlapWOFLepton_EM_SRSS1->Sumw2();
  
  h_ml0loverlapWOFLepton_EE_SRSS1 = new TH2F("h_ml0loverlapWOFLepton_EE_SRSS1", "h_ml0loverlapWOFLepton_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0loverlapWOFLepton_EE_SRSS1->Sumw2();
  h_ml0loverlapWOFLepton_MM_SRSS1 = new TH2F("h_ml0loverlapWOFLepton_MM_SRSS1", "h_ml0loverlapWOFLepton_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0loverlapWOFLepton_MM_SRSS1->Sumw2();
  h_ml0loverlapWOFLepton_EM_SRSS1 = new TH2F("h_ml0loverlapWOFLepton_EM_SRSS1", "h_ml0loverlapWOFLepton_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0loverlapWOFLepton_EM_SRSS1->Sumw2();  
   
  h_mTl0loverlapWOFLepton_EE_SRSS1 = new TH2F("h_mTl0loverlapWOFLepton_EE_SRSS1", "h_mTl0loverlapWOFLepton_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlapWOFLepton_EE_SRSS1->Sumw2();
  h_mTl0loverlapWOFLepton_MM_SRSS1 = new TH2F("h_mTl0loverlapWOFLepton_MM_SRSS1", "h_mTl0loverlapWOFLepton_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlapWOFLepton_MM_SRSS1->Sumw2();
  h_mTl0loverlapWOFLepton_EM_SRSS1 = new TH2F("h_mTl0loverlapWOFLepton_EM_SRSS1", "h_mTl0loverlapWOFLepton_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlapWOFLepton_EM_SRSS1->Sumw2();
  
  h_ICl0loverlapWOFLepton_EE_SRSS1 = new TH2F("h_ICl0loverlapWOFLepton_EE_SRSS1", "h_ICl0loverlapWOFLepton_EE_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl0loverlapWOFLepton_EE_SRSS1->Sumw2();
  h_ICl0loverlapWOFLepton_MM_SRSS1 = new TH2F("h_ICl0loverlapWOFLepton_MM_SRSS1", "h_ICl0loverlapWOFLepton_MM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl0loverlapWOFLepton_MM_SRSS1->Sumw2();
  h_ICl0loverlapWOFLepton_EM_SRSS1 = new TH2F("h_ICl0loverlapWOFLepton_EM_SRSS1", "h_ICl0loverlapWOFLepton_EM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl0loverlapWOFLepton_EM_SRSS1->Sumw2();
  
  h_pTl0loverlapWOFLepton_EE_SRSS1 = new TH2F("h_pTl0loverlapWOFLepton_EE_SRSS1", "h_pTl0loverlapWOFLepton_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl0loverlapWOFLepton_EE_SRSS1->Sumw2();
  h_pTl0loverlapWOFLepton_MM_SRSS1 = new TH2F("h_pTl0loverlapWOFLepton_MM_SRSS1", "h_pTl0loverlapWOFLepton_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl0loverlapWOFLepton_MM_SRSS1->Sumw2();
  h_pTl0loverlapWOFLepton_EM_SRSS1 = new TH2F("h_pTl0loverlapWOFLepton_EM_SRSS1", "h_pTl0loverlapWOFLepton_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl0loverlapWOFLepton_EM_SRSS1->Sumw2();
  
  h_etal0loverlapWOFLepton_EE_SRSS1 = new TH2F("h_etal0loverlapWOFLepton_EE_SRSS1", "h_etal0loverlapWOFLepton_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal0loverlapWOFLepton_EE_SRSS1->Sumw2();
  h_etal0loverlapWOFLepton_MM_SRSS1 = new TH2F("h_etal0loverlapWOFLepton_MM_SRSS1", "h_etal0loverlapWOFLepton_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal0loverlapWOFLepton_MM_SRSS1->Sumw2();
  h_etal0loverlapWOFLepton_EM_SRSS1 = new TH2F("h_etal0loverlapWOFLepton_EM_SRSS1", "h_etal0loverlapWOFLepton_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal0loverlapWOFLepton_EM_SRSS1->Sumw2();
  
  h_ptcone30l0loverlapWOFLepton_EE_SRSS1 = new TH2F("h_ptcone30l0loverlapWOFLepton_EE_SRSS1", "h_ptcone30l0loverlapWOFLepton_EE_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l0loverlapWOFLepton_EE_SRSS1->Sumw2();
  h_ptcone30l0loverlapWOFLepton_MM_SRSS1 = new TH2F("h_ptcone30l0loverlapWOFLepton_MM_SRSS1", "h_ptcone30l0loverlapWOFLepton_MM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l0loverlapWOFLepton_MM_SRSS1->Sumw2();
  h_ptcone30l0loverlapWOFLepton_EM_SRSS1 = new TH2F("h_ptcone30l0loverlapWOFLepton_EM_SRSS1", "h_ptcone30l0loverlapWOFLepton_EM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l0loverlapWOFLepton_EM_SRSS1->Sumw2();
  
  h_d0Sigl0loverlapWOFLepton_EE_SRSS1 = new TH2F("h_d0Sigl0loverlapWOFLepton_EE_SRSS1", "h_d0Sigl0loverlapWOFLepton_EE_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl0loverlapWOFLepton_EE_SRSS1->Sumw2();
  h_d0Sigl0loverlapWOFLepton_MM_SRSS1 = new TH2F("h_d0Sigl0loverlapWOFLepton_MM_SRSS1", "h_d0Sigl0loverlapWOFLepton_MM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl0loverlapWOFLepton_MM_SRSS1->Sumw2();
  h_d0Sigl0loverlapWOFLepton_EM_SRSS1 = new TH2F("h_d0Sigl0loverlapWOFLepton_EM_SRSS1", "h_d0Sigl0loverlapWOFLepton_EM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl0loverlapWOFLepton_EM_SRSS1->Sumw2();
  
  h_z0SinThetal0loverlapWOFLepton_EE_SRSS1 = new TH2F("h_z0SinThetal0loverlapWOFLepton_EE_SRSS1", "h_z0SinThetal0loverlapWOFLepton_EE_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal0loverlapWOFLepton_EE_SRSS1->Sumw2();
  h_z0SinThetal0loverlapWOFLepton_MM_SRSS1 = new TH2F("h_z0SinThetal0loverlapWOFLepton_MM_SRSS1", "h_z0SinThetal0loverlapWOFLepton_MM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal0loverlapWOFLepton_MM_SRSS1->Sumw2();
  h_z0SinThetal0loverlapWOFLepton_EM_SRSS1 = new TH2F("h_z0SinThetal0loverlapWOFLepton_EM_SRSS1", "h_z0SinThetal0loverlapWOFLepton_EM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal0loverlapWOFLepton_EM_SRSS1->Sumw2();
  
  h_ml1loverlapWOFLepton_EE_SRSS1 = new TH2F("h_ml1loverlapWOFLepton_EE_SRSS1", "h_ml1loverlapWOFLepton_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1loverlapWOFLepton_EE_SRSS1->Sumw2();
  h_ml1loverlapWOFLepton_MM_SRSS1 = new TH2F("h_ml1loverlapWOFLepton_MM_SRSS1", "h_ml1loverlapWOFLepton_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1loverlapWOFLepton_MM_SRSS1->Sumw2();
  h_ml1loverlapWOFLepton_EM_SRSS1 = new TH2F("h_ml1loverlapWOFLepton_EM_SRSS1", "h_ml1loverlapWOFLepton_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1loverlapWOFLepton_EM_SRSS1->Sumw2();  
   
  h_mTl1loverlapWOFLepton_EE_SRSS1 = new TH2F("h_mTl1loverlapWOFLepton_EE_SRSS1", "h_mTl1loverlapWOFLepton_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlapWOFLepton_EE_SRSS1->Sumw2();
  h_mTl1loverlapWOFLepton_MM_SRSS1 = new TH2F("h_mTl1loverlapWOFLepton_MM_SRSS1", "h_mTl1loverlapWOFLepton_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlapWOFLepton_MM_SRSS1->Sumw2();
  h_mTl1loverlapWOFLepton_EM_SRSS1 = new TH2F("h_mTl1loverlapWOFLepton_EM_SRSS1", "h_mTl1loverlapWOFLepton_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlapWOFLepton_EM_SRSS1->Sumw2();
  
  h_ICl1loverlapWOFLepton_EE_SRSS1 = new TH2F("h_ICl1loverlapWOFLepton_EE_SRSS1", "h_ICl1loverlapWOFLepton_EE_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl1loverlapWOFLepton_EE_SRSS1->Sumw2();
  h_ICl1loverlapWOFLepton_MM_SRSS1 = new TH2F("h_ICl1loverlapWOFLepton_MM_SRSS1", "h_ICl1loverlapWOFLepton_MM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl1loverlapWOFLepton_MM_SRSS1->Sumw2();
  h_ICl1loverlapWOFLepton_EM_SRSS1 = new TH2F("h_ICl1loverlapWOFLepton_EM_SRSS1", "h_ICl1loverlapWOFLepton_EM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl1loverlapWOFLepton_EM_SRSS1->Sumw2();
  
  h_pTl1loverlapWOFLepton_EE_SRSS1 = new TH2F("h_pTl1loverlapWOFLepton_EE_SRSS1", "h_pTl1loverlapWOFLepton_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl1loverlapWOFLepton_EE_SRSS1->Sumw2();
  h_pTl1loverlapWOFLepton_MM_SRSS1 = new TH2F("h_pTl1loverlapWOFLepton_MM_SRSS1", "h_pTl1loverlapWOFLepton_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl1loverlapWOFLepton_MM_SRSS1->Sumw2();
  h_pTl1loverlapWOFLepton_EM_SRSS1 = new TH2F("h_pTl1loverlapWOFLepton_EM_SRSS1", "h_pTl1loverlapWOFLepton_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl1loverlapWOFLepton_EM_SRSS1->Sumw2();
  
  h_etal1loverlapWOFLepton_EE_SRSS1 = new TH2F("h_etal1loverlapWOFLepton_EE_SRSS1", "h_etal1loverlapWOFLepton_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal1loverlapWOFLepton_EE_SRSS1->Sumw2();
  h_etal1loverlapWOFLepton_MM_SRSS1 = new TH2F("h_etal1loverlapWOFLepton_MM_SRSS1", "h_etal1loverlapWOFLepton_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal1loverlapWOFLepton_MM_SRSS1->Sumw2();
  h_etal1loverlapWOFLepton_EM_SRSS1 = new TH2F("h_etal1loverlapWOFLepton_EM_SRSS1", "h_etal1loverlapWOFLepton_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal1loverlapWOFLepton_EM_SRSS1->Sumw2();
  
  h_ptcone30l1loverlapWOFLepton_EE_SRSS1 = new TH2F("h_ptcone30l1loverlapWOFLepton_EE_SRSS1", "h_ptcone30l1loverlapWOFLepton_EE_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l1loverlapWOFLepton_EE_SRSS1->Sumw2();
  h_ptcone30l1loverlapWOFLepton_MM_SRSS1 = new TH2F("h_ptcone30l1loverlapWOFLepton_MM_SRSS1", "h_ptcone30l1loverlapWOFLepton_MM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l1loverlapWOFLepton_MM_SRSS1->Sumw2();
  h_ptcone30l1loverlapWOFLepton_EM_SRSS1 = new TH2F("h_ptcone30l1loverlapWOFLepton_EM_SRSS1", "h_ptcone30l1loverlapWOFLepton_EM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l1loverlapWOFLepton_EM_SRSS1->Sumw2();
  
  h_d0Sigl1loverlapWOFLepton_EE_SRSS1 = new TH2F("h_d0Sigl1loverlapWOFLepton_EE_SRSS1", "h_d0Sigl1loverlapWOFLepton_EE_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl1loverlapWOFLepton_EE_SRSS1->Sumw2();
  h_d0Sigl1loverlapWOFLepton_MM_SRSS1 = new TH2F("h_d0Sigl1loverlapWOFLepton_MM_SRSS1", "h_d0Sigl1loverlapWOFLepton_MM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl1loverlapWOFLepton_MM_SRSS1->Sumw2();
  h_d0Sigl1loverlapWOFLepton_EM_SRSS1 = new TH2F("h_d0Sigl1loverlapWOFLepton_EM_SRSS1", "h_d0Sigl1loverlapWOFLepton_EM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl1loverlapWOFLepton_EM_SRSS1->Sumw2();
  
  h_z0SinThetal1loverlapWOFLepton_EE_SRSS1 = new TH2F("h_z0SinThetal1loverlapWOFLepton_EE_SRSS1", "h_z0SinThetal1loverlapWOFLepton_EE_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal1loverlapWOFLepton_EE_SRSS1->Sumw2();
  h_z0SinThetal1loverlapWOFLepton_MM_SRSS1 = new TH2F("h_z0SinThetal1loverlapWOFLepton_MM_SRSS1", "h_z0SinThetal1loverlapWOFLepton_MM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal1loverlapWOFLepton_MM_SRSS1->Sumw2();
  h_z0SinThetal1loverlapWOFLepton_EM_SRSS1 = new TH2F("h_z0SinThetal1loverlapWOFLepton_EM_SRSS1", "h_z0SinThetal1loverlapWOFLepton_EM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal1loverlapWOFLepton_EM_SRSS1->Sumw2();
  //overlapWSFLepton
  h_Nleptons_overlapWSFLepton_EE_SRSS1 = new TH2F("h_Nleptons_overlapWSFLepton_EE_SRSS1", "h_Nleptons_overlapWSFLepton_EE_SRSS1", 11, -0.5, 10.5, 130, 0, 129); h_Nleptons_overlapWSFLepton_EE_SRSS1->Sumw2();
  h_Nleptons_overlapWSFLepton_MM_SRSS1 = new TH2F("h_Nleptons_overlapWSFLepton_MM_SRSS1", "h_Nleptons_overlapWSFLepton_MM_SRSS1", 11, -0.5, 10.5, 130, 0, 129); h_Nleptons_overlapWSFLepton_MM_SRSS1->Sumw2();
  h_Nleptons_overlapWSFLepton_EM_SRSS1 = new TH2F("h_Nleptons_overlapWSFLepton_EM_SRSS1", "h_Nleptons_overlapWSFLepton_EM_SRSS1", 11, -0.5, 10.5, 130, 0, 129); h_Nleptons_overlapWSFLepton_EM_SRSS1->Sumw2();
  
  h_ml0loverlapWSFLepton_EE_SRSS1 = new TH2F("h_ml0loverlapWSFLepton_EE_SRSS1", "h_ml0loverlapWSFLepton_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0loverlapWSFLepton_EE_SRSS1->Sumw2();
  h_ml0loverlapWSFLepton_MM_SRSS1 = new TH2F("h_ml0loverlapWSFLepton_MM_SRSS1", "h_ml0loverlapWSFLepton_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0loverlapWSFLepton_MM_SRSS1->Sumw2();
  h_ml0loverlapWSFLepton_EM_SRSS1 = new TH2F("h_ml0loverlapWSFLepton_EM_SRSS1", "h_ml0loverlapWSFLepton_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0loverlapWSFLepton_EM_SRSS1->Sumw2();  
   
  h_mTl0loverlapWSFLepton_EE_SRSS1 = new TH2F("h_mTl0loverlapWSFLepton_EE_SRSS1", "h_mTl0loverlapWSFLepton_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlapWSFLepton_EE_SRSS1->Sumw2();
  h_mTl0loverlapWSFLepton_MM_SRSS1 = new TH2F("h_mTl0loverlapWSFLepton_MM_SRSS1", "h_mTl0loverlapWSFLepton_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlapWSFLepton_MM_SRSS1->Sumw2();
  h_mTl0loverlapWSFLepton_EM_SRSS1 = new TH2F("h_mTl0loverlapWSFLepton_EM_SRSS1", "h_mTl0loverlapWSFLepton_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlapWSFLepton_EM_SRSS1->Sumw2();
  
  h_ICl0loverlapWSFLepton_EE_SRSS1 = new TH2F("h_ICl0loverlapWSFLepton_EE_SRSS1", "h_ICl0loverlapWSFLepton_EE_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl0loverlapWSFLepton_EE_SRSS1->Sumw2();
  h_ICl0loverlapWSFLepton_MM_SRSS1 = new TH2F("h_ICl0loverlapWSFLepton_MM_SRSS1", "h_ICl0loverlapWSFLepton_MM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl0loverlapWSFLepton_MM_SRSS1->Sumw2();
  h_ICl0loverlapWSFLepton_EM_SRSS1 = new TH2F("h_ICl0loverlapWSFLepton_EM_SRSS1", "h_ICl0loverlapWSFLepton_EM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl0loverlapWSFLepton_EM_SRSS1->Sumw2();
  
  h_pTl0loverlapWSFLepton_EE_SRSS1 = new TH2F("h_pTl0loverlapWSFLepton_EE_SRSS1", "h_pTl0loverlapWSFLepton_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl0loverlapWSFLepton_EE_SRSS1->Sumw2();
  h_pTl0loverlapWSFLepton_MM_SRSS1 = new TH2F("h_pTl0loverlapWSFLepton_MM_SRSS1", "h_pTl0loverlapWSFLepton_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl0loverlapWSFLepton_MM_SRSS1->Sumw2();
  h_pTl0loverlapWSFLepton_EM_SRSS1 = new TH2F("h_pTl0loverlapWSFLepton_EM_SRSS1", "h_pTl0loverlapWSFLepton_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl0loverlapWSFLepton_EM_SRSS1->Sumw2();
  
  h_etal0loverlapWSFLepton_EE_SRSS1 = new TH2F("h_etal0loverlapWSFLepton_EE_SRSS1", "h_etal0loverlapWSFLepton_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal0loverlapWSFLepton_EE_SRSS1->Sumw2();
  h_etal0loverlapWSFLepton_MM_SRSS1 = new TH2F("h_etal0loverlapWSFLepton_MM_SRSS1", "h_etal0loverlapWSFLepton_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal0loverlapWSFLepton_MM_SRSS1->Sumw2();
  h_etal0loverlapWSFLepton_EM_SRSS1 = new TH2F("h_etal0loverlapWSFLepton_EM_SRSS1", "h_etal0loverlapWSFLepton_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal0loverlapWSFLepton_EM_SRSS1->Sumw2();
  
  h_ptcone30l0loverlapWSFLepton_EE_SRSS1 = new TH2F("h_ptcone30l0loverlapWSFLepton_EE_SRSS1", "h_ptcone30l0loverlapWSFLepton_EE_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l0loverlapWSFLepton_EE_SRSS1->Sumw2();
  h_ptcone30l0loverlapWSFLepton_MM_SRSS1 = new TH2F("h_ptcone30l0loverlapWSFLepton_MM_SRSS1", "h_ptcone30l0loverlapWSFLepton_MM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l0loverlapWSFLepton_MM_SRSS1->Sumw2();
  h_ptcone30l0loverlapWSFLepton_EM_SRSS1 = new TH2F("h_ptcone30l0loverlapWSFLepton_EM_SRSS1", "h_ptcone30l0loverlapWSFLepton_EM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l0loverlapWSFLepton_EM_SRSS1->Sumw2();
  
  h_d0Sigl0loverlapWSFLepton_EE_SRSS1 = new TH2F("h_d0Sigl0loverlapWSFLepton_EE_SRSS1", "h_d0Sigl0loverlapWSFLepton_EE_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl0loverlapWSFLepton_EE_SRSS1->Sumw2();
  h_d0Sigl0loverlapWSFLepton_MM_SRSS1 = new TH2F("h_d0Sigl0loverlapWSFLepton_MM_SRSS1", "h_d0Sigl0loverlapWSFLepton_MM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl0loverlapWSFLepton_MM_SRSS1->Sumw2();
  h_d0Sigl0loverlapWSFLepton_EM_SRSS1 = new TH2F("h_d0Sigl0loverlapWSFLepton_EM_SRSS1", "h_d0Sigl0loverlapWSFLepton_EM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl0loverlapWSFLepton_EM_SRSS1->Sumw2();
  
  h_z0SinThetal0loverlapWSFLepton_EE_SRSS1 = new TH2F("h_z0SinThetal0loverlapWSFLepton_EE_SRSS1", "h_z0SinThetal0loverlapWSFLepton_EE_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal0loverlapWSFLepton_EE_SRSS1->Sumw2();
  h_z0SinThetal0loverlapWSFLepton_MM_SRSS1 = new TH2F("h_z0SinThetal0loverlapWSFLepton_MM_SRSS1", "h_z0SinThetal0loverlapWSFLepton_MM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal0loverlapWSFLepton_MM_SRSS1->Sumw2();
  h_z0SinThetal0loverlapWSFLepton_EM_SRSS1 = new TH2F("h_z0SinThetal0loverlapWSFLepton_EM_SRSS1", "h_z0SinThetal0loverlapWSFLepton_EM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal0loverlapWSFLepton_EM_SRSS1->Sumw2();
  
  h_ml1loverlapWSFLepton_EE_SRSS1 = new TH2F("h_ml1loverlapWSFLepton_EE_SRSS1", "h_ml1loverlapWSFLepton_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1loverlapWSFLepton_EE_SRSS1->Sumw2();
  h_ml1loverlapWSFLepton_MM_SRSS1 = new TH2F("h_ml1loverlapWSFLepton_MM_SRSS1", "h_ml1loverlapWSFLepton_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1loverlapWSFLepton_MM_SRSS1->Sumw2();
  h_ml1loverlapWSFLepton_EM_SRSS1 = new TH2F("h_ml1loverlapWSFLepton_EM_SRSS1", "h_ml1loverlapWSFLepton_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1loverlapWSFLepton_EM_SRSS1->Sumw2();
  
   
  h_mTl1loverlapWSFLepton_EE_SRSS1 = new TH2F("h_mTl1loverlapWSFLepton_EE_SRSS1", "h_mTl1loverlapWSFLepton_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlapWSFLepton_EE_SRSS1->Sumw2();
  h_mTl1loverlapWSFLepton_MM_SRSS1 = new TH2F("h_mTl1loverlapWSFLepton_MM_SRSS1", "h_mTl1loverlapWSFLepton_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlapWSFLepton_MM_SRSS1->Sumw2();
  h_mTl1loverlapWSFLepton_EM_SRSS1 = new TH2F("h_mTl1loverlapWSFLepton_EM_SRSS1", "h_mTl1loverlapWSFLepton_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlapWSFLepton_EM_SRSS1->Sumw2();
  
  h_ICl1loverlapWSFLepton_EE_SRSS1 = new TH2F("h_ICl1loverlapWSFLepton_EE_SRSS1", "h_ICl1loverlapWSFLepton_EE_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl1loverlapWSFLepton_EE_SRSS1->Sumw2();
  h_ICl1loverlapWSFLepton_MM_SRSS1 = new TH2F("h_ICl1loverlapWSFLepton_MM_SRSS1", "h_ICl1loverlapWSFLepton_MM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl1loverlapWSFLepton_MM_SRSS1->Sumw2();
  h_ICl1loverlapWSFLepton_EM_SRSS1 = new TH2F("h_ICl1loverlapWSFLepton_EM_SRSS1", "h_ICl1loverlapWSFLepton_EM_SRSS1", 2, -0.5, 1.5 ,130, 0, 129);  h_ICl1loverlapWSFLepton_EM_SRSS1->Sumw2();
  
  h_pTl1loverlapWSFLepton_EE_SRSS1 = new TH2F("h_pTl1loverlapWSFLepton_EE_SRSS1", "h_pTl1loverlapWSFLepton_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl1loverlapWSFLepton_EE_SRSS1->Sumw2();
  h_pTl1loverlapWSFLepton_MM_SRSS1 = new TH2F("h_pTl1loverlapWSFLepton_MM_SRSS1", "h_pTl1loverlapWSFLepton_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl1loverlapWSFLepton_MM_SRSS1->Sumw2();
  h_pTl1loverlapWSFLepton_EM_SRSS1 = new TH2F("h_pTl1loverlapWSFLepton_EM_SRSS1", "h_pTl1loverlapWSFLepton_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_pTl1loverlapWSFLepton_EM_SRSS1->Sumw2();
  
  h_etal1loverlapWSFLepton_EE_SRSS1 = new TH2F("h_etal1loverlapWSFLepton_EE_SRSS1", "h_etal1loverlapWSFLepton_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal1loverlapWSFLepton_EE_SRSS1->Sumw2();
  h_etal1loverlapWSFLepton_MM_SRSS1 = new TH2F("h_etal1loverlapWSFLepton_MM_SRSS1", "h_etal1loverlapWSFLepton_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal1loverlapWSFLepton_MM_SRSS1->Sumw2();
  h_etal1loverlapWSFLepton_EM_SRSS1 = new TH2F("h_etal1loverlapWSFLepton_EM_SRSS1", "h_etal1loverlapWSFLepton_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_etal1loverlapWSFLepton_EM_SRSS1->Sumw2();
  
  h_ptcone30l1loverlapWSFLepton_EE_SRSS1 = new TH2F("h_ptcone30l1loverlapWSFLepton_EE_SRSS1", "h_ptcone30l1loverlapWSFLepton_EE_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l1loverlapWSFLepton_EE_SRSS1->Sumw2();
  h_ptcone30l1loverlapWSFLepton_MM_SRSS1 = new TH2F("h_ptcone30l1loverlapWSFLepton_MM_SRSS1", "h_ptcone30l1loverlapWSFLepton_MM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l1loverlapWSFLepton_MM_SRSS1->Sumw2();
  h_ptcone30l1loverlapWSFLepton_EM_SRSS1 = new TH2F("h_ptcone30l1loverlapWSFLepton_EM_SRSS1", "h_ptcone30l1loverlapWSFLepton_EM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_ptcone30l1loverlapWSFLepton_EM_SRSS1->Sumw2();
  
  h_d0Sigl1loverlapWSFLepton_EE_SRSS1 = new TH2F("h_d0Sigl1loverlapWSFLepton_EE_SRSS1", "h_d0Sigl1loverlapWSFLepton_EE_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl1loverlapWSFLepton_EE_SRSS1->Sumw2();
  h_d0Sigl1loverlapWSFLepton_MM_SRSS1 = new TH2F("h_d0Sigl1loverlapWSFLepton_MM_SRSS1", "h_d0Sigl1loverlapWSFLepton_MM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl1loverlapWSFLepton_MM_SRSS1->Sumw2();
  h_d0Sigl1loverlapWSFLepton_EM_SRSS1 = new TH2F("h_d0Sigl1loverlapWSFLepton_EM_SRSS1", "h_d0Sigl1loverlapWSFLepton_EM_SRSS1", 100, 0, 10 ,130, 0, 129);  h_d0Sigl1loverlapWSFLepton_EM_SRSS1->Sumw2();
  
  h_z0SinThetal1loverlapWSFLepton_EE_SRSS1 = new TH2F("h_z0SinThetal1loverlapWSFLepton_EE_SRSS1", "h_z0SinThetal1loverlapWSFLepton_EE_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal1loverlapWSFLepton_EE_SRSS1->Sumw2();
  h_z0SinThetal1loverlapWSFLepton_MM_SRSS1 = new TH2F("h_z0SinThetal1loverlapWSFLepton_MM_SRSS1", "h_z0SinThetal1loverlapWSFLepton_MM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal1loverlapWSFLepton_MM_SRSS1->Sumw2();
  h_z0SinThetal1loverlapWSFLepton_EM_SRSS1 = new TH2F("h_z0SinThetal1loverlapWSFLepton_EM_SRSS1", "h_z0SinThetal1loverlapWSFLepton_EM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal1loverlapWSFLepton_EM_SRSS1->Sumw2();
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
  
  h_z0SinThetal0lZcand_EE_SRSS1 = new TH2F("h_z0SinThetal0lZcand_EE_SRSS1", "h_z0SinThetal0lZcand_EE_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal0lZcand_EE_SRSS1->Sumw2();
  h_z0SinThetal0lZcand_MM_SRSS1 = new TH2F("h_z0SinThetal0lZcand_MM_SRSS1", "h_z0SinThetal0lZcand_MM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal0lZcand_MM_SRSS1->Sumw2();
  h_z0SinThetal0lZcand_EM_SRSS1 = new TH2F("h_z0SinThetal0lZcand_EM_SRSS1", "h_z0SinThetal0lZcand_EM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal0lZcand_EM_SRSS1->Sumw2();
  
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
  
  h_z0SinThetal1lZcand_EE_SRSS1 = new TH2F("h_z0SinThetal1lZcand_EE_SRSS1", "h_z0SinThetal1lZcand_EE_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal1lZcand_EE_SRSS1->Sumw2();
  h_z0SinThetal1lZcand_MM_SRSS1 = new TH2F("h_z0SinThetal1lZcand_MM_SRSS1", "h_z0SinThetal1lZcand_MM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal1lZcand_MM_SRSS1->Sumw2();
  h_z0SinThetal1lZcand_EM_SRSS1 = new TH2F("h_z0SinThetal1lZcand_EM_SRSS1", "h_z0SinThetal1lZcand_EM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal1lZcand_EM_SRSS1->Sumw2();
  
  
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
  
  h_z0SinThetal0lZcandSoft_EE_SRSS1 = new TH2F("h_z0SinThetal0lZcandSoft_EE_SRSS1", "h_z0SinThetal0lZcandSoft_EE_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal0lZcandSoft_EE_SRSS1->Sumw2();
  h_z0SinThetal0lZcandSoft_MM_SRSS1 = new TH2F("h_z0SinThetal0lZcandSoft_MM_SRSS1", "h_z0SinThetal0lZcandSoft_MM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal0lZcandSoft_MM_SRSS1->Sumw2();
  h_z0SinThetal0lZcandSoft_EM_SRSS1 = new TH2F("h_z0SinThetal0lZcandSoft_EM_SRSS1", "h_z0SinThetal0lZcandSoft_EM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal0lZcandSoft_EM_SRSS1->Sumw2();
  
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
 
  h_z0SinThetal1lZcandSoft_EE_SRSS1 = new TH2F("h_z0SinThetal1lZcandSoft_EE_SRSS1", "h_z0SinThetal1lZcandSoft_EE_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal1lZcandSoft_EE_SRSS1->Sumw2();
  h_z0SinThetal1lZcandSoft_MM_SRSS1 = new TH2F("h_z0SinThetal1lZcandSoft_MM_SRSS1", "h_z0SinThetal1lZcandSoft_MM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal1lZcandSoft_MM_SRSS1->Sumw2();
  h_z0SinThetal1lZcandSoft_EM_SRSS1 = new TH2F("h_z0SinThetal1lZcandSoft_EM_SRSS1", "h_z0SinThetal1lZcandSoft_EM_SRSS1", 100, 0, 1 ,130, 0, 129);  h_z0SinThetal1lZcandSoft_EM_SRSS1->Sumw2();
  
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
  h_DeltaR_ljOR_MM->Write();
  h_DeltaR_l0jOR_EM->Write();
  
  h_etcone30l1llost_EM_SRSS1->Write();
  h_etcone30l1lsoft_EM_SRSS1->Write();
  h_etcone30l1loverlap_EM_SRSS1->Write();
  h_etcone30l1loverlapWJet_EM_SRSS1->Write();
  h_etcone30l1loverlapWOFLepton_EM_SRSS1->Write();
  h_etcone30l1loverlapWSFLepton_EM_SRSS1->Write();
  h_etcone30l1lZcand_EM_SRSS1->Write();
  
  h_N_MuonToBeChecked_afterORWJet_MM->Write();
  h_N_MuonToBeChecked_afterORWOFLepton_MM->Write();
  h_N_MuonToBeChecked_afterORWSFLepton_MM->Write();
  h_N_MuonToBeChecked_afterMllCut_MM->Write();
  h_N_MuonToBeChecked_afterORWJet_EM->Write();
  h_N_MuonToBeChecked_afterORWOFLepton_EM->Write();
  h_N_MuonToBeChecked_afterORWSFLepton_EM->Write();
  h_N_MuonToBeChecked_afterMllCut_EM->Write();
  h_N_ElectronToBeChecked_afterORWJet_EM->Write();
  h_N_ElectronToBeChecked_afterORWOFLepton_EM->Write();
  h_N_ElectronToBeChecked_afterMllCut_EM->Write();
  
  h_Nleptons_lost_EE_SRSS1->Write();
  h_Nleptons_lost_MM_SRSS1->Write();
  h_Nleptons_lost_EM_SRSS1->Write();
  
  h_ml0llost_EE_SRSS1->Write();
  h_ml0llost_MM_SRSS1->Write();
  h_ml0llost_EM_SRSS1->Write();
  
  h_mTl0llost_EE_SRSS1->Write();
  h_mTl0llost_MM_SRSS1->Write();
  h_mTl0llost_EM_SRSS1->Write();
  
  h_ICl0llost_EE_SRSS1->Write();
  h_ICl0llost_MM_SRSS1->Write();
  h_ICl0llost_EM_SRSS1->Write();    
  
  h_pTl0llost_EE_SRSS1->Write();
  h_pTl0llost_MM_SRSS1->Write();
  h_pTl0llost_EM_SRSS1->Write();
  
  h_etal0llost_EE_SRSS1->Write();
  h_etal0llost_MM_SRSS1->Write();
  h_etal0llost_EM_SRSS1->Write();
  
  h_ptcone30l0llost_EE_SRSS1->Write();
  h_ptcone30l0llost_MM_SRSS1->Write();
  h_ptcone30l0llost_EM_SRSS1->Write();

  
  h_d0Sigl0llost_EE_SRSS1->Write();
  h_d0Sigl0llost_MM_SRSS1->Write();
  h_d0Sigl0llost_EM_SRSS1->Write();
  
  h_z0SinThetal0llost_EE_SRSS1->Write();
  h_z0SinThetal0llost_MM_SRSS1->Write();
  h_z0SinThetal0llost_EM_SRSS1->Write();
  
  h_ml1llost_EE_SRSS1->Write();
  h_ml1llost_MM_SRSS1->Write();
  h_ml1llost_EM_SRSS1->Write();
  
  h_mTl1llost_EE_SRSS1->Write();
  h_mTl1llost_MM_SRSS1->Write();
  h_mTl1llost_EM_SRSS1->Write();   
  
  h_ICl1llost_EE_SRSS1->Write();
  h_ICl1llost_MM_SRSS1->Write();
  h_ICl1llost_EM_SRSS1->Write();
  
  h_pTl1llost_EE_SRSS1->Write();
  h_pTl1llost_MM_SRSS1->Write();
  h_pTl1llost_EM_SRSS1->Write();
  
  h_etal1llost_EE_SRSS1->Write();
  h_etal1llost_MM_SRSS1->Write();
  h_etal1llost_EM_SRSS1->Write();
  
  h_ptcone30l1llost_EE_SRSS1->Write();
  h_ptcone30l1llost_MM_SRSS1->Write();
  h_ptcone30l1llost_EM_SRSS1->Write();
  
  h_d0Sigl1llost_EE_SRSS1->Write();
  h_d0Sigl1llost_MM_SRSS1->Write();
  h_d0Sigl1llost_EM_SRSS1->Write();
  
  h_z0SinThetal1llost_EE_SRSS1->Write();
  h_z0SinThetal1llost_MM_SRSS1->Write();
  h_z0SinThetal1llost_EM_SRSS1->Write();

  h_Nleptons_soft_EE_SRSS1->Write();
  h_Nleptons_soft_MM_SRSS1->Write();
  h_Nleptons_soft_EM_SRSS1->Write();
  
  h_ml0lsoft_EE_SRSS1->Write();
  h_ml0lsoft_MM_SRSS1->Write();
  h_ml0lsoft_EM_SRSS1->Write();
  
  h_mTl0lsoft_EE_SRSS1->Write();
  h_mTl0lsoft_MM_SRSS1->Write();
  h_mTl0lsoft_EM_SRSS1->Write();    
  
  h_ICl0lsoft_EE_SRSS1->Write();
  h_ICl0lsoft_MM_SRSS1->Write();
  h_ICl0lsoft_EM_SRSS1->Write();    
  
  h_pTl0lsoft_EE_SRSS1->Write();
  h_pTl0lsoft_MM_SRSS1->Write();
  h_pTl0lsoft_EM_SRSS1->Write();
  
  h_etal0lsoft_EE_SRSS1->Write();
  h_etal0lsoft_MM_SRSS1->Write();
  h_etal0lsoft_EM_SRSS1->Write();
  
  h_ptcone30l0lsoft_EE_SRSS1->Write();
  h_ptcone30l0lsoft_MM_SRSS1->Write();
  h_ptcone30l0lsoft_EM_SRSS1->Write();
  
  h_d0Sigl0lsoft_EE_SRSS1->Write();
  h_d0Sigl0lsoft_MM_SRSS1->Write();
  h_d0Sigl0lsoft_EM_SRSS1->Write();
  
  h_z0SinThetal0lsoft_EE_SRSS1->Write();
  h_z0SinThetal0lsoft_MM_SRSS1->Write();
  h_z0SinThetal0lsoft_EM_SRSS1->Write();
  
  h_ml1lsoft_EE_SRSS1->Write();
  h_ml1lsoft_MM_SRSS1->Write();
  h_ml1lsoft_EM_SRSS1->Write();
  
  h_mTl1lsoft_EE_SRSS1->Write();
  h_mTl1lsoft_MM_SRSS1->Write();
  h_mTl1lsoft_EM_SRSS1->Write();
  
  h_ICl1lsoft_EE_SRSS1->Write();
  h_ICl1lsoft_MM_SRSS1->Write();
  h_ICl1lsoft_EM_SRSS1->Write();
  
  h_pTl1lsoft_EE_SRSS1->Write();
  h_pTl1lsoft_MM_SRSS1->Write();
  h_pTl1lsoft_EM_SRSS1->Write();
  
  h_etal1lsoft_EE_SRSS1->Write();
  h_etal1lsoft_MM_SRSS1->Write();
  h_etal1lsoft_EM_SRSS1->Write();
  
  h_ptcone30l1lsoft_EE_SRSS1->Write();
  h_ptcone30l1lsoft_MM_SRSS1->Write();
  h_ptcone30l1lsoft_EM_SRSS1->Write();
  
  h_d0Sigl1lsoft_EE_SRSS1->Write();
  h_d0Sigl1lsoft_MM_SRSS1->Write();
  h_d0Sigl1lsoft_EM_SRSS1->Write();
  
  h_z0SinThetal1lsoft_EE_SRSS1->Write();
  h_z0SinThetal1lsoft_MM_SRSS1->Write();
  h_z0SinThetal1lsoft_EM_SRSS1->Write();
  
  h_Nleptons_overlap_EE_SRSS1->Write();
  h_Nleptons_overlap_MM_SRSS1->Write();
  h_Nleptons_overlap_EM_SRSS1->Write();
  
  h_ml0loverlap_EE_SRSS1->Write();
  h_ml0loverlap_MM_SRSS1->Write();
  h_ml0loverlap_EM_SRSS1->Write();
  
  h_mTl0loverlap_EE_SRSS1->Write();
  h_mTl0loverlap_MM_SRSS1->Write();
  h_mTl0loverlap_EM_SRSS1->Write();
  
  h_ICl0loverlap_EE_SRSS1->Write();
  h_ICl0loverlap_MM_SRSS1->Write();
  h_ICl0loverlap_EM_SRSS1->Write();    
  
  h_pTl0loverlap_EE_SRSS1->Write();
  h_pTl0loverlap_MM_SRSS1->Write();
  h_pTl0loverlap_EM_SRSS1->Write();
  
  h_etal0loverlap_EE_SRSS1->Write();
  h_etal0loverlap_MM_SRSS1->Write();
  h_etal0loverlap_EM_SRSS1->Write();
  
  h_ptcone30l0loverlap_EE_SRSS1->Write();
  h_ptcone30l0loverlap_MM_SRSS1->Write();
  h_ptcone30l0loverlap_EM_SRSS1->Write();
  
  h_d0Sigl0loverlap_EE_SRSS1->Write();
  h_d0Sigl0loverlap_MM_SRSS1->Write();
  h_d0Sigl0loverlap_EM_SRSS1->Write();
  
  h_z0SinThetal0loverlap_EE_SRSS1->Write();
  h_z0SinThetal0loverlap_MM_SRSS1->Write();
  h_z0SinThetal0loverlap_EM_SRSS1->Write();
  
  h_ml1loverlap_EE_SRSS1->Write();
  h_ml1loverlap_MM_SRSS1->Write();
  h_ml1loverlap_EM_SRSS1->Write();
  
  h_mTl1loverlap_EE_SRSS1->Write();
  h_mTl1loverlap_MM_SRSS1->Write();
  h_mTl1loverlap_EM_SRSS1->Write();    
  
  h_ICl1loverlap_EE_SRSS1->Write();
  h_ICl1loverlap_MM_SRSS1->Write();
  h_ICl1loverlap_EM_SRSS1->Write();
  
  h_pTl1loverlap_EE_SRSS1->Write();
  h_pTl1loverlap_MM_SRSS1->Write();
  h_pTl1loverlap_EM_SRSS1->Write();
  
  h_etal1loverlap_EE_SRSS1->Write();
  h_etal1loverlap_MM_SRSS1->Write();
  h_etal1loverlap_EM_SRSS1->Write();
  
  h_ptcone30l1loverlap_EE_SRSS1->Write();
  h_ptcone30l1loverlap_MM_SRSS1->Write();
  h_ptcone30l1loverlap_EM_SRSS1->Write();
  
  h_d0Sigl1loverlap_EE_SRSS1->Write();
  h_d0Sigl1loverlap_MM_SRSS1->Write();
  h_d0Sigl1loverlap_EM_SRSS1->Write();
  
  h_z0SinThetal1loverlap_EE_SRSS1->Write();
  h_z0SinThetal1loverlap_MM_SRSS1->Write();
  h_z0SinThetal1loverlap_EM_SRSS1->Write();
  
  h_Nleptons_overlapWJet_EE_SRSS1->Write();
  h_Nleptons_overlapWJet_MM_SRSS1->Write();
  h_Nleptons_overlapWJet_EM_SRSS1->Write();
  
  h_ml0loverlapWJet_EE_SRSS1->Write();
  h_ml0loverlapWJet_MM_SRSS1->Write();
  h_ml0loverlapWJet_EM_SRSS1->Write();
  
  h_mTl0loverlapWJet_EE_SRSS1->Write();
  h_mTl0loverlapWJet_MM_SRSS1->Write();
  h_mTl0loverlapWJet_EM_SRSS1->Write();    
  
  h_ICl0loverlapWJet_EE_SRSS1->Write();
  h_ICl0loverlapWJet_MM_SRSS1->Write();
  h_ICl0loverlapWJet_EM_SRSS1->Write();    
  
  h_pTl0loverlapWJet_EE_SRSS1->Write();
  h_pTl0loverlapWJet_MM_SRSS1->Write();
  h_pTl0loverlapWJet_EM_SRSS1->Write();
  
  h_etal0loverlapWJet_EE_SRSS1->Write();
  h_etal0loverlapWJet_MM_SRSS1->Write();
  h_etal0loverlapWJet_EM_SRSS1->Write();
  
  h_ptcone30l0loverlapWJet_EE_SRSS1->Write();
  h_ptcone30l0loverlapWJet_MM_SRSS1->Write();
  h_ptcone30l0loverlapWJet_EM_SRSS1->Write();
  
  h_d0Sigl0loverlapWJet_EE_SRSS1->Write();
  h_d0Sigl0loverlapWJet_MM_SRSS1->Write();
  h_d0Sigl0loverlapWJet_EM_SRSS1->Write();
  
  h_z0SinThetal0loverlapWJet_EE_SRSS1->Write();
  h_z0SinThetal0loverlapWJet_MM_SRSS1->Write();
  h_z0SinThetal0loverlapWJet_EM_SRSS1->Write();
  
  h_ml1loverlapWJet_EE_SRSS1->Write();
  h_ml1loverlapWJet_MM_SRSS1->Write();
  h_ml1loverlapWJet_EM_SRSS1->Write();
  
  h_mTl1loverlapWJet_EE_SRSS1->Write();
  h_mTl1loverlapWJet_MM_SRSS1->Write();
  h_mTl1loverlapWJet_EM_SRSS1->Write();    
  
  h_ICl1loverlapWJet_EE_SRSS1->Write();
  h_ICl1loverlapWJet_MM_SRSS1->Write();
  h_ICl1loverlapWJet_EM_SRSS1->Write();
  
  h_pTl1loverlapWJet_EE_SRSS1->Write();
  h_pTl1loverlapWJet_MM_SRSS1->Write();
  h_pTl1loverlapWJet_EM_SRSS1->Write();
  
  h_etal1loverlapWJet_EE_SRSS1->Write();
  h_etal1loverlapWJet_MM_SRSS1->Write();
  h_etal1loverlapWJet_EM_SRSS1->Write();
  
  h_ptcone30l1loverlapWJet_EE_SRSS1->Write();
  h_ptcone30l1loverlapWJet_MM_SRSS1->Write();
  h_ptcone30l1loverlapWJet_EM_SRSS1->Write();
  
  h_d0Sigl1loverlapWJet_EE_SRSS1->Write();
  h_d0Sigl1loverlapWJet_MM_SRSS1->Write();
  h_d0Sigl1loverlapWJet_EM_SRSS1->Write();
  
  h_z0SinThetal1loverlapWJet_EE_SRSS1->Write();
  h_z0SinThetal1loverlapWJet_MM_SRSS1->Write();
  h_z0SinThetal1loverlapWJet_EM_SRSS1->Write();
  
  h_Nleptons_overlapWOFLepton_EE_SRSS1->Write();
  h_Nleptons_overlapWOFLepton_MM_SRSS1->Write();
  h_Nleptons_overlapWOFLepton_EM_SRSS1->Write();
  
  h_ml0loverlapWOFLepton_EE_SRSS1->Write();
  h_ml0loverlapWOFLepton_MM_SRSS1->Write();
  h_ml0loverlapWOFLepton_EM_SRSS1->Write();
  
  h_mTl0loverlapWOFLepton_EE_SRSS1->Write();
  h_mTl0loverlapWOFLepton_MM_SRSS1->Write();
  h_mTl0loverlapWOFLepton_EM_SRSS1->Write();   
  
  h_ICl0loverlapWOFLepton_EE_SRSS1->Write();
  h_ICl0loverlapWOFLepton_MM_SRSS1->Write();
  h_ICl0loverlapWOFLepton_EM_SRSS1->Write();    
  
  h_pTl0loverlapWOFLepton_EE_SRSS1->Write();
  h_pTl0loverlapWOFLepton_MM_SRSS1->Write();
  h_pTl0loverlapWOFLepton_EM_SRSS1->Write();
  
  h_etal0loverlapWOFLepton_EE_SRSS1->Write();
  h_etal0loverlapWOFLepton_MM_SRSS1->Write();
  h_etal0loverlapWOFLepton_EM_SRSS1->Write();
  
  h_ptcone30l0loverlapWOFLepton_EE_SRSS1->Write();
  h_ptcone30l0loverlapWOFLepton_MM_SRSS1->Write();
  h_ptcone30l0loverlapWOFLepton_EM_SRSS1->Write();
  
  h_d0Sigl0loverlapWOFLepton_EE_SRSS1->Write();
  h_d0Sigl0loverlapWOFLepton_MM_SRSS1->Write();
  h_d0Sigl0loverlapWOFLepton_EM_SRSS1->Write();
  
  h_z0SinThetal0loverlapWOFLepton_EE_SRSS1->Write();
  h_z0SinThetal0loverlapWOFLepton_MM_SRSS1->Write();
  h_z0SinThetal0loverlapWOFLepton_EM_SRSS1->Write();
  
  h_ml1loverlapWOFLepton_EE_SRSS1->Write();
  h_ml1loverlapWOFLepton_MM_SRSS1->Write();
  h_ml1loverlapWOFLepton_EM_SRSS1->Write();
  
  h_mTl1loverlapWOFLepton_EE_SRSS1->Write();
  h_mTl1loverlapWOFLepton_MM_SRSS1->Write();
  h_mTl1loverlapWOFLepton_EM_SRSS1->Write();    
  
  h_ICl1loverlapWOFLepton_EE_SRSS1->Write();
  h_ICl1loverlapWOFLepton_MM_SRSS1->Write();
  h_ICl1loverlapWOFLepton_EM_SRSS1->Write();    
  
  h_pTl1loverlapWOFLepton_EE_SRSS1->Write();
  h_pTl1loverlapWOFLepton_MM_SRSS1->Write();
  h_pTl1loverlapWOFLepton_EM_SRSS1->Write();
  
  h_etal1loverlapWOFLepton_EE_SRSS1->Write();
  h_etal1loverlapWOFLepton_MM_SRSS1->Write();
  h_etal1loverlapWOFLepton_EM_SRSS1->Write();
  
  h_ptcone30l1loverlapWOFLepton_EE_SRSS1->Write();
  h_ptcone30l1loverlapWOFLepton_MM_SRSS1->Write();
  h_ptcone30l1loverlapWOFLepton_EM_SRSS1->Write();
  
  h_d0Sigl1loverlapWOFLepton_EE_SRSS1->Write();
  h_d0Sigl1loverlapWOFLepton_MM_SRSS1->Write();
  h_d0Sigl1loverlapWOFLepton_EM_SRSS1->Write();
  
  h_z0SinThetal1loverlapWOFLepton_EE_SRSS1->Write();
  h_z0SinThetal1loverlapWOFLepton_MM_SRSS1->Write();
  h_z0SinThetal1loverlapWOFLepton_EM_SRSS1->Write();
  
  h_Nleptons_overlapWSFLepton_EE_SRSS1->Write();
  h_Nleptons_overlapWSFLepton_MM_SRSS1->Write();
  h_Nleptons_overlapWSFLepton_EM_SRSS1->Write();
  
  h_ml0loverlapWSFLepton_EE_SRSS1->Write();
  h_ml0loverlapWSFLepton_MM_SRSS1->Write();
  h_ml0loverlapWSFLepton_EM_SRSS1->Write();
  
  h_mTl0loverlapWSFLepton_EE_SRSS1->Write();
  h_mTl0loverlapWSFLepton_MM_SRSS1->Write();
  h_mTl0loverlapWSFLepton_EM_SRSS1->Write();    
  
  h_pTl0loverlapWSFLepton_EE_SRSS1->Write();
  h_pTl0loverlapWSFLepton_MM_SRSS1->Write();
  h_pTl0loverlapWSFLepton_EM_SRSS1->Write();
  
  h_ICl0loverlapWSFLepton_EE_SRSS1->Write();
  h_ICl0loverlapWSFLepton_MM_SRSS1->Write();
  h_ICl0loverlapWSFLepton_EM_SRSS1->Write();   
  
  h_etal0loverlapWSFLepton_EE_SRSS1->Write();
  h_etal0loverlapWSFLepton_MM_SRSS1->Write();
  h_etal0loverlapWSFLepton_EM_SRSS1->Write();
  
  h_ptcone30l0loverlapWSFLepton_EE_SRSS1->Write();
  h_ptcone30l0loverlapWSFLepton_MM_SRSS1->Write();
  h_ptcone30l0loverlapWSFLepton_EM_SRSS1->Write();
  
  h_d0Sigl0loverlapWSFLepton_EE_SRSS1->Write();
  h_d0Sigl0loverlapWSFLepton_MM_SRSS1->Write();
  h_d0Sigl0loverlapWSFLepton_EM_SRSS1->Write();
  
  h_z0SinThetal0loverlapWSFLepton_EE_SRSS1->Write();
  h_z0SinThetal0loverlapWSFLepton_MM_SRSS1->Write();
  h_z0SinThetal0loverlapWSFLepton_EM_SRSS1->Write();
  
  h_ml1loverlapWSFLepton_EE_SRSS1->Write();
  h_ml1loverlapWSFLepton_MM_SRSS1->Write();
  h_ml1loverlapWSFLepton_EM_SRSS1->Write();
  
  h_mTl1loverlapWSFLepton_EE_SRSS1->Write();
  h_mTl1loverlapWSFLepton_MM_SRSS1->Write();
  h_mTl1loverlapWSFLepton_EM_SRSS1->Write();    
  
  h_ICl1loverlapWSFLepton_EE_SRSS1->Write();
  h_ICl1loverlapWSFLepton_MM_SRSS1->Write();
  h_ICl1loverlapWSFLepton_EM_SRSS1->Write();    
  
  h_pTl1loverlapWSFLepton_EE_SRSS1->Write();
  h_pTl1loverlapWSFLepton_MM_SRSS1->Write();
  h_pTl1loverlapWSFLepton_EM_SRSS1->Write();
  
  h_etal1loverlapWSFLepton_EE_SRSS1->Write();
  h_etal1loverlapWSFLepton_MM_SRSS1->Write();
  h_etal1loverlapWSFLepton_EM_SRSS1->Write();
  
  h_ptcone30l1loverlapWSFLepton_EE_SRSS1->Write();
  h_ptcone30l1loverlapWSFLepton_MM_SRSS1->Write();
  h_ptcone30l1loverlapWSFLepton_EM_SRSS1->Write();
  
  h_d0Sigl1loverlapWSFLepton_EE_SRSS1->Write();
  h_d0Sigl1loverlapWSFLepton_MM_SRSS1->Write();
  h_d0Sigl1loverlapWSFLepton_EM_SRSS1->Write();
  
  h_z0SinThetal1loverlapWSFLepton_EE_SRSS1->Write();
  h_z0SinThetal1loverlapWSFLepton_MM_SRSS1->Write();
  h_z0SinThetal1loverlapWSFLepton_EM_SRSS1->Write();
  
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

  		
 //softElectrons: electrons which are too soft: pT < 10 GeV [susyNt->ele() but pT < 10 GeV, no signal elon]
  ElectronVector softElectrons = getSoftElectrons(&nt, NtSys_NOM);
  //overlapElectrons: electrons which are removed in OR [getPreElectrons() but not m_baseElectrons (= no signal elon)]
  ElectronVector overlapElectrons = getOverlapElectrons(&nt, NtSys_NOM);

  
  ml0lsoft_EE = -1.;      
  mTl0lsoft_EE = -1.;
  ml1lsoft_EE = -1.;
  mTl1lsoft_EE = -1.;
  
  ml0llost_EE = -1.;      
  mTl0llost_EE = -1.;
  ml1llost_EE = -1.;
  mTl1llost_EE = -1.;
  
  ml0loverlap_EE = -1.;      
  mTl0loverlap_EE = -1.;
  ml1loverlap_EE = -1.;
  mTl1loverlap_EE = -1.;
  
  for(uint iel=0; iel<susyNt->ele()->size(); iel++){
    Electron* el_lost = &susyNt->ele()->at(iel);
    if((el_lost->DeltaR(*el0) < 0.0001) || (el_lost->DeltaR(*el1) < 0.0001)) continue;  //no signal lepton
    
    if((el_lost->q * el0->q)<0. || (el_lost->q * el1->q)<0.){
      TLorentzVector el_lost_TLV;
      el_lost_TLV.SetPtEtaPhiE(el_lost->pt, el_lost->eta ,el_lost->phi, el_lost->pt*cosh(el_lost->eta));
      el_lost_TLV.SetPtEtaPhiM(el_lost->pt, el_lost->eta ,el_lost->phi, el_lost->m);
      bool isSoftElectron = false;
      for(uint iel1=0; iel1<softElectrons.size(); iel1++){
	if(el_lost->DeltaR(*softElectrons.at(iel1)) < 0.0001) isSoftElectron = true;
      }
      bool isOverlapElectron = false;
      for(uint iel1=0; iel1<overlapElectrons.size(); iel1++){
	if(el_lost->DeltaR(*overlapElectrons.at(iel1)) < 0.0001) isOverlapElectron = true;
      }
      ml0llost_EE = (el0_TLV + el_lost_TLV).M();      
      mTl0llost_EE = calcMt(el0_TLV, el_lost_TLV);            
      ml1llost_EE = (el1_TLV + el_lost_TLV).M();      
      mTl1llost_EE = calcMt(el1_TLV, el_lost_TLV);      
      if((el0_TLV + el_lost_TLV).M() <= MZ+10. && (el0_TLV + el_lost_TLV).M() >= MZ-10.){
	}      
      
      if(isSoftElectron){
	ml0lsoft_EE = (el0_TLV + el_lost_TLV).M();      
	mTl0lsoft_EE = calcMt(el0_TLV, el_lost_TLV);      

	ml1lsoft_EE = (el1_TLV + el_lost_TLV).M();      
	mTl1lsoft_EE = calcMt(el1_TLV, el_lost_TLV);      
	
	
	if((el0_TLV + el_lost_TLV).M() <= MZ+10. && (el0_TLV + el_lost_TLV).M() >= MZ-10.){
	}
      }
      
      if(isOverlapElectron){
	ml0loverlap_EE = (el0_TLV + el_lost_TLV).M();      
	mTl0loverlap_EE = calcMt(el0_TLV, el_lost_TLV);      
	
	ml1loverlap_EE = (el1_TLV + el_lost_TLV).M();      
	mTl1loverlap_EE = calcMt(el1_TLV, el_lost_TLV);      
	if((el0_TLV + el_lost_TLV).M() <= MZ+10. && (el0_TLV + el_lost_TLV).M() >= MZ-10.){
	}
      }      
      
      break; // only use lost OS lepton with highest pT
      
    }
  }
  
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

  
//NEEded for WZ bg suppression:  
  ml0llost_MM = -1.;      
  mTl0llost_MM = -1.;
  ICl0llost_MM = -5;
  pTl0llost_MM = -1.;
  etal0llost_MM = -1.;
  ptcone30l0llost_MM = -1.;
  d0Sigl0llost_MM = -1.;
  z0SinThetal0llost_MM = -1.;
  
  ml1llost_MM = -1.;
  mTl1llost_MM = -1.;
  ICl1llost_MM = -5;
  pTl1llost_MM = -1.;
  etal1llost_MM = -1.;
  ptcone30l1llost_MM = -1.;
  d0Sigl1llost_MM = -1.;
  z0SinThetal1llost_MM = -1.;
  
  MuonVector mu_lost_vec;
  float DeltaMZ_l0llost = 99999.;
  float DeltaMZ_l1llost = 99999.;
  for(uint im=0; im<susyNt->muo()->size(); im++){
    Muon* mu_lost = &susyNt->muo()->at(im);
    if((mu_lost->DeltaR(*mu0) < 0.0001) || (mu_lost->DeltaR(*mu1) < 0.0001)) continue; //no signal lepton
    TLorentzVector mu_lost_TLV;
    mu_lost_TLV.SetPtEtaPhiE(mu_lost->pt, mu_lost->eta ,mu_lost->phi, mu_lost->pt*cosh(mu_lost->eta));
    mu_lost_TLV.SetPtEtaPhiM(mu_lost->pt, mu_lost->eta ,mu_lost->phi, mu_lost->m);
    mu_lost_vec.push_back(mu_lost);
    //can it be combined to SFOS pair?
    if((mu_lost->q * mu0->q)<0. || (mu_lost->q * mu1->q)<0.){
      //only combine it with the signal lepton where DeltaMZ is smallest.      
      if(fabs(MZ - Mll(mu0, mu_lost)) < fabs(MZ - Mll(mu1, mu_lost))){
	if(fabs(MZ - Mll(mu0, mu_lost)) < DeltaMZ_l0llost){
	  ml0llost_MM = Mll(mu0, mu_lost);      
	  mTl0llost_MM = calcMt(mu0_TLV, mu_lost_TLV);  
	  ICl0llost_MM = mu_lost->isCombined;
	  pTl0llost_MM = mu_lost->pt;
	  etal0llost_MM = fabs(mu_lost->eta);
	  ptcone30l0llost_MM = mu_lost->ptcone30ElStyle/mu_lost->pt;
	  d0Sigl0llost_MM = mu_lost->d0Sig(true);
	  z0SinThetal0llost_MM = mu_lost->z0SinTheta(true);	
	  DeltaMZ_l0llost = fabs(MZ - Mll(mu0, mu_lost));
	}
      }
      else{
	if(fabs(MZ - Mll(mu1, mu_lost)) < DeltaMZ_l1llost){
	  ml1llost_MM = (mu1_TLV + mu_lost_TLV).M();      
	  mTl1llost_MM = calcMt(mu1_TLV, mu_lost_TLV);  
	  ICl1llost_MM = mu_lost->isCombined;
	  pTl1llost_MM = mu_lost->pt;
	  etal1llost_MM = fabs(mu_lost->eta);
	  ptcone30l1llost_MM = mu_lost->ptcone30ElStyle/mu_lost->pt;
	  d0Sigl1llost_MM = mu_lost->d0Sig(true);
	  z0SinThetal1llost_MM = mu_lost->z0SinTheta(true);	
	  DeltaMZ_l1llost = fabs(MZ - Mll(mu1, mu_lost));
	}
      }
      
    }
  }
  Nleptons_lost_MM = mu_lost_vec.size();
  
  ml0lsoft_MM = -1.;      
  mTl0lsoft_MM = -1.;
  ICl0lsoft_MM = -5;
  pTl0lsoft_MM = -1.;
  etal0lsoft_MM = -1.;
  ptcone30l0lsoft_MM = -1.;
  d0Sigl0lsoft_MM = -1.;
  z0SinThetal0lsoft_MM = -1.;
  
  ml1lsoft_MM = -1.;
  mTl1lsoft_MM = -1.;
  ICl1lsoft_MM = -5;
  pTl1lsoft_MM = -1.;
  etal1lsoft_MM = -1.;
  ptcone30l1lsoft_MM = -1.;
  d0Sigl1lsoft_MM = -1.;
  z0SinThetal1lsoft_MM = -1.;
  
  MuonVector softMuons_vec;
  float DeltaMZ_l0lsoft = 99999.;
  float DeltaMZ_l1lsoft = 99999.;
  for(uint im=0; im<susyNt->muo()->size(); im++){
    Muon* soft_mu = &susyNt->muo()->at(im);
    soft_mu->setState(NtSys_NOM);
    if((soft_mu->DeltaR(*mu0) < 0.0001) || (soft_mu->DeltaR(*mu1) < 0.0001)) continue; //no signal lepton
    TLorentzVector softMuon_TLV;
    softMuon_TLV.SetPtEtaPhiE(soft_mu->pt, soft_mu->eta ,soft_mu->phi, soft_mu->pt*cosh(soft_mu->eta));
    softMuon_TLV.SetPtEtaPhiM(soft_mu->pt, soft_mu->eta ,soft_mu->phi, soft_mu->m);
    if(soft_mu->pt <= 10.){
      softMuons_vec.push_back(soft_mu);
      
      if((soft_mu->q * mu0->q)<0. || (soft_mu->q * mu1->q)<0.){
  //only combine it with the signal lepton where DeltaMZ is smallest.      
	if(fabs(MZ - Mll(mu0, soft_mu)) < fabs(MZ - Mll(mu1, soft_mu))){
	  if(fabs(MZ - Mll(mu0, soft_mu)) < DeltaMZ_l0lsoft){
	    ml0lsoft_MM = Mll(mu0, soft_mu);      
	    mTl0lsoft_MM = calcMt(mu0_TLV, softMuon_TLV);  
	    ICl0lsoft_MM = soft_mu->isCombined;
	    pTl0lsoft_MM = soft_mu->pt;
	    etal0lsoft_MM = fabs(soft_mu->eta);
	    ptcone30l0lsoft_MM = soft_mu->ptcone30ElStyle/soft_mu->pt;
	    d0Sigl0lsoft_MM = soft_mu->d0Sig(true);
	    z0SinThetal0lsoft_MM = soft_mu->z0SinTheta(true);	
	    DeltaMZ_l0lsoft = fabs(MZ - Mll(mu0, soft_mu));
	  }
	}
	else{
	  if(fabs(MZ - Mll(mu1, soft_mu)) < DeltaMZ_l1lsoft){
	    ml1lsoft_MM = (mu1_TLV + softMuon_TLV).M();      
	    mTl1lsoft_MM = calcMt(mu1_TLV, softMuon_TLV);  
	    ICl1lsoft_MM = soft_mu->isCombined;
	    pTl1lsoft_MM = soft_mu->pt;
	    etal1lsoft_MM = fabs(soft_mu->eta);
	    ptcone30l1lsoft_MM = soft_mu->ptcone30ElStyle/soft_mu->pt;
	    d0Sigl1lsoft_MM = soft_mu->d0Sig(true);
	    z0SinThetal1lsoft_MM = soft_mu->z0SinTheta(true);	
	    DeltaMZ_l1lsoft = fabs(MZ - Mll(mu1, soft_mu));
	  }
	}
      }
    }      
  }  
  Nleptons_soft_MM = softMuons_vec.size();
  
  ml0loverlap_MM = -1.;      
  mTl0loverlap_MM = -1.;
  ICl0loverlap_MM = -5;
  pTl0loverlap_MM = -1.;
  etal0loverlap_MM = -1.;
  ptcone30l0loverlap_MM = -1.;
  d0Sigl0loverlap_MM = -1.;
  z0SinThetal0loverlap_MM = -1.;
  
  ml1loverlap_MM = -1.;
  mTl1loverlap_MM = -1.;
  ICl1loverlap_MM = -5;
  pTl1loverlap_MM = -1.;
  etal1loverlap_MM = -1.;
  ptcone30l1loverlap_MM = -1.;
  d0Sigl1loverlap_MM = -1.;
  z0SinThetal1loverlap_MM = -1.;
  
  //overlapMuons: muons w/ pT> 10 GeV which are removed in OR [getPreMuons() but not m_baseMuons (= no signal muon)]
  MuonVector overlapMuon_vec;  
  MuonVector preMuon_vec = getPreMuons(&nt, NtSys_NOM);   

  float DeltaMZ_l0loverlap = 99999.;
  float DeltaMZ_l1loverlap = 99999.;
  // a preMuon is no signal muon and can not be matched to any baseline muon
  for(uint im=0; im<preMuon_vec.size(); im++){
    Muon* pre_mu = preMuon_vec.at(im);
    pre_mu->setState(NtSys_NOM);
    if((pre_mu->DeltaR(*mu0) < 0.0001) || (pre_mu->DeltaR(*mu1) < 0.0001)) continue; //no signal lepton

    bool isBaseMu = false;
    for(uint im2=0; im2<m_baseMuons.size(); im2++){
      Muon* base_mu = m_baseMuons.at(im2);
      base_mu->setState(NtSys_NOM);
      if(base_mu->DeltaR(*pre_mu) < 0.0001) isBaseMu = true;
    }
    
    if(!isBaseMu){ //can not be matched to any baseline muon
      TLorentzVector overlapMuon_TLV;
      overlapMuon_TLV.SetPtEtaPhiE(pre_mu->pt, pre_mu->eta ,pre_mu->phi, pre_mu->pt*cosh(pre_mu->eta));
      overlapMuon_TLV.SetPtEtaPhiM(pre_mu->pt, pre_mu->eta ,pre_mu->phi, pre_mu->m);
      overlapMuon_vec.push_back(pre_mu);
//       overlapMuon_TLV_vec.push_back(overlapMuon_TLV);
      if((pre_mu->q * mu0->q)<0. || (pre_mu->q * mu1->q)<0.){
	if(fabs(MZ - Mll(mu0, pre_mu)) < fabs(MZ - Mll(mu1, pre_mu))){
	  if(fabs(MZ - Mll(mu0, pre_mu)) < DeltaMZ_l0loverlap){
	    ml0loverlap_MM = Mll(mu0, pre_mu);      
	    mTl0loverlap_MM = calcMt(mu0_TLV, overlapMuon_TLV);  
	    ICl0loverlap_MM = pre_mu->isCombined;
	    pTl0loverlap_MM = pre_mu->pt;
	    etal0loverlap_MM = fabs(pre_mu->eta);
	    ptcone30l0loverlap_MM = pre_mu->ptcone30ElStyle/pre_mu->pt;
	    d0Sigl0loverlap_MM = pre_mu->d0Sig(true);
	    z0SinThetal0loverlap_MM = pre_mu->z0SinTheta(true);	
	    DeltaMZ_l0loverlap = fabs(MZ - Mll(mu0, pre_mu));
	  }
	}
	else{
	  if(fabs(MZ - Mll(mu1, pre_mu)) < DeltaMZ_l1loverlap){
	    ml1loverlap_MM = (mu1_TLV + overlapMuon_TLV).M();      
	    mTl1loverlap_MM = calcMt(mu1_TLV, overlapMuon_TLV);  
	    ICl1loverlap_MM = pre_mu->isCombined;
	    pTl1loverlap_MM = pre_mu->pt;
	    etal1loverlap_MM = fabs(pre_mu->eta);
	    ptcone30l1loverlap_MM = pre_mu->ptcone30ElStyle/pre_mu->pt;
	    d0Sigl1loverlap_MM = pre_mu->d0Sig(true);
	    z0SinThetal1loverlap_MM = pre_mu->z0SinTheta(true);	
	    DeltaMZ_l1loverlap = fabs(MZ - Mll(mu1, pre_mu));
	  }
	}
      }
    }
  }
  Nleptons_overlap_MM = overlapMuon_vec.size();

  //check why muon was removed in OR:
  ml0loverlapWJet_MM = -1.;      
  mTl0loverlapWJet_MM = -1.;
  pTl0loverlapWJet_MM = -1.;
  etal0loverlapWJet_MM = -1.;
  ptcone30l0loverlapWJet_MM = -1.;
  d0Sigl0loverlapWJet_MM = -1.;
  z0SinThetal0loverlapWJet_MM = -1.;
  
  ml1loverlapWJet_MM = -1.;
  mTl1loverlapWJet_MM = -1.;
  pTl1loverlapWJet_MM = -1.;
  etal1loverlapWJet_MM = -1.;
  ptcone30l1loverlapWJet_MM = -1.;
  d0Sigl1loverlapWJet_MM = -1.;
  z0SinThetal1loverlapWJet_MM = -1.;
  
  ml0loverlapWOFLepton_MM = -1.;      
  mTl0loverlapWOFLepton_MM = -1.;
  pTl0loverlapWOFLepton_MM = -1.;
  etal0loverlapWOFLepton_MM = -1.;
  ptcone30l0loverlapWOFLepton_MM = -1.;
  d0Sigl0loverlapWOFLepton_MM = -1.;
  z0SinThetal0loverlapWOFLepton_MM = -1.;
  
  ml1loverlapWOFLepton_MM = -1.;
  mTl1loverlapWOFLepton_MM = -1.;
  pTl1loverlapWOFLepton_MM = -1.;
  etal1loverlapWOFLepton_MM = -1.;
  ptcone30l1loverlapWOFLepton_MM = -1.;
  d0Sigl1loverlapWOFLepton_MM = -1.;
  z0SinThetal1loverlapWOFLepton_MM = -1.;
  
  ml0loverlapWSFLepton_MM = -1.;      
  mTl0loverlapWSFLepton_MM = -1.;
  pTl0loverlapWSFLepton_MM = -1.;
  etal0loverlapWSFLepton_MM = -1.;
  ptcone30l0loverlapWSFLepton_MM = -1.;
  d0Sigl0loverlapWSFLepton_MM = -1.;
  z0SinThetal0loverlapWSFLepton_MM = -1.;
  
  ml1loverlapWSFLepton_MM = -1.;
  mTl1loverlapWSFLepton_MM = -1.;
  pTl1loverlapWSFLepton_MM = -1.;
  etal1loverlapWSFLepton_MM = -1.;
  ptcone30l1loverlapWSFLepton_MM = -1.;
  d0Sigl1loverlapWSFLepton_MM = -1.;
  z0SinThetal1loverlapWSFLepton_MM = -1.;
  
   //perform the whole procedure:
  
  JetVector preJets = getPreJets(&nt, NtSys_NOM);
  ElectronVector preElectrons = getPreElectrons(&nt, NtSys_NOM);
  
  // Remove electrons from electrons
  e_e_overlap(preElectrons, E_E_DR);
  ElectronVector ElectronsAfterORWSFLepton_vec = preElectrons;
  // Remove jets from electrons
  e_j_overlap(preElectrons, preJets, J_E_DR, true);
  
  for (uint im=0; im<preMuon_vec.size(); im++){
    for(uint ij=0; ij<preJets.size(); ij++){
      double DeltaR_ljOR_MM = preMuon_vec.at(im)->DeltaR(*preJets.at(ij));
      h_DeltaR_ljOR_MM->Fill(DeltaR_ljOR_MM, weight_MM);
    }
  }
  // Remove electrons from jets
  e_j_overlap(preElectrons, preJets, E_J_DR, false);
  // Remove muons from jets
  MuonVector MuonsAfterORWJet_vec = preMuon_vec;
  m_j_overlap(MuonsAfterORWJet_vec, preJets, M_J_DR);
  
    
  MuonVector MuonsAfterORWOFLepton_vec = MuonsAfterORWJet_vec;
  // Remove electrons and muons that overlap
  e_m_overlap(preElectrons, MuonsAfterORWOFLepton_vec, E_M_DR);
  
  
    
  MuonVector MuonsAfterORWSFLepton_vec = MuonsAfterORWOFLepton_vec;
  // Remove muons from muons
  m_m_overlap(MuonsAfterORWSFLepton_vec, M_M_DR);

  
  MuonVector Muon_lostInORWJet_vec;
  MuonVector Muon_lostInORWOFLepton_vec;
  MuonVector Muon_lostInORWSFLepton_vec;
  
  double DeltaMZ_l0loverlapWJet = 99999.;
  double DeltaMZ_l1loverlapWJet = 99999.;  
  int n_mllMuons = 0;
  for(uint im=0; im<overlapMuon_vec.size(); im++){
    Muon* mu_overlapping = overlapMuon_vec.at(im);
    mu_overlapping->setState(NtSys_NOM);
    
    //can a muon which was lost in OR still be matched to a muon after OR with Jets?
    bool notOverlappingWJet = false;
    for(uint im2=0; im2<MuonsAfterORWJet_vec.size(); im2++){
      Muon* overlapWJet_mu = MuonsAfterORWJet_vec.at(im2);
      overlapWJet_mu->setState(NtSys_NOM);
      if(overlapWJet_mu->DeltaR(*mu_overlapping) < 0.0001) notOverlappingWJet = true;
    }
    
    if(!notOverlappingWJet){
      Muon_lostInORWJet_vec.push_back(mu_overlapping);
      TLorentzVector overlapWJetMuon_TLV;
      overlapWJetMuon_TLV.SetPtEtaPhiE(mu_overlapping->pt, mu_overlapping->eta ,mu_overlapping->phi, mu_overlapping->pt*cosh(mu_overlapping->eta));
      overlapWJetMuon_TLV.SetPtEtaPhiM(mu_overlapping->pt, mu_overlapping->eta ,mu_overlapping->phi, mu_overlapping->m);
//       cout << im << " muon overlappingWJet pt= " << mu_overlapping->pt << endl;
      
      if((mu_overlapping->q * mu0->q)<0. || (mu_overlapping->q * mu1->q)<0.){
	if(fabs(MZ - Mll(mu0, mu_overlapping)) < fabs(MZ - Mll(mu1, mu_overlapping))){
	  if(fabs(MZ - Mll(mu0, mu_overlapping)) < DeltaMZ_l0loverlapWJet){
// 	    cout << "used for combi with l0" << endl;
	    ml0loverlapWJet_MM = Mll(mu0, mu_overlapping);      
	    mTl0loverlapWJet_MM = calcMt(mu0_TLV, overlapWJetMuon_TLV);  
	    ICl0loverlapWJet_MM = mu_overlapping->isCombined;
	    pTl0loverlapWJet_MM = mu_overlapping->pt;
	    etal0loverlapWJet_MM = fabs(mu_overlapping->eta);
	    ptcone30l0loverlapWJet_MM = mu_overlapping->ptcone30ElStyle/mu_overlapping->pt;
	    d0Sigl0loverlapWJet_MM = mu_overlapping->d0Sig(true);
	    z0SinThetal0loverlapWJet_MM = mu_overlapping->z0SinTheta(true);	
	    DeltaMZ_l0loverlapWJet = fabs(MZ - Mll(mu0, mu_overlapping));
	  }
	}
	else{
	  if(fabs(MZ - Mll(mu1, mu_overlapping)) < DeltaMZ_l1loverlapWJet){
// 	    cout << "used for combi with l1" << endl;
	    ml1loverlapWJet_MM = (mu1_TLV + overlapWJetMuon_TLV).M();      
	    mTl1loverlapWJet_MM = calcMt(mu1_TLV, overlapWJetMuon_TLV);  
	    ICl1loverlapWJet_MM = mu_overlapping->isCombined;
	    pTl1loverlapWJet_MM = mu_overlapping->pt;
	    etal1loverlapWJet_MM = fabs(mu_overlapping->eta);
	    ptcone30l1loverlapWJet_MM = mu_overlapping->ptcone30ElStyle/mu_overlapping->pt;
	    d0Sigl1loverlapWJet_MM = mu_overlapping->d0Sig(true);
	    z0SinThetal1loverlapWJet_MM = mu_overlapping->z0SinTheta(true);	
	    DeltaMZ_l1loverlapWJet = fabs(MZ - Mll(mu1, mu_overlapping));
	  }
	}
      }
    }
    else{
      //can a muon which was lost in OR be matched to a muon lost in OR with Electrons?
      double DeltaMZ_l0loverlapWOFLepton = 99999.;
      double DeltaMZ_l1loverlapWOFLepton = 99999.;
      bool notOverlappingWOFLepton = false;
      for(uint im2=0; im2<MuonsAfterORWOFLepton_vec.size(); im2++){
	Muon* overlapWOFLepton_mu = MuonsAfterORWOFLepton_vec.at(im2);
	overlapWOFLepton_mu->setState(NtSys_NOM);
	if(overlapWOFLepton_mu->DeltaR(*mu_overlapping) < 0.0001) notOverlappingWOFLepton = true;
      }
    
      if(!notOverlappingWOFLepton){
	Muon_lostInORWOFLepton_vec.push_back(mu_overlapping);
	TLorentzVector overlapWOFLeptonMuon_TLV;
	overlapWOFLeptonMuon_TLV.SetPtEtaPhiE(mu_overlapping->pt, mu_overlapping->eta ,mu_overlapping->phi, mu_overlapping->pt*cosh(mu_overlapping->eta));
	overlapWOFLeptonMuon_TLV.SetPtEtaPhiM(mu_overlapping->pt, mu_overlapping->eta ,mu_overlapping->phi, mu_overlapping->m);
	
	if((mu_overlapping->q * mu0->q)<0. || (mu_overlapping->q * mu1->q)<0.){
	  if(fabs(MZ - Mll(mu0, mu_overlapping)) < fabs(MZ - Mll(mu1, mu_overlapping))){
	    if(fabs(MZ - Mll(mu0, mu_overlapping)) < DeltaMZ_l0loverlapWOFLepton){
	      ml0loverlapWOFLepton_MM = Mll(mu0, mu_overlapping);      
	      mTl0loverlapWOFLepton_MM = calcMt(mu0_TLV, overlapWOFLeptonMuon_TLV);  
	      ICl0loverlapWOFLepton_MM = mu_overlapping->isCombined;
	      pTl0loverlapWOFLepton_MM = mu_overlapping->pt;
	      etal0loverlapWOFLepton_MM = fabs(mu_overlapping->eta);
	      ptcone30l0loverlapWOFLepton_MM = mu_overlapping->ptcone30ElStyle/mu_overlapping->pt;
	      d0Sigl0loverlapWOFLepton_MM = mu_overlapping->d0Sig(true);
	      z0SinThetal0loverlapWOFLepton_MM = mu_overlapping->z0SinTheta(true);	
	      DeltaMZ_l0loverlapWOFLepton = fabs(MZ - Mll(mu0, mu_overlapping));
	    }
	  }
	  else{
	    if(fabs(MZ - Mll(mu1, mu_overlapping)) < DeltaMZ_l1loverlapWOFLepton){
	      ml1loverlapWOFLepton_MM = (mu1_TLV + overlapWOFLeptonMuon_TLV).M();      
	      mTl1loverlapWOFLepton_MM = calcMt(mu1_TLV, overlapWOFLeptonMuon_TLV);  
	      ICl1loverlapWOFLepton_MM = mu_overlapping->isCombined;
	      pTl1loverlapWOFLepton_MM = mu_overlapping->pt;
	      etal1loverlapWOFLepton_MM = fabs(mu_overlapping->eta);
	      ptcone30l1loverlapWOFLepton_MM = mu_overlapping->ptcone30ElStyle/mu_overlapping->pt;
	      d0Sigl1loverlapWOFLepton_MM = mu_overlapping->d0Sig(true);
	      z0SinThetal1loverlapWOFLepton_MM = mu_overlapping->z0SinTheta(true);	
	      DeltaMZ_l1loverlapWOFLepton = fabs(MZ - Mll(mu1, mu_overlapping));
	    }
	  }
	}
      }
      
      else{
	
	//can a muon which was lost in OR be matched to a muon lost in OR with Muons?
	double DeltaMZ_l0loverlapWSFLepton = 99999.;
	double DeltaMZ_l1loverlapWSFLepton = 99999.;
        bool notOverlappingWSFLepton = false;
	for(uint im2=0; im2<MuonsAfterORWSFLepton_vec.size(); im2++){
	  Muon* overlapWSFLepton_mu = MuonsAfterORWSFLepton_vec.at(im2);
	  overlapWSFLepton_mu->setState(NtSys_NOM);
	  if(overlapWSFLepton_mu->DeltaR(*mu_overlapping) < 0.0001) notOverlappingWSFLepton = true;
	}
	
	if(!notOverlappingWSFLepton){
	  Muon_lostInORWSFLepton_vec.push_back(mu_overlapping);
	  TLorentzVector overlapWSFLeptonMuon_TLV;
	  overlapWSFLeptonMuon_TLV.SetPtEtaPhiE(mu_overlapping->pt, mu_overlapping->eta ,mu_overlapping->phi, mu_overlapping->pt*cosh(mu_overlapping->eta));
	  overlapWSFLeptonMuon_TLV.SetPtEtaPhiM(mu_overlapping->pt, mu_overlapping->eta ,mu_overlapping->phi, mu_overlapping->m);
	  
	  if((mu_overlapping->q * mu0->q)<0. || (mu_overlapping->q * mu1->q)<0.){
	    if(fabs(MZ - Mll(mu0, mu_overlapping)) < fabs(MZ - Mll(mu1, mu_overlapping))){
	      if(fabs(MZ - Mll(mu0, mu_overlapping)) < DeltaMZ_l0loverlapWSFLepton){
		ml0loverlapWSFLepton_MM = Mll(mu0, mu_overlapping);      
		mTl0loverlapWSFLepton_MM = calcMt(mu0_TLV, overlapWSFLeptonMuon_TLV);  
		ICl0loverlapWSFLepton_MM = mu_overlapping->isCombined;
		pTl0loverlapWSFLepton_MM = mu_overlapping->pt;
		etal0loverlapWSFLepton_MM = fabs(mu_overlapping->eta);
		ptcone30l0loverlapWSFLepton_MM = mu_overlapping->ptcone30ElStyle/mu_overlapping->pt;
		d0Sigl0loverlapWSFLepton_MM = mu_overlapping->d0Sig(true);
		z0SinThetal0loverlapWSFLepton_MM = mu_overlapping->z0SinTheta(true);	
		DeltaMZ_l0loverlapWSFLepton = fabs(MZ - Mll(mu0, mu_overlapping));
	      }
	    }
	  else{
	    if(fabs(MZ - Mll(mu1, mu_overlapping)) < DeltaMZ_l1loverlapWSFLepton){
	      ml1loverlapWSFLepton_MM = (mu1_TLV + overlapWSFLeptonMuon_TLV).M();      
	      mTl1loverlapWSFLepton_MM = calcMt(mu1_TLV, overlapWSFLeptonMuon_TLV);  
	      ICl1loverlapWSFLepton_MM = mu_overlapping->isCombined;
	      pTl1loverlapWSFLepton_MM = mu_overlapping->pt;
	      etal1loverlapWSFLepton_MM = fabs(mu_overlapping->eta);
	      ptcone30l1loverlapWSFLepton_MM = mu_overlapping->ptcone30ElStyle/mu_overlapping->pt;
	      d0Sigl1loverlapWSFLepton_MM = mu_overlapping->d0Sig(true);
	      z0SinThetal1loverlapWSFLepton_MM = mu_overlapping->z0SinTheta(true);	
	      DeltaMZ_l1loverlapWSFLepton = fabs(MZ - Mll(mu1, mu_overlapping));
	    }
	  }
	}
      }
      else{
	MuonVector MuonOverlappingWSFLepton_Mll_vec = overlapMuon_vec;
	removeSFOSPair(MuonOverlappingWSFLepton_Mll_vec, MLL_MIN);
	if(overlapMuon_vec.size() != MuonOverlappingWSFLepton_Mll_vec.size()) n_mllMuons += 1;
      }
    }
      
      
    }
    
  }
  Nleptons_overlapWJet_MM = Muon_lostInORWJet_vec.size();
  Nleptons_overlapWOFLepton_MM = Muon_lostInORWOFLepton_vec.size();
  Nleptons_overlapWSFLepton_MM = Muon_lostInORWSFLepton_vec.size();
  
  //from the muons lost in the OR with jets, which ones would be lost in the following OR steps? How many of them are still there after each step?
  JetVector preJets_toBeChecked = getPreJets(&nt, NtSys_NOM);
  ElectronVector preElectrons_toBeChecked = getPreElectrons(&nt, NtSys_NOM);
  
  // Remove electrons from electrons
  e_e_overlap(preElectrons_toBeChecked, E_E_DR);
  // Remove jets from electrons
  e_j_overlap(preElectrons_toBeChecked, preJets_toBeChecked, J_E_DR, true);
  // Remove electrons from jets
  e_j_overlap(preElectrons_toBeChecked, preJets_toBeChecked, E_J_DR, false);
  
  MuonVector muons_toBeChecked_vec = Muon_lostInORWJet_vec;  
  
  N_MuonToBeChecked_afterORWJet_MM = muons_toBeChecked_vec.size();
  
  e_m_overlap(preElectrons_toBeChecked, muons_toBeChecked_vec, E_M_DR);
  N_MuonToBeChecked_afterORWOFLepton_MM = muons_toBeChecked_vec.size();
  // Remove muons from muons
  m_m_overlap(muons_toBeChecked_vec, M_M_DR);
  N_MuonToBeChecked_afterORWSFLepton_MM = muons_toBeChecked_vec.size();
  removeSFOSPair(muons_toBeChecked_vec, MLL_MIN);
  N_MuonToBeChecked_afterMllCut_MM = muons_toBeChecked_vec.size();
//   cout << "of the muons lost in ORwJet: " << endl;
//   cout << "N_MuonToBeChecked_afterORWJet_MM= " << N_MuonToBeChecked_afterORWJet_MM << " N_MuonToBeChecked_afterORWOFLepton_MM= " << N_MuonToBeChecked_afterORWOFLepton_MM << " N_MuonToBeChecked_afterORWSFLepton_MM= " << N_MuonToBeChecked_afterORWSFLepton_MM << " N_MuonToBeChecked_afterMllCut_MM= " << N_MuonToBeChecked_afterMllCut_MM << endl;
  
  
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
  
  MuonVector MuonWOjOR_vec = preMuon_vec;
  e_m_overlap(ElectronsAfterORWSFLepton_vec, MuonWOjOR_vec, E_M_DR);
  m_m_overlap(MuonWOjOR_vec, M_M_DR);
  removeSFOSPair(MuonWOjOR_vec, MLL_MIN);
  
  //Zcand muons: all muons after the OR w/o m-j OR which are no signal muons
  double DeltaMZ_l0lZcand = 99999.;
  double DeltaMZ_l1lZcand = 99999.;
  MuonVector Muon_Zcand_vec;  
//   bool ZcandIsSignalMuon = false;
  for(uint im=0; im<MuonWOjOR_vec.size(); im++){
    Muon* mu_WOjOR = MuonWOjOR_vec.at(im);
    mu_WOjOR->setState(NtSys_NOM);
    if((mu_WOjOR->DeltaR(*mu0) < 0.0001) || (mu_WOjOR->DeltaR(*mu1) < 0.0001)){
//       ZcandIsSignalMuon = true;
      continue; //no signal lepton
    }
    TLorentzVector ZcandMuon_TLV;
    ZcandMuon_TLV.SetPtEtaPhiE(mu_WOjOR->pt, mu_WOjOR->eta ,mu_WOjOR->phi, mu_WOjOR->pt*cosh(mu_WOjOR->eta));
    ZcandMuon_TLV.SetPtEtaPhiM(mu_WOjOR->pt, mu_WOjOR->eta ,mu_WOjOR->phi, mu_WOjOR->m);
    Muon_Zcand_vec.push_back(mu_WOjOR);
    if((mu_WOjOR->q * mu0->q)<0. || (mu_WOjOR->q * mu1->q)<0.){
      if(fabs(MZ - Mll(mu0, mu_WOjOR)) < fabs(MZ - Mll(mu1, mu_WOjOR))){
	if(fabs(MZ - Mll(mu0, mu_WOjOR)) < DeltaMZ_l0lZcand){
	  ml0lZcand_MM = Mll(mu0, mu_WOjOR);      
	  mTl0lZcand_MM = calcMt(mu0_TLV, ZcandMuon_TLV);  
	  ICl0lZcand_MM = mu_WOjOR->isCombined;
	  pTl0lZcand_MM = mu_WOjOR->pt;
	  etal0lZcand_MM = fabs(mu_WOjOR->eta);
	  ptcone30l0lZcand_MM = mu_WOjOR->ptcone30ElStyle/mu_WOjOR->pt;
	  d0Sigl0lZcand_MM = mu_WOjOR->d0Sig(true);
	  z0SinThetal0lZcand_MM = mu_WOjOR->z0SinTheta(true);	
	  DeltaMZ_l0lZcand = fabs(MZ - Mll(mu0, mu_WOjOR));
	}
      }
      else{
	if(fabs(MZ - Mll(mu1, mu_WOjOR)) < DeltaMZ_l1lZcand){
	  ml1lZcand_MM = (mu1_TLV + ZcandMuon_TLV).M();      
	  mTl1lZcand_MM = calcMt(mu1_TLV, ZcandMuon_TLV);  
	  ICl1lZcand_MM = mu_WOjOR->isCombined;
	  pTl1lZcand_MM = mu_WOjOR->pt;
	  etal1lZcand_MM = fabs(mu_WOjOR->eta);
	  ptcone30l1lZcand_MM = mu_WOjOR->ptcone30ElStyle/mu_WOjOR->pt;
	  d0Sigl1lZcand_MM = mu_WOjOR->d0Sig(true);
	  z0SinThetal1lZcand_MM = mu_WOjOR->z0SinTheta(true);	
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
//   cout << "Nleptons_Zcand_MM= " << Nleptons_Zcand_MM << endl;
//   if((Muon_Zcand_vec.size() != Muon_lostInORWJet_vec.size()) && !ZcandIsSignalMuon) cout << "why is there no Zcand?" << endl;
//   cout << "mu_lost_vec.size()= " << mu_lost_vec.size() << " overlapMuon_vec.size()= " << overlapMuon_vec.size() << " Muon_lostInORWOFLepton_vec.size()= " << Muon_lostInORWOFLepton_vec.size() <<  " Muon_lostInORWSFLepton_vec.size()= " << Muon_lostInORWSFLepton_vec.size() << " Muon_lostInORWJet_vec.size()= " << Muon_lostInORWJet_vec.size() << " softMuons_vec.size()= " << softMuons_vec.size() << " n_mllMuons= " << n_mllMuons << endl;
//   if(mu_lost_vec.size() != (Muon_lostInORWOFLepton_vec.size() + Muon_lostInORWSFLepton_vec.size() + Muon_lostInORWJet_vec.size() + softMuons_vec.size()) + n_mllMuons) cout << "problem!" << endl;
//   cout << "---------------------" << endl;
  
  
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
  
  e_e_overlap(Electrons_all_vec, E_E_DR);
  // Remove electrons and muons that overlap
  e_m_overlap(Electrons_all_vec, Muons_all_vec, E_M_DR);
  m_m_overlap(Muons_all_vec, M_M_DR);
  removeSFOSPair(Muons_all_vec, MLL_MIN);
  
  //ZcandSoft muons: all muons after the OR w/o m-j OR which are no signal muons
  double DeltaMZ_l0lZcandSoft = 99999.;
  double DeltaMZ_l1lZcandSoft = 99999.;
  MuonVector Muon_ZcandSoft_vec;  
//   bool ZcandSoftIsSignalMuon = false;
  for(uint im=0; im<Muons_all_vec.size(); im++){
    Muon* mu_WOjOR = Muons_all_vec.at(im);
    mu_WOjOR->setState(NtSys_NOM);
    if((mu_WOjOR->DeltaR(*mu0) < 0.0001) || (mu_WOjOR->DeltaR(*mu1) < 0.0001)){
//       ZcandSoftIsSignalMuon = true;
      continue; //no signal lepton
    }
    if(fabs(mu_WOjOR->d0Sig(true)) >= MUON_D0SIG_CUT) continue;
    TLorentzVector ZcandSoftMuon_TLV;
    ZcandSoftMuon_TLV.SetPtEtaPhiE(mu_WOjOR->pt, mu_WOjOR->eta ,mu_WOjOR->phi, mu_WOjOR->pt*cosh(mu_WOjOR->eta));
    ZcandSoftMuon_TLV.SetPtEtaPhiM(mu_WOjOR->pt, mu_WOjOR->eta ,mu_WOjOR->phi, mu_WOjOR->m);
    Muon_ZcandSoft_vec.push_back(mu_WOjOR);
    if((mu_WOjOR->q * mu0->q)<0. || (mu_WOjOR->q * mu1->q)<0.){
      if(fabs(MZ - Mll(mu0, mu_WOjOR)) < fabs(MZ - Mll(mu1, mu_WOjOR))){
	if(fabs(MZ - Mll(mu0, mu_WOjOR)) < DeltaMZ_l0lZcandSoft){
	  ml0lZcandSoft_MM = Mll(mu0, mu_WOjOR);      
	  mTl0lZcandSoft_MM = calcMt(mu0_TLV, ZcandSoftMuon_TLV);  
	  ICl0lZcandSoft_MM = mu_WOjOR->isCombined;
	  pTl0lZcandSoft_MM = mu_WOjOR->pt;
	  etal0lZcandSoft_MM = fabs(mu_WOjOR->eta);
	  ptcone30l0lZcandSoft_MM = mu_WOjOR->ptcone30ElStyle/mu_WOjOR->pt;
	  d0Sigl0lZcandSoft_MM = mu_WOjOR->d0Sig(true);
	  z0SinThetal0lZcandSoft_MM = mu_WOjOR->z0SinTheta(true);	
	  DeltaMZ_l0lZcandSoft = fabs(MZ - Mll(mu0, mu_WOjOR));
	}
      }
      else{
	if(fabs(MZ - Mll(mu1, mu_WOjOR)) < DeltaMZ_l1lZcandSoft){
	  ml1lZcandSoft_MM = (mu1_TLV + ZcandSoftMuon_TLV).M();      
	  mTl1lZcandSoft_MM = calcMt(mu1_TLV, ZcandSoftMuon_TLV);  
	  ICl1lZcandSoft_MM = mu_WOjOR->isCombined;
	  pTl1lZcandSoft_MM = mu_WOjOR->pt;
	  etal1lZcandSoft_MM = fabs(mu_WOjOR->eta);
	  ptcone30l1lZcandSoft_MM = mu_WOjOR->ptcone30ElStyle/mu_WOjOR->pt;
	  d0Sigl1lZcandSoft_MM = mu_WOjOR->d0Sig(true);
	  z0SinThetal1lZcandSoft_MM = mu_WOjOR->z0SinTheta(true);	
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
  
  
  
  
  //NEEded for WZ bg suppression:  
//   l0 <-> mu
//   l1 <-> el
  ml0llost_EM = -1.;      
  mTl0llost_EM = -1.;
  ICl0llost_EM = -5.;
  pTl0llost_EM = -1.;
  etal0llost_EM = -1.;
  ptcone30l0llost_EM = -1.;
  d0Sigl0llost_EM = -1.;
  z0SinThetal0llost_EM = -1.;
  
  ml1llost_EM = -1.;
  mTl1llost_EM = -1.;
  ICl1llost_EM = -2;
  pTl1llost_EM = -1.;
  etal1llost_EM = -1.;
  ptcone30l1llost_EM = -1.;
  etcone30l1llost_EM = -1.;
  d0Sigl1llost_EM = -1.;
  z0SinThetal1llost_EM = -1.;
  
  MuonVector mu_lost_vec;
  float DeltaMZ_l0llost = 99999.;
  for(uint im=0; im<susyNt->muo()->size(); im++){
    Muon* mu_lost = &susyNt->muo()->at(im);
    if(mu_lost->DeltaR(*mu) < 0.0001) continue; //no signal lepton
    TLorentzVector mu_lost_TLV;
    mu_lost_TLV.SetPtEtaPhiE(mu_lost->pt, mu_lost->eta ,mu_lost->phi, mu_lost->pt*cosh(mu_lost->eta));
    mu_lost_TLV.SetPtEtaPhiM(mu_lost->pt, mu_lost->eta ,mu_lost->phi, mu_lost->m);
    mu_lost_vec.push_back(mu_lost);
    //can it be combined to SFOS pair?
    if((mu_lost->q * mu->q)<0.){
      if(fabs(MZ - Mll(mu, mu_lost)) < DeltaMZ_l0llost){
	ml0llost_EM = Mll(mu, mu_lost);      
	mTl0llost_EM = calcMt(mu_TLV, mu_lost_TLV);   
	ICl0llost_EM = mu_lost->isCombined;
	pTl0llost_EM = mu_lost->pt;
	etal0llost_EM = fabs(mu_lost->eta);
	ptcone30l0llost_EM = mu_lost->ptcone30ElStyle/mu_lost->pt;
	d0Sigl0llost_EM = mu_lost->d0Sig(true);
	z0SinThetal0llost_EM = mu_lost->z0SinTheta(true);
	DeltaMZ_l0llost = fabs(MZ - Mll(mu, mu_lost));
      }   
    }
  }
  
  ElectronVector el_lost_vec;
  float DeltaMZ_l1llost = 99999.;
  for(uint ie=0; ie<susyNt->ele()->size(); ie++){
    Electron* ele_lost = &susyNt->ele()->at(ie);
    if(ele_lost->DeltaR(*el) < 0.0001) continue; //no signal lepton
    TLorentzVector ele_lost_TLV;
    ele_lost_TLV.SetPtEtaPhiE(ele_lost->pt, ele_lost->eta ,ele_lost->phi, ele_lost->pt*cosh(ele_lost->eta));
    ele_lost_TLV.SetPtEtaPhiM(ele_lost->pt, ele_lost->eta ,ele_lost->phi, ele_lost->m);
    el_lost_vec.push_back(ele_lost);
    //can it be combined to SFOS pair?
    if((ele_lost->q * el->q)<0.){
      if(fabs(MZ - Mll(el, ele_lost)) < DeltaMZ_l1llost){
	ml1llost_EM = Mll(el, ele_lost);      
	mTl1llost_EM = calcMt(el_TLV, ele_lost_TLV);  
	pTl1llost_EM = ele_lost->pt;
	etal1llost_EM = fabs(ele_lost->eta);
	float ptcone30 = elPtConeCorr(ele_lost, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	ptcone30l1llost_EM = ptcone30/ele_lost->pt;
	float etcone = elEtTopoConeCorr(ele_lost, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	etcone30l1llost_EM = etcone/ele_lost->pt;
	d0Sigl1llost_EM = ele_lost->d0Sig(true);
	z0SinThetal1llost_EM = ele_lost->z0SinTheta(true);
	DeltaMZ_l1llost = fabs(MZ - Mll(el, ele_lost));
      }   
    }
  }
  //only use the lost lepton with mass of combination closest to Zmass
  if(DeltaMZ_l0llost < DeltaMZ_l1llost){
    ml1llost_EM = -1.;
    mTl1llost_EM = -1.;
    pTl1llost_EM = -1.;
    etal1llost_EM = -1.;
    ptcone30l1llost_EM = -1.;
    etcone30l1llost_EM = -1.;
    d0Sigl1llost_EM = -1.;
    z0SinThetal1llost_EM = -1.;
  }
  else{
    ml0llost_EM = -1.;      
    mTl0llost_EM = -1.;
    ICl0llost_EM = -5.;
    pTl0llost_EM = -1.;
    etal0llost_EM = -1.;
    ptcone30l0llost_EM = -1.;
    d0Sigl0llost_EM = -1.;
    z0SinThetal0llost_EM = -1.;
  }
  
  Nleptons_lost_EM = mu_lost_vec.size() + el_lost_vec.size();
  
  
  ml0lsoft_EM = -1.;      
  mTl0lsoft_EM = -1.;
  ICl0lsoft_EM = -5;
  pTl0lsoft_EM = -1.;
  etal0lsoft_EM = -1.;
  ptcone30l0lsoft_EM = -1.;
  d0Sigl0lsoft_EM = -1.;
  z0SinThetal0lsoft_EM = -1.;
  
  ml1lsoft_EM = -1.;
  mTl1lsoft_EM = -1.;
  ICl1lsoft_EM = -5;
  pTl1lsoft_EM = -1.;
  etal1lsoft_EM = -1.;
  ptcone30l1lsoft_EM = -1.;
  etcone30l1lsoft_EM = -1.;
  d0Sigl1lsoft_EM = -1.;
  z0SinThetal1lsoft_EM = -1.;
  
  MuonVector softMuons_vec;
  float DeltaMZ_l0lsoft = 99999.;
  for(uint im=0; im<susyNt->muo()->size(); im++){
    Muon* soft_mu = &susyNt->muo()->at(im);
    soft_mu->setState(NtSys_NOM);
    if(soft_mu->DeltaR(*mu) < 0.0001) continue; //no signal lepton
    TLorentzVector softMuon_TLV;
    softMuon_TLV.SetPtEtaPhiE(soft_mu->pt, soft_mu->eta ,soft_mu->phi, soft_mu->pt*cosh(soft_mu->eta));
    softMuon_TLV.SetPtEtaPhiM(soft_mu->pt, soft_mu->eta ,soft_mu->phi, soft_mu->m);
    if(soft_mu->pt <= 10.){
      softMuons_vec.push_back(soft_mu);
      
      if((soft_mu->q * mu->q)<0.){
	if(fabs(MZ - Mll(mu, soft_mu)) < DeltaMZ_l0lsoft){
	  ml0lsoft_EM = Mll(mu, soft_mu);      
	  mTl0lsoft_EM = calcMt(mu_TLV, softMuon_TLV);   
	  ICl0lsoft_EM = soft_mu->isCombined;
	  pTl0lsoft_EM = soft_mu->pt;
	  etal0lsoft_EM = fabs(soft_mu->eta);
	  ptcone30l0lsoft_EM = soft_mu->ptcone30ElStyle/soft_mu->pt;
	  d0Sigl0lsoft_EM = soft_mu->d0Sig(true);
	  z0SinThetal0lsoft_EM = soft_mu->z0SinTheta(true);	  
	  DeltaMZ_l0lsoft = fabs(MZ - Mll(mu, soft_mu));
	}
      }
    }      
  }  
  
  ElectronVector softElectrons_vec;
  float DeltaMZ_l1lsoft = 99999.;
  for(uint ie=0; ie<susyNt->ele()->size(); ie++){
    Electron* soft_ele = &susyNt->ele()->at(ie);
    soft_ele->setState(NtSys_NOM);
    if(soft_ele->DeltaR(*el) < 0.0001) continue; //no signal lepton
    TLorentzVector softElectron_TLV;
    softElectron_TLV.SetPtEtaPhiE(soft_ele->pt, soft_ele->eta ,soft_ele->phi, soft_ele->pt*cosh(soft_ele->eta));
    softElectron_TLV.SetPtEtaPhiM(soft_ele->pt, soft_ele->eta ,soft_ele->phi, soft_ele->m);
    if(soft_ele->pt <= 10.){
      softElectrons_vec.push_back(soft_ele);
      
      if((soft_ele->q * el->q)<0.){
	if(fabs(MZ - Mll(el, soft_ele)) < DeltaMZ_l1lsoft){
	  ml1lsoft_EM = Mll(el, soft_ele);      
	  mTl1lsoft_EM = calcMt(el_TLV, softElectron_TLV);  
	  pTl1lsoft_EM = soft_ele->pt;
	  etal1lsoft_EM = fabs(soft_ele->eta);
	  float ptcone30 = elPtConeCorr(soft_ele, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	  ptcone30l1lsoft_EM = ptcone30/soft_ele->pt;
	  float etcone = elEtTopoConeCorr(soft_ele, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	  etcone30l1lsoft_EM = etcone/soft_ele->pt;	  
	  d0Sigl1lsoft_EM = soft_ele->d0Sig(true);
	  z0SinThetal1lsoft_EM = soft_ele->z0SinTheta(true);	  
	  DeltaMZ_l1lsoft = fabs(MZ - Mll(el, soft_ele));
	}
      }
    }      
  }
  
  //only use the lost lepton with mass of combination closest to Zmass
  if(DeltaMZ_l0lsoft < DeltaMZ_l1lsoft){
  ml1lsoft_EM = -1.;
  mTl1lsoft_EM = -1.;
  pTl1lsoft_EM = -1.;
  etal1lsoft_EM = -1.;
  ptcone30l1lsoft_EM = -1.;
  etcone30l1lsoft_EM = -1.;
  d0Sigl1lsoft_EM = -1.;
  z0SinThetal1lsoft_EM = -1.;
  }
  else{
    ml0lsoft_EM = -1.;      
    mTl0lsoft_EM = -1.;
    ICl0lsoft_EM = -5;
    pTl0lsoft_EM = -1.;
    etal0lsoft_EM = -1.;
    ptcone30l0lsoft_EM = -1.;
    d0Sigl0lsoft_EM = -1.;
    z0SinThetal0lsoft_EM = -1.;
  }
    
  Nleptons_soft_EM = softMuons_vec.size() + softElectrons_vec.size();
  
  ml0loverlap_EM = -1.;      
  mTl0loverlap_EM = -1.;
  ICl0loverlap_EM = -5;
  pTl0loverlap_EM = -1.;
  etal0loverlap_EM = -1.;
  ptcone30l0loverlap_EM = -1.;
  d0Sigl0loverlap_EM = -1.;
  z0SinThetal0loverlap_EM = -1.;
  
  ml1loverlap_EM = -1.;
  mTl1loverlap_EM = -1.;
  ICl1loverlap_EM = -5;
  pTl1loverlap_EM = -1.;
  etal1loverlap_EM = -1.;
  ptcone30l1loverlap_EM = -1.;
  etcone30l1loverlap_EM = -1.;
  d0Sigl1loverlap_EM = -1.;
  z0SinThetal1loverlap_EM = -1.;
  
  //overlapMuons: muons w/ pT> 10 GeV which are removed in OR [getPreMuons() but not m_baseMuons (= no signal muon)]
  MuonVector overlapMuon_vec;  //"muons which are overlapping"
  MuonVector preMuon_vec = getPreMuons(&nt, NtSys_NOM);   

  ElectronVector overlapElectron_vec;  
  ElectronVector preElectron_vec = getPreElectrons(&nt, NtSys_NOM);   

  float DeltaMZ_l0loverlap = 99999.;
  float DeltaMZ_l1loverlap = 99999.;
  // a preMuon is no signal muon and can not be matched to any baseline muon
  for(uint im=0; im<preMuon_vec.size(); im++){
    Muon* pre_mu = preMuon_vec.at(im);
    pre_mu->setState(NtSys_NOM);
    if(pre_mu->DeltaR(*mu) < 0.0001) continue; //no signal lepton

    bool isBaseMu = false;
    for(uint im2=0; im2<m_baseMuons.size(); im2++){
      Muon* base_mu = m_baseMuons.at(im2);
      base_mu->setState(NtSys_NOM);
      if(base_mu->DeltaR(*pre_mu) < 0.0001) isBaseMu = true;
    }
    
    if(!isBaseMu){ //can not be matched to any baseline muon
      TLorentzVector overlapMuon_TLV;
      overlapMuon_TLV.SetPtEtaPhiE(pre_mu->pt, pre_mu->eta ,pre_mu->phi, pre_mu->pt*cosh(pre_mu->eta));
      overlapMuon_TLV.SetPtEtaPhiM(pre_mu->pt, pre_mu->eta ,pre_mu->phi, pre_mu->m);
      overlapMuon_vec.push_back(pre_mu);
      if((pre_mu->q * mu->q)<0.){
	if(fabs(MZ - Mll(mu, pre_mu)) < DeltaMZ_l0loverlap){
	  ml0loverlap_EM = Mll(mu, pre_mu);      
	  mTl0loverlap_EM = calcMt(mu_TLV, overlapMuon_TLV);  
	  ICl0loverlap_EM = pre_mu->isCombined;
	  pTl0loverlap_EM = pre_mu->pt;
	  etal0loverlap_EM = fabs(pre_mu->eta);
	  ptcone30l0loverlap_EM = pre_mu->ptcone30ElStyle/pre_mu->pt;
	  d0Sigl0loverlap_EM = pre_mu->d0Sig(true);
	  z0SinThetal0loverlap_EM = pre_mu->z0SinTheta(true);		  
	  DeltaMZ_l0loverlap = fabs(MZ - Mll(mu, pre_mu));
	}
      }
    }
  }
  
  for(uint ie=0; ie<preElectron_vec.size(); ie++){
    Electron* pre_elec = preElectron_vec.at(ie);
    pre_elec->setState(NtSys_NOM);
    if(pre_elec->DeltaR(*el) < 0.0001) continue; //no signal lepton

    bool isBaseEle = false;
    for(uint ie2=0; ie2<m_baseElectrons.size(); ie2++){
      Electron* base_ele = m_baseElectrons.at(ie2);
      base_ele->setState(NtSys_NOM);
      if(base_ele->DeltaR(*pre_elec) < 0.0001) isBaseEle = true;
    }
    
    if(!isBaseEle){ //can not be matched to any baseline muon
      TLorentzVector overlapElectron_TLV;
      overlapElectron_TLV.SetPtEtaPhiE(pre_elec->pt, pre_elec->eta ,pre_elec->phi, pre_elec->pt*cosh(pre_elec->eta));
      overlapElectron_TLV.SetPtEtaPhiM(pre_elec->pt, pre_elec->eta ,pre_elec->phi, pre_elec->m);
      overlapElectron_vec.push_back(pre_elec);
      if((pre_elec->q * el->q)<0.){
	if(fabs(MZ - Mll(el, pre_elec)) < DeltaMZ_l1loverlap){
	  ml1loverlap_EM = (el_TLV + overlapElectron_TLV).M();      
	  mTl1loverlap_EM = calcMt(el_TLV, overlapElectron_TLV);  
	  pTl1loverlap_EM = pre_elec->pt;
	  etal1loverlap_EM = fabs(pre_elec->eta);
	  float ptcone30 = elPtConeCorr(pre_elec, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	  ptcone30l1loverlap_EM = ptcone30/pre_elec->pt;
	  float etcone = elEtTopoConeCorr(pre_elec, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	  etcone30l1loverlap_EM = etcone/pre_elec->pt;	  	  
	  d0Sigl1loverlap_EM = pre_elec->d0Sig(true);
	  z0SinThetal1loverlap_EM = pre_elec->z0SinTheta(true);		  
	  DeltaMZ_l1loverlap = fabs(MZ - Mll(el, pre_elec));
	}
      }
    }
  }
  
  if(DeltaMZ_l0loverlap < DeltaMZ_l1loverlap){
    ml1loverlap_EM = -1.;
    mTl1loverlap_EM = -1.;
    pTl1loverlap_EM = -1.;
    etal1loverlap_EM = -1.;
    ptcone30l1loverlap_EM = -1.;
    etcone30l1loverlap_EM = -1.;
    d0Sigl1loverlap_EM = -1.;
    z0SinThetal1loverlap_EM = -1.;
  }
  else{
    ml0loverlap_EM = -1.;      
    mTl0loverlap_EM = -1.;
    ICl0loverlap_EM = -5;
    pTl0loverlap_EM = -1.;
    etal0loverlap_EM = -1.;
    ptcone30l0loverlap_EM = -1.;
    d0Sigl0loverlap_EM = -1.;
    z0SinThetal0loverlap_EM = -1.;
  }
  
  Nleptons_overlap_EM = overlapMuon_vec.size() + overlapElectron_vec.size();
  
  //check why muon was removed in OR:
  
  ml0loverlapWJet_EM = -1.;      
  mTl0loverlapWJet_EM = -1.;
  ICl0loverlapWJet_EM = -5;
  pTl0loverlapWJet_EM = -1.;
  etal0loverlapWJet_EM = -1.;
  ptcone30l0loverlapWJet_EM = -1.;
  d0Sigl0loverlapWJet_EM = -1.;
  z0SinThetal0loverlapWJet_EM = -1.;
  
  ml1loverlapWJet_EM = -1.;
  mTl1loverlapWJet_EM = -1.;
  ICl1loverlapWJet_EM = -5;
  pTl1loverlapWJet_EM = -1.;
  etal1loverlapWJet_EM = -1.;
  ptcone30l1loverlapWJet_EM = -1.;
  etcone30l1loverlapWJet_EM = -1.;
  d0Sigl1loverlapWJet_EM = -1.;
  z0SinThetal1loverlapWJet_EM = -1.;
  
  ml0loverlapWOFLepton_EM = -1.;      
  mTl0loverlapWOFLepton_EM = -1.;
  ICl0loverlapWOFLepton_EM = -5;
  pTl0loverlapWOFLepton_EM = -1.;
  etal0loverlapWOFLepton_EM = -1.;
  ptcone30l0loverlapWOFLepton_EM = -1.;
  d0Sigl0loverlapWOFLepton_EM = -1.;
  z0SinThetal0loverlapWOFLepton_EM = -1.;
  
  ml1loverlapWOFLepton_EM = -1.;
  mTl1loverlapWOFLepton_EM = -1.;
  ICl1loverlapWOFLepton_EM = -5;
  pTl1loverlapWOFLepton_EM = -1.;
  etal1loverlapWOFLepton_EM = -1.;
  ptcone30l1loverlapWOFLepton_EM = -1.;
  etcone30l1loverlapWOFLepton_EM = -1.;
  d0Sigl1loverlapWOFLepton_EM = -1.;
  z0SinThetal1loverlapWOFLepton_EM = -1.;
  
  ml0loverlapWSFLepton_EM = -1.;      
  mTl0loverlapWSFLepton_EM = -1.;
  ICl0loverlapWSFLepton_EM = -5;
  pTl0loverlapWSFLepton_EM = -1.;
  etal0loverlapWSFLepton_EM = -1.;
  ptcone30l0loverlapWSFLepton_EM = -1.;
  d0Sigl0loverlapWSFLepton_EM = -1.;
  z0SinThetal0loverlapWSFLepton_EM = -1.;
  
  ml1loverlapWSFLepton_EM = -1.;
  mTl1loverlapWSFLepton_EM = -1.;
  ICl1loverlapWSFLepton_EM = -5;
  pTl1loverlapWSFLepton_EM = -1.;
  etal1loverlapWSFLepton_EM = -1.;
  ptcone30l1loverlapWSFLepton_EM = -1.;
  d0Sigl1loverlapWSFLepton_EM = -1.;
  z0SinThetal1loverlapWSFLepton_EM = -1.;
  
   //perform the whole procedure as in SusyNtuple/SusyNtTools.cxx performOverlap()
  
  JetVector preJets = getPreJets(&nt, NtSys_NOM);
  ElectronVector preElectrons = getPreElectrons(&nt, NtSys_NOM);
  
  // Remove electrons from electrons
  e_e_overlap(preElectrons, E_E_DR);
  
  for (uint im=0; im<preMuon_vec.size(); im++){
    for(uint ij=0; ij<preJets.size(); ij++){
      double DeltaR_ljOR_EM = preMuon_vec.at(im)->DeltaR(*preJets.at(ij));
      h_DeltaR_l0jOR_EM->Fill(DeltaR_ljOR_EM, weight_EM);
    }
  }
  
  
  
  ElectronVector ElectronsAfterORWSFLepton_vec = preElectrons;
  // Remove jets from electrons
  e_j_overlap(preElectrons, preJets, J_E_DR, true);
  
  for (uint ie=0; ie<preElectrons.size(); ie++){
    for(uint ij=0; ij<preJets.size(); ij++){
      double DeltaR_ljOR_EM = preElectrons.at(ie)->DeltaR(*preJets.at(ij));
      h_DeltaR_l1jOR_EM->Fill(DeltaR_ljOR_EM, weight_EM);
    }
  }
  // Remove taus from electrons
  TauVector taus;
  if(m_selectTaus) taus = getPreTaus(&nt, NtSys_NOM);
  else taus.clear();
  t_e_overlap(taus, preElectrons, T_E_DR);
  // Remove taus from muons
  t_m_overlap(taus, preMuon_vec, T_M_DR);
  // Remove electrons from jets
  ElectronVector ElectronsOverlappingWElectrons = preElectrons; // nEEded later for Zcandidate electrons (there: do NOT perform e-j OR)
  e_j_overlap(preElectrons, preJets, E_J_DR, false);
  ElectronVector ElectronOverlappingWJet_vec = preElectrons; //nEEded for OR categorization
  // Remove muons from jets
  MuonVector MuonsAfterORWJet_vec = preMuon_vec; //nEEded for OR categorization
  m_j_overlap(MuonsAfterORWJet_vec, preJets, M_J_DR);
  
  
  
  MuonVector MuonsAfterORWOFLepton_vec = MuonsAfterORWJet_vec; //nEEded for OR categorization
  // Remove electrons and muons that overlap
  e_m_overlap(preElectrons, MuonsAfterORWOFLepton_vec, E_M_DR);
  ElectronVector ElectronsAfterORWOFLepton_vec = preElectrons; //nEEded for OR categorization
  
  
    
  MuonVector MuonsAfterORWSFLepton_vec = MuonsAfterORWOFLepton_vec; //nEEded for OR categorization
  // Remove muons from muons
  m_m_overlap(MuonsAfterORWSFLepton_vec, M_M_DR);

  
  MuonVector Muon_lostInORWJet_vec;
  MuonVector Muon_lostInORWOFLepton_vec;
  MuonVector Muon_lostInORWSFLepton_vec;
  
  double DeltaMZ_l0loverlapWJet = 99999.;
  double DeltaMZ_l0loverlapWOFLepton = 99999.;
  double DeltaMZ_l0loverlapWSFLepton = 99999.;
  int n_mllMuons = 0;
  for(uint im=0; im<overlapMuon_vec.size(); im++){
    Muon* mu_overlapping = overlapMuon_vec.at(im);
    mu_overlapping->setState(NtSys_NOM);
    
    //can a muon which was lost in OR still be matched to a muon after OR with Jets?
    bool notOverlappingWJet = false;
    for(uint im2=0; im2<MuonsAfterORWJet_vec.size(); im2++){
      Muon* overlapWJet_mu = MuonsAfterORWJet_vec.at(im2);
      overlapWJet_mu->setState(NtSys_NOM);
      if(overlapWJet_mu->DeltaR(*mu_overlapping) < 0.0001) notOverlappingWJet = true;
    }
    
    if(!notOverlappingWJet){
      Muon_lostInORWJet_vec.push_back(mu_overlapping);
//       cout << "lost in ORWJet cut pt= " << mu_overlapping->pt << endl;
      TLorentzVector overlapWJetMuon_TLV;
      overlapWJetMuon_TLV.SetPtEtaPhiE(mu_overlapping->pt, mu_overlapping->eta ,mu_overlapping->phi, mu_overlapping->pt*cosh(mu_overlapping->eta));
      overlapWJetMuon_TLV.SetPtEtaPhiM(mu_overlapping->pt, mu_overlapping->eta ,mu_overlapping->phi, mu_overlapping->m);
      
      if((mu_overlapping->q * mu->q)<0.){
	if(fabs(MZ - Mll(mu, mu_overlapping)) < DeltaMZ_l0loverlapWJet){
	  ml0loverlapWJet_EM = Mll(mu, mu_overlapping);      
	  mTl0loverlapWJet_EM = calcMt(mu_TLV, overlapWJetMuon_TLV); 
	  ICl0loverlapWJet_EM = mu_overlapping->isCombined;
	  pTl0loverlapWJet_EM = mu_overlapping->pt;
	  etal0loverlapWJet_EM = fabs(mu_overlapping->eta);
	  ptcone30l0loverlapWJet_EM = mu_overlapping->ptcone30ElStyle/mu_overlapping->pt;
	  d0Sigl0loverlapWJet_EM = mu_overlapping->d0Sig(true);
	  z0SinThetal0loverlapWJet_EM = mu_overlapping->z0SinTheta(true);		  
	  DeltaMZ_l0loverlapWJet = fabs(MZ - Mll(mu, mu_overlapping));
	}
      }
    }
    else{
      //can a muon which was lost in OR be matched to a muon lost in OR with Electrons?
      bool notOverlappingWOFLepton = false;
      for(uint im2=0; im2<MuonsAfterORWOFLepton_vec.size(); im2++){
	Muon* overlapWOFLepton_mu = MuonsAfterORWOFLepton_vec.at(im2);
	overlapWOFLepton_mu->setState(NtSys_NOM);
	if(overlapWOFLepton_mu->DeltaR(*mu_overlapping) < 0.0001) notOverlappingWOFLepton = true;
      }
    
      if(!notOverlappingWOFLepton){
	Muon_lostInORWOFLepton_vec.push_back(mu_overlapping);
	TLorentzVector overlapWOFLeptonMuon_TLV;
	overlapWOFLeptonMuon_TLV.SetPtEtaPhiE(mu_overlapping->pt, mu_overlapping->eta ,mu_overlapping->phi, mu_overlapping->pt*cosh(mu_overlapping->eta));
	overlapWOFLeptonMuon_TLV.SetPtEtaPhiM(mu_overlapping->pt, mu_overlapping->eta ,mu_overlapping->phi, mu_overlapping->m);
	
	if((mu_overlapping->q * mu->q)<0.){
	  if(fabs(MZ - Mll(mu, mu_overlapping)) < DeltaMZ_l0loverlapWOFLepton){
	    ml0loverlapWOFLepton_EM = Mll(mu, mu_overlapping);      
	    mTl0loverlapWOFLepton_EM = calcMt(mu_TLV, overlapWOFLeptonMuon_TLV);      
	    ICl0loverlapWOFLepton_EM = mu_overlapping->isCombined;
	    pTl0loverlapWOFLepton_EM = mu_overlapping->pt;
	    etal0loverlapWOFLepton_EM = fabs(mu_overlapping->eta);
	    ptcone30l0loverlapWOFLepton_EM = mu_overlapping->ptcone30ElStyle/mu_overlapping->pt;
	    d0Sigl0loverlapWOFLepton_EM = mu_overlapping->d0Sig(true);
	    z0SinThetal0loverlapWOFLepton_EM = mu_overlapping->z0SinTheta(true);			    
	    DeltaMZ_l0loverlapWOFLepton = fabs(MZ - Mll(mu, mu_overlapping));
	  }
	}
      }
      
      else{
	
	//can a muon which was lost in OR be matched to a muon lost in OR with Muons?
        bool notOverlappingWSFLepton = false;
	for(uint im2=0; im2<MuonsAfterORWSFLepton_vec.size(); im2++){
	  Muon* overlapWSFLepton_mu = MuonsAfterORWSFLepton_vec.at(im2);
	  overlapWSFLepton_mu->setState(NtSys_NOM);
	  if(overlapWSFLepton_mu->DeltaR(*mu_overlapping) < 0.0001) notOverlappingWSFLepton = true;
	}
	
	if(!notOverlappingWSFLepton){
	  Muon_lostInORWSFLepton_vec.push_back(mu_overlapping);
	  TLorentzVector overlapWSFLeptonMuon_TLV;
	  overlapWSFLeptonMuon_TLV.SetPtEtaPhiE(mu_overlapping->pt, mu_overlapping->eta ,mu_overlapping->phi, mu_overlapping->pt*cosh(mu_overlapping->eta));
	  overlapWSFLeptonMuon_TLV.SetPtEtaPhiM(mu_overlapping->pt, mu_overlapping->eta ,mu_overlapping->phi, mu_overlapping->m);
	  
	  if((mu_overlapping->q * mu->q)<0.){
	    if(fabs(MZ - Mll(mu, mu_overlapping)) < DeltaMZ_l0loverlapWSFLepton){
	      ml0loverlapWSFLepton_EM = Mll(mu, mu_overlapping);      
	      mTl0loverlapWSFLepton_EM = calcMt(mu_TLV, overlapWSFLeptonMuon_TLV);  
	      ICl0loverlapWSFLepton_EM = mu_overlapping->isCombined;
	      pTl0loverlapWSFLepton_EM = mu_overlapping->pt;
	      etal0loverlapWSFLepton_EM = fabs(mu_overlapping->eta);
	      ptcone30l0loverlapWSFLepton_EM = mu_overlapping->ptcone30ElStyle/mu_overlapping->pt;
	      d0Sigl0loverlapWSFLepton_EM = mu_overlapping->d0Sig(true);
	      z0SinThetal0loverlapWSFLepton_EM = mu_overlapping->z0SinTheta(true);		      
	      DeltaMZ_l0loverlapWSFLepton = fabs(MZ - Mll(mu, mu_overlapping));
	    }
	  }
	}
	else{
	  MuonVector MuonOverlappingWSFLepton_Mll_vec = overlapMuon_vec;
	  removeSFOSPair(MuonOverlappingWSFLepton_Mll_vec, MLL_MIN);
	  if(overlapMuon_vec.size() != MuonOverlappingWSFLepton_Mll_vec.size()) n_mllMuons += 1;
	}
      }
      
      
    }
    
  }
    
//   cout << "mu_lost_vec.size()= " << mu_lost_vec.size() << " overlapMuon_vec.size()= " << overlapMuon_vec.size() << " Muon_lostInORWOFLepton_vec.size()= " << Muon_lostInORWOFLepton_vec.size() <<  " Muon_lostInORWSFLepton_vec.size()= " << Muon_lostInORWSFLepton_vec.size() << " Muon_lostInORWJet_vec.size()= " << Muon_lostInORWJet_vec.size() << " softMuons_vec.size()= " << softMuons_vec.size() << " n_mllMuons= " << n_mllMuons << endl;
//   if(mu_lost_vec.size() != (Muon_lostInORWOFLepton_vec.size() + Muon_lostInORWSFLepton_vec.size() + Muon_lostInORWJet_vec.size() + softMuons_vec.size()) + n_mllMuons) cout << "problem!" << endl;
//   
  ElectronVector Electron_lostInORWJet_vec;
  ElectronVector Electron_lostInORWOFLepton_vec;
  ElectronVector Electron_lostInORWSFLepton_vec;
  
  double DeltaMZ_l1loverlapWJet = 99999.;
  double DeltaMZ_l1loverlapWOFLepton = 99999.;
  double DeltaMZ_l1loverlapWSFLepton = 99999.;
  int n_mllElectrons = 0;
  for(uint ie=0; ie<overlapElectron_vec.size(); ie++){
    Electron* el_overlapping = overlapElectron_vec.at(ie);
    el_overlapping->setState(NtSys_NOM);
    
    //can an electron which was lost in OR still be matched to a electron after OR with Jets?
    bool notOverlappingWJet = false;
    for(uint ie2=0; ie2<ElectronOverlappingWJet_vec.size(); ie2++){
      Electron* overlapWJet_el = ElectronOverlappingWJet_vec.at(ie2);
      overlapWJet_el->setState(NtSys_NOM);
      if(overlapWJet_el->DeltaR(*el_overlapping) < 0.0001) notOverlappingWJet = true;
    }
    
    if(!notOverlappingWJet){
      Electron_lostInORWJet_vec.push_back(el_overlapping);
      TLorentzVector overlapWJetElectron_TLV;
      overlapWJetElectron_TLV.SetPtEtaPhiE(el_overlapping->pt, el_overlapping->eta ,el_overlapping->phi, el_overlapping->pt*cosh(el_overlapping->eta));
      overlapWJetElectron_TLV.SetPtEtaPhiM(el_overlapping->pt, el_overlapping->eta ,el_overlapping->phi, el_overlapping->m);
      
      if((el_overlapping->q * el->q)<0.){
	if(fabs(MZ - Mll(el, el_overlapping)) < DeltaMZ_l1loverlapWJet){
	  ml1loverlapWJet_EM = Mll(el, el_overlapping);      
	  mTl1loverlapWJet_EM = calcMt(el_TLV, overlapWJetElectron_TLV);     
	  pTl1loverlapWJet_EM = el_overlapping->pt;
	  etal1loverlapWJet_EM = fabs(el_overlapping->eta);
	  float ptcone30 = elPtConeCorr(el_overlapping, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	  ptcone30l1loverlapWJet_EM = ptcone30/el_overlapping->pt;
	  float etcone = elEtTopoConeCorr(el_overlapping, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	  etcone30l1loverlapWJet_EM = etcone/el_overlapping->pt;	  	  
	  d0Sigl1loverlapWJet_EM = el_overlapping->d0Sig(true);
	  z0SinThetal1loverlapWJet_EM = el_overlapping->z0SinTheta(true);		  
	  DeltaMZ_l1loverlapWJet = fabs(MZ - Mll(el, el_overlapping));
	}
      }
    }
    else{
      //can an electron which was lost in OR be matched to a electron lost in OR with muons?
      bool notOverlappingWOFLepton = false;
      for(uint ie2=0; ie2<ElectronsAfterORWOFLepton_vec.size(); ie2++){
	Electron* overlapWOFLepton_el = ElectronsAfterORWOFLepton_vec.at(ie2);
	overlapWOFLepton_el->setState(NtSys_NOM);
	if(overlapWOFLepton_el->DeltaR(*el_overlapping) < 0.0001) notOverlappingWOFLepton = true;
      }
    
      if(!notOverlappingWOFLepton){
	Electron_lostInORWOFLepton_vec.push_back(el_overlapping);
	TLorentzVector overlapWOFLeptonElectron_TLV;
	overlapWOFLeptonElectron_TLV.SetPtEtaPhiE(el_overlapping->pt, el_overlapping->eta ,el_overlapping->phi, el_overlapping->pt*cosh(el_overlapping->eta));
	overlapWOFLeptonElectron_TLV.SetPtEtaPhiM(el_overlapping->pt, el_overlapping->eta ,el_overlapping->phi, el_overlapping->m);
	
	if((el_overlapping->q * el->q)<0.){
	  if(fabs(MZ - Mll(el, el_overlapping)) < DeltaMZ_l1loverlapWOFLepton){
	    ml1loverlapWOFLepton_EM = Mll(el, el_overlapping);      
	    mTl1loverlapWOFLepton_EM = calcMt(el_TLV, overlapWOFLeptonElectron_TLV);  
	    pTl1loverlapWOFLepton_EM = el_overlapping->pt;
	    etal1loverlapWOFLepton_EM = fabs(el_overlapping->eta);
	    float ptcone30 = elPtConeCorr(el_overlapping, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	    ptcone30l1loverlapWOFLepton_EM = ptcone30/el_overlapping->pt;
	    float etcone = elEtTopoConeCorr(el_overlapping, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	    etcone30l1loverlapWOFLepton_EM = etcone/el_overlapping->pt;		    
	    d0Sigl1loverlapWOFLepton_EM = el_overlapping->d0Sig(true);
	    z0SinThetal1loverlapWOFLepton_EM = el_overlapping->z0SinTheta(true);	    
	    DeltaMZ_l1loverlapWOFLepton = fabs(MZ - Mll(el, el_overlapping));
	  }
	}
      }
      
      else{
	
	//can a muon which was lost in OR be matched to a muon lost in OR with Muons?
        bool notOverlappingWSFLepton = false;
	for(uint ie2=0; ie2<ElectronsAfterORWSFLepton_vec.size(); ie2++){
	  Electron* overlapWSFLepton_el = ElectronsAfterORWSFLepton_vec.at(ie2);
	  overlapWSFLepton_el->setState(NtSys_NOM);
	  if(overlapWSFLepton_el->DeltaR(*el_overlapping) < 0.0001) notOverlappingWSFLepton = true;
	}
	
	if(!notOverlappingWSFLepton){
	  Electron_lostInORWSFLepton_vec.push_back(el_overlapping);
	  TLorentzVector overlapWSFLeptonElectron_TLV;
	  overlapWSFLeptonElectron_TLV.SetPtEtaPhiE(el_overlapping->pt, el_overlapping->eta ,el_overlapping->phi, el_overlapping->pt*cosh(el_overlapping->eta));
	  overlapWSFLeptonElectron_TLV.SetPtEtaPhiM(el_overlapping->pt, el_overlapping->eta ,el_overlapping->phi, el_overlapping->m);
	  
	  if((el_overlapping->q * el->q)<0.){
	    if(fabs(MZ - Mll(el, el_overlapping)) < DeltaMZ_l1loverlapWSFLepton){
	      ml1loverlapWSFLepton_EM = Mll(el, el_overlapping);      
	      mTl1loverlapWSFLepton_EM = calcMt(el_TLV, overlapWSFLeptonElectron_TLV);  
	      pTl1loverlapWSFLepton_EM = el_overlapping->pt;
	      etal1loverlapWSFLepton_EM = fabs(el_overlapping->eta);
	      float ptcone30 = elPtConeCorr(el_overlapping, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	      ptcone30l1loverlapWSFLepton_EM = ptcone30/el_overlapping->pt;
	      float etcone = elEtTopoConeCorr(el_overlapping, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	      etcone30l1loverlapWSFLepton_EM = etcone/el_overlapping->pt;	
	      d0Sigl1loverlapWSFLepton_EM = el_overlapping->d0Sig(true);
	      z0SinThetal1loverlapWSFLepton_EM = el_overlapping->z0SinTheta(true);		      
	      DeltaMZ_l1loverlapWSFLepton = fabs(MZ - Mll(el, el_overlapping));
	    }
	  }
	}
	else{
	  ElectronVector ElectronOverlappingWSFLepton_Mll_vec = overlapElectron_vec;
	  removeSFOSPair(ElectronOverlappingWSFLepton_Mll_vec, MLL_MIN);
	  if(overlapElectron_vec.size() != ElectronOverlappingWSFLepton_Mll_vec.size()) n_mllElectrons += 1;
	}
      }
      
      
    }
    
  }
  Nleptons_overlapWJet_EM = Muon_lostInORWJet_vec.size() + Electron_lostInORWJet_vec.size();
  Nleptons_overlapWOFLepton_EM = Muon_lostInORWOFLepton_vec.size() + Electron_lostInORWOFLepton_vec.size();
  Nleptons_overlapWSFLepton_EM = Muon_lostInORWSFLepton_vec.size() + Electron_lostInORWSFLepton_vec.size();
  
//   cout << "el_lost_vec.size()= " << el_lost_vec.size() << " overlapElectron_vec.size()= " << overlapElectron_vec.size() << " Electron_lostInORWOFLepton_vec.size()= " << Electron_lostInORWOFLepton_vec.size() <<  " Electron_lostInORWJet_vec.size()= " << Electron_lostInORWJet_vec.size() << " softElectrons_vec.size()= " << softElectrons_vec.size() << " n_mllElectrons= " << n_mllElectrons << endl;
//   if(el_lost_vec.size() != (Muon_lostInORWOFLepton_vec.size() + Electron_lostInORWJet_vec.size() + softElectrons_vec.size()) + n_mllElectrons) cout << "problem!" << endl;
  if(DeltaMZ_l0loverlapWJet < DeltaMZ_l1loverlapWJet){
    ml1loverlapWJet_EM = -1.;
    mTl1loverlapWJet_EM = -1.;
    pTl1loverlapWJet_EM = -1.;
    etal1loverlapWJet_EM = -1.;
    ptcone30l1loverlapWJet_EM = -1.;
    etcone30l1loverlapWJet_EM = -1.;
    d0Sigl1loverlapWJet_EM = -1.;
    z0SinThetal1loverlapWJet_EM = -1.;
  }
  else{
    ml0loverlapWJet_EM = -1.;      
    mTl0loverlapWJet_EM = -1.;
    ICl0loverlapWJet_EM = -5;
    pTl0loverlapWJet_EM = -1.;
    etal0loverlapWJet_EM = -1.;
    ptcone30l0loverlapWJet_EM = -1.;
    d0Sigl0loverlapWJet_EM = -1.;
    z0SinThetal0loverlapWJet_EM = -1.;
  }
  if(DeltaMZ_l0loverlapWOFLepton < DeltaMZ_l1loverlapWOFLepton){
    ml1loverlapWOFLepton_EM = -1.;
    mTl1loverlapWOFLepton_EM = -1.;
    pTl1loverlapWOFLepton_EM = -1.;
    etal1loverlapWOFLepton_EM = -1.;
    ptcone30l1loverlapWOFLepton_EM = -1.;
    etcone30l1loverlapWOFLepton_EM = -1.;
    d0Sigl1loverlapWOFLepton_EM = -1.;
    z0SinThetal1loverlapWOFLepton_EM = -1.;
  }
  else{
    ml0loverlapWOFLepton_EM = -1.;      
    mTl0loverlapWOFLepton_EM = -1.;
    ICl0loverlapWOFLepton_EM = -5;
    pTl0loverlapWOFLepton_EM = -1.;
    etal0loverlapWOFLepton_EM = -1.;
    ptcone30l0loverlapWOFLepton_EM = -1.;
    d0Sigl0loverlapWOFLepton_EM = -1.;
    z0SinThetal0loverlapWOFLepton_EM = -1.;
  }
  if(DeltaMZ_l0loverlapWSFLepton < DeltaMZ_l1loverlapWSFLepton){
    ml1loverlapWSFLepton_EM = -1.;
    mTl1loverlapWSFLepton_EM = -1.;
    pTl1loverlapWSFLepton_EM = -1.;
    etal1loverlapWSFLepton_EM = -1.;
    ptcone30l1loverlapWSFLepton_EM = -1.;
    etcone30l1loverlapWSFLepton_EM = -1.;
    d0Sigl1loverlapWSFLepton_EM = -1.;
    z0SinThetal1loverlapWSFLepton_EM = -1.;
  }
  else{
    ml0loverlapWSFLepton_EM = -1.;      
    mTl0loverlapWSFLepton_EM = -1.;
    ICl0loverlapWSFLepton_EM = -5;
    pTl0loverlapWSFLepton_EM = -1.;
    etal0loverlapWSFLepton_EM = -1.;
    ptcone30l0loverlapWSFLepton_EM = -1.;
    d0Sigl0loverlapWSFLepton_EM = -1.;
    z0SinThetal0loverlapWSFLepton_EM = -1.;
  }
  
  JetVector preJets_toBeChecked = getPreJets(&nt, NtSys_NOM);
  ElectronVector preElectrons_toBeChecked = getPreElectrons(&nt, NtSys_NOM);
  
  // Remove electrons from electrons
  e_e_overlap(preElectrons_toBeChecked, E_E_DR);
  // Remove jets from electrons
  e_j_overlap(preElectrons_toBeChecked, preJets_toBeChecked, J_E_DR, true);
  // Remove electrons from jets
  e_j_overlap(preElectrons_toBeChecked, preJets_toBeChecked, E_J_DR, false);
  
  MuonVector muons_toBeChecked_vec = Muon_lostInORWJet_vec;  
  
  N_MuonToBeChecked_afterORWJet_EM = muons_toBeChecked_vec.size();
  
  e_m_overlap(preElectrons_toBeChecked, muons_toBeChecked_vec, E_M_DR);
  N_MuonToBeChecked_afterORWOFLepton_EM = muons_toBeChecked_vec.size();
  // Remove muons from muons
  m_m_overlap(muons_toBeChecked_vec, M_M_DR);
  N_MuonToBeChecked_afterORWSFLepton_EM = muons_toBeChecked_vec.size();
  removeSFOSPair(muons_toBeChecked_vec, MLL_MIN);
  N_MuonToBeChecked_afterMllCut_EM = muons_toBeChecked_vec.size();
  
  
  
  ElectronVector electrons_toBeChecked_vec = Electron_lostInORWJet_vec;  
  MuonVector muons_toBeCheckedforElectrons_vec = getPreMuons(&nt, NtSys_NOM);
  
  N_ElecronToBeChecked_afterORWJet_EM = electrons_toBeChecked_vec.size();
  
  e_m_overlap(Electron_lostInORWJet_vec, muons_toBeCheckedforElectrons_vec, E_M_DR);
  N_ElectronToBeChecked_afterORWOFLepton_EM = Electron_lostInORWJet_vec.size();
  removeSFOSPair(Electron_lostInORWJet_vec, MLL_MIN);
  N_ElectronToBeChecked_afterMllCut_EM = Electron_lostInORWJet_vec.size();
  

  
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
  
  MuonVector MuonWOjOR_vec = preMuon_vec;
  // Remove electrons and muons that overlap
//     cout << "before e_m_overlap " << MuonWOjOR_vec.size() << endl;
  for(uint im=0; im<MuonWOjOR_vec.size(); im++){
    Muon* mu_WOjOR = MuonWOjOR_vec.at(im);
//     cout << im << " considered in e_m_overlap pt= " << mu_WOjOR->pt << endl;
  }
  e_m_overlap(ElectronsOverlappingWElectrons, MuonWOjOR_vec, E_M_DR);
//   cout << "before m_m_overlap " << MuonWOjOR_vec.size() << endl;
  for(uint im=0; im<MuonWOjOR_vec.size(); im++){
    Muon* mu_WOjOR = MuonWOjOR_vec.at(im);
//     cout << im << " considered in m_m_overlap pt= " << mu_WOjOR->pt << endl;
  }
  m_m_overlap(MuonWOjOR_vec, M_M_DR);

  removeSFOSPair(MuonWOjOR_vec, MLL_MIN);

  //Zcand muons: all muons after the OR w/o m-j OR which are no signal muons
  double DeltaMZ_l0lZcand = 99999.;
  MuonVector Muon_Zcand_vec;
//   bool ZcandIsSignalMuon = false;
//   cout << "signal mu pt= " << mu->pt << endl;
  for(uint im=0; im<MuonWOjOR_vec.size(); im++){
    Muon* mu_WOjOR = MuonWOjOR_vec.at(im);
//     cout << im << " considered as Zcand pt= " << mu_WOjOR->pt << endl;
    mu_WOjOR->setState(NtSys_NOM);
    if((mu_WOjOR->DeltaR(*mu) < 0.0001)){
//       cout << "is signal mu" << endl;
//       ZcandIsSignalMuon = true;
      continue; //no signal lepton
    }
    TLorentzVector ZcandMuon_TLV;
    ZcandMuon_TLV.SetPtEtaPhiE(mu_WOjOR->pt, mu_WOjOR->eta ,mu_WOjOR->phi, mu_WOjOR->pt*cosh(mu_WOjOR->eta));
    ZcandMuon_TLV.SetPtEtaPhiM(mu_WOjOR->pt, mu_WOjOR->eta ,mu_WOjOR->phi, mu_WOjOR->m);
    Muon_Zcand_vec.push_back(mu_WOjOR);
    if((mu_WOjOR->q * mu->q)<0.){
      if(fabs(MZ - Mll(mu, mu_WOjOR)) < DeltaMZ_l0lZcand){
	ml0lZcand_EM = Mll(mu, mu_WOjOR);      
	mTl0lZcand_EM = calcMt(mu_TLV, ZcandMuon_TLV);  
	ICl0lZcand_EM = mu_WOjOR->isCombined;
	pTl0lZcand_EM = mu_WOjOR->pt;
	etal0lZcand_EM = fabs(mu_WOjOR->eta);
	ptcone30l0lZcand_EM = mu_WOjOR->ptcone30ElStyle/mu_WOjOR->pt;
	d0Sigl0lZcand_EM = mu_WOjOR->d0Sig(true);
	z0SinThetal0lZcand_EM = mu_WOjOR->z0SinTheta(true);	  
	DeltaMZ_l0lZcand = fabs(MZ - Mll(mu, mu_WOjOR));
      }
    }
  }
  
   
//   cout << "Muon_Zcand_vec.size()= " << Muon_Zcand_vec.size() << " Muon_lostInORWJet_vec.size()= " << Muon_lostInORWJet_vec.size() << endl;
//   if(Muon_Zcand_vec.size() > Muon_lostInORWJet_vec.size()) cout << "problem!!" << endl;
  
  ElectronVector ElectronWOjOR_vec = ElectronsOverlappingWElectrons;

  removeSFOSPair(ElectronWOjOR_vec, MLL_MIN);
  //can a preElectron be matched to an electron after OR?
  double DeltaMZ_l1lZcand = 99999.;
  ElectronVector Electron_Zcand_vec;
//   bool ZcandIsSignalElectron = false;
  for(uint ie=0; ie<ElectronWOjOR_vec.size(); ie++){
    Electron* el_WOjOR = ElectronWOjOR_vec.at(ie);
    el_WOjOR->setState(NtSys_NOM);
    if((el_WOjOR->DeltaR(*el) < 0.0001)){
//       ZcandIsSignalElectron = true;
      continue; //no signal lepton
    }
    
    TLorentzVector ZcandElec_TLV;
    ZcandElec_TLV.SetPtEtaPhiE(el_WOjOR->pt, el_WOjOR->eta ,el_WOjOR->phi, el_WOjOR->pt*cosh(el_WOjOR->eta));
    ZcandElec_TLV.SetPtEtaPhiM(el_WOjOR->pt, el_WOjOR->eta ,el_WOjOR->phi, el_WOjOR->m);
    Electron_Zcand_vec.push_back(el_WOjOR);
    if((el_WOjOR->q * el->q)<0.){
      if(fabs(MZ - Mll(el, el_WOjOR)) < DeltaMZ_l1lZcand){
	ml1lZcand_EM = Mll(el, el_WOjOR);      
	mTl1lZcand_EM = calcMt(el_TLV, ZcandElec_TLV);      
	pTl1lZcand_EM = el_WOjOR->pt;
	etal1lZcand_EM = fabs(el_WOjOR->eta);
	float ptcone30 = elPtConeCorr(el_WOjOR, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	ptcone30l1lZcand_EM = ptcone30/el_WOjOR->pt;
	float etcone = elEtTopoConeCorr(el_WOjOR, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	etcone30l1lZcand_EM = etcone/el_WOjOR->pt;		    	  
	d0Sigl1lZcand_EM = el_WOjOR->d0Sig(true);
	z0SinThetal1lZcand_EM = el_WOjOR->z0SinTheta(true);	 	  
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
//   if((MuonWOjOR_vec.size() != Muon_lostInORWJet_vec.size()) && !ZcandIsSignalMuon) cout << "mu: why is there no Zcand?" << endl;
//   if((ElectronWOjOR_vec.size() != Electron_lostInORWJet_vec.size()) && !ZcandIsSignalElectron) cout << "el: why is there no Zcand?" << endl;
//   cout << "Electron_Zcand_vec.size()= " << Electron_Zcand_vec.size() << endl;
//   if(Electron_Zcand_vec.size() > Electron_lostInORWJet_vec.size()) cout << "problem!!" << endl;
//   cout << "----------------" << endl;
  
  
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
  
  e_e_overlap(Electrons_all_vec, E_E_DR);
  // Remove electrons and muons that overlap
  e_m_overlap(Electrons_all_vec, Muons_all_vec, E_M_DR);
  m_m_overlap(Muons_all_vec, M_M_DR);
  removeSFOSPair(Muons_all_vec, MLL_MIN);

  //ZcandSoft muons: all muons after the OR w/o m-j OR which are no signal muons
  double DeltaMZ_l0lZcandSoft = 99999.;
  MuonVector Muon_ZcandSoft_vec;
//   bool ZcandSoftIsSignalMuon = false;
  
    
  for(uint im=0; im<Muons_all_vec.size(); im++){
    Muon* mu_WOjOR = Muons_all_vec.at(im);
//     cout << im << " considered as ZcandSoft pt= " << mu_WOjOR->pt << endl;
    mu_WOjOR->setState(NtSys_NOM);
    if((mu_WOjOR->DeltaR(*mu) < 0.0001)){
//       cout << "is signal mu" << endl;
//       ZcandSoftIsSignalMuon = true;
      continue; //no signal lepton
    }
    if(fabs(mu_WOjOR->d0Sig(true)) >= MUON_D0SIG_CUT) continue;
//     cout << "mu_WOjOR->pt= " << mu_WOjOR->pt << endl;
    TLorentzVector ZcandSoftMuon_TLV;
    ZcandSoftMuon_TLV.SetPtEtaPhiE(mu_WOjOR->pt, mu_WOjOR->eta ,mu_WOjOR->phi, mu_WOjOR->pt*cosh(mu_WOjOR->eta));
    ZcandSoftMuon_TLV.SetPtEtaPhiM(mu_WOjOR->pt, mu_WOjOR->eta ,mu_WOjOR->phi, mu_WOjOR->m);
    Muon_ZcandSoft_vec.push_back(mu_WOjOR);
    if((mu_WOjOR->q * mu->q)<0.){
      if(fabs(MZ - Mll(mu, mu_WOjOR)) < DeltaMZ_l0lZcandSoft){
	ml0lZcandSoft_EM = Mll(mu, mu_WOjOR);      
	mTl0lZcandSoft_EM = calcMt(mu_TLV, ZcandSoftMuon_TLV);  
	ICl0lZcandSoft_EM = mu_WOjOR->isCombined;
	pTl0lZcandSoft_EM = mu_WOjOR->pt;
	etal0lZcandSoft_EM = fabs(mu_WOjOR->eta);
	ptcone30l0lZcandSoft_EM = mu_WOjOR->ptcone30ElStyle/mu_WOjOR->pt;
	d0Sigl0lZcandSoft_EM = mu_WOjOR->d0Sig(true);
	z0SinThetal0lZcandSoft_EM = mu_WOjOR->z0SinTheta(true);	  
	DeltaMZ_l0lZcandSoft = fabs(MZ - Mll(mu, mu_WOjOR));
      }
    }
  }
  
   
//   cout << "Muon_ZcandSoft_vec.size()= " << Muon_ZcandSoft_vec.size() << " Muon_lostInORWJet_vec.size()= " << Muon_lostInORWJet_vec.size() << endl;
//   if(Muon_ZcandSoft_vec.size() > Muon_lostInORWJet_vec.size()) cout << "problem!!" << endl;
 

  removeSFOSPair(Electrons_all_vec, MLL_MIN);
  //can a preElectron be matched to an electron after OR?
  double DeltaMZ_l1lZcandSoft = 99999.;
  ElectronVector Electron_ZcandSoft_vec;
//   bool ZcandSoftIsSignalElectron = false;
  for(uint ie=0; ie<Electrons_all_vec.size(); ie++){
    Electron* el_WOjOR = Electrons_all_vec.at(ie);
    el_WOjOR->setState(NtSys_NOM);
    if((el_WOjOR->DeltaR(*el) < 0.0001)){
//       ZcandSoftIsSignalElectron = true;
      continue; //no signal lepton
    }
    if(fabs(el_WOjOR->d0Sig(true)) >= ELECTRON_D0SIG_CUT_WH) continue;
//     cout << "el_WOjOR->pt= " << el_WOjOR->pt << endl;
    TLorentzVector ZcandSoftElec_TLV;
    ZcandSoftElec_TLV.SetPtEtaPhiE(el_WOjOR->pt, el_WOjOR->eta ,el_WOjOR->phi, el_WOjOR->pt*cosh(el_WOjOR->eta));
    ZcandSoftElec_TLV.SetPtEtaPhiM(el_WOjOR->pt, el_WOjOR->eta ,el_WOjOR->phi, el_WOjOR->m);
    Electron_ZcandSoft_vec.push_back(el_WOjOR);
    if((el_WOjOR->q * el->q)<0.){
      if(fabs(MZ - Mll(el, el_WOjOR)) < DeltaMZ_l1lZcandSoft){
	ml1lZcandSoft_EM = Mll(el, el_WOjOR);      
	mTl1lZcandSoft_EM = calcMt(el_TLV, ZcandSoftElec_TLV);      
	pTl1lZcandSoft_EM = el_WOjOR->pt;
	etal1lZcandSoft_EM = fabs(el_WOjOR->eta);
	float ptcone30 = elPtConeCorr(el_WOjOR, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	ptcone30l1lZcandSoft_EM = ptcone30/el_WOjOR->pt;
	float etcone = elEtTopoConeCorr(el_WOjOR, m_baseElectrons, m_baseMuons, nt.evt()->nVtx, nt.evt()->isMC);
	etcone30l1lZcandSoft_EM = etcone/el_WOjOR->pt;		    	  
	d0Sigl1lZcandSoft_EM = el_WOjOR->d0Sig(true);
	z0SinThetal1lZcandSoft_EM = el_WOjOR->z0SinTheta(true);	 	  
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
//   if((MuonWOjOR_vec.size() != Muon_lostInORWJet_vec.size()) && !ZcandSoftIsSignalMuon) cout << "mu: why is there no ZcandSoft?" << endl;
//   if((ElectronWOjOR_vec.size() != Electron_lostInORWJet_vec.size()) && !ZcandSoftIsSignalElectron) cout << "el: why is there no ZcandSoft?" << endl;
//   cout << "Electron_ZcandSoft_vec.size()= " << Electron_ZcandSoft_vec.size() << endl;
//   if(Electron_ZcandSoft_vec.size() > Electron_lostInORWJet_vec.size()) cout << "problem!!" << endl;
//   cout << "----------------" << endl;
  
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
  //lost lepton
  h_Nleptons_lost_EE_SRSS1->Fill(Nleptons_lost_EE, cut_EE, weight_ALL_EE);  
  h_ml0llost_EE_SRSS1->Fill(ml0llost_EE, cut_EE, weight_ALL_EE);  
  h_mTl0llost_EE_SRSS1->Fill(mTl0llost_EE, cut_EE, weight_ALL_EE);  
  h_ICl0llost_EE_SRSS1->Fill(ICl0llost_EE, cut_EE, weight_ALL_EE);
  h_pTl0llost_EE_SRSS1->Fill(pTl0llost_EE, cut_EE, weight_ALL_EE);  
  h_etal0llost_EE_SRSS1->Fill(etal0llost_EE, cut_EE, weight_ALL_EE);  
  h_ptcone30l0llost_EE_SRSS1->Fill(ptcone30l0llost_EE, cut_EE, weight_ALL_EE);  
  h_d0Sigl0llost_EE_SRSS1->Fill(d0Sigl0llost_EE, cut_EE, weight_ALL_EE);  
  h_z0SinThetal0llost_EE_SRSS1->Fill(z0SinThetal0llost_EE, cut_EE, weight_ALL_EE);  
  h_ml1llost_EE_SRSS1->Fill(ml1llost_EE, cut_EE, weight_ALL_EE);  
  h_mTl1llost_EE_SRSS1->Fill(mTl1llost_EE, cut_EE, weight_ALL_EE);
  h_ICl1llost_EE_SRSS1->Fill(ICl1llost_EE, cut_EE, weight_ALL_EE);
  h_pTl1llost_EE_SRSS1->Fill(pTl1llost_EE, cut_EE, weight_ALL_EE);  
  h_etal1llost_EE_SRSS1->Fill(etal1llost_EE, cut_EE, weight_ALL_EE);  
  h_ptcone30l1llost_EE_SRSS1->Fill(ptcone30l1llost_EE, cut_EE, weight_ALL_EE);  
  h_d0Sigl1llost_EE_SRSS1->Fill(d0Sigl1llost_EE, cut_EE, weight_ALL_EE);  
  h_z0SinThetal1llost_EE_SRSS1->Fill(z0SinThetal1llost_EE, cut_EE, weight_ALL_EE);  



//soft lepton
  h_Nleptons_soft_EE_SRSS1->Fill(Nleptons_soft_EE, cut_EE, weight_ALL_EE);  
  h_ml0lsoft_EE_SRSS1->Fill(ml0lsoft_EE, cut_EE, weight_ALL_EE);  
  h_mTl0lsoft_EE_SRSS1->Fill(mTl0lsoft_EE, cut_EE, weight_ALL_EE);  
  h_ICl0lsoft_EE_SRSS1->Fill(ICl0lsoft_EE, cut_EE, weight_ALL_EE);
  h_pTl0lsoft_EE_SRSS1->Fill(pTl0lsoft_EE, cut_EE, weight_ALL_EE);  
  h_etal0lsoft_EE_SRSS1->Fill(etal0lsoft_EE, cut_EE, weight_ALL_EE);  
  h_ptcone30l0lsoft_EE_SRSS1->Fill(ptcone30l0lsoft_EE, cut_EE, weight_ALL_EE);  
  h_d0Sigl0lsoft_EE_SRSS1->Fill(d0Sigl0lsoft_EE, cut_EE, weight_ALL_EE);  
  h_z0SinThetal0lsoft_EE_SRSS1->Fill(z0SinThetal0lsoft_EE, cut_EE, weight_ALL_EE);  
  h_ml1lsoft_EE_SRSS1->Fill(ml1lsoft_EE, cut_EE, weight_ALL_EE);  
  h_mTl1lsoft_EE_SRSS1->Fill(mTl1lsoft_EE, cut_EE, weight_ALL_EE);
  h_ICl1lsoft_EE_SRSS1->Fill(ICl1lsoft_EE, cut_EE, weight_ALL_EE);
  h_pTl1lsoft_EE_SRSS1->Fill(pTl1lsoft_EE, cut_EE, weight_ALL_EE);  
  h_etal1lsoft_EE_SRSS1->Fill(etal1lsoft_EE, cut_EE, weight_ALL_EE);  
  h_ptcone30l1lsoft_EE_SRSS1->Fill(ptcone30l1lsoft_EE, cut_EE, weight_ALL_EE);  
  h_d0Sigl1lsoft_EE_SRSS1->Fill(d0Sigl1lsoft_EE, cut_EE, weight_ALL_EE);  
  h_z0SinThetal1lsoft_EE_SRSS1->Fill(z0SinThetal1lsoft_EE, cut_EE, weight_ALL_EE);

//overlap lepton
  h_Nleptons_overlap_EE_SRSS1->Fill(Nleptons_overlap_EE, cut_EE, weight_ALL_EE);  
  h_ml0loverlap_EE_SRSS1->Fill(ml0loverlap_EE, cut_EE, weight_ALL_EE);  
  h_mTl0loverlap_EE_SRSS1->Fill(mTl0loverlap_EE, cut_EE, weight_ALL_EE);  
  h_ICl0loverlap_EE_SRSS1->Fill(ICl0loverlap_EE, cut_EE, weight_ALL_EE);
  h_pTl0loverlap_EE_SRSS1->Fill(pTl0loverlap_EE, cut_EE, weight_ALL_EE);  
  h_etal0loverlap_EE_SRSS1->Fill(etal0loverlap_EE, cut_EE, weight_ALL_EE);  
  h_ptcone30l0loverlap_EE_SRSS1->Fill(ptcone30l0loverlap_EE, cut_EE, weight_ALL_EE);  
  h_d0Sigl0loverlap_EE_SRSS1->Fill(d0Sigl0loverlap_EE, cut_EE, weight_ALL_EE);  
  h_z0SinThetal0loverlap_EE_SRSS1->Fill(z0SinThetal0loverlap_EE, cut_EE, weight_ALL_EE);  
  h_ml1loverlap_EE_SRSS1->Fill(ml1loverlap_EE, cut_EE, weight_ALL_EE);  
  h_mTl1loverlap_EE_SRSS1->Fill(mTl1loverlap_EE, cut_EE, weight_ALL_EE);
  h_ICl1loverlap_EE_SRSS1->Fill(ICl1loverlap_EE, cut_EE, weight_ALL_EE);
  h_pTl1loverlap_EE_SRSS1->Fill(pTl1loverlap_EE, cut_EE, weight_ALL_EE);  
  h_etal1loverlap_EE_SRSS1->Fill(etal1loverlap_EE, cut_EE, weight_ALL_EE);  
  h_ptcone30l1loverlap_EE_SRSS1->Fill(ptcone30l1loverlap_EE, cut_EE, weight_ALL_EE);  
  h_d0Sigl1loverlap_EE_SRSS1->Fill(d0Sigl1loverlap_EE, cut_EE, weight_ALL_EE);  
  h_z0SinThetal1loverlap_EE_SRSS1->Fill(z0SinThetal1loverlap_EE, cut_EE, weight_ALL_EE);

  h_Nleptons_overlapWJet_EE_SRSS1->Fill(Nleptons_overlapWJet_EE, cut_EE, weight_ALL_EE);  
  h_ml0loverlapWJet_EE_SRSS1->Fill(ml0loverlapWJet_EE, cut_EE, weight_ALL_EE);  
  h_mTl0loverlapWJet_EE_SRSS1->Fill(mTl0loverlapWJet_EE, cut_EE, weight_ALL_EE);  
  h_ICl0loverlapWJet_EE_SRSS1->Fill(ICl0loverlapWJet_EE, cut_EE, weight_ALL_EE);
  h_pTl0loverlapWJet_EE_SRSS1->Fill(pTl0loverlapWJet_EE, cut_EE, weight_ALL_EE);  
  h_etal0loverlapWJet_EE_SRSS1->Fill(etal0loverlapWJet_EE, cut_EE, weight_ALL_EE);  
  h_ptcone30l0loverlapWJet_EE_SRSS1->Fill(ptcone30l0loverlapWJet_EE, cut_EE, weight_ALL_EE);  
  h_d0Sigl0loverlapWJet_EE_SRSS1->Fill(d0Sigl0loverlapWJet_EE, cut_EE, weight_ALL_EE);  
  h_z0SinThetal0loverlapWJet_EE_SRSS1->Fill(z0SinThetal0loverlapWJet_EE, cut_EE, weight_ALL_EE);  
  h_ml1loverlapWJet_EE_SRSS1->Fill(ml1loverlapWJet_EE, cut_EE, weight_ALL_EE);  
  h_mTl1loverlapWJet_EE_SRSS1->Fill(mTl1loverlapWJet_EE, cut_EE, weight_ALL_EE);
  h_ICl1loverlapWJet_EE_SRSS1->Fill(ICl1loverlapWJet_EE, cut_EE, weight_ALL_EE);
  h_pTl1loverlapWJet_EE_SRSS1->Fill(pTl1loverlapWJet_EE, cut_EE, weight_ALL_EE);  
  h_etal1loverlapWJet_EE_SRSS1->Fill(etal1loverlapWJet_EE, cut_EE, weight_ALL_EE);  
  h_ptcone30l1loverlapWJet_EE_SRSS1->Fill(ptcone30l1loverlapWJet_EE, cut_EE, weight_ALL_EE);  
  h_d0Sigl1loverlapWJet_EE_SRSS1->Fill(d0Sigl1loverlapWJet_EE, cut_EE, weight_ALL_EE);  
  h_z0SinThetal1loverlapWJet_EE_SRSS1->Fill(z0SinThetal1loverlapWJet_EE, cut_EE, weight_ALL_EE);
  
  h_Nleptons_overlapWOFLepton_EE_SRSS1->Fill(Nleptons_overlapWOFLepton_EE, cut_EE, weight_ALL_EE);  
  h_ml0loverlapWOFLepton_EE_SRSS1->Fill(ml0loverlapWOFLepton_EE, cut_EE, weight_ALL_EE);  
  h_mTl0loverlapWOFLepton_EE_SRSS1->Fill(mTl0loverlapWOFLepton_EE, cut_EE, weight_ALL_EE);  
  h_ICl0loverlapWOFLepton_EE_SRSS1->Fill(ICl0loverlapWOFLepton_EE, cut_EE, weight_ALL_EE);
  h_pTl0loverlapWOFLepton_EE_SRSS1->Fill(pTl0loverlapWOFLepton_EE, cut_EE, weight_ALL_EE);  
  h_etal0loverlapWOFLepton_EE_SRSS1->Fill(etal0loverlapWOFLepton_EE, cut_EE, weight_ALL_EE);  
  h_ptcone30l0loverlapWOFLepton_EE_SRSS1->Fill(ptcone30l0loverlapWOFLepton_EE, cut_EE, weight_ALL_EE);  
  h_d0Sigl0loverlapWOFLepton_EE_SRSS1->Fill(d0Sigl0loverlapWOFLepton_EE, cut_EE, weight_ALL_EE);  
  h_z0SinThetal0loverlapWOFLepton_EE_SRSS1->Fill(z0SinThetal0loverlapWOFLepton_EE, cut_EE, weight_ALL_EE);  
  h_ml1loverlapWOFLepton_EE_SRSS1->Fill(ml1loverlapWOFLepton_EE, cut_EE, weight_ALL_EE);  
  h_mTl1loverlapWOFLepton_EE_SRSS1->Fill(mTl1loverlapWOFLepton_EE, cut_EE, weight_ALL_EE);
  h_ICl1loverlapWOFLepton_EE_SRSS1->Fill(ICl1loverlapWOFLepton_EE, cut_EE, weight_ALL_EE);
  h_pTl1loverlapWOFLepton_EE_SRSS1->Fill(pTl1loverlapWOFLepton_EE, cut_EE, weight_ALL_EE);  
  h_etal1loverlapWOFLepton_EE_SRSS1->Fill(etal1loverlapWOFLepton_EE, cut_EE, weight_ALL_EE);  
  h_ptcone30l1loverlapWOFLepton_EE_SRSS1->Fill(ptcone30l1loverlapWOFLepton_EE, cut_EE, weight_ALL_EE);  
  h_d0Sigl1loverlapWOFLepton_EE_SRSS1->Fill(d0Sigl1loverlapWOFLepton_EE, cut_EE, weight_ALL_EE);  
  h_z0SinThetal1loverlapWOFLepton_EE_SRSS1->Fill(z0SinThetal1loverlapWOFLepton_EE, cut_EE, weight_ALL_EE);

  h_Nleptons_overlapWSFLepton_EE_SRSS1->Fill(Nleptons_overlapWSFLepton_EE, cut_EE, weight_ALL_EE);  
  h_ml0loverlapWSFLepton_EE_SRSS1->Fill(ml0loverlapWSFLepton_EE, cut_EE, weight_ALL_EE);  
  h_mTl0loverlapWSFLepton_EE_SRSS1->Fill(mTl0loverlapWSFLepton_EE, cut_EE, weight_ALL_EE);  
  h_ICl0loverlapWSFLepton_EE_SRSS1->Fill(ICl0loverlapWSFLepton_EE, cut_EE, weight_ALL_EE);
  h_pTl0loverlapWSFLepton_EE_SRSS1->Fill(pTl0loverlapWSFLepton_EE, cut_EE, weight_ALL_EE);  
  h_etal0loverlapWSFLepton_EE_SRSS1->Fill(etal0loverlapWSFLepton_EE, cut_EE, weight_ALL_EE);  
  h_ptcone30l0loverlapWSFLepton_EE_SRSS1->Fill(ptcone30l0loverlapWSFLepton_EE, cut_EE, weight_ALL_EE);  
  h_d0Sigl0loverlapWSFLepton_EE_SRSS1->Fill(d0Sigl0loverlapWSFLepton_EE, cut_EE, weight_ALL_EE);  
  h_z0SinThetal0loverlapWSFLepton_EE_SRSS1->Fill(z0SinThetal0loverlapWSFLepton_EE, cut_EE, weight_ALL_EE);  
  h_ml1loverlapWSFLepton_EE_SRSS1->Fill(ml1loverlapWSFLepton_EE, cut_EE, weight_ALL_EE);  
  h_mTl1loverlapWSFLepton_EE_SRSS1->Fill(mTl1loverlapWSFLepton_EE, cut_EE, weight_ALL_EE);
  h_ICl1loverlapWSFLepton_EE_SRSS1->Fill(ICl1loverlapWSFLepton_EE, cut_EE, weight_ALL_EE);
  h_pTl1loverlapWSFLepton_EE_SRSS1->Fill(pTl1loverlapWSFLepton_EE, cut_EE, weight_ALL_EE);  
  h_etal1loverlapWSFLepton_EE_SRSS1->Fill(etal1loverlapWSFLepton_EE, cut_EE, weight_ALL_EE);  
  h_ptcone30l1loverlapWSFLepton_EE_SRSS1->Fill(ptcone30l1loverlapWSFLepton_EE, cut_EE, weight_ALL_EE);  
  h_d0Sigl1loverlapWSFLepton_EE_SRSS1->Fill(d0Sigl1loverlapWSFLepton_EE, cut_EE, weight_ALL_EE);  
  h_z0SinThetal1loverlapWSFLepton_EE_SRSS1->Fill(z0SinThetal1loverlapWSFLepton_EE, cut_EE, weight_ALL_EE);
  
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
}


void TSelector_SusyNtuple::fillHistos_MM_SRSS1(float cut_MM, float weight_ALL_MM){
  
  fillHistos_MM(cut_MM, weight_ALL_MM);

  h_N_MuonToBeChecked_afterORWJet_MM->Fill(N_MuonToBeChecked_afterORWJet_MM, cut_MM, weight_ALL_MM); 
  h_N_MuonToBeChecked_afterORWOFLepton_MM->Fill(N_MuonToBeChecked_afterORWOFLepton_MM, cut_MM, weight_ALL_MM); 
  h_N_MuonToBeChecked_afterORWSFLepton_MM->Fill(N_MuonToBeChecked_afterORWSFLepton_MM, cut_MM, weight_ALL_MM); 
  h_N_MuonToBeChecked_afterMllCut_MM->Fill(N_MuonToBeChecked_afterMllCut_MM, cut_MM, weight_ALL_MM); 
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
  //lost lepton
  h_Nleptons_lost_MM_SRSS1->Fill(Nleptons_lost_MM, cut_MM, weight_ALL_MM);  
  h_ml0llost_MM_SRSS1->Fill(ml0llost_MM, cut_MM, weight_ALL_MM);  
  h_mTl0llost_MM_SRSS1->Fill(mTl0llost_MM, cut_MM, weight_ALL_MM);  
  h_ICl0llost_MM_SRSS1->Fill(ICl0llost_MM, cut_MM, weight_ALL_MM);
  h_pTl0llost_MM_SRSS1->Fill(pTl0llost_MM, cut_MM, weight_ALL_MM);  
  h_etal0llost_MM_SRSS1->Fill(etal0llost_MM, cut_MM, weight_ALL_MM);  
  h_ptcone30l0llost_MM_SRSS1->Fill(ptcone30l0llost_MM, cut_MM, weight_ALL_MM);  
  h_d0Sigl0llost_MM_SRSS1->Fill(d0Sigl0llost_MM, cut_MM, weight_ALL_MM);  
  h_z0SinThetal0llost_MM_SRSS1->Fill(z0SinThetal0llost_MM, cut_MM, weight_ALL_MM);  
  h_ml1llost_MM_SRSS1->Fill(ml1llost_MM, cut_MM, weight_ALL_MM);  
  h_mTl1llost_MM_SRSS1->Fill(mTl1llost_MM, cut_MM, weight_ALL_MM);
  h_ICl1llost_MM_SRSS1->Fill(ICl1llost_MM, cut_MM, weight_ALL_MM);
  h_pTl1llost_MM_SRSS1->Fill(pTl1llost_MM, cut_MM, weight_ALL_MM);  
  h_etal1llost_MM_SRSS1->Fill(etal1llost_MM, cut_MM, weight_ALL_MM);  
  h_ptcone30l1llost_MM_SRSS1->Fill(ptcone30l1llost_MM, cut_MM, weight_ALL_MM);  
  h_d0Sigl1llost_MM_SRSS1->Fill(d0Sigl1llost_MM, cut_MM, weight_ALL_MM);  
  h_z0SinThetal1llost_MM_SRSS1->Fill(z0SinThetal1llost_MM, cut_MM, weight_ALL_MM);  



//soft lepton
  h_Nleptons_soft_MM_SRSS1->Fill(Nleptons_soft_MM, cut_MM, weight_ALL_MM);  
  h_ml0lsoft_MM_SRSS1->Fill(ml0lsoft_MM, cut_MM, weight_ALL_MM);  
  h_mTl0lsoft_MM_SRSS1->Fill(mTl0lsoft_MM, cut_MM, weight_ALL_MM);  
  h_ICl0lsoft_MM_SRSS1->Fill(ICl0lsoft_MM, cut_MM, weight_ALL_MM);
  h_pTl0lsoft_MM_SRSS1->Fill(pTl0lsoft_MM, cut_MM, weight_ALL_MM);  
  h_etal0lsoft_MM_SRSS1->Fill(etal0lsoft_MM, cut_MM, weight_ALL_MM);  
  h_ptcone30l0lsoft_MM_SRSS1->Fill(ptcone30l0lsoft_MM, cut_MM, weight_ALL_MM);  
  h_d0Sigl0lsoft_MM_SRSS1->Fill(d0Sigl0lsoft_MM, cut_MM, weight_ALL_MM);  
  h_z0SinThetal0lsoft_MM_SRSS1->Fill(z0SinThetal0lsoft_MM, cut_MM, weight_ALL_MM);  
  h_ml1lsoft_MM_SRSS1->Fill(ml1lsoft_MM, cut_MM, weight_ALL_MM);  
  h_mTl1lsoft_MM_SRSS1->Fill(mTl1lsoft_MM, cut_MM, weight_ALL_MM);
  h_ICl1lsoft_MM_SRSS1->Fill(ICl1lsoft_MM, cut_MM, weight_ALL_MM);
  h_pTl1lsoft_MM_SRSS1->Fill(pTl1lsoft_MM, cut_MM, weight_ALL_MM);  
  h_etal1lsoft_MM_SRSS1->Fill(etal1lsoft_MM, cut_MM, weight_ALL_MM);  
  h_ptcone30l1lsoft_MM_SRSS1->Fill(ptcone30l1lsoft_MM, cut_MM, weight_ALL_MM);  
  h_d0Sigl1lsoft_MM_SRSS1->Fill(d0Sigl1lsoft_MM, cut_MM, weight_ALL_MM);  
  h_z0SinThetal1lsoft_MM_SRSS1->Fill(z0SinThetal1lsoft_MM, cut_MM, weight_ALL_MM);

//overlap lepton
  h_Nleptons_overlap_MM_SRSS1->Fill(Nleptons_overlap_MM, cut_MM, weight_ALL_MM);  
  h_ml0loverlap_MM_SRSS1->Fill(ml0loverlap_MM, cut_MM, weight_ALL_MM);  
  h_mTl0loverlap_MM_SRSS1->Fill(mTl0loverlap_MM, cut_MM, weight_ALL_MM);  
  h_ICl0loverlap_MM_SRSS1->Fill(ICl0loverlap_MM, cut_MM, weight_ALL_MM);
  h_pTl0loverlap_MM_SRSS1->Fill(pTl0loverlap_MM, cut_MM, weight_ALL_MM);  
  h_etal0loverlap_MM_SRSS1->Fill(etal0loverlap_MM, cut_MM, weight_ALL_MM);  
  h_ptcone30l0loverlap_MM_SRSS1->Fill(ptcone30l0loverlap_MM, cut_MM, weight_ALL_MM);  
  h_d0Sigl0loverlap_MM_SRSS1->Fill(d0Sigl0loverlap_MM, cut_MM, weight_ALL_MM);  
  h_z0SinThetal0loverlap_MM_SRSS1->Fill(z0SinThetal0loverlap_MM, cut_MM, weight_ALL_MM);  
  h_ml1loverlap_MM_SRSS1->Fill(ml1loverlap_MM, cut_MM, weight_ALL_MM);  
  h_mTl1loverlap_MM_SRSS1->Fill(mTl1loverlap_MM, cut_MM, weight_ALL_MM);
  h_ICl1loverlap_MM_SRSS1->Fill(ICl1loverlap_MM, cut_MM, weight_ALL_MM);
  h_pTl1loverlap_MM_SRSS1->Fill(pTl1loverlap_MM, cut_MM, weight_ALL_MM);  
  h_etal1loverlap_MM_SRSS1->Fill(etal1loverlap_MM, cut_MM, weight_ALL_MM);  
  h_ptcone30l1loverlap_MM_SRSS1->Fill(ptcone30l1loverlap_MM, cut_MM, weight_ALL_MM);  
  h_d0Sigl1loverlap_MM_SRSS1->Fill(d0Sigl1loverlap_MM, cut_MM, weight_ALL_MM);  
  h_z0SinThetal1loverlap_MM_SRSS1->Fill(z0SinThetal1loverlap_MM, cut_MM, weight_ALL_MM);

  h_Nleptons_overlapWJet_MM_SRSS1->Fill(Nleptons_overlapWJet_MM, cut_MM, weight_ALL_MM);  
  h_ml0loverlapWJet_MM_SRSS1->Fill(ml0loverlapWJet_MM, cut_MM, weight_ALL_MM);  
  h_mTl0loverlapWJet_MM_SRSS1->Fill(mTl0loverlapWJet_MM, cut_MM, weight_ALL_MM);  
  h_ICl0loverlapWJet_MM_SRSS1->Fill(ICl0loverlapWJet_MM, cut_MM, weight_ALL_MM);
  h_pTl0loverlapWJet_MM_SRSS1->Fill(pTl0loverlapWJet_MM, cut_MM, weight_ALL_MM);  
  h_etal0loverlapWJet_MM_SRSS1->Fill(etal0loverlapWJet_MM, cut_MM, weight_ALL_MM);  
  h_ptcone30l0loverlapWJet_MM_SRSS1->Fill(ptcone30l0loverlapWJet_MM, cut_MM, weight_ALL_MM);  
  h_d0Sigl0loverlapWJet_MM_SRSS1->Fill(d0Sigl0loverlapWJet_MM, cut_MM, weight_ALL_MM);  
  h_z0SinThetal0loverlapWJet_MM_SRSS1->Fill(z0SinThetal0loverlapWJet_MM, cut_MM, weight_ALL_MM);  
  h_ml1loverlapWJet_MM_SRSS1->Fill(ml1loverlapWJet_MM, cut_MM, weight_ALL_MM);  
  h_mTl1loverlapWJet_MM_SRSS1->Fill(mTl1loverlapWJet_MM, cut_MM, weight_ALL_MM);
  h_ICl1loverlapWJet_MM_SRSS1->Fill(ICl1loverlapWJet_MM, cut_MM, weight_ALL_MM);
  h_pTl1loverlapWJet_MM_SRSS1->Fill(pTl1loverlapWJet_MM, cut_MM, weight_ALL_MM);  
  h_etal1loverlapWJet_MM_SRSS1->Fill(etal1loverlapWJet_MM, cut_MM, weight_ALL_MM);  
  h_ptcone30l1loverlapWJet_MM_SRSS1->Fill(ptcone30l1loverlapWJet_MM, cut_MM, weight_ALL_MM);  
  h_d0Sigl1loverlapWJet_MM_SRSS1->Fill(d0Sigl1loverlapWJet_MM, cut_MM, weight_ALL_MM);  
  h_z0SinThetal1loverlapWJet_MM_SRSS1->Fill(z0SinThetal1loverlapWJet_MM, cut_MM, weight_ALL_MM);
  
  h_Nleptons_overlapWOFLepton_MM_SRSS1->Fill(Nleptons_overlapWOFLepton_MM, cut_MM, weight_ALL_MM);  
  h_ml0loverlapWOFLepton_MM_SRSS1->Fill(ml0loverlapWOFLepton_MM, cut_MM, weight_ALL_MM);  
  h_mTl0loverlapWOFLepton_MM_SRSS1->Fill(mTl0loverlapWOFLepton_MM, cut_MM, weight_ALL_MM);  
  h_ICl0loverlapWOFLepton_MM_SRSS1->Fill(ICl0loverlapWOFLepton_MM, cut_MM, weight_ALL_MM);
  h_pTl0loverlapWOFLepton_MM_SRSS1->Fill(pTl0loverlapWOFLepton_MM, cut_MM, weight_ALL_MM);  
  h_etal0loverlapWOFLepton_MM_SRSS1->Fill(etal0loverlapWOFLepton_MM, cut_MM, weight_ALL_MM);  
  h_ptcone30l0loverlapWOFLepton_MM_SRSS1->Fill(ptcone30l0loverlapWOFLepton_MM, cut_MM, weight_ALL_MM);  
  h_d0Sigl0loverlapWOFLepton_MM_SRSS1->Fill(d0Sigl0loverlapWOFLepton_MM, cut_MM, weight_ALL_MM);  
  h_z0SinThetal0loverlapWOFLepton_MM_SRSS1->Fill(z0SinThetal0loverlapWOFLepton_MM, cut_MM, weight_ALL_MM);  
  h_ml1loverlapWOFLepton_MM_SRSS1->Fill(ml1loverlapWOFLepton_MM, cut_MM, weight_ALL_MM);  
  h_mTl1loverlapWOFLepton_MM_SRSS1->Fill(mTl1loverlapWOFLepton_MM, cut_MM, weight_ALL_MM);
  h_ICl1loverlapWOFLepton_MM_SRSS1->Fill(ICl1loverlapWOFLepton_MM, cut_MM, weight_ALL_MM);
  h_pTl1loverlapWOFLepton_MM_SRSS1->Fill(pTl1loverlapWOFLepton_MM, cut_MM, weight_ALL_MM);  
  h_etal1loverlapWOFLepton_MM_SRSS1->Fill(etal1loverlapWOFLepton_MM, cut_MM, weight_ALL_MM);  
  h_ptcone30l1loverlapWOFLepton_MM_SRSS1->Fill(ptcone30l1loverlapWOFLepton_MM, cut_MM, weight_ALL_MM);  
  h_d0Sigl1loverlapWOFLepton_MM_SRSS1->Fill(d0Sigl1loverlapWOFLepton_MM, cut_MM, weight_ALL_MM);  
  h_z0SinThetal1loverlapWOFLepton_MM_SRSS1->Fill(z0SinThetal1loverlapWOFLepton_MM, cut_MM, weight_ALL_MM);

  h_Nleptons_overlapWSFLepton_MM_SRSS1->Fill(Nleptons_overlapWSFLepton_MM, cut_MM, weight_ALL_MM);  
  h_ml0loverlapWSFLepton_MM_SRSS1->Fill(ml0loverlapWSFLepton_MM, cut_MM, weight_ALL_MM);  
  h_mTl0loverlapWSFLepton_MM_SRSS1->Fill(mTl0loverlapWSFLepton_MM, cut_MM, weight_ALL_MM);  
  h_ICl0loverlapWSFLepton_MM_SRSS1->Fill(ICl0loverlapWSFLepton_MM, cut_MM, weight_ALL_MM);
  h_pTl0loverlapWSFLepton_MM_SRSS1->Fill(pTl0loverlapWSFLepton_MM, cut_MM, weight_ALL_MM);  
  h_etal0loverlapWSFLepton_MM_SRSS1->Fill(etal0loverlapWSFLepton_MM, cut_MM, weight_ALL_MM);  
  h_ptcone30l0loverlapWSFLepton_MM_SRSS1->Fill(ptcone30l0loverlapWSFLepton_MM, cut_MM, weight_ALL_MM);  
  h_d0Sigl0loverlapWSFLepton_MM_SRSS1->Fill(d0Sigl0loverlapWSFLepton_MM, cut_MM, weight_ALL_MM);  
  h_z0SinThetal0loverlapWSFLepton_MM_SRSS1->Fill(z0SinThetal0loverlapWSFLepton_MM, cut_MM, weight_ALL_MM);  
  h_ml1loverlapWSFLepton_MM_SRSS1->Fill(ml1loverlapWSFLepton_MM, cut_MM, weight_ALL_MM);  
  h_mTl1loverlapWSFLepton_MM_SRSS1->Fill(mTl1loverlapWSFLepton_MM, cut_MM, weight_ALL_MM);
  h_ICl1loverlapWSFLepton_MM_SRSS1->Fill(ICl1loverlapWSFLepton_MM, cut_MM, weight_ALL_MM);
  h_pTl1loverlapWSFLepton_MM_SRSS1->Fill(pTl1loverlapWSFLepton_MM, cut_MM, weight_ALL_MM);  
  h_etal1loverlapWSFLepton_MM_SRSS1->Fill(etal1loverlapWSFLepton_MM, cut_MM, weight_ALL_MM);  
  h_ptcone30l1loverlapWSFLepton_MM_SRSS1->Fill(ptcone30l1loverlapWSFLepton_MM, cut_MM, weight_ALL_MM);  
  h_d0Sigl1loverlapWSFLepton_MM_SRSS1->Fill(d0Sigl1loverlapWSFLepton_MM, cut_MM, weight_ALL_MM);  
  h_z0SinThetal1loverlapWSFLepton_MM_SRSS1->Fill(z0SinThetal1loverlapWSFLepton_MM, cut_MM, weight_ALL_MM);
  
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
  h_N_MuonToBeChecked_afterORWJet_EM->Fill(N_MuonToBeChecked_afterORWJet_EM, cut_EM, weight_ALL_EM);  
  h_N_MuonToBeChecked_afterORWOFLepton_EM->Fill(N_MuonToBeChecked_afterORWOFLepton_EM, cut_EM, weight_ALL_EM);  
  h_N_MuonToBeChecked_afterORWSFLepton_EM->Fill(N_MuonToBeChecked_afterORWSFLepton_EM, cut_EM, weight_ALL_EM);     
  h_N_MuonToBeChecked_afterMllCut_EM->Fill(N_MuonToBeChecked_afterMllCut_EM, cut_EM, weight_ALL_EM);     
  h_N_ElectronToBeChecked_afterORWJet_EM->Fill(N_ElecronToBeChecked_afterORWJet_EM, cut_EM, weight_ALL_EM);  
  h_N_ElectronToBeChecked_afterORWOFLepton_EM->Fill(N_ElectronToBeChecked_afterORWOFLepton_EM, cut_EM, weight_ALL_EM);  
  h_N_ElectronToBeChecked_afterMllCut_EM->Fill(N_ElectronToBeChecked_afterMllCut_EM, cut_EM, weight_ALL_EM);  

  h_Mljj_EM_SRSS1->Fill(Mljj_EM, cut_EM, weight_ALL_EM);  
  h_etcone30l1llost_EM_SRSS1->Fill(etcone30l1llost_EM, cut_EM, weight_ALL_EM);  
  h_etcone30l1lsoft_EM_SRSS1->Fill(etcone30l1lsoft_EM, cut_EM, weight_ALL_EM);  
  h_etcone30l1loverlap_EM_SRSS1->Fill(etcone30l1loverlap_EM, cut_EM, weight_ALL_EM);  
  h_etcone30l1loverlapWJet_EM_SRSS1->Fill(etcone30l1loverlapWJet_EM, cut_EM, weight_ALL_EM);  
  h_etcone30l1loverlapWOFLepton_EM_SRSS1->Fill(etcone30l1loverlapWOFLepton_EM, cut_EM, weight_ALL_EM);  
  h_etcone30l1lZcand_EM_SRSS1->Fill(etcone30l1lZcand_EM, cut_EM, weight_ALL_EM);  
    
   //lost lepton
  h_Nleptons_lost_EM_SRSS1->Fill(Nleptons_lost_EM, cut_EM, weight_ALL_EM);  
  h_ml0llost_EM_SRSS1->Fill(ml0llost_EM, cut_EM, weight_ALL_EM);  
  h_mTl0llost_EM_SRSS1->Fill(mTl0llost_EM, cut_EM, weight_ALL_EM);  
  h_ICl0llost_EM_SRSS1->Fill(ICl0llost_EM, cut_EM, weight_ALL_EM);
  h_pTl0llost_EM_SRSS1->Fill(pTl0llost_EM, cut_EM, weight_ALL_EM);  
  h_etal0llost_EM_SRSS1->Fill(etal0llost_EM, cut_EM, weight_ALL_EM);  
  h_ptcone30l0llost_EM_SRSS1->Fill(ptcone30l0llost_EM, cut_EM, weight_ALL_EM);  
  h_d0Sigl0llost_EM_SRSS1->Fill(d0Sigl0llost_EM, cut_EM, weight_ALL_EM);  
  h_z0SinThetal0llost_EM_SRSS1->Fill(z0SinThetal0llost_EM, cut_EM, weight_ALL_EM);  
  h_ml1llost_EM_SRSS1->Fill(ml1llost_EM, cut_EM, weight_ALL_EM);  
  h_mTl1llost_EM_SRSS1->Fill(mTl1llost_EM, cut_EM, weight_ALL_EM);
  h_ICl1llost_EM_SRSS1->Fill(ICl1llost_EM, cut_EM, weight_ALL_EM);
  h_pTl1llost_EM_SRSS1->Fill(pTl1llost_EM, cut_EM, weight_ALL_EM);  
  h_etal1llost_EM_SRSS1->Fill(etal1llost_EM, cut_EM, weight_ALL_EM);  
  h_ptcone30l1llost_EM_SRSS1->Fill(ptcone30l1llost_EM, cut_EM, weight_ALL_EM);  
  h_d0Sigl1llost_EM_SRSS1->Fill(d0Sigl1llost_EM, cut_EM, weight_ALL_EM);  
  h_z0SinThetal1llost_EM_SRSS1->Fill(z0SinThetal1llost_EM, cut_EM, weight_ALL_EM);  



//soft lepton
  h_Nleptons_soft_EM_SRSS1->Fill(Nleptons_soft_EM, cut_EM, weight_ALL_EM);  
  h_ml0lsoft_EM_SRSS1->Fill(ml0lsoft_EM, cut_EM, weight_ALL_EM);  
  h_mTl0lsoft_EM_SRSS1->Fill(mTl0lsoft_EM, cut_EM, weight_ALL_EM);  
  h_ICl0lsoft_EM_SRSS1->Fill(ICl0lsoft_EM, cut_EM, weight_ALL_EM);
  h_pTl0lsoft_EM_SRSS1->Fill(pTl0lsoft_EM, cut_EM, weight_ALL_EM);  
  h_etal0lsoft_EM_SRSS1->Fill(etal0lsoft_EM, cut_EM, weight_ALL_EM);  
  h_ptcone30l0lsoft_EM_SRSS1->Fill(ptcone30l0lsoft_EM, cut_EM, weight_ALL_EM);  
  h_d0Sigl0lsoft_EM_SRSS1->Fill(d0Sigl0lsoft_EM, cut_EM, weight_ALL_EM);  
  h_z0SinThetal0lsoft_EM_SRSS1->Fill(z0SinThetal0lsoft_EM, cut_EM, weight_ALL_EM);  
  h_ml1lsoft_EM_SRSS1->Fill(ml1lsoft_EM, cut_EM, weight_ALL_EM);  
  h_mTl1lsoft_EM_SRSS1->Fill(mTl1lsoft_EM, cut_EM, weight_ALL_EM);
  h_ICl1lsoft_EM_SRSS1->Fill(ICl1lsoft_EM, cut_EM, weight_ALL_EM);
  h_pTl1lsoft_EM_SRSS1->Fill(pTl1lsoft_EM, cut_EM, weight_ALL_EM);  
  h_etal1lsoft_EM_SRSS1->Fill(etal1lsoft_EM, cut_EM, weight_ALL_EM);  
  h_ptcone30l1lsoft_EM_SRSS1->Fill(ptcone30l1lsoft_EM, cut_EM, weight_ALL_EM);  
  h_d0Sigl1lsoft_EM_SRSS1->Fill(d0Sigl1lsoft_EM, cut_EM, weight_ALL_EM);  
  h_z0SinThetal1lsoft_EM_SRSS1->Fill(z0SinThetal1lsoft_EM, cut_EM, weight_ALL_EM);

//overlap lepton
  h_Nleptons_overlap_EM_SRSS1->Fill(Nleptons_overlap_EM, cut_EM, weight_ALL_EM);  
  h_ml0loverlap_EM_SRSS1->Fill(ml0loverlap_EM, cut_EM, weight_ALL_EM);  
  h_mTl0loverlap_EM_SRSS1->Fill(mTl0loverlap_EM, cut_EM, weight_ALL_EM);  
  h_ICl0loverlap_EM_SRSS1->Fill(ICl0loverlap_EM, cut_EM, weight_ALL_EM);
  h_pTl0loverlap_EM_SRSS1->Fill(pTl0loverlap_EM, cut_EM, weight_ALL_EM);  
  h_etal0loverlap_EM_SRSS1->Fill(etal0loverlap_EM, cut_EM, weight_ALL_EM);  
  h_ptcone30l0loverlap_EM_SRSS1->Fill(ptcone30l0loverlap_EM, cut_EM, weight_ALL_EM);  
  h_d0Sigl0loverlap_EM_SRSS1->Fill(d0Sigl0loverlap_EM, cut_EM, weight_ALL_EM);  
  h_z0SinThetal0loverlap_EM_SRSS1->Fill(z0SinThetal0loverlap_EM, cut_EM, weight_ALL_EM);  
  h_ml1loverlap_EM_SRSS1->Fill(ml1loverlap_EM, cut_EM, weight_ALL_EM);  
  h_mTl1loverlap_EM_SRSS1->Fill(mTl1loverlap_EM, cut_EM, weight_ALL_EM);
  h_ICl1loverlap_EM_SRSS1->Fill(ICl1loverlap_EM, cut_EM, weight_ALL_EM);
  h_pTl1loverlap_EM_SRSS1->Fill(pTl1loverlap_EM, cut_EM, weight_ALL_EM);  
  h_etal1loverlap_EM_SRSS1->Fill(etal1loverlap_EM, cut_EM, weight_ALL_EM);  
  h_ptcone30l1loverlap_EM_SRSS1->Fill(ptcone30l1loverlap_EM, cut_EM, weight_ALL_EM);  
  h_d0Sigl1loverlap_EM_SRSS1->Fill(d0Sigl1loverlap_EM, cut_EM, weight_ALL_EM);  
  h_z0SinThetal1loverlap_EM_SRSS1->Fill(z0SinThetal1loverlap_EM, cut_EM, weight_ALL_EM);

  h_Nleptons_overlapWJet_EM_SRSS1->Fill(Nleptons_overlapWJet_EM, cut_EM, weight_ALL_EM);  
  h_ml0loverlapWJet_EM_SRSS1->Fill(ml0loverlapWJet_EM, cut_EM, weight_ALL_EM);  
  h_mTl0loverlapWJet_EM_SRSS1->Fill(mTl0loverlapWJet_EM, cut_EM, weight_ALL_EM);  
  h_ICl0loverlapWJet_EM_SRSS1->Fill(ICl0loverlapWJet_EM, cut_EM, weight_ALL_EM);
  h_pTl0loverlapWJet_EM_SRSS1->Fill(pTl0loverlapWJet_EM, cut_EM, weight_ALL_EM);  
  h_etal0loverlapWJet_EM_SRSS1->Fill(etal0loverlapWJet_EM, cut_EM, weight_ALL_EM);  
  h_ptcone30l0loverlapWJet_EM_SRSS1->Fill(ptcone30l0loverlapWJet_EM, cut_EM, weight_ALL_EM);  
  h_d0Sigl0loverlapWJet_EM_SRSS1->Fill(d0Sigl0loverlapWJet_EM, cut_EM, weight_ALL_EM);  
  h_z0SinThetal0loverlapWJet_EM_SRSS1->Fill(z0SinThetal0loverlapWJet_EM, cut_EM, weight_ALL_EM);  
  h_ml1loverlapWJet_EM_SRSS1->Fill(ml1loverlapWJet_EM, cut_EM, weight_ALL_EM);  
  h_mTl1loverlapWJet_EM_SRSS1->Fill(mTl1loverlapWJet_EM, cut_EM, weight_ALL_EM);
  h_ICl1loverlapWJet_EM_SRSS1->Fill(ICl1loverlapWJet_EM, cut_EM, weight_ALL_EM);
  h_pTl1loverlapWJet_EM_SRSS1->Fill(pTl1loverlapWJet_EM, cut_EM, weight_ALL_EM);  
  h_etal1loverlapWJet_EM_SRSS1->Fill(etal1loverlapWJet_EM, cut_EM, weight_ALL_EM);  
  h_ptcone30l1loverlapWJet_EM_SRSS1->Fill(ptcone30l1loverlapWJet_EM, cut_EM, weight_ALL_EM);  
  h_d0Sigl1loverlapWJet_EM_SRSS1->Fill(d0Sigl1loverlapWJet_EM, cut_EM, weight_ALL_EM);  
  h_z0SinThetal1loverlapWJet_EM_SRSS1->Fill(z0SinThetal1loverlapWJet_EM, cut_EM, weight_ALL_EM);
  
    h_Nleptons_overlapWOFLepton_EM_SRSS1->Fill(Nleptons_overlapWOFLepton_EM, cut_EM, weight_ALL_EM);  
  h_ml0loverlapWOFLepton_EM_SRSS1->Fill(ml0loverlapWOFLepton_EM, cut_EM, weight_ALL_EM);  
  h_mTl0loverlapWOFLepton_EM_SRSS1->Fill(mTl0loverlapWOFLepton_EM, cut_EM, weight_ALL_EM);  
  h_ICl0loverlapWOFLepton_EM_SRSS1->Fill(ICl0loverlapWOFLepton_EM, cut_EM, weight_ALL_EM);
  h_pTl0loverlapWOFLepton_EM_SRSS1->Fill(pTl0loverlapWOFLepton_EM, cut_EM, weight_ALL_EM);  
  h_etal0loverlapWOFLepton_EM_SRSS1->Fill(etal0loverlapWOFLepton_EM, cut_EM, weight_ALL_EM);  
  h_ptcone30l0loverlapWOFLepton_EM_SRSS1->Fill(ptcone30l0loverlapWOFLepton_EM, cut_EM, weight_ALL_EM);  
  h_d0Sigl0loverlapWOFLepton_EM_SRSS1->Fill(d0Sigl0loverlapWOFLepton_EM, cut_EM, weight_ALL_EM);  
  h_z0SinThetal0loverlapWOFLepton_EM_SRSS1->Fill(z0SinThetal0loverlapWOFLepton_EM, cut_EM, weight_ALL_EM);  
  h_ml1loverlapWOFLepton_EM_SRSS1->Fill(ml1loverlapWOFLepton_EM, cut_EM, weight_ALL_EM);  
  h_mTl1loverlapWOFLepton_EM_SRSS1->Fill(mTl1loverlapWOFLepton_EM, cut_EM, weight_ALL_EM);
  h_ICl1loverlapWOFLepton_EM_SRSS1->Fill(ICl1loverlapWOFLepton_EM, cut_EM, weight_ALL_EM);
  h_pTl1loverlapWOFLepton_EM_SRSS1->Fill(pTl1loverlapWOFLepton_EM, cut_EM, weight_ALL_EM);  
  h_etal1loverlapWOFLepton_EM_SRSS1->Fill(etal1loverlapWOFLepton_EM, cut_EM, weight_ALL_EM);  
  h_ptcone30l1loverlapWOFLepton_EM_SRSS1->Fill(ptcone30l1loverlapWOFLepton_EM, cut_EM, weight_ALL_EM);  
  h_d0Sigl1loverlapWOFLepton_EM_SRSS1->Fill(d0Sigl1loverlapWOFLepton_EM, cut_EM, weight_ALL_EM);  
  h_z0SinThetal1loverlapWOFLepton_EM_SRSS1->Fill(z0SinThetal1loverlapWOFLepton_EM, cut_EM, weight_ALL_EM);

    h_Nleptons_overlapWSFLepton_EM_SRSS1->Fill(Nleptons_overlapWSFLepton_EM, cut_EM, weight_ALL_EM);  
  h_ml0loverlapWSFLepton_EM_SRSS1->Fill(ml0loverlapWSFLepton_EM, cut_EM, weight_ALL_EM);  
  h_mTl0loverlapWSFLepton_EM_SRSS1->Fill(mTl0loverlapWSFLepton_EM, cut_EM, weight_ALL_EM);  
  h_ICl0loverlapWSFLepton_EM_SRSS1->Fill(ICl0loverlapWSFLepton_EM, cut_EM, weight_ALL_EM);
  h_pTl0loverlapWSFLepton_EM_SRSS1->Fill(pTl0loverlapWSFLepton_EM, cut_EM, weight_ALL_EM);  
  h_etal0loverlapWSFLepton_EM_SRSS1->Fill(etal0loverlapWSFLepton_EM, cut_EM, weight_ALL_EM);  
  h_ptcone30l0loverlapWSFLepton_EM_SRSS1->Fill(ptcone30l0loverlapWSFLepton_EM, cut_EM, weight_ALL_EM);  
  h_d0Sigl0loverlapWSFLepton_EM_SRSS1->Fill(d0Sigl0loverlapWSFLepton_EM, cut_EM, weight_ALL_EM);  
  h_z0SinThetal0loverlapWSFLepton_EM_SRSS1->Fill(z0SinThetal0loverlapWSFLepton_EM, cut_EM, weight_ALL_EM);  
  h_ml1loverlapWSFLepton_EM_SRSS1->Fill(ml1loverlapWSFLepton_EM, cut_EM, weight_ALL_EM);  
  h_mTl1loverlapWSFLepton_EM_SRSS1->Fill(mTl1loverlapWSFLepton_EM, cut_EM, weight_ALL_EM);
  h_ICl1loverlapWSFLepton_EM_SRSS1->Fill(ICl1loverlapWSFLepton_EM, cut_EM, weight_ALL_EM);
  h_pTl1loverlapWSFLepton_EM_SRSS1->Fill(pTl1loverlapWSFLepton_EM, cut_EM, weight_ALL_EM);  
  h_etal1loverlapWSFLepton_EM_SRSS1->Fill(etal1loverlapWSFLepton_EM, cut_EM, weight_ALL_EM);  
  h_ptcone30l1loverlapWSFLepton_EM_SRSS1->Fill(ptcone30l1loverlapWSFLepton_EM, cut_EM, weight_ALL_EM);  
  h_d0Sigl1loverlapWSFLepton_EM_SRSS1->Fill(d0Sigl1loverlapWSFLepton_EM, cut_EM, weight_ALL_EM);  
  h_z0SinThetal1loverlapWSFLepton_EM_SRSS1->Fill(z0SinThetal1loverlapWSFLepton_EM, cut_EM, weight_ALL_EM);
  
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
}