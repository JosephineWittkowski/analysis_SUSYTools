bool TSelector_SusyNtuple::defineHistos(){

  h_storeSumwMcid = new TH1F("h_storeSumwMcid", "h_storeSumwMcid", 200000, 0, 200000.);  h_storeSumwMcid->Sumw2();
  
  cutflow_EE = new TH1F("cutflow_EE", "cutflow_EE" ,130, 0, 129);
  cutflow_EE_ALL = new TH1F("cutflow_EE_ALL", "cutflow_EE_ALL" ,130, 0, 129);

  cutflow_MM = new TH1F("cutflow_MM", "cutflow_MM" ,130, 0, 129);
  cutflow_MM_ALL = new TH1F("cutflow_MM_ALL", "cutflow_MM_ALL" ,130, 0, 129);

  cutflow_EM = new TH1F("cutflow_EM", "cutflow_EM" ,130, 0, 129);
  cutflow_EM_ALL = new TH1F("cutflow_EM_ALL", "cutflow_EM_ALL" ,130, 0, 129);  
  
    //lost
  h_ml0llost_EE_SRSS1 = new TH2F("h_ml0llost_EE_SRSS1", "h_ml0llost_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0llost_EE_SRSS1->Sumw2();
  h_ml0llost_EE_SRSS2 = new TH2F("h_ml0llost_EE_SRSS2", "h_ml0llost_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ml0llost_EE_SRSS2->Sumw2();
  h_ml0llost_MM_SRSS1 = new TH2F("h_ml0llost_MM_SRSS1", "h_ml0llost_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0llost_MM_SRSS1->Sumw2();
  h_ml0llost_MM_SRSS2 = new TH2F("h_ml0llost_MM_SRSS2", "h_ml0llost_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ml0llost_MM_SRSS2->Sumw2();
  h_ml0llost_MM_SRSS3 = new TH2F("h_ml0llost_MM_SRSS3", "h_ml0llost_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_ml0llost_MM_SRSS3->Sumw2();
  h_ml0llost_MM_SRSS4 = new TH2F("h_ml0llost_MM_SRSS4", "h_ml0llost_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_ml0llost_MM_SRSS4->Sumw2();
  h_ml0llost_EM_SRSS1 = new TH2F("h_ml0llost_EM_SRSS1", "h_ml0llost_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0llost_EM_SRSS1->Sumw2();
  h_ml0llost_EM_SRSS2 = new TH2F("h_ml0llost_EM_SRSS2", "h_ml0llost_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ml0llost_EM_SRSS2->Sumw2();
  h_ml0llost_EE_SROS1 = new TH2F("h_ml0llost_EE_SROS1", "h_ml0llost_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_ml0llost_EE_SROS1->Sumw2();
  h_ml0llost_MM_SROS1 = new TH2F("h_ml0llost_MM_SROS1", "h_ml0llost_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_ml0llost_MM_SROS1->Sumw2();
  h_ml0llost_EM_SROS1 = new TH2F("h_ml0llost_EM_SROS1", "h_ml0llost_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_ml0llost_EM_SROS1->Sumw2();
  
  h_ml1llost_EE_SRSS1 = new TH2F("h_ml1llost_EE_SRSS1", "h_ml1llost_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1llost_EE_SRSS1->Sumw2();
  h_ml1llost_EE_SRSS2 = new TH2F("h_ml1llost_EE_SRSS2", "h_ml1llost_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ml1llost_EE_SRSS2->Sumw2();
  h_ml1llost_MM_SRSS1 = new TH2F("h_ml1llost_MM_SRSS1", "h_ml1llost_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1llost_MM_SRSS1->Sumw2();
  h_ml1llost_MM_SRSS2 = new TH2F("h_ml1llost_MM_SRSS2", "h_ml1llost_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ml1llost_MM_SRSS2->Sumw2();
  h_ml1llost_MM_SRSS3 = new TH2F("h_ml1llost_MM_SRSS3", "h_ml1llost_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_ml1llost_MM_SRSS3->Sumw2();
  h_ml1llost_MM_SRSS4 = new TH2F("h_ml1llost_MM_SRSS4", "h_ml1llost_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_ml1llost_MM_SRSS4->Sumw2();
  h_ml1llost_EM_SRSS1 = new TH2F("h_ml1llost_EM_SRSS1", "h_ml1llost_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1llost_EM_SRSS1->Sumw2();
  h_ml1llost_EM_SRSS2 = new TH2F("h_ml1llost_EM_SRSS2", "h_ml1llost_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ml1llost_EM_SRSS2->Sumw2();
  h_ml1llost_EE_SROS1 = new TH2F("h_ml1llost_EE_SROS1", "h_ml1llost_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_ml1llost_EE_SROS1->Sumw2();
  h_ml1llost_MM_SROS1 = new TH2F("h_ml1llost_MM_SROS1", "h_ml1llost_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_ml1llost_MM_SROS1->Sumw2();
  h_ml1llost_EM_SROS1 = new TH2F("h_ml1llost_EM_SROS1", "h_ml1llost_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_ml1llost_EM_SROS1->Sumw2();
  
  
  h_mTl0llost_EE_SRSS1 = new TH2F("h_mTl0llost_EE_SRSS1", "h_mTl0llost_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0llost_EE_SRSS1->Sumw2();
  h_mTl0llost_EE_SRSS2 = new TH2F("h_mTl0llost_EE_SRSS2", "h_mTl0llost_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl0llost_EE_SRSS2->Sumw2();
  h_mTl0llost_MM_SRSS1 = new TH2F("h_mTl0llost_MM_SRSS1", "h_mTl0llost_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0llost_MM_SRSS1->Sumw2();
  h_mTl0llost_MM_SRSS2 = new TH2F("h_mTl0llost_MM_SRSS2", "h_mTl0llost_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl0llost_MM_SRSS2->Sumw2();
  h_mTl0llost_MM_SRSS3 = new TH2F("h_mTl0llost_MM_SRSS3", "h_mTl0llost_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_mTl0llost_MM_SRSS3->Sumw2();
  h_mTl0llost_MM_SRSS4 = new TH2F("h_mTl0llost_MM_SRSS4", "h_mTl0llost_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_mTl0llost_MM_SRSS4->Sumw2();
  h_mTl0llost_EM_SRSS1 = new TH2F("h_mTl0llost_EM_SRSS1", "h_mTl0llost_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0llost_EM_SRSS1->Sumw2();
  h_mTl0llost_EM_SRSS2 = new TH2F("h_mTl0llost_EM_SRSS2", "h_mTl0llost_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl0llost_EM_SRSS2->Sumw2();
  h_mTl0llost_EE_SROS1 = new TH2F("h_mTl0llost_EE_SROS1", "h_mTl0llost_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl0llost_EE_SROS1->Sumw2();
  h_mTl0llost_MM_SROS1 = new TH2F("h_mTl0llost_MM_SROS1", "h_mTl0llost_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl0llost_MM_SROS1->Sumw2();
  h_mTl0llost_EM_SROS1 = new TH2F("h_mTl0llost_EM_SROS1", "h_mTl0llost_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl0llost_EM_SROS1->Sumw2();
  
  h_mTl1llost_EE_SRSS1 = new TH2F("h_mTl1llost_EE_SRSS1", "h_mTl1llost_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1llost_EE_SRSS1->Sumw2();
  h_mTl1llost_EE_SRSS2 = new TH2F("h_mTl1llost_EE_SRSS2", "h_mTl1llost_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl1llost_EE_SRSS2->Sumw2();
  h_mTl1llost_MM_SRSS1 = new TH2F("h_mTl1llost_MM_SRSS1", "h_mTl1llost_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1llost_MM_SRSS1->Sumw2(); 
  h_mTl1llost_MM_SRSS2 = new TH2F("h_mTl1llost_MM_SRSS2", "h_mTl1llost_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl1llost_MM_SRSS2->Sumw2();
  h_mTl1llost_MM_SRSS3 = new TH2F("h_mTl1llost_MM_SRSS3", "h_mTl1llost_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_mTl1llost_MM_SRSS3->Sumw2();
  h_mTl1llost_MM_SRSS4 = new TH2F("h_mTl1llost_MM_SRSS4", "h_mTl1llost_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_mTl1llost_MM_SRSS4->Sumw2(); 
  h_mTl1llost_EM_SRSS1 = new TH2F("h_mTl1llost_EM_SRSS1", "h_mTl1llost_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1llost_EM_SRSS1->Sumw2();
  h_mTl1llost_EM_SRSS2 = new TH2F("h_mTl1llost_EM_SRSS2", "h_mTl1llost_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl1llost_EM_SRSS2->Sumw2();
  h_mTl1llost_EE_SROS1 = new TH2F("h_mTl1llost_EE_SROS1", "h_mTl1llost_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl1llost_EE_SROS1->Sumw2(); 
  h_mTl1llost_MM_SROS1 = new TH2F("h_mTl1llost_MM_SROS1", "h_mTl1llost_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl1llost_MM_SROS1->Sumw2();
  h_mTl1llost_EM_SROS1 = new TH2F("h_mTl1llost_EM_SROS1", "h_mTl1llost_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl1llost_EM_SROS1->Sumw2();

  h_DeltaRl0llost_EE_SRSS1 = new TH2F("h_DeltaRl0llost_EE_SRSS1", "h_DeltaRl0llost_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0llost_EE_SRSS1->Sumw2();
  h_DeltaRl0llost_EE_SRSS2 = new TH2F("h_DeltaRl0llost_EE_SRSS2", "h_DeltaRl0llost_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0llost_EE_SRSS2->Sumw2();
  h_DeltaRl0llost_MM_SRSS1 = new TH2F("h_DeltaRl0llost_MM_SRSS1", "h_DeltaRl0llost_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0llost_MM_SRSS1->Sumw2();
  h_DeltaRl0llost_MM_SRSS2 = new TH2F("h_DeltaRl0llost_MM_SRSS2", "h_DeltaRl0llost_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0llost_MM_SRSS2->Sumw2();
  h_DeltaRl0llost_MM_SRSS3 = new TH2F("h_DeltaRl0llost_MM_SRSS3", "h_DeltaRl0llost_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0llost_MM_SRSS3->Sumw2();
  h_DeltaRl0llost_MM_SRSS4 = new TH2F("h_DeltaRl0llost_MM_SRSS4", "h_DeltaRl0llost_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0llost_MM_SRSS4->Sumw2();
  h_DeltaRl0llost_EM_SRSS1 = new TH2F("h_DeltaRl0llost_EM_SRSS1", "h_DeltaRl0llost_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0llost_EM_SRSS1->Sumw2();
  h_DeltaRl0llost_EM_SRSS2 = new TH2F("h_DeltaRl0llost_EM_SRSS2", "h_DeltaRl0llost_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0llost_EM_SRSS2->Sumw2();
  h_DeltaRl0llost_EE_SROS1 = new TH2F("h_DeltaRl0llost_EE_SROS1", "h_DeltaRl0llost_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0llost_EE_SROS1->Sumw2();
  h_DeltaRl0llost_MM_SROS1 = new TH2F("h_DeltaRl0llost_MM_SROS1", "h_DeltaRl0llost_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0llost_MM_SROS1->Sumw2();
  h_DeltaRl0llost_EM_SROS1 = new TH2F("h_DeltaRl0llost_EM_SROS1", "h_DeltaRl0llost_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0llost_EM_SROS1->Sumw2();
  
  h_DeltaRl1llost_EE_SRSS1 = new TH2F("h_DeltaRl1llost_EE_SRSS1", "h_DeltaRl1llost_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1llost_EE_SRSS1->Sumw2();
  h_DeltaRl1llost_EE_SRSS2 = new TH2F("h_DeltaRl1llost_EE_SRSS2", "h_DeltaRl1llost_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1llost_EE_SRSS2->Sumw2();
  h_DeltaRl1llost_MM_SRSS1 = new TH2F("h_DeltaRl1llost_MM_SRSS1", "h_DeltaRl1llost_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1llost_MM_SRSS1->Sumw2(); 
  h_DeltaRl1llost_MM_SRSS2 = new TH2F("h_DeltaRl1llost_MM_SRSS2", "h_DeltaRl1llost_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1llost_MM_SRSS2->Sumw2();
  h_DeltaRl1llost_MM_SRSS3 = new TH2F("h_DeltaRl1llost_MM_SRSS3", "h_DeltaRl1llost_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1llost_MM_SRSS3->Sumw2();
  h_DeltaRl1llost_MM_SRSS4 = new TH2F("h_DeltaRl1llost_MM_SRSS4", "h_DeltaRl1llost_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1llost_MM_SRSS4->Sumw2(); 
  h_DeltaRl1llost_EM_SRSS1 = new TH2F("h_DeltaRl1llost_EM_SRSS1", "h_DeltaRl1llost_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1llost_EM_SRSS1->Sumw2();
  h_DeltaRl1llost_EM_SRSS2 = new TH2F("h_DeltaRl1llost_EM_SRSS2", "h_DeltaRl1llost_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1llost_EM_SRSS2->Sumw2();
  h_DeltaRl1llost_EE_SROS1 = new TH2F("h_DeltaRl1llost_EE_SROS1", "h_DeltaRl1llost_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1llost_EE_SROS1->Sumw2(); 
  h_DeltaRl1llost_MM_SROS1 = new TH2F("h_DeltaRl1llost_MM_SROS1", "h_DeltaRl1llost_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1llost_MM_SROS1->Sumw2();
  h_DeltaRl1llost_EM_SROS1 = new TH2F("h_DeltaRl1llost_EM_SROS1", "h_DeltaRl1llost_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1llost_EM_SROS1->Sumw2();
  
  h_DeltaRZl0llost_EE_SRSS1 = new TH2F("h_DeltaRZl0llost_EE_SRSS1", "h_DeltaRZl0llost_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0llost_EE_SRSS1->Sumw2();
  h_DeltaRZl0llost_EE_SRSS2 = new TH2F("h_DeltaRZl0llost_EE_SRSS2", "h_DeltaRZl0llost_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0llost_EE_SRSS2->Sumw2();
  h_DeltaRZl0llost_MM_SRSS1 = new TH2F("h_DeltaRZl0llost_MM_SRSS1", "h_DeltaRZl0llost_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0llost_MM_SRSS1->Sumw2();
  h_DeltaRZl0llost_MM_SRSS2 = new TH2F("h_DeltaRZl0llost_MM_SRSS2", "h_DeltaRZl0llost_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0llost_MM_SRSS2->Sumw2();
  h_DeltaRZl0llost_MM_SRSS3 = new TH2F("h_DeltaRZl0llost_MM_SRSS3", "h_DeltaRZl0llost_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0llost_MM_SRSS3->Sumw2();
  h_DeltaRZl0llost_MM_SRSS4 = new TH2F("h_DeltaRZl0llost_MM_SRSS4", "h_DeltaRZl0llost_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0llost_MM_SRSS4->Sumw2();
  h_DeltaRZl0llost_EM_SRSS1 = new TH2F("h_DeltaRZl0llost_EM_SRSS1", "h_DeltaRZl0llost_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0llost_EM_SRSS1->Sumw2();
  h_DeltaRZl0llost_EM_SRSS2 = new TH2F("h_DeltaRZl0llost_EM_SRSS2", "h_DeltaRZl0llost_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0llost_EM_SRSS2->Sumw2();
  h_DeltaRZl0llost_EE_SROS1 = new TH2F("h_DeltaRZl0llost_EE_SROS1", "h_DeltaRZl0llost_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0llost_EE_SROS1->Sumw2();
  h_DeltaRZl0llost_MM_SROS1 = new TH2F("h_DeltaRZl0llost_MM_SROS1", "h_DeltaRZl0llost_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0llost_MM_SROS1->Sumw2();
  h_DeltaRZl0llost_EM_SROS1 = new TH2F("h_DeltaRZl0llost_EM_SROS1", "h_DeltaRZl0llost_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0llost_EM_SROS1->Sumw2();
  
  h_DeltaRZl1llost_EE_SRSS1 = new TH2F("h_DeltaRZl1llost_EE_SRSS1", "h_DeltaRZl1llost_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1llost_EE_SRSS1->Sumw2();
  h_DeltaRZl1llost_EE_SRSS2 = new TH2F("h_DeltaRZl1llost_EE_SRSS2", "h_DeltaRZl1llost_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1llost_EE_SRSS2->Sumw2();
  h_DeltaRZl1llost_MM_SRSS1 = new TH2F("h_DeltaRZl1llost_MM_SRSS1", "h_DeltaRZl1llost_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1llost_MM_SRSS1->Sumw2(); 
  h_DeltaRZl1llost_MM_SRSS2 = new TH2F("h_DeltaRZl1llost_MM_SRSS2", "h_DeltaRZl1llost_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1llost_MM_SRSS2->Sumw2();
  h_DeltaRZl1llost_MM_SRSS3 = new TH2F("h_DeltaRZl1llost_MM_SRSS3", "h_DeltaRZl1llost_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1llost_MM_SRSS3->Sumw2();
  h_DeltaRZl1llost_MM_SRSS4 = new TH2F("h_DeltaRZl1llost_MM_SRSS4", "h_DeltaRZl1llost_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1llost_MM_SRSS4->Sumw2(); 
  h_DeltaRZl1llost_EM_SRSS1 = new TH2F("h_DeltaRZl1llost_EM_SRSS1", "h_DeltaRZl1llost_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1llost_EM_SRSS1->Sumw2();
  h_DeltaRZl1llost_EM_SRSS2 = new TH2F("h_DeltaRZl1llost_EM_SRSS2", "h_DeltaRZl1llost_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1llost_EM_SRSS2->Sumw2();
  h_DeltaRZl1llost_EE_SROS1 = new TH2F("h_DeltaRZl1llost_EE_SROS1", "h_DeltaRZl1llost_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1llost_EE_SROS1->Sumw2(); 
  h_DeltaRZl1llost_MM_SROS1 = new TH2F("h_DeltaRZl1llost_MM_SROS1", "h_DeltaRZl1llost_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1llost_MM_SROS1->Sumw2();
  h_DeltaRZl1llost_EM_SROS1 = new TH2F("h_DeltaRZl1llost_EM_SROS1", "h_DeltaRZl1llost_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1llost_EM_SROS1->Sumw2();
  
  h_DeltaEtaZl0llost_EE_SRSS1 = new TH2F("h_DeltaEtaZl0llost_EE_SRSS1", "h_DeltaEtaZl0llost_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0llost_EE_SRSS1->Sumw2();
  h_DeltaEtaZl0llost_EE_SRSS2 = new TH2F("h_DeltaEtaZl0llost_EE_SRSS2", "h_DeltaEtaZl0llost_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0llost_EE_SRSS2->Sumw2();
  h_DeltaEtaZl0llost_MM_SRSS1 = new TH2F("h_DeltaEtaZl0llost_MM_SRSS1", "h_DeltaEtaZl0llost_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0llost_MM_SRSS1->Sumw2();
  h_DeltaEtaZl0llost_MM_SRSS2 = new TH2F("h_DeltaEtaZl0llost_MM_SRSS2", "h_DeltaEtaZl0llost_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0llost_MM_SRSS2->Sumw2();
  h_DeltaEtaZl0llost_MM_SRSS3 = new TH2F("h_DeltaEtaZl0llost_MM_SRSS3", "h_DeltaEtaZl0llost_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0llost_MM_SRSS3->Sumw2();
  h_DeltaEtaZl0llost_MM_SRSS4 = new TH2F("h_DeltaEtaZl0llost_MM_SRSS4", "h_DeltaEtaZl0llost_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0llost_MM_SRSS4->Sumw2();
  h_DeltaEtaZl0llost_EM_SRSS1 = new TH2F("h_DeltaEtaZl0llost_EM_SRSS1", "h_DeltaEtaZl0llost_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0llost_EM_SRSS1->Sumw2();
  h_DeltaEtaZl0llost_EM_SRSS2 = new TH2F("h_DeltaEtaZl0llost_EM_SRSS2", "h_DeltaEtaZl0llost_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0llost_EM_SRSS2->Sumw2();
  h_DeltaEtaZl0llost_EE_SROS1 = new TH2F("h_DeltaEtaZl0llost_EE_SROS1", "h_DeltaEtaZl0llost_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0llost_EE_SROS1->Sumw2();
  h_DeltaEtaZl0llost_MM_SROS1 = new TH2F("h_DeltaEtaZl0llost_MM_SROS1", "h_DeltaEtaZl0llost_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0llost_MM_SROS1->Sumw2();
  h_DeltaEtaZl0llost_EM_SROS1 = new TH2F("h_DeltaEtaZl0llost_EM_SROS1", "h_DeltaEtaZl0llost_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0llost_EM_SROS1->Sumw2();
  
  h_DeltaEtaZl1llost_EE_SRSS1 = new TH2F("h_DeltaEtaZl1llost_EE_SRSS1", "h_DeltaEtaZl1llost_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1llost_EE_SRSS1->Sumw2();
  h_DeltaEtaZl1llost_EE_SRSS2 = new TH2F("h_DeltaEtaZl1llost_EE_SRSS2", "h_DeltaEtaZl1llost_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1llost_EE_SRSS2->Sumw2();
  h_DeltaEtaZl1llost_MM_SRSS1 = new TH2F("h_DeltaEtaZl1llost_MM_SRSS1", "h_DeltaEtaZl1llost_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1llost_MM_SRSS1->Sumw2(); 
  h_DeltaEtaZl1llost_MM_SRSS2 = new TH2F("h_DeltaEtaZl1llost_MM_SRSS2", "h_DeltaEtaZl1llost_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1llost_MM_SRSS2->Sumw2();
  h_DeltaEtaZl1llost_MM_SRSS3 = new TH2F("h_DeltaEtaZl1llost_MM_SRSS3", "h_DeltaEtaZl1llost_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1llost_MM_SRSS3->Sumw2();
  h_DeltaEtaZl1llost_MM_SRSS4 = new TH2F("h_DeltaEtaZl1llost_MM_SRSS4", "h_DeltaEtaZl1llost_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1llost_MM_SRSS4->Sumw2(); 
  h_DeltaEtaZl1llost_EM_SRSS1 = new TH2F("h_DeltaEtaZl1llost_EM_SRSS1", "h_DeltaEtaZl1llost_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1llost_EM_SRSS1->Sumw2();
  h_DeltaEtaZl1llost_EM_SRSS2 = new TH2F("h_DeltaEtaZl1llost_EM_SRSS2", "h_DeltaEtaZl1llost_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1llost_EM_SRSS2->Sumw2();
  h_DeltaEtaZl1llost_EE_SROS1 = new TH2F("h_DeltaEtaZl1llost_EE_SROS1", "h_DeltaEtaZl1llost_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1llost_EE_SROS1->Sumw2(); 
  h_DeltaEtaZl1llost_MM_SROS1 = new TH2F("h_DeltaEtaZl1llost_MM_SROS1", "h_DeltaEtaZl1llost_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1llost_MM_SROS1->Sumw2();
  h_DeltaEtaZl1llost_EM_SROS1 = new TH2F("h_DeltaEtaZl1llost_EM_SROS1", "h_DeltaEtaZl1llost_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1llost_EM_SROS1->Sumw2();
  
  
  h_mTllllost_EE_SRSS1 = new TH2F("h_mTllllost_EE_SRSS1", "h_mTllllost_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTllllost_EE_SRSS1->Sumw2();
  h_mTllllost_EE_SRSS2 = new TH2F("h_mTllllost_EE_SRSS2", "h_mTllllost_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTllllost_EE_SRSS2->Sumw2();
  h_mTllllost_MM_SRSS1 = new TH2F("h_mTllllost_MM_SRSS1", "h_mTllllost_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTllllost_MM_SRSS1->Sumw2(); 
  h_mTllllost_MM_SRSS2 = new TH2F("h_mTllllost_MM_SRSS2", "h_mTllllost_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTllllost_MM_SRSS2->Sumw2();
  h_mTllllost_MM_SRSS3 = new TH2F("h_mTllllost_MM_SRSS3", "h_mTllllost_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_mTllllost_MM_SRSS3->Sumw2();
  h_mTllllost_MM_SRSS4 = new TH2F("h_mTllllost_MM_SRSS4", "h_mTllllost_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_mTllllost_MM_SRSS4->Sumw2(); 
  h_mTllllost_EM_SRSS1 = new TH2F("h_mTllllost_EM_SRSS1", "h_mTllllost_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTllllost_EM_SRSS1->Sumw2();
  h_mTllllost_EM_SRSS2 = new TH2F("h_mTllllost_EM_SRSS2", "h_mTllllost_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTllllost_EM_SRSS2->Sumw2();
  h_mTllllost_EE_SROS1 = new TH2F("h_mTllllost_EE_SROS1", "h_mTllllost_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTllllost_EE_SROS1->Sumw2(); 
  h_mTllllost_MM_SROS1 = new TH2F("h_mTllllost_MM_SROS1", "h_mTllllost_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTllllost_MM_SROS1->Sumw2();
  h_mTllllost_EM_SROS1 = new TH2F("h_mTllllost_EM_SROS1", "h_mTllllost_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTllllost_EM_SROS1->Sumw2();
  
  //soft
  h_ml0lsoft_EE_SRSS1 = new TH2F("h_ml0lsoft_EE_SRSS1", "h_ml0lsoft_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0lsoft_EE_SRSS1->Sumw2();
  h_ml0lsoft_EE_SRSS2 = new TH2F("h_ml0lsoft_EE_SRSS2", "h_ml0lsoft_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ml0lsoft_EE_SRSS2->Sumw2();
  h_ml0lsoft_MM_SRSS1 = new TH2F("h_ml0lsoft_MM_SRSS1", "h_ml0lsoft_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0lsoft_MM_SRSS1->Sumw2();
  h_ml0lsoft_MM_SRSS2 = new TH2F("h_ml0lsoft_MM_SRSS2", "h_ml0lsoft_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ml0lsoft_MM_SRSS2->Sumw2();
  h_ml0lsoft_MM_SRSS3 = new TH2F("h_ml0lsoft_MM_SRSS3", "h_ml0lsoft_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_ml0lsoft_MM_SRSS3->Sumw2();
  h_ml0lsoft_MM_SRSS4 = new TH2F("h_ml0lsoft_MM_SRSS4", "h_ml0lsoft_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_ml0lsoft_MM_SRSS4->Sumw2();
  h_ml0lsoft_EM_SRSS1 = new TH2F("h_ml0lsoft_EM_SRSS1", "h_ml0lsoft_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0lsoft_EM_SRSS1->Sumw2();
  h_ml0lsoft_EM_SRSS2 = new TH2F("h_ml0lsoft_EM_SRSS2", "h_ml0lsoft_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ml0lsoft_EM_SRSS2->Sumw2();
  h_ml0lsoft_EE_SROS1 = new TH2F("h_ml0lsoft_EE_SROS1", "h_ml0lsoft_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_ml0lsoft_EE_SROS1->Sumw2();
  h_ml0lsoft_MM_SROS1 = new TH2F("h_ml0lsoft_MM_SROS1", "h_ml0lsoft_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_ml0lsoft_MM_SROS1->Sumw2();
  h_ml0lsoft_EM_SROS1 = new TH2F("h_ml0lsoft_EM_SROS1", "h_ml0lsoft_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_ml0lsoft_EM_SROS1->Sumw2();
  
  h_ml1lsoft_EE_SRSS1 = new TH2F("h_ml1lsoft_EE_SRSS1", "h_ml1lsoft_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1lsoft_EE_SRSS1->Sumw2();
  h_ml1lsoft_EE_SRSS2 = new TH2F("h_ml1lsoft_EE_SRSS2", "h_ml1lsoft_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ml1lsoft_EE_SRSS2->Sumw2();
  h_ml1lsoft_MM_SRSS1 = new TH2F("h_ml1lsoft_MM_SRSS1", "h_ml1lsoft_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1lsoft_MM_SRSS1->Sumw2();
  h_ml1lsoft_MM_SRSS2 = new TH2F("h_ml1lsoft_MM_SRSS2", "h_ml1lsoft_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ml1lsoft_MM_SRSS2->Sumw2();
  h_ml1lsoft_MM_SRSS3 = new TH2F("h_ml1lsoft_MM_SRSS3", "h_ml1lsoft_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_ml1lsoft_MM_SRSS3->Sumw2();
  h_ml1lsoft_MM_SRSS4 = new TH2F("h_ml1lsoft_MM_SRSS4", "h_ml1lsoft_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_ml1lsoft_MM_SRSS4->Sumw2();
  h_ml1lsoft_EM_SRSS1 = new TH2F("h_ml1lsoft_EM_SRSS1", "h_ml1lsoft_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1lsoft_EM_SRSS1->Sumw2();
  h_ml1lsoft_EM_SRSS2 = new TH2F("h_ml1lsoft_EM_SRSS2", "h_ml1lsoft_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ml1lsoft_EM_SRSS2->Sumw2();
  h_ml1lsoft_EE_SROS1 = new TH2F("h_ml1lsoft_EE_SROS1", "h_ml1lsoft_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_ml1lsoft_EE_SROS1->Sumw2();
  h_ml1lsoft_MM_SROS1 = new TH2F("h_ml1lsoft_MM_SROS1", "h_ml1lsoft_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_ml1lsoft_MM_SROS1->Sumw2();
  h_ml1lsoft_EM_SROS1 = new TH2F("h_ml1lsoft_EM_SROS1", "h_ml1lsoft_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_ml1lsoft_EM_SROS1->Sumw2();
  
  
  h_mTl0lsoft_EE_SRSS1 = new TH2F("h_mTl0lsoft_EE_SRSS1", "h_mTl0lsoft_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0lsoft_EE_SRSS1->Sumw2();
  h_mTl0lsoft_EE_SRSS2 = new TH2F("h_mTl0lsoft_EE_SRSS2", "h_mTl0lsoft_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl0lsoft_EE_SRSS2->Sumw2();
  h_mTl0lsoft_MM_SRSS1 = new TH2F("h_mTl0lsoft_MM_SRSS1", "h_mTl0lsoft_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0lsoft_MM_SRSS1->Sumw2();
  h_mTl0lsoft_MM_SRSS2 = new TH2F("h_mTl0lsoft_MM_SRSS2", "h_mTl0lsoft_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl0lsoft_MM_SRSS2->Sumw2();
  h_mTl0lsoft_MM_SRSS3 = new TH2F("h_mTl0lsoft_MM_SRSS3", "h_mTl0lsoft_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_mTl0lsoft_MM_SRSS3->Sumw2();
  h_mTl0lsoft_MM_SRSS4 = new TH2F("h_mTl0lsoft_MM_SRSS4", "h_mTl0lsoft_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_mTl0lsoft_MM_SRSS4->Sumw2();
  h_mTl0lsoft_EM_SRSS1 = new TH2F("h_mTl0lsoft_EM_SRSS1", "h_mTl0lsoft_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0lsoft_EM_SRSS1->Sumw2();
  h_mTl0lsoft_EM_SRSS2 = new TH2F("h_mTl0lsoft_EM_SRSS2", "h_mTl0lsoft_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl0lsoft_EM_SRSS2->Sumw2();
  h_mTl0lsoft_EE_SROS1 = new TH2F("h_mTl0lsoft_EE_SROS1", "h_mTl0lsoft_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl0lsoft_EE_SROS1->Sumw2();
  h_mTl0lsoft_MM_SROS1 = new TH2F("h_mTl0lsoft_MM_SROS1", "h_mTl0lsoft_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl0lsoft_MM_SROS1->Sumw2();
  h_mTl0lsoft_EM_SROS1 = new TH2F("h_mTl0lsoft_EM_SROS1", "h_mTl0lsoft_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl0lsoft_EM_SROS1->Sumw2();
  
  h_mTl1lsoft_EE_SRSS1 = new TH2F("h_mTl1lsoft_EE_SRSS1", "h_mTl1lsoft_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1lsoft_EE_SRSS1->Sumw2();
  h_mTl1lsoft_EE_SRSS2 = new TH2F("h_mTl1lsoft_EE_SRSS2", "h_mTl1lsoft_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl1lsoft_EE_SRSS2->Sumw2();
  h_mTl1lsoft_MM_SRSS1 = new TH2F("h_mTl1lsoft_MM_SRSS1", "h_mTl1lsoft_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1lsoft_MM_SRSS1->Sumw2(); 
  h_mTl1lsoft_MM_SRSS2 = new TH2F("h_mTl1lsoft_MM_SRSS2", "h_mTl1lsoft_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl1lsoft_MM_SRSS2->Sumw2();
  h_mTl1lsoft_MM_SRSS3 = new TH2F("h_mTl1lsoft_MM_SRSS3", "h_mTl1lsoft_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_mTl1lsoft_MM_SRSS3->Sumw2();
  h_mTl1lsoft_MM_SRSS4 = new TH2F("h_mTl1lsoft_MM_SRSS4", "h_mTl1lsoft_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_mTl1lsoft_MM_SRSS4->Sumw2(); 
  h_mTl1lsoft_EM_SRSS1 = new TH2F("h_mTl1lsoft_EM_SRSS1", "h_mTl1lsoft_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1lsoft_EM_SRSS1->Sumw2();
  h_mTl1lsoft_EM_SRSS2 = new TH2F("h_mTl1lsoft_EM_SRSS2", "h_mTl1lsoft_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl1lsoft_EM_SRSS2->Sumw2();
  h_mTl1lsoft_EE_SROS1 = new TH2F("h_mTl1lsoft_EE_SROS1", "h_mTl1lsoft_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl1lsoft_EE_SROS1->Sumw2(); 
  h_mTl1lsoft_MM_SROS1 = new TH2F("h_mTl1lsoft_MM_SROS1", "h_mTl1lsoft_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl1lsoft_MM_SROS1->Sumw2();
  h_mTl1lsoft_EM_SROS1 = new TH2F("h_mTl1lsoft_EM_SROS1", "h_mTl1lsoft_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl1lsoft_EM_SROS1->Sumw2();

  h_DeltaRl0lsoft_EE_SRSS1 = new TH2F("h_DeltaRl0lsoft_EE_SRSS1", "h_DeltaRl0lsoft_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0lsoft_EE_SRSS1->Sumw2();
  h_DeltaRl0lsoft_EE_SRSS2 = new TH2F("h_DeltaRl0lsoft_EE_SRSS2", "h_DeltaRl0lsoft_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0lsoft_EE_SRSS2->Sumw2();
  h_DeltaRl0lsoft_MM_SRSS1 = new TH2F("h_DeltaRl0lsoft_MM_SRSS1", "h_DeltaRl0lsoft_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0lsoft_MM_SRSS1->Sumw2();
  h_DeltaRl0lsoft_MM_SRSS2 = new TH2F("h_DeltaRl0lsoft_MM_SRSS2", "h_DeltaRl0lsoft_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0lsoft_MM_SRSS2->Sumw2();
  h_DeltaRl0lsoft_MM_SRSS3 = new TH2F("h_DeltaRl0lsoft_MM_SRSS3", "h_DeltaRl0lsoft_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0lsoft_MM_SRSS3->Sumw2();
  h_DeltaRl0lsoft_MM_SRSS4 = new TH2F("h_DeltaRl0lsoft_MM_SRSS4", "h_DeltaRl0lsoft_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0lsoft_MM_SRSS4->Sumw2();
  h_DeltaRl0lsoft_EM_SRSS1 = new TH2F("h_DeltaRl0lsoft_EM_SRSS1", "h_DeltaRl0lsoft_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0lsoft_EM_SRSS1->Sumw2();
  h_DeltaRl0lsoft_EM_SRSS2 = new TH2F("h_DeltaRl0lsoft_EM_SRSS2", "h_DeltaRl0lsoft_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0lsoft_EM_SRSS2->Sumw2();
  h_DeltaRl0lsoft_EE_SROS1 = new TH2F("h_DeltaRl0lsoft_EE_SROS1", "h_DeltaRl0lsoft_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0lsoft_EE_SROS1->Sumw2();
  h_DeltaRl0lsoft_MM_SROS1 = new TH2F("h_DeltaRl0lsoft_MM_SROS1", "h_DeltaRl0lsoft_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0lsoft_MM_SROS1->Sumw2();
  h_DeltaRl0lsoft_EM_SROS1 = new TH2F("h_DeltaRl0lsoft_EM_SROS1", "h_DeltaRl0lsoft_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0lsoft_EM_SROS1->Sumw2();
  
  h_DeltaRl1lsoft_EE_SRSS1 = new TH2F("h_DeltaRl1lsoft_EE_SRSS1", "h_DeltaRl1lsoft_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1lsoft_EE_SRSS1->Sumw2();
  h_DeltaRl1lsoft_EE_SRSS2 = new TH2F("h_DeltaRl1lsoft_EE_SRSS2", "h_DeltaRl1lsoft_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1lsoft_EE_SRSS2->Sumw2();
  h_DeltaRl1lsoft_MM_SRSS1 = new TH2F("h_DeltaRl1lsoft_MM_SRSS1", "h_DeltaRl1lsoft_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1lsoft_MM_SRSS1->Sumw2(); 
  h_DeltaRl1lsoft_MM_SRSS2 = new TH2F("h_DeltaRl1lsoft_MM_SRSS2", "h_DeltaRl1lsoft_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1lsoft_MM_SRSS2->Sumw2();
  h_DeltaRl1lsoft_MM_SRSS3 = new TH2F("h_DeltaRl1lsoft_MM_SRSS3", "h_DeltaRl1lsoft_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1lsoft_MM_SRSS3->Sumw2();
  h_DeltaRl1lsoft_MM_SRSS4 = new TH2F("h_DeltaRl1lsoft_MM_SRSS4", "h_DeltaRl1lsoft_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1lsoft_MM_SRSS4->Sumw2(); 
  h_DeltaRl1lsoft_EM_SRSS1 = new TH2F("h_DeltaRl1lsoft_EM_SRSS1", "h_DeltaRl1lsoft_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1lsoft_EM_SRSS1->Sumw2();
  h_DeltaRl1lsoft_EM_SRSS2 = new TH2F("h_DeltaRl1lsoft_EM_SRSS2", "h_DeltaRl1lsoft_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1lsoft_EM_SRSS2->Sumw2();
  h_DeltaRl1lsoft_EE_SROS1 = new TH2F("h_DeltaRl1lsoft_EE_SROS1", "h_DeltaRl1lsoft_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1lsoft_EE_SROS1->Sumw2(); 
  h_DeltaRl1lsoft_MM_SROS1 = new TH2F("h_DeltaRl1lsoft_MM_SROS1", "h_DeltaRl1lsoft_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1lsoft_MM_SROS1->Sumw2();
  h_DeltaRl1lsoft_EM_SROS1 = new TH2F("h_DeltaRl1lsoft_EM_SROS1", "h_DeltaRl1lsoft_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1lsoft_EM_SROS1->Sumw2();
  
  h_DeltaRZl0lsoft_EE_SRSS1 = new TH2F("h_DeltaRZl0lsoft_EE_SRSS1", "h_DeltaRZl0lsoft_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0lsoft_EE_SRSS1->Sumw2();
  h_DeltaRZl0lsoft_EE_SRSS2 = new TH2F("h_DeltaRZl0lsoft_EE_SRSS2", "h_DeltaRZl0lsoft_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0lsoft_EE_SRSS2->Sumw2();
  h_DeltaRZl0lsoft_MM_SRSS1 = new TH2F("h_DeltaRZl0lsoft_MM_SRSS1", "h_DeltaRZl0lsoft_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0lsoft_MM_SRSS1->Sumw2();
  h_DeltaRZl0lsoft_MM_SRSS2 = new TH2F("h_DeltaRZl0lsoft_MM_SRSS2", "h_DeltaRZl0lsoft_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0lsoft_MM_SRSS2->Sumw2();
  h_DeltaRZl0lsoft_MM_SRSS3 = new TH2F("h_DeltaRZl0lsoft_MM_SRSS3", "h_DeltaRZl0lsoft_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0lsoft_MM_SRSS3->Sumw2();
  h_DeltaRZl0lsoft_MM_SRSS4 = new TH2F("h_DeltaRZl0lsoft_MM_SRSS4", "h_DeltaRZl0lsoft_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0lsoft_MM_SRSS4->Sumw2();
  h_DeltaRZl0lsoft_EM_SRSS1 = new TH2F("h_DeltaRZl0lsoft_EM_SRSS1", "h_DeltaRZl0lsoft_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0lsoft_EM_SRSS1->Sumw2();
  h_DeltaRZl0lsoft_EM_SRSS2 = new TH2F("h_DeltaRZl0lsoft_EM_SRSS2", "h_DeltaRZl0lsoft_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0lsoft_EM_SRSS2->Sumw2();
  h_DeltaRZl0lsoft_EE_SROS1 = new TH2F("h_DeltaRZl0lsoft_EE_SROS1", "h_DeltaRZl0lsoft_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0lsoft_EE_SROS1->Sumw2();
  h_DeltaRZl0lsoft_MM_SROS1 = new TH2F("h_DeltaRZl0lsoft_MM_SROS1", "h_DeltaRZl0lsoft_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0lsoft_MM_SROS1->Sumw2();
  h_DeltaRZl0lsoft_EM_SROS1 = new TH2F("h_DeltaRZl0lsoft_EM_SROS1", "h_DeltaRZl0lsoft_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0lsoft_EM_SROS1->Sumw2();
  
  h_DeltaRZl1lsoft_EE_SRSS1 = new TH2F("h_DeltaRZl1lsoft_EE_SRSS1", "h_DeltaRZl1lsoft_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1lsoft_EE_SRSS1->Sumw2();
  h_DeltaRZl1lsoft_EE_SRSS2 = new TH2F("h_DeltaRZl1lsoft_EE_SRSS2", "h_DeltaRZl1lsoft_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1lsoft_EE_SRSS2->Sumw2();
  h_DeltaRZl1lsoft_MM_SRSS1 = new TH2F("h_DeltaRZl1lsoft_MM_SRSS1", "h_DeltaRZl1lsoft_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1lsoft_MM_SRSS1->Sumw2(); 
  h_DeltaRZl1lsoft_MM_SRSS2 = new TH2F("h_DeltaRZl1lsoft_MM_SRSS2", "h_DeltaRZl1lsoft_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1lsoft_MM_SRSS2->Sumw2();
  h_DeltaRZl1lsoft_MM_SRSS3 = new TH2F("h_DeltaRZl1lsoft_MM_SRSS3", "h_DeltaRZl1lsoft_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1lsoft_MM_SRSS3->Sumw2();
  h_DeltaRZl1lsoft_MM_SRSS4 = new TH2F("h_DeltaRZl1lsoft_MM_SRSS4", "h_DeltaRZl1lsoft_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1lsoft_MM_SRSS4->Sumw2(); 
  h_DeltaRZl1lsoft_EM_SRSS1 = new TH2F("h_DeltaRZl1lsoft_EM_SRSS1", "h_DeltaRZl1lsoft_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1lsoft_EM_SRSS1->Sumw2();
  h_DeltaRZl1lsoft_EM_SRSS2 = new TH2F("h_DeltaRZl1lsoft_EM_SRSS2", "h_DeltaRZl1lsoft_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1lsoft_EM_SRSS2->Sumw2();
  h_DeltaRZl1lsoft_EE_SROS1 = new TH2F("h_DeltaRZl1lsoft_EE_SROS1", "h_DeltaRZl1lsoft_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1lsoft_EE_SROS1->Sumw2(); 
  h_DeltaRZl1lsoft_MM_SROS1 = new TH2F("h_DeltaRZl1lsoft_MM_SROS1", "h_DeltaRZl1lsoft_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1lsoft_MM_SROS1->Sumw2();
  h_DeltaRZl1lsoft_EM_SROS1 = new TH2F("h_DeltaRZl1lsoft_EM_SROS1", "h_DeltaRZl1lsoft_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1lsoft_EM_SROS1->Sumw2();
  
  h_DeltaEtaZl0lsoft_EE_SRSS1 = new TH2F("h_DeltaEtaZl0lsoft_EE_SRSS1", "h_DeltaEtaZl0lsoft_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0lsoft_EE_SRSS1->Sumw2();
  h_DeltaEtaZl0lsoft_EE_SRSS2 = new TH2F("h_DeltaEtaZl0lsoft_EE_SRSS2", "h_DeltaEtaZl0lsoft_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0lsoft_EE_SRSS2->Sumw2();
  h_DeltaEtaZl0lsoft_MM_SRSS1 = new TH2F("h_DeltaEtaZl0lsoft_MM_SRSS1", "h_DeltaEtaZl0lsoft_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0lsoft_MM_SRSS1->Sumw2();
  h_DeltaEtaZl0lsoft_MM_SRSS2 = new TH2F("h_DeltaEtaZl0lsoft_MM_SRSS2", "h_DeltaEtaZl0lsoft_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0lsoft_MM_SRSS2->Sumw2();
  h_DeltaEtaZl0lsoft_MM_SRSS3 = new TH2F("h_DeltaEtaZl0lsoft_MM_SRSS3", "h_DeltaEtaZl0lsoft_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0lsoft_MM_SRSS3->Sumw2();
  h_DeltaEtaZl0lsoft_MM_SRSS4 = new TH2F("h_DeltaEtaZl0lsoft_MM_SRSS4", "h_DeltaEtaZl0lsoft_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0lsoft_MM_SRSS4->Sumw2();
  h_DeltaEtaZl0lsoft_EM_SRSS1 = new TH2F("h_DeltaEtaZl0lsoft_EM_SRSS1", "h_DeltaEtaZl0lsoft_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0lsoft_EM_SRSS1->Sumw2();
  h_DeltaEtaZl0lsoft_EM_SRSS2 = new TH2F("h_DeltaEtaZl0lsoft_EM_SRSS2", "h_DeltaEtaZl0lsoft_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0lsoft_EM_SRSS2->Sumw2();
  h_DeltaEtaZl0lsoft_EE_SROS1 = new TH2F("h_DeltaEtaZl0lsoft_EE_SROS1", "h_DeltaEtaZl0lsoft_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0lsoft_EE_SROS1->Sumw2();
  h_DeltaEtaZl0lsoft_MM_SROS1 = new TH2F("h_DeltaEtaZl0lsoft_MM_SROS1", "h_DeltaEtaZl0lsoft_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0lsoft_MM_SROS1->Sumw2();
  h_DeltaEtaZl0lsoft_EM_SROS1 = new TH2F("h_DeltaEtaZl0lsoft_EM_SROS1", "h_DeltaEtaZl0lsoft_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0lsoft_EM_SROS1->Sumw2();
  
  h_DeltaEtaZl1lsoft_EE_SRSS1 = new TH2F("h_DeltaEtaZl1lsoft_EE_SRSS1", "h_DeltaEtaZl1lsoft_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1lsoft_EE_SRSS1->Sumw2();
  h_DeltaEtaZl1lsoft_EE_SRSS2 = new TH2F("h_DeltaEtaZl1lsoft_EE_SRSS2", "h_DeltaEtaZl1lsoft_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1lsoft_EE_SRSS2->Sumw2();
  h_DeltaEtaZl1lsoft_MM_SRSS1 = new TH2F("h_DeltaEtaZl1lsoft_MM_SRSS1", "h_DeltaEtaZl1lsoft_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1lsoft_MM_SRSS1->Sumw2(); 
  h_DeltaEtaZl1lsoft_MM_SRSS2 = new TH2F("h_DeltaEtaZl1lsoft_MM_SRSS2", "h_DeltaEtaZl1lsoft_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1lsoft_MM_SRSS2->Sumw2();
  h_DeltaEtaZl1lsoft_MM_SRSS3 = new TH2F("h_DeltaEtaZl1lsoft_MM_SRSS3", "h_DeltaEtaZl1lsoft_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1lsoft_MM_SRSS3->Sumw2();
  h_DeltaEtaZl1lsoft_MM_SRSS4 = new TH2F("h_DeltaEtaZl1lsoft_MM_SRSS4", "h_DeltaEtaZl1lsoft_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1lsoft_MM_SRSS4->Sumw2(); 
  h_DeltaEtaZl1lsoft_EM_SRSS1 = new TH2F("h_DeltaEtaZl1lsoft_EM_SRSS1", "h_DeltaEtaZl1lsoft_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1lsoft_EM_SRSS1->Sumw2();
  h_DeltaEtaZl1lsoft_EM_SRSS2 = new TH2F("h_DeltaEtaZl1lsoft_EM_SRSS2", "h_DeltaEtaZl1lsoft_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1lsoft_EM_SRSS2->Sumw2();
  h_DeltaEtaZl1lsoft_EE_SROS1 = new TH2F("h_DeltaEtaZl1lsoft_EE_SROS1", "h_DeltaEtaZl1lsoft_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1lsoft_EE_SROS1->Sumw2(); 
  h_DeltaEtaZl1lsoft_MM_SROS1 = new TH2F("h_DeltaEtaZl1lsoft_MM_SROS1", "h_DeltaEtaZl1lsoft_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1lsoft_MM_SROS1->Sumw2();
  h_DeltaEtaZl1lsoft_EM_SROS1 = new TH2F("h_DeltaEtaZl1lsoft_EM_SROS1", "h_DeltaEtaZl1lsoft_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1lsoft_EM_SROS1->Sumw2();  
  
  
  h_mTlllsoft_EE_SRSS1 = new TH2F("h_mTlllsoft_EE_SRSS1", "h_mTlllsoft_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTlllsoft_EE_SRSS1->Sumw2();
  h_mTlllsoft_EE_SRSS2 = new TH2F("h_mTlllsoft_EE_SRSS2", "h_mTlllsoft_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTlllsoft_EE_SRSS2->Sumw2();
  h_mTlllsoft_MM_SRSS1 = new TH2F("h_mTlllsoft_MM_SRSS1", "h_mTlllsoft_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTlllsoft_MM_SRSS1->Sumw2(); 
  h_mTlllsoft_MM_SRSS2 = new TH2F("h_mTlllsoft_MM_SRSS2", "h_mTlllsoft_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTlllsoft_MM_SRSS2->Sumw2();
  h_mTlllsoft_MM_SRSS3 = new TH2F("h_mTlllsoft_MM_SRSS3", "h_mTlllsoft_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_mTlllsoft_MM_SRSS3->Sumw2();
  h_mTlllsoft_MM_SRSS4 = new TH2F("h_mTlllsoft_MM_SRSS4", "h_mTlllsoft_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_mTlllsoft_MM_SRSS4->Sumw2(); 
  h_mTlllsoft_EM_SRSS1 = new TH2F("h_mTlllsoft_EM_SRSS1", "h_mTlllsoft_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTlllsoft_EM_SRSS1->Sumw2();
  h_mTlllsoft_EM_SRSS2 = new TH2F("h_mTlllsoft_EM_SRSS2", "h_mTlllsoft_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTlllsoft_EM_SRSS2->Sumw2();
  h_mTlllsoft_EE_SROS1 = new TH2F("h_mTlllsoft_EE_SROS1", "h_mTlllsoft_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTlllsoft_EE_SROS1->Sumw2(); 
  h_mTlllsoft_MM_SROS1 = new TH2F("h_mTlllsoft_MM_SROS1", "h_mTlllsoft_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTlllsoft_MM_SROS1->Sumw2();
  h_mTlllsoft_EM_SROS1 = new TH2F("h_mTlllsoft_EM_SROS1", "h_mTlllsoft_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTlllsoft_EM_SROS1->Sumw2();
  
  //overlap
  h_ml0loverlap_EE_SRSS1 = new TH2F("h_ml0loverlap_EE_SRSS1", "h_ml0loverlap_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0loverlap_EE_SRSS1->Sumw2();
  h_ml0loverlap_EE_SRSS2 = new TH2F("h_ml0loverlap_EE_SRSS2", "h_ml0loverlap_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ml0loverlap_EE_SRSS2->Sumw2();
  h_ml0loverlap_MM_SRSS1 = new TH2F("h_ml0loverlap_MM_SRSS1", "h_ml0loverlap_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0loverlap_MM_SRSS1->Sumw2();
  h_ml0loverlap_MM_SRSS2 = new TH2F("h_ml0loverlap_MM_SRSS2", "h_ml0loverlap_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ml0loverlap_MM_SRSS2->Sumw2();
  h_ml0loverlap_MM_SRSS3 = new TH2F("h_ml0loverlap_MM_SRSS3", "h_ml0loverlap_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_ml0loverlap_MM_SRSS3->Sumw2();
  h_ml0loverlap_MM_SRSS4 = new TH2F("h_ml0loverlap_MM_SRSS4", "h_ml0loverlap_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_ml0loverlap_MM_SRSS4->Sumw2();
  h_ml0loverlap_EM_SRSS1 = new TH2F("h_ml0loverlap_EM_SRSS1", "h_ml0loverlap_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0loverlap_EM_SRSS1->Sumw2();
  h_ml0loverlap_EM_SRSS2 = new TH2F("h_ml0loverlap_EM_SRSS2", "h_ml0loverlap_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ml0loverlap_EM_SRSS2->Sumw2();
  h_ml0loverlap_EE_SROS1 = new TH2F("h_ml0loverlap_EE_SROS1", "h_ml0loverlap_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_ml0loverlap_EE_SROS1->Sumw2();
  h_ml0loverlap_MM_SROS1 = new TH2F("h_ml0loverlap_MM_SROS1", "h_ml0loverlap_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_ml0loverlap_MM_SROS1->Sumw2();
  h_ml0loverlap_EM_SROS1 = new TH2F("h_ml0loverlap_EM_SROS1", "h_ml0loverlap_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_ml0loverlap_EM_SROS1->Sumw2();
  
  h_ml1loverlap_EE_SRSS1 = new TH2F("h_ml1loverlap_EE_SRSS1", "h_ml1loverlap_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1loverlap_EE_SRSS1->Sumw2();
  h_ml1loverlap_EE_SRSS2 = new TH2F("h_ml1loverlap_EE_SRSS2", "h_ml1loverlap_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ml1loverlap_EE_SRSS2->Sumw2();
  h_ml1loverlap_MM_SRSS1 = new TH2F("h_ml1loverlap_MM_SRSS1", "h_ml1loverlap_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1loverlap_MM_SRSS1->Sumw2();
  h_ml1loverlap_MM_SRSS2 = new TH2F("h_ml1loverlap_MM_SRSS2", "h_ml1loverlap_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ml1loverlap_MM_SRSS2->Sumw2();
  h_ml1loverlap_MM_SRSS3 = new TH2F("h_ml1loverlap_MM_SRSS3", "h_ml1loverlap_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_ml1loverlap_MM_SRSS3->Sumw2();
  h_ml1loverlap_MM_SRSS4 = new TH2F("h_ml1loverlap_MM_SRSS4", "h_ml1loverlap_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_ml1loverlap_MM_SRSS4->Sumw2();
  h_ml1loverlap_EM_SRSS1 = new TH2F("h_ml1loverlap_EM_SRSS1", "h_ml1loverlap_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1loverlap_EM_SRSS1->Sumw2();
  h_ml1loverlap_EM_SRSS2 = new TH2F("h_ml1loverlap_EM_SRSS2", "h_ml1loverlap_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ml1loverlap_EM_SRSS2->Sumw2();
  h_ml1loverlap_EE_SROS1 = new TH2F("h_ml1loverlap_EE_SROS1", "h_ml1loverlap_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_ml1loverlap_EE_SROS1->Sumw2();
  h_ml1loverlap_MM_SROS1 = new TH2F("h_ml1loverlap_MM_SROS1", "h_ml1loverlap_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_ml1loverlap_MM_SROS1->Sumw2();
  h_ml1loverlap_EM_SROS1 = new TH2F("h_ml1loverlap_EM_SROS1", "h_ml1loverlap_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_ml1loverlap_EM_SROS1->Sumw2();
  
  
  h_mTl0loverlap_EE_SRSS1 = new TH2F("h_mTl0loverlap_EE_SRSS1", "h_mTl0loverlap_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlap_EE_SRSS1->Sumw2();
  h_mTl0loverlap_EE_SRSS2 = new TH2F("h_mTl0loverlap_EE_SRSS2", "h_mTl0loverlap_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlap_EE_SRSS2->Sumw2();
  h_mTl0loverlap_MM_SRSS1 = new TH2F("h_mTl0loverlap_MM_SRSS1", "h_mTl0loverlap_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlap_MM_SRSS1->Sumw2();
  h_mTl0loverlap_MM_SRSS2 = new TH2F("h_mTl0loverlap_MM_SRSS2", "h_mTl0loverlap_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlap_MM_SRSS2->Sumw2();
  h_mTl0loverlap_MM_SRSS3 = new TH2F("h_mTl0loverlap_MM_SRSS3", "h_mTl0loverlap_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlap_MM_SRSS3->Sumw2();
  h_mTl0loverlap_MM_SRSS4 = new TH2F("h_mTl0loverlap_MM_SRSS4", "h_mTl0loverlap_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlap_MM_SRSS4->Sumw2();
  h_mTl0loverlap_EM_SRSS1 = new TH2F("h_mTl0loverlap_EM_SRSS1", "h_mTl0loverlap_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlap_EM_SRSS1->Sumw2();
  h_mTl0loverlap_EM_SRSS2 = new TH2F("h_mTl0loverlap_EM_SRSS2", "h_mTl0loverlap_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlap_EM_SRSS2->Sumw2();
  h_mTl0loverlap_EE_SROS1 = new TH2F("h_mTl0loverlap_EE_SROS1", "h_mTl0loverlap_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlap_EE_SROS1->Sumw2();
  h_mTl0loverlap_MM_SROS1 = new TH2F("h_mTl0loverlap_MM_SROS1", "h_mTl0loverlap_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlap_MM_SROS1->Sumw2();
  h_mTl0loverlap_EM_SROS1 = new TH2F("h_mTl0loverlap_EM_SROS1", "h_mTl0loverlap_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlap_EM_SROS1->Sumw2();
  
  h_mTl1loverlap_EE_SRSS1 = new TH2F("h_mTl1loverlap_EE_SRSS1", "h_mTl1loverlap_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlap_EE_SRSS1->Sumw2();
  h_mTl1loverlap_EE_SRSS2 = new TH2F("h_mTl1loverlap_EE_SRSS2", "h_mTl1loverlap_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlap_EE_SRSS2->Sumw2();
  h_mTl1loverlap_MM_SRSS1 = new TH2F("h_mTl1loverlap_MM_SRSS1", "h_mTl1loverlap_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlap_MM_SRSS1->Sumw2(); 
  h_mTl1loverlap_MM_SRSS2 = new TH2F("h_mTl1loverlap_MM_SRSS2", "h_mTl1loverlap_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlap_MM_SRSS2->Sumw2();
  h_mTl1loverlap_MM_SRSS3 = new TH2F("h_mTl1loverlap_MM_SRSS3", "h_mTl1loverlap_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlap_MM_SRSS3->Sumw2();
  h_mTl1loverlap_MM_SRSS4 = new TH2F("h_mTl1loverlap_MM_SRSS4", "h_mTl1loverlap_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlap_MM_SRSS4->Sumw2(); 
  h_mTl1loverlap_EM_SRSS1 = new TH2F("h_mTl1loverlap_EM_SRSS1", "h_mTl1loverlap_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlap_EM_SRSS1->Sumw2();
  h_mTl1loverlap_EM_SRSS2 = new TH2F("h_mTl1loverlap_EM_SRSS2", "h_mTl1loverlap_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlap_EM_SRSS2->Sumw2();
  h_mTl1loverlap_EE_SROS1 = new TH2F("h_mTl1loverlap_EE_SROS1", "h_mTl1loverlap_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlap_EE_SROS1->Sumw2(); 
  h_mTl1loverlap_MM_SROS1 = new TH2F("h_mTl1loverlap_MM_SROS1", "h_mTl1loverlap_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlap_MM_SROS1->Sumw2();
  h_mTl1loverlap_EM_SROS1 = new TH2F("h_mTl1loverlap_EM_SROS1", "h_mTl1loverlap_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlap_EM_SROS1->Sumw2();

  h_DeltaRl0loverlap_EE_SRSS1 = new TH2F("h_DeltaRl0loverlap_EE_SRSS1", "h_DeltaRl0loverlap_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0loverlap_EE_SRSS1->Sumw2();
  h_DeltaRl0loverlap_EE_SRSS2 = new TH2F("h_DeltaRl0loverlap_EE_SRSS2", "h_DeltaRl0loverlap_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0loverlap_EE_SRSS2->Sumw2();
  h_DeltaRl0loverlap_MM_SRSS1 = new TH2F("h_DeltaRl0loverlap_MM_SRSS1", "h_DeltaRl0loverlap_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0loverlap_MM_SRSS1->Sumw2();
  h_DeltaRl0loverlap_MM_SRSS2 = new TH2F("h_DeltaRl0loverlap_MM_SRSS2", "h_DeltaRl0loverlap_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0loverlap_MM_SRSS2->Sumw2();
  h_DeltaRl0loverlap_MM_SRSS3 = new TH2F("h_DeltaRl0loverlap_MM_SRSS3", "h_DeltaRl0loverlap_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0loverlap_MM_SRSS3->Sumw2();
  h_DeltaRl0loverlap_MM_SRSS4 = new TH2F("h_DeltaRl0loverlap_MM_SRSS4", "h_DeltaRl0loverlap_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0loverlap_MM_SRSS4->Sumw2();
  h_DeltaRl0loverlap_EM_SRSS1 = new TH2F("h_DeltaRl0loverlap_EM_SRSS1", "h_DeltaRl0loverlap_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0loverlap_EM_SRSS1->Sumw2();
  h_DeltaRl0loverlap_EM_SRSS2 = new TH2F("h_DeltaRl0loverlap_EM_SRSS2", "h_DeltaRl0loverlap_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0loverlap_EM_SRSS2->Sumw2();
  h_DeltaRl0loverlap_EE_SROS1 = new TH2F("h_DeltaRl0loverlap_EE_SROS1", "h_DeltaRl0loverlap_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0loverlap_EE_SROS1->Sumw2();
  h_DeltaRl0loverlap_MM_SROS1 = new TH2F("h_DeltaRl0loverlap_MM_SROS1", "h_DeltaRl0loverlap_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0loverlap_MM_SROS1->Sumw2();
  h_DeltaRl0loverlap_EM_SROS1 = new TH2F("h_DeltaRl0loverlap_EM_SROS1", "h_DeltaRl0loverlap_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0loverlap_EM_SROS1->Sumw2();
  
  h_DeltaRl1loverlap_EE_SRSS1 = new TH2F("h_DeltaRl1loverlap_EE_SRSS1", "h_DeltaRl1loverlap_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1loverlap_EE_SRSS1->Sumw2();
  h_DeltaRl1loverlap_EE_SRSS2 = new TH2F("h_DeltaRl1loverlap_EE_SRSS2", "h_DeltaRl1loverlap_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1loverlap_EE_SRSS2->Sumw2();
  h_DeltaRl1loverlap_MM_SRSS1 = new TH2F("h_DeltaRl1loverlap_MM_SRSS1", "h_DeltaRl1loverlap_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1loverlap_MM_SRSS1->Sumw2(); 
  h_DeltaRl1loverlap_MM_SRSS2 = new TH2F("h_DeltaRl1loverlap_MM_SRSS2", "h_DeltaRl1loverlap_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1loverlap_MM_SRSS2->Sumw2();
  h_DeltaRl1loverlap_MM_SRSS3 = new TH2F("h_DeltaRl1loverlap_MM_SRSS3", "h_DeltaRl1loverlap_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1loverlap_MM_SRSS3->Sumw2();
  h_DeltaRl1loverlap_MM_SRSS4 = new TH2F("h_DeltaRl1loverlap_MM_SRSS4", "h_DeltaRl1loverlap_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1loverlap_MM_SRSS4->Sumw2(); 
  h_DeltaRl1loverlap_EM_SRSS1 = new TH2F("h_DeltaRl1loverlap_EM_SRSS1", "h_DeltaRl1loverlap_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1loverlap_EM_SRSS1->Sumw2();
  h_DeltaRl1loverlap_EM_SRSS2 = new TH2F("h_DeltaRl1loverlap_EM_SRSS2", "h_DeltaRl1loverlap_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1loverlap_EM_SRSS2->Sumw2();
  h_DeltaRl1loverlap_EE_SROS1 = new TH2F("h_DeltaRl1loverlap_EE_SROS1", "h_DeltaRl1loverlap_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1loverlap_EE_SROS1->Sumw2(); 
  h_DeltaRl1loverlap_MM_SROS1 = new TH2F("h_DeltaRl1loverlap_MM_SROS1", "h_DeltaRl1loverlap_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1loverlap_MM_SROS1->Sumw2();
  h_DeltaRl1loverlap_EM_SROS1 = new TH2F("h_DeltaRl1loverlap_EM_SROS1", "h_DeltaRl1loverlap_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1loverlap_EM_SROS1->Sumw2();
  
  h_DeltaRZl0loverlap_EE_SRSS1 = new TH2F("h_DeltaRZl0loverlap_EE_SRSS1", "h_DeltaRZl0loverlap_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0loverlap_EE_SRSS1->Sumw2();
  h_DeltaRZl0loverlap_EE_SRSS2 = new TH2F("h_DeltaRZl0loverlap_EE_SRSS2", "h_DeltaRZl0loverlap_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0loverlap_EE_SRSS2->Sumw2();
  h_DeltaRZl0loverlap_MM_SRSS1 = new TH2F("h_DeltaRZl0loverlap_MM_SRSS1", "h_DeltaRZl0loverlap_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0loverlap_MM_SRSS1->Sumw2();
  h_DeltaRZl0loverlap_MM_SRSS2 = new TH2F("h_DeltaRZl0loverlap_MM_SRSS2", "h_DeltaRZl0loverlap_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0loverlap_MM_SRSS2->Sumw2();
  h_DeltaRZl0loverlap_MM_SRSS3 = new TH2F("h_DeltaRZl0loverlap_MM_SRSS3", "h_DeltaRZl0loverlap_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0loverlap_MM_SRSS3->Sumw2();
  h_DeltaRZl0loverlap_MM_SRSS4 = new TH2F("h_DeltaRZl0loverlap_MM_SRSS4", "h_DeltaRZl0loverlap_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0loverlap_MM_SRSS4->Sumw2();
  h_DeltaRZl0loverlap_EM_SRSS1 = new TH2F("h_DeltaRZl0loverlap_EM_SRSS1", "h_DeltaRZl0loverlap_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0loverlap_EM_SRSS1->Sumw2();
  h_DeltaRZl0loverlap_EM_SRSS2 = new TH2F("h_DeltaRZl0loverlap_EM_SRSS2", "h_DeltaRZl0loverlap_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0loverlap_EM_SRSS2->Sumw2();
  h_DeltaRZl0loverlap_EE_SROS1 = new TH2F("h_DeltaRZl0loverlap_EE_SROS1", "h_DeltaRZl0loverlap_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0loverlap_EE_SROS1->Sumw2();
  h_DeltaRZl0loverlap_MM_SROS1 = new TH2F("h_DeltaRZl0loverlap_MM_SROS1", "h_DeltaRZl0loverlap_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0loverlap_MM_SROS1->Sumw2();
  h_DeltaRZl0loverlap_EM_SROS1 = new TH2F("h_DeltaRZl0loverlap_EM_SROS1", "h_DeltaRZl0loverlap_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0loverlap_EM_SROS1->Sumw2();
  
  h_DeltaRZl1loverlap_EE_SRSS1 = new TH2F("h_DeltaRZl1loverlap_EE_SRSS1", "h_DeltaRZl1loverlap_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1loverlap_EE_SRSS1->Sumw2();
  h_DeltaRZl1loverlap_EE_SRSS2 = new TH2F("h_DeltaRZl1loverlap_EE_SRSS2", "h_DeltaRZl1loverlap_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1loverlap_EE_SRSS2->Sumw2();
  h_DeltaRZl1loverlap_MM_SRSS1 = new TH2F("h_DeltaRZl1loverlap_MM_SRSS1", "h_DeltaRZl1loverlap_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1loverlap_MM_SRSS1->Sumw2(); 
  h_DeltaRZl1loverlap_MM_SRSS2 = new TH2F("h_DeltaRZl1loverlap_MM_SRSS2", "h_DeltaRZl1loverlap_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1loverlap_MM_SRSS2->Sumw2();
  h_DeltaRZl1loverlap_MM_SRSS3 = new TH2F("h_DeltaRZl1loverlap_MM_SRSS3", "h_DeltaRZl1loverlap_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1loverlap_MM_SRSS3->Sumw2();
  h_DeltaRZl1loverlap_MM_SRSS4 = new TH2F("h_DeltaRZl1loverlap_MM_SRSS4", "h_DeltaRZl1loverlap_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1loverlap_MM_SRSS4->Sumw2(); 
  h_DeltaRZl1loverlap_EM_SRSS1 = new TH2F("h_DeltaRZl1loverlap_EM_SRSS1", "h_DeltaRZl1loverlap_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1loverlap_EM_SRSS1->Sumw2();
  h_DeltaRZl1loverlap_EM_SRSS2 = new TH2F("h_DeltaRZl1loverlap_EM_SRSS2", "h_DeltaRZl1loverlap_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1loverlap_EM_SRSS2->Sumw2();
  h_DeltaRZl1loverlap_EE_SROS1 = new TH2F("h_DeltaRZl1loverlap_EE_SROS1", "h_DeltaRZl1loverlap_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1loverlap_EE_SROS1->Sumw2(); 
  h_DeltaRZl1loverlap_MM_SROS1 = new TH2F("h_DeltaRZl1loverlap_MM_SROS1", "h_DeltaRZl1loverlap_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1loverlap_MM_SROS1->Sumw2();
  h_DeltaRZl1loverlap_EM_SROS1 = new TH2F("h_DeltaRZl1loverlap_EM_SROS1", "h_DeltaRZl1loverlap_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1loverlap_EM_SROS1->Sumw2();  
  
  h_DeltaEtaZl0loverlap_EE_SRSS1 = new TH2F("h_DeltaEtaZl0loverlap_EE_SRSS1", "h_DeltaEtaZl0loverlap_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0loverlap_EE_SRSS1->Sumw2();
  h_DeltaEtaZl0loverlap_EE_SRSS2 = new TH2F("h_DeltaEtaZl0loverlap_EE_SRSS2", "h_DeltaEtaZl0loverlap_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0loverlap_EE_SRSS2->Sumw2();
  h_DeltaEtaZl0loverlap_MM_SRSS1 = new TH2F("h_DeltaEtaZl0loverlap_MM_SRSS1", "h_DeltaEtaZl0loverlap_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0loverlap_MM_SRSS1->Sumw2();
  h_DeltaEtaZl0loverlap_MM_SRSS2 = new TH2F("h_DeltaEtaZl0loverlap_MM_SRSS2", "h_DeltaEtaZl0loverlap_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0loverlap_MM_SRSS2->Sumw2();
  h_DeltaEtaZl0loverlap_MM_SRSS3 = new TH2F("h_DeltaEtaZl0loverlap_MM_SRSS3", "h_DeltaEtaZl0loverlap_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0loverlap_MM_SRSS3->Sumw2();
  h_DeltaEtaZl0loverlap_MM_SRSS4 = new TH2F("h_DeltaEtaZl0loverlap_MM_SRSS4", "h_DeltaEtaZl0loverlap_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0loverlap_MM_SRSS4->Sumw2();
  h_DeltaEtaZl0loverlap_EM_SRSS1 = new TH2F("h_DeltaEtaZl0loverlap_EM_SRSS1", "h_DeltaEtaZl0loverlap_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0loverlap_EM_SRSS1->Sumw2();
  h_DeltaEtaZl0loverlap_EM_SRSS2 = new TH2F("h_DeltaEtaZl0loverlap_EM_SRSS2", "h_DeltaEtaZl0loverlap_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0loverlap_EM_SRSS2->Sumw2();
  h_DeltaEtaZl0loverlap_EE_SROS1 = new TH2F("h_DeltaEtaZl0loverlap_EE_SROS1", "h_DeltaEtaZl0loverlap_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0loverlap_EE_SROS1->Sumw2();
  h_DeltaEtaZl0loverlap_MM_SROS1 = new TH2F("h_DeltaEtaZl0loverlap_MM_SROS1", "h_DeltaEtaZl0loverlap_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0loverlap_MM_SROS1->Sumw2();
  h_DeltaEtaZl0loverlap_EM_SROS1 = new TH2F("h_DeltaEtaZl0loverlap_EM_SROS1", "h_DeltaEtaZl0loverlap_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0loverlap_EM_SROS1->Sumw2();
  
  h_DeltaEtaZl1loverlap_EE_SRSS1 = new TH2F("h_DeltaEtaZl1loverlap_EE_SRSS1", "h_DeltaEtaZl1loverlap_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1loverlap_EE_SRSS1->Sumw2();
  h_DeltaEtaZl1loverlap_EE_SRSS2 = new TH2F("h_DeltaEtaZl1loverlap_EE_SRSS2", "h_DeltaEtaZl1loverlap_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1loverlap_EE_SRSS2->Sumw2();
  h_DeltaEtaZl1loverlap_MM_SRSS1 = new TH2F("h_DeltaEtaZl1loverlap_MM_SRSS1", "h_DeltaEtaZl1loverlap_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1loverlap_MM_SRSS1->Sumw2(); 
  h_DeltaEtaZl1loverlap_MM_SRSS2 = new TH2F("h_DeltaEtaZl1loverlap_MM_SRSS2", "h_DeltaEtaZl1loverlap_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1loverlap_MM_SRSS2->Sumw2();
  h_DeltaEtaZl1loverlap_MM_SRSS3 = new TH2F("h_DeltaEtaZl1loverlap_MM_SRSS3", "h_DeltaEtaZl1loverlap_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1loverlap_MM_SRSS3->Sumw2();
  h_DeltaEtaZl1loverlap_MM_SRSS4 = new TH2F("h_DeltaEtaZl1loverlap_MM_SRSS4", "h_DeltaEtaZl1loverlap_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1loverlap_MM_SRSS4->Sumw2(); 
  h_DeltaEtaZl1loverlap_EM_SRSS1 = new TH2F("h_DeltaEtaZl1loverlap_EM_SRSS1", "h_DeltaEtaZl1loverlap_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1loverlap_EM_SRSS1->Sumw2();
  h_DeltaEtaZl1loverlap_EM_SRSS2 = new TH2F("h_DeltaEtaZl1loverlap_EM_SRSS2", "h_DeltaEtaZl1loverlap_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1loverlap_EM_SRSS2->Sumw2();
  h_DeltaEtaZl1loverlap_EE_SROS1 = new TH2F("h_DeltaEtaZl1loverlap_EE_SROS1", "h_DeltaEtaZl1loverlap_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1loverlap_EE_SROS1->Sumw2(); 
  h_DeltaEtaZl1loverlap_MM_SROS1 = new TH2F("h_DeltaEtaZl1loverlap_MM_SROS1", "h_DeltaEtaZl1loverlap_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1loverlap_MM_SROS1->Sumw2();
  h_DeltaEtaZl1loverlap_EM_SROS1 = new TH2F("h_DeltaEtaZl1loverlap_EM_SROS1", "h_DeltaEtaZl1loverlap_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1loverlap_EM_SROS1->Sumw2();    
  
  h_mTllloverlap_EE_SRSS1 = new TH2F("h_mTllloverlap_EE_SRSS1", "h_mTllloverlap_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTllloverlap_EE_SRSS1->Sumw2();
  h_mTllloverlap_EE_SRSS2 = new TH2F("h_mTllloverlap_EE_SRSS2", "h_mTllloverlap_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTllloverlap_EE_SRSS2->Sumw2();
  h_mTllloverlap_MM_SRSS1 = new TH2F("h_mTllloverlap_MM_SRSS1", "h_mTllloverlap_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTllloverlap_MM_SRSS1->Sumw2(); 
  h_mTllloverlap_MM_SRSS2 = new TH2F("h_mTllloverlap_MM_SRSS2", "h_mTllloverlap_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTllloverlap_MM_SRSS2->Sumw2();
  h_mTllloverlap_MM_SRSS3 = new TH2F("h_mTllloverlap_MM_SRSS3", "h_mTllloverlap_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_mTllloverlap_MM_SRSS3->Sumw2();
  h_mTllloverlap_MM_SRSS4 = new TH2F("h_mTllloverlap_MM_SRSS4", "h_mTllloverlap_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_mTllloverlap_MM_SRSS4->Sumw2(); 
  h_mTllloverlap_EM_SRSS1 = new TH2F("h_mTllloverlap_EM_SRSS1", "h_mTllloverlap_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTllloverlap_EM_SRSS1->Sumw2();
  h_mTllloverlap_EM_SRSS2 = new TH2F("h_mTllloverlap_EM_SRSS2", "h_mTllloverlap_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTllloverlap_EM_SRSS2->Sumw2();
  h_mTllloverlap_EE_SROS1 = new TH2F("h_mTllloverlap_EE_SROS1", "h_mTllloverlap_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTllloverlap_EE_SROS1->Sumw2(); 
  h_mTllloverlap_MM_SROS1 = new TH2F("h_mTllloverlap_MM_SROS1", "h_mTllloverlap_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTllloverlap_MM_SROS1->Sumw2();
  h_mTllloverlap_EM_SROS1 = new TH2F("h_mTllloverlap_EM_SROS1", "h_mTllloverlap_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTllloverlap_EM_SROS1->Sumw2();
  
 //overlapWJet
  h_ml0loverlapWJet_EE_SRSS1 = new TH2F("h_ml0loverlapWJet_EE_SRSS1", "h_ml0loverlapWJet_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0loverlapWJet_EE_SRSS1->Sumw2();
  h_ml0loverlapWJet_EE_SRSS2 = new TH2F("h_ml0loverlapWJet_EE_SRSS2", "h_ml0loverlapWJet_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ml0loverlapWJet_EE_SRSS2->Sumw2();
  h_ml0loverlapWJet_MM_SRSS1 = new TH2F("h_ml0loverlapWJet_MM_SRSS1", "h_ml0loverlapWJet_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0loverlapWJet_MM_SRSS1->Sumw2();
  h_ml0loverlapWJet_MM_SRSS2 = new TH2F("h_ml0loverlapWJet_MM_SRSS2", "h_ml0loverlapWJet_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ml0loverlapWJet_MM_SRSS2->Sumw2();
  h_ml0loverlapWJet_MM_SRSS3 = new TH2F("h_ml0loverlapWJet_MM_SRSS3", "h_ml0loverlapWJet_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_ml0loverlapWJet_MM_SRSS3->Sumw2();
  h_ml0loverlapWJet_MM_SRSS4 = new TH2F("h_ml0loverlapWJet_MM_SRSS4", "h_ml0loverlapWJet_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_ml0loverlapWJet_MM_SRSS4->Sumw2();
  h_ml0loverlapWJet_EM_SRSS1 = new TH2F("h_ml0loverlapWJet_EM_SRSS1", "h_ml0loverlapWJet_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0loverlapWJet_EM_SRSS1->Sumw2();
  h_ml0loverlapWJet_EM_SRSS2 = new TH2F("h_ml0loverlapWJet_EM_SRSS2", "h_ml0loverlapWJet_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ml0loverlapWJet_EM_SRSS2->Sumw2();
  h_ml0loverlapWJet_EE_SROS1 = new TH2F("h_ml0loverlapWJet_EE_SROS1", "h_ml0loverlapWJet_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_ml0loverlapWJet_EE_SROS1->Sumw2();
  h_ml0loverlapWJet_MM_SROS1 = new TH2F("h_ml0loverlapWJet_MM_SROS1", "h_ml0loverlapWJet_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_ml0loverlapWJet_MM_SROS1->Sumw2();
  h_ml0loverlapWJet_EM_SROS1 = new TH2F("h_ml0loverlapWJet_EM_SROS1", "h_ml0loverlapWJet_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_ml0loverlapWJet_EM_SROS1->Sumw2();
  
  h_ml1loverlapWJet_EE_SRSS1 = new TH2F("h_ml1loverlapWJet_EE_SRSS1", "h_ml1loverlapWJet_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1loverlapWJet_EE_SRSS1->Sumw2();
  h_ml1loverlapWJet_EE_SRSS2 = new TH2F("h_ml1loverlapWJet_EE_SRSS2", "h_ml1loverlapWJet_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ml1loverlapWJet_EE_SRSS2->Sumw2();
  h_ml1loverlapWJet_MM_SRSS1 = new TH2F("h_ml1loverlapWJet_MM_SRSS1", "h_ml1loverlapWJet_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1loverlapWJet_MM_SRSS1->Sumw2();
  h_ml1loverlapWJet_MM_SRSS2 = new TH2F("h_ml1loverlapWJet_MM_SRSS2", "h_ml1loverlapWJet_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ml1loverlapWJet_MM_SRSS2->Sumw2();
  h_ml1loverlapWJet_MM_SRSS3 = new TH2F("h_ml1loverlapWJet_MM_SRSS3", "h_ml1loverlapWJet_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_ml1loverlapWJet_MM_SRSS3->Sumw2();
  h_ml1loverlapWJet_MM_SRSS4 = new TH2F("h_ml1loverlapWJet_MM_SRSS4", "h_ml1loverlapWJet_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_ml1loverlapWJet_MM_SRSS4->Sumw2();
  h_ml1loverlapWJet_EM_SRSS1 = new TH2F("h_ml1loverlapWJet_EM_SRSS1", "h_ml1loverlapWJet_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1loverlapWJet_EM_SRSS1->Sumw2();
  h_ml1loverlapWJet_EM_SRSS2 = new TH2F("h_ml1loverlapWJet_EM_SRSS2", "h_ml1loverlapWJet_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ml1loverlapWJet_EM_SRSS2->Sumw2();
  h_ml1loverlapWJet_EE_SROS1 = new TH2F("h_ml1loverlapWJet_EE_SROS1", "h_ml1loverlapWJet_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_ml1loverlapWJet_EE_SROS1->Sumw2();
  h_ml1loverlapWJet_MM_SROS1 = new TH2F("h_ml1loverlapWJet_MM_SROS1", "h_ml1loverlapWJet_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_ml1loverlapWJet_MM_SROS1->Sumw2();
  h_ml1loverlapWJet_EM_SROS1 = new TH2F("h_ml1loverlapWJet_EM_SROS1", "h_ml1loverlapWJet_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_ml1loverlapWJet_EM_SROS1->Sumw2();
  
  
  h_mTl0loverlapWJet_EE_SRSS1 = new TH2F("h_mTl0loverlapWJet_EE_SRSS1", "h_mTl0loverlapWJet_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlapWJet_EE_SRSS1->Sumw2();
  h_mTl0loverlapWJet_EE_SRSS2 = new TH2F("h_mTl0loverlapWJet_EE_SRSS2", "h_mTl0loverlapWJet_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlapWJet_EE_SRSS2->Sumw2();
  h_mTl0loverlapWJet_MM_SRSS1 = new TH2F("h_mTl0loverlapWJet_MM_SRSS1", "h_mTl0loverlapWJet_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlapWJet_MM_SRSS1->Sumw2();
  h_mTl0loverlapWJet_MM_SRSS2 = new TH2F("h_mTl0loverlapWJet_MM_SRSS2", "h_mTl0loverlapWJet_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlapWJet_MM_SRSS2->Sumw2();
  h_mTl0loverlapWJet_MM_SRSS3 = new TH2F("h_mTl0loverlapWJet_MM_SRSS3", "h_mTl0loverlapWJet_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlapWJet_MM_SRSS3->Sumw2();
  h_mTl0loverlapWJet_MM_SRSS4 = new TH2F("h_mTl0loverlapWJet_MM_SRSS4", "h_mTl0loverlapWJet_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlapWJet_MM_SRSS4->Sumw2();
  h_mTl0loverlapWJet_EM_SRSS1 = new TH2F("h_mTl0loverlapWJet_EM_SRSS1", "h_mTl0loverlapWJet_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlapWJet_EM_SRSS1->Sumw2();
  h_mTl0loverlapWJet_EM_SRSS2 = new TH2F("h_mTl0loverlapWJet_EM_SRSS2", "h_mTl0loverlapWJet_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlapWJet_EM_SRSS2->Sumw2();
  h_mTl0loverlapWJet_EE_SROS1 = new TH2F("h_mTl0loverlapWJet_EE_SROS1", "h_mTl0loverlapWJet_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlapWJet_EE_SROS1->Sumw2();
  h_mTl0loverlapWJet_MM_SROS1 = new TH2F("h_mTl0loverlapWJet_MM_SROS1", "h_mTl0loverlapWJet_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlapWJet_MM_SROS1->Sumw2();
  h_mTl0loverlapWJet_EM_SROS1 = new TH2F("h_mTl0loverlapWJet_EM_SROS1", "h_mTl0loverlapWJet_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlapWJet_EM_SROS1->Sumw2();
  
  h_mTl1loverlapWJet_EE_SRSS1 = new TH2F("h_mTl1loverlapWJet_EE_SRSS1", "h_mTl1loverlapWJet_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlapWJet_EE_SRSS1->Sumw2();
  h_mTl1loverlapWJet_EE_SRSS2 = new TH2F("h_mTl1loverlapWJet_EE_SRSS2", "h_mTl1loverlapWJet_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlapWJet_EE_SRSS2->Sumw2();
  h_mTl1loverlapWJet_MM_SRSS1 = new TH2F("h_mTl1loverlapWJet_MM_SRSS1", "h_mTl1loverlapWJet_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlapWJet_MM_SRSS1->Sumw2(); 
  h_mTl1loverlapWJet_MM_SRSS2 = new TH2F("h_mTl1loverlapWJet_MM_SRSS2", "h_mTl1loverlapWJet_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlapWJet_MM_SRSS2->Sumw2();
  h_mTl1loverlapWJet_MM_SRSS3 = new TH2F("h_mTl1loverlapWJet_MM_SRSS3", "h_mTl1loverlapWJet_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlapWJet_MM_SRSS3->Sumw2();
  h_mTl1loverlapWJet_MM_SRSS4 = new TH2F("h_mTl1loverlapWJet_MM_SRSS4", "h_mTl1loverlapWJet_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlapWJet_MM_SRSS4->Sumw2(); 
  h_mTl1loverlapWJet_EM_SRSS1 = new TH2F("h_mTl1loverlapWJet_EM_SRSS1", "h_mTl1loverlapWJet_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlapWJet_EM_SRSS1->Sumw2();
  h_mTl1loverlapWJet_EM_SRSS2 = new TH2F("h_mTl1loverlapWJet_EM_SRSS2", "h_mTl1loverlapWJet_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlapWJet_EM_SRSS2->Sumw2();
  h_mTl1loverlapWJet_EE_SROS1 = new TH2F("h_mTl1loverlapWJet_EE_SROS1", "h_mTl1loverlapWJet_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlapWJet_EE_SROS1->Sumw2(); 
  h_mTl1loverlapWJet_MM_SROS1 = new TH2F("h_mTl1loverlapWJet_MM_SROS1", "h_mTl1loverlapWJet_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlapWJet_MM_SROS1->Sumw2();
  h_mTl1loverlapWJet_EM_SROS1 = new TH2F("h_mTl1loverlapWJet_EM_SROS1", "h_mTl1loverlapWJet_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlapWJet_EM_SROS1->Sumw2();

  h_DeltaRl0loverlapWJet_EE_SRSS1 = new TH2F("h_DeltaRl0loverlapWJet_EE_SRSS1", "h_DeltaRl0loverlapWJet_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0loverlapWJet_EE_SRSS1->Sumw2();
  h_DeltaRl0loverlapWJet_EE_SRSS2 = new TH2F("h_DeltaRl0loverlapWJet_EE_SRSS2", "h_DeltaRl0loverlapWJet_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0loverlapWJet_EE_SRSS2->Sumw2();
  h_DeltaRl0loverlapWJet_MM_SRSS1 = new TH2F("h_DeltaRl0loverlapWJet_MM_SRSS1", "h_DeltaRl0loverlapWJet_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0loverlapWJet_MM_SRSS1->Sumw2();
  h_DeltaRl0loverlapWJet_MM_SRSS2 = new TH2F("h_DeltaRl0loverlapWJet_MM_SRSS2", "h_DeltaRl0loverlapWJet_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0loverlapWJet_MM_SRSS2->Sumw2();
  h_DeltaRl0loverlapWJet_MM_SRSS3 = new TH2F("h_DeltaRl0loverlapWJet_MM_SRSS3", "h_DeltaRl0loverlapWJet_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0loverlapWJet_MM_SRSS3->Sumw2();
  h_DeltaRl0loverlapWJet_MM_SRSS4 = new TH2F("h_DeltaRl0loverlapWJet_MM_SRSS4", "h_DeltaRl0loverlapWJet_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0loverlapWJet_MM_SRSS4->Sumw2();
  h_DeltaRl0loverlapWJet_EM_SRSS1 = new TH2F("h_DeltaRl0loverlapWJet_EM_SRSS1", "h_DeltaRl0loverlapWJet_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0loverlapWJet_EM_SRSS1->Sumw2();
  h_DeltaRl0loverlapWJet_EM_SRSS2 = new TH2F("h_DeltaRl0loverlapWJet_EM_SRSS2", "h_DeltaRl0loverlapWJet_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0loverlapWJet_EM_SRSS2->Sumw2();
  h_DeltaRl0loverlapWJet_EE_SROS1 = new TH2F("h_DeltaRl0loverlapWJet_EE_SROS1", "h_DeltaRl0loverlapWJet_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0loverlapWJet_EE_SROS1->Sumw2();
  h_DeltaRl0loverlapWJet_MM_SROS1 = new TH2F("h_DeltaRl0loverlapWJet_MM_SROS1", "h_DeltaRl0loverlapWJet_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0loverlapWJet_MM_SROS1->Sumw2();
  h_DeltaRl0loverlapWJet_EM_SROS1 = new TH2F("h_DeltaRl0loverlapWJet_EM_SROS1", "h_DeltaRl0loverlapWJet_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0loverlapWJet_EM_SROS1->Sumw2();
  
  h_DeltaRl1loverlapWJet_EE_SRSS1 = new TH2F("h_DeltaRl1loverlapWJet_EE_SRSS1", "h_DeltaRl1loverlapWJet_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1loverlapWJet_EE_SRSS1->Sumw2();
  h_DeltaRl1loverlapWJet_EE_SRSS2 = new TH2F("h_DeltaRl1loverlapWJet_EE_SRSS2", "h_DeltaRl1loverlapWJet_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1loverlapWJet_EE_SRSS2->Sumw2();
  h_DeltaRl1loverlapWJet_MM_SRSS1 = new TH2F("h_DeltaRl1loverlapWJet_MM_SRSS1", "h_DeltaRl1loverlapWJet_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1loverlapWJet_MM_SRSS1->Sumw2(); 
  h_DeltaRl1loverlapWJet_MM_SRSS2 = new TH2F("h_DeltaRl1loverlapWJet_MM_SRSS2", "h_DeltaRl1loverlapWJet_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1loverlapWJet_MM_SRSS2->Sumw2();
  h_DeltaRl1loverlapWJet_MM_SRSS3 = new TH2F("h_DeltaRl1loverlapWJet_MM_SRSS3", "h_DeltaRl1loverlapWJet_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1loverlapWJet_MM_SRSS3->Sumw2();
  h_DeltaRl1loverlapWJet_MM_SRSS4 = new TH2F("h_DeltaRl1loverlapWJet_MM_SRSS4", "h_DeltaRl1loverlapWJet_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1loverlapWJet_MM_SRSS4->Sumw2(); 
  h_DeltaRl1loverlapWJet_EM_SRSS1 = new TH2F("h_DeltaRl1loverlapWJet_EM_SRSS1", "h_DeltaRl1loverlapWJet_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1loverlapWJet_EM_SRSS1->Sumw2();
  h_DeltaRl1loverlapWJet_EM_SRSS2 = new TH2F("h_DeltaRl1loverlapWJet_EM_SRSS2", "h_DeltaRl1loverlapWJet_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1loverlapWJet_EM_SRSS2->Sumw2();
  h_DeltaRl1loverlapWJet_EE_SROS1 = new TH2F("h_DeltaRl1loverlapWJet_EE_SROS1", "h_DeltaRl1loverlapWJet_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1loverlapWJet_EE_SROS1->Sumw2(); 
  h_DeltaRl1loverlapWJet_MM_SROS1 = new TH2F("h_DeltaRl1loverlapWJet_MM_SROS1", "h_DeltaRl1loverlapWJet_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1loverlapWJet_MM_SROS1->Sumw2();
  h_DeltaRl1loverlapWJet_EM_SROS1 = new TH2F("h_DeltaRl1loverlapWJet_EM_SROS1", "h_DeltaRl1loverlapWJet_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1loverlapWJet_EM_SROS1->Sumw2();
  
  h_DeltaRZl0loverlapWJet_EE_SRSS1 = new TH2F("h_DeltaRZl0loverlapWJet_EE_SRSS1", "h_DeltaRZl0loverlapWJet_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0loverlapWJet_EE_SRSS1->Sumw2();
  h_DeltaRZl0loverlapWJet_EE_SRSS2 = new TH2F("h_DeltaRZl0loverlapWJet_EE_SRSS2", "h_DeltaRZl0loverlapWJet_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0loverlapWJet_EE_SRSS2->Sumw2();
  h_DeltaRZl0loverlapWJet_MM_SRSS1 = new TH2F("h_DeltaRZl0loverlapWJet_MM_SRSS1", "h_DeltaRZl0loverlapWJet_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0loverlapWJet_MM_SRSS1->Sumw2();
  h_DeltaRZl0loverlapWJet_MM_SRSS2 = new TH2F("h_DeltaRZl0loverlapWJet_MM_SRSS2", "h_DeltaRZl0loverlapWJet_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0loverlapWJet_MM_SRSS2->Sumw2();
  h_DeltaRZl0loverlapWJet_MM_SRSS3 = new TH2F("h_DeltaRZl0loverlapWJet_MM_SRSS3", "h_DeltaRZl0loverlapWJet_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0loverlapWJet_MM_SRSS3->Sumw2();
  h_DeltaRZl0loverlapWJet_MM_SRSS4 = new TH2F("h_DeltaRZl0loverlapWJet_MM_SRSS4", "h_DeltaRZl0loverlapWJet_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0loverlapWJet_MM_SRSS4->Sumw2();
  h_DeltaRZl0loverlapWJet_EM_SRSS1 = new TH2F("h_DeltaRZl0loverlapWJet_EM_SRSS1", "h_DeltaRZl0loverlapWJet_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0loverlapWJet_EM_SRSS1->Sumw2();
  h_DeltaRZl0loverlapWJet_EM_SRSS2 = new TH2F("h_DeltaRZl0loverlapWJet_EM_SRSS2", "h_DeltaRZl0loverlapWJet_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0loverlapWJet_EM_SRSS2->Sumw2();
  h_DeltaRZl0loverlapWJet_EE_SROS1 = new TH2F("h_DeltaRZl0loverlapWJet_EE_SROS1", "h_DeltaRZl0loverlapWJet_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0loverlapWJet_EE_SROS1->Sumw2();
  h_DeltaRZl0loverlapWJet_MM_SROS1 = new TH2F("h_DeltaRZl0loverlapWJet_MM_SROS1", "h_DeltaRZl0loverlapWJet_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0loverlapWJet_MM_SROS1->Sumw2();
  h_DeltaRZl0loverlapWJet_EM_SROS1 = new TH2F("h_DeltaRZl0loverlapWJet_EM_SROS1", "h_DeltaRZl0loverlapWJet_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0loverlapWJet_EM_SROS1->Sumw2();
  
  h_DeltaRZl1loverlapWJet_EE_SRSS1 = new TH2F("h_DeltaRZl1loverlapWJet_EE_SRSS1", "h_DeltaRZl1loverlapWJet_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1loverlapWJet_EE_SRSS1->Sumw2();
  h_DeltaRZl1loverlapWJet_EE_SRSS2 = new TH2F("h_DeltaRZl1loverlapWJet_EE_SRSS2", "h_DeltaRZl1loverlapWJet_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1loverlapWJet_EE_SRSS2->Sumw2();
  h_DeltaRZl1loverlapWJet_MM_SRSS1 = new TH2F("h_DeltaRZl1loverlapWJet_MM_SRSS1", "h_DeltaRZl1loverlapWJet_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1loverlapWJet_MM_SRSS1->Sumw2(); 
  h_DeltaRZl1loverlapWJet_MM_SRSS2 = new TH2F("h_DeltaRZl1loverlapWJet_MM_SRSS2", "h_DeltaRZl1loverlapWJet_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1loverlapWJet_MM_SRSS2->Sumw2();
  h_DeltaRZl1loverlapWJet_MM_SRSS3 = new TH2F("h_DeltaRZl1loverlapWJet_MM_SRSS3", "h_DeltaRZl1loverlapWJet_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1loverlapWJet_MM_SRSS3->Sumw2();
  h_DeltaRZl1loverlapWJet_MM_SRSS4 = new TH2F("h_DeltaRZl1loverlapWJet_MM_SRSS4", "h_DeltaRZl1loverlapWJet_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1loverlapWJet_MM_SRSS4->Sumw2(); 
  h_DeltaRZl1loverlapWJet_EM_SRSS1 = new TH2F("h_DeltaRZl1loverlapWJet_EM_SRSS1", "h_DeltaRZl1loverlapWJet_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1loverlapWJet_EM_SRSS1->Sumw2();
  h_DeltaRZl1loverlapWJet_EM_SRSS2 = new TH2F("h_DeltaRZl1loverlapWJet_EM_SRSS2", "h_DeltaRZl1loverlapWJet_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1loverlapWJet_EM_SRSS2->Sumw2();
  h_DeltaRZl1loverlapWJet_EE_SROS1 = new TH2F("h_DeltaRZl1loverlapWJet_EE_SROS1", "h_DeltaRZl1loverlapWJet_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1loverlapWJet_EE_SROS1->Sumw2(); 
  h_DeltaRZl1loverlapWJet_MM_SROS1 = new TH2F("h_DeltaRZl1loverlapWJet_MM_SROS1", "h_DeltaRZl1loverlapWJet_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1loverlapWJet_MM_SROS1->Sumw2();
  h_DeltaRZl1loverlapWJet_EM_SROS1 = new TH2F("h_DeltaRZl1loverlapWJet_EM_SROS1", "h_DeltaRZl1loverlapWJet_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1loverlapWJet_EM_SROS1->Sumw2();  
  
  h_DeltaEtaZl0loverlapWJet_EE_SRSS1 = new TH2F("h_DeltaEtaZl0loverlapWJet_EE_SRSS1", "h_DeltaEtaZl0loverlapWJet_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0loverlapWJet_EE_SRSS1->Sumw2();
  h_DeltaEtaZl0loverlapWJet_EE_SRSS2 = new TH2F("h_DeltaEtaZl0loverlapWJet_EE_SRSS2", "h_DeltaEtaZl0loverlapWJet_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0loverlapWJet_EE_SRSS2->Sumw2();
  h_DeltaEtaZl0loverlapWJet_MM_SRSS1 = new TH2F("h_DeltaEtaZl0loverlapWJet_MM_SRSS1", "h_DeltaEtaZl0loverlapWJet_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0loverlapWJet_MM_SRSS1->Sumw2();
  h_DeltaEtaZl0loverlapWJet_MM_SRSS2 = new TH2F("h_DeltaEtaZl0loverlapWJet_MM_SRSS2", "h_DeltaEtaZl0loverlapWJet_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0loverlapWJet_MM_SRSS2->Sumw2();
  h_DeltaEtaZl0loverlapWJet_MM_SRSS3 = new TH2F("h_DeltaEtaZl0loverlapWJet_MM_SRSS3", "h_DeltaEtaZl0loverlapWJet_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0loverlapWJet_MM_SRSS3->Sumw2();
  h_DeltaEtaZl0loverlapWJet_MM_SRSS4 = new TH2F("h_DeltaEtaZl0loverlapWJet_MM_SRSS4", "h_DeltaEtaZl0loverlapWJet_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0loverlapWJet_MM_SRSS4->Sumw2();
  h_DeltaEtaZl0loverlapWJet_EM_SRSS1 = new TH2F("h_DeltaEtaZl0loverlapWJet_EM_SRSS1", "h_DeltaEtaZl0loverlapWJet_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0loverlapWJet_EM_SRSS1->Sumw2();
  h_DeltaEtaZl0loverlapWJet_EM_SRSS2 = new TH2F("h_DeltaEtaZl0loverlapWJet_EM_SRSS2", "h_DeltaEtaZl0loverlapWJet_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0loverlapWJet_EM_SRSS2->Sumw2();
  h_DeltaEtaZl0loverlapWJet_EE_SROS1 = new TH2F("h_DeltaEtaZl0loverlapWJet_EE_SROS1", "h_DeltaEtaZl0loverlapWJet_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0loverlapWJet_EE_SROS1->Sumw2();
  h_DeltaEtaZl0loverlapWJet_MM_SROS1 = new TH2F("h_DeltaEtaZl0loverlapWJet_MM_SROS1", "h_DeltaEtaZl0loverlapWJet_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0loverlapWJet_MM_SROS1->Sumw2();
  h_DeltaEtaZl0loverlapWJet_EM_SROS1 = new TH2F("h_DeltaEtaZl0loverlapWJet_EM_SROS1", "h_DeltaEtaZl0loverlapWJet_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0loverlapWJet_EM_SROS1->Sumw2();
  
  h_DeltaEtaZl1loverlapWJet_EE_SRSS1 = new TH2F("h_DeltaEtaZl1loverlapWJet_EE_SRSS1", "h_DeltaEtaZl1loverlapWJet_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1loverlapWJet_EE_SRSS1->Sumw2();
  h_DeltaEtaZl1loverlapWJet_EE_SRSS2 = new TH2F("h_DeltaEtaZl1loverlapWJet_EE_SRSS2", "h_DeltaEtaZl1loverlapWJet_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1loverlapWJet_EE_SRSS2->Sumw2();
  h_DeltaEtaZl1loverlapWJet_MM_SRSS1 = new TH2F("h_DeltaEtaZl1loverlapWJet_MM_SRSS1", "h_DeltaEtaZl1loverlapWJet_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1loverlapWJet_MM_SRSS1->Sumw2(); 
  h_DeltaEtaZl1loverlapWJet_MM_SRSS2 = new TH2F("h_DeltaEtaZl1loverlapWJet_MM_SRSS2", "h_DeltaEtaZl1loverlapWJet_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1loverlapWJet_MM_SRSS2->Sumw2();
  h_DeltaEtaZl1loverlapWJet_MM_SRSS3 = new TH2F("h_DeltaEtaZl1loverlapWJet_MM_SRSS3", "h_DeltaEtaZl1loverlapWJet_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1loverlapWJet_MM_SRSS3->Sumw2();
  h_DeltaEtaZl1loverlapWJet_MM_SRSS4 = new TH2F("h_DeltaEtaZl1loverlapWJet_MM_SRSS4", "h_DeltaEtaZl1loverlapWJet_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1loverlapWJet_MM_SRSS4->Sumw2(); 
  h_DeltaEtaZl1loverlapWJet_EM_SRSS1 = new TH2F("h_DeltaEtaZl1loverlapWJet_EM_SRSS1", "h_DeltaEtaZl1loverlapWJet_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1loverlapWJet_EM_SRSS1->Sumw2();
  h_DeltaEtaZl1loverlapWJet_EM_SRSS2 = new TH2F("h_DeltaEtaZl1loverlapWJet_EM_SRSS2", "h_DeltaEtaZl1loverlapWJet_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1loverlapWJet_EM_SRSS2->Sumw2();
  h_DeltaEtaZl1loverlapWJet_EE_SROS1 = new TH2F("h_DeltaEtaZl1loverlapWJet_EE_SROS1", "h_DeltaEtaZl1loverlapWJet_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1loverlapWJet_EE_SROS1->Sumw2(); 
  h_DeltaEtaZl1loverlapWJet_MM_SROS1 = new TH2F("h_DeltaEtaZl1loverlapWJet_MM_SROS1", "h_DeltaEtaZl1loverlapWJet_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1loverlapWJet_MM_SROS1->Sumw2();
  h_DeltaEtaZl1loverlapWJet_EM_SROS1 = new TH2F("h_DeltaEtaZl1loverlapWJet_EM_SROS1", "h_DeltaEtaZl1loverlapWJet_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1loverlapWJet_EM_SROS1->Sumw2();    
  
  h_mTllloverlapWJet_EE_SRSS1 = new TH2F("h_mTllloverlapWJet_EE_SRSS1", "h_mTllloverlapWJet_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTllloverlapWJet_EE_SRSS1->Sumw2();
  h_mTllloverlapWJet_EE_SRSS2 = new TH2F("h_mTllloverlapWJet_EE_SRSS2", "h_mTllloverlapWJet_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTllloverlapWJet_EE_SRSS2->Sumw2();
  h_mTllloverlapWJet_MM_SRSS1 = new TH2F("h_mTllloverlapWJet_MM_SRSS1", "h_mTllloverlapWJet_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTllloverlapWJet_MM_SRSS1->Sumw2(); 
  h_mTllloverlapWJet_MM_SRSS2 = new TH2F("h_mTllloverlapWJet_MM_SRSS2", "h_mTllloverlapWJet_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTllloverlapWJet_MM_SRSS2->Sumw2();
  h_mTllloverlapWJet_MM_SRSS3 = new TH2F("h_mTllloverlapWJet_MM_SRSS3", "h_mTllloverlapWJet_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_mTllloverlapWJet_MM_SRSS3->Sumw2();
  h_mTllloverlapWJet_MM_SRSS4 = new TH2F("h_mTllloverlapWJet_MM_SRSS4", "h_mTllloverlapWJet_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_mTllloverlapWJet_MM_SRSS4->Sumw2(); 
  h_mTllloverlapWJet_EM_SRSS1 = new TH2F("h_mTllloverlapWJet_EM_SRSS1", "h_mTllloverlapWJet_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTllloverlapWJet_EM_SRSS1->Sumw2();
  h_mTllloverlapWJet_EM_SRSS2 = new TH2F("h_mTllloverlapWJet_EM_SRSS2", "h_mTllloverlapWJet_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTllloverlapWJet_EM_SRSS2->Sumw2();
  h_mTllloverlapWJet_EE_SROS1 = new TH2F("h_mTllloverlapWJet_EE_SROS1", "h_mTllloverlapWJet_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTllloverlapWJet_EE_SROS1->Sumw2(); 
  h_mTllloverlapWJet_MM_SROS1 = new TH2F("h_mTllloverlapWJet_MM_SROS1", "h_mTllloverlapWJet_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTllloverlapWJet_MM_SROS1->Sumw2();
  h_mTllloverlapWJet_EM_SROS1 = new TH2F("h_mTllloverlapWJet_EM_SROS1", "h_mTllloverlapWJet_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTllloverlapWJet_EM_SROS1->Sumw2();  
  
   //overlapWLepton
  h_ml0loverlapWLepton_EE_SRSS1 = new TH2F("h_ml0loverlapWLepton_EE_SRSS1", "h_ml0loverlapWLepton_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0loverlapWLepton_EE_SRSS1->Sumw2();
  h_ml0loverlapWLepton_EE_SRSS2 = new TH2F("h_ml0loverlapWLepton_EE_SRSS2", "h_ml0loverlapWLepton_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ml0loverlapWLepton_EE_SRSS2->Sumw2();
  h_ml0loverlapWLepton_MM_SRSS1 = new TH2F("h_ml0loverlapWLepton_MM_SRSS1", "h_ml0loverlapWLepton_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0loverlapWLepton_MM_SRSS1->Sumw2();
  h_ml0loverlapWLepton_MM_SRSS2 = new TH2F("h_ml0loverlapWLepton_MM_SRSS2", "h_ml0loverlapWLepton_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ml0loverlapWLepton_MM_SRSS2->Sumw2();
  h_ml0loverlapWLepton_MM_SRSS3 = new TH2F("h_ml0loverlapWLepton_MM_SRSS3", "h_ml0loverlapWLepton_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_ml0loverlapWLepton_MM_SRSS3->Sumw2();
  h_ml0loverlapWLepton_MM_SRSS4 = new TH2F("h_ml0loverlapWLepton_MM_SRSS4", "h_ml0loverlapWLepton_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_ml0loverlapWLepton_MM_SRSS4->Sumw2();
  h_ml0loverlapWLepton_EM_SRSS1 = new TH2F("h_ml0loverlapWLepton_EM_SRSS1", "h_ml0loverlapWLepton_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0loverlapWLepton_EM_SRSS1->Sumw2();
  h_ml0loverlapWLepton_EM_SRSS2 = new TH2F("h_ml0loverlapWLepton_EM_SRSS2", "h_ml0loverlapWLepton_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ml0loverlapWLepton_EM_SRSS2->Sumw2();
  h_ml0loverlapWLepton_EE_SROS1 = new TH2F("h_ml0loverlapWLepton_EE_SROS1", "h_ml0loverlapWLepton_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_ml0loverlapWLepton_EE_SROS1->Sumw2();
  h_ml0loverlapWLepton_MM_SROS1 = new TH2F("h_ml0loverlapWLepton_MM_SROS1", "h_ml0loverlapWLepton_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_ml0loverlapWLepton_MM_SROS1->Sumw2();
  h_ml0loverlapWLepton_EM_SROS1 = new TH2F("h_ml0loverlapWLepton_EM_SROS1", "h_ml0loverlapWLepton_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_ml0loverlapWLepton_EM_SROS1->Sumw2();
  
  h_ml1loverlapWLepton_EE_SRSS1 = new TH2F("h_ml1loverlapWLepton_EE_SRSS1", "h_ml1loverlapWLepton_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1loverlapWLepton_EE_SRSS1->Sumw2();
  h_ml1loverlapWLepton_EE_SRSS2 = new TH2F("h_ml1loverlapWLepton_EE_SRSS2", "h_ml1loverlapWLepton_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ml1loverlapWLepton_EE_SRSS2->Sumw2();
  h_ml1loverlapWLepton_MM_SRSS1 = new TH2F("h_ml1loverlapWLepton_MM_SRSS1", "h_ml1loverlapWLepton_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1loverlapWLepton_MM_SRSS1->Sumw2();
  h_ml1loverlapWLepton_MM_SRSS2 = new TH2F("h_ml1loverlapWLepton_MM_SRSS2", "h_ml1loverlapWLepton_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ml1loverlapWLepton_MM_SRSS2->Sumw2();
  h_ml1loverlapWLepton_MM_SRSS3 = new TH2F("h_ml1loverlapWLepton_MM_SRSS3", "h_ml1loverlapWLepton_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_ml1loverlapWLepton_MM_SRSS3->Sumw2();
  h_ml1loverlapWLepton_MM_SRSS4 = new TH2F("h_ml1loverlapWLepton_MM_SRSS4", "h_ml1loverlapWLepton_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_ml1loverlapWLepton_MM_SRSS4->Sumw2();
  h_ml1loverlapWLepton_EM_SRSS1 = new TH2F("h_ml1loverlapWLepton_EM_SRSS1", "h_ml1loverlapWLepton_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1loverlapWLepton_EM_SRSS1->Sumw2();
  h_ml1loverlapWLepton_EM_SRSS2 = new TH2F("h_ml1loverlapWLepton_EM_SRSS2", "h_ml1loverlapWLepton_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ml1loverlapWLepton_EM_SRSS2->Sumw2();
  h_ml1loverlapWLepton_EE_SROS1 = new TH2F("h_ml1loverlapWLepton_EE_SROS1", "h_ml1loverlapWLepton_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_ml1loverlapWLepton_EE_SROS1->Sumw2();
  h_ml1loverlapWLepton_MM_SROS1 = new TH2F("h_ml1loverlapWLepton_MM_SROS1", "h_ml1loverlapWLepton_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_ml1loverlapWLepton_MM_SROS1->Sumw2();
  h_ml1loverlapWLepton_EM_SROS1 = new TH2F("h_ml1loverlapWLepton_EM_SROS1", "h_ml1loverlapWLepton_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_ml1loverlapWLepton_EM_SROS1->Sumw2();
  
  
  h_mTl0loverlapWLepton_EE_SRSS1 = new TH2F("h_mTl0loverlapWLepton_EE_SRSS1", "h_mTl0loverlapWLepton_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlapWLepton_EE_SRSS1->Sumw2();
  h_mTl0loverlapWLepton_EE_SRSS2 = new TH2F("h_mTl0loverlapWLepton_EE_SRSS2", "h_mTl0loverlapWLepton_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlapWLepton_EE_SRSS2->Sumw2();
  h_mTl0loverlapWLepton_MM_SRSS1 = new TH2F("h_mTl0loverlapWLepton_MM_SRSS1", "h_mTl0loverlapWLepton_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlapWLepton_MM_SRSS1->Sumw2();
  h_mTl0loverlapWLepton_MM_SRSS2 = new TH2F("h_mTl0loverlapWLepton_MM_SRSS2", "h_mTl0loverlapWLepton_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlapWLepton_MM_SRSS2->Sumw2();
  h_mTl0loverlapWLepton_MM_SRSS3 = new TH2F("h_mTl0loverlapWLepton_MM_SRSS3", "h_mTl0loverlapWLepton_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlapWLepton_MM_SRSS3->Sumw2();
  h_mTl0loverlapWLepton_MM_SRSS4 = new TH2F("h_mTl0loverlapWLepton_MM_SRSS4", "h_mTl0loverlapWLepton_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlapWLepton_MM_SRSS4->Sumw2();
  h_mTl0loverlapWLepton_EM_SRSS1 = new TH2F("h_mTl0loverlapWLepton_EM_SRSS1", "h_mTl0loverlapWLepton_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlapWLepton_EM_SRSS1->Sumw2();
  h_mTl0loverlapWLepton_EM_SRSS2 = new TH2F("h_mTl0loverlapWLepton_EM_SRSS2", "h_mTl0loverlapWLepton_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlapWLepton_EM_SRSS2->Sumw2();
  h_mTl0loverlapWLepton_EE_SROS1 = new TH2F("h_mTl0loverlapWLepton_EE_SROS1", "h_mTl0loverlapWLepton_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlapWLepton_EE_SROS1->Sumw2();
  h_mTl0loverlapWLepton_MM_SROS1 = new TH2F("h_mTl0loverlapWLepton_MM_SROS1", "h_mTl0loverlapWLepton_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlapWLepton_MM_SROS1->Sumw2();
  h_mTl0loverlapWLepton_EM_SROS1 = new TH2F("h_mTl0loverlapWLepton_EM_SROS1", "h_mTl0loverlapWLepton_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl0loverlapWLepton_EM_SROS1->Sumw2();
  
  h_mTl1loverlapWLepton_EE_SRSS1 = new TH2F("h_mTl1loverlapWLepton_EE_SRSS1", "h_mTl1loverlapWLepton_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlapWLepton_EE_SRSS1->Sumw2();
  h_mTl1loverlapWLepton_EE_SRSS2 = new TH2F("h_mTl1loverlapWLepton_EE_SRSS2", "h_mTl1loverlapWLepton_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlapWLepton_EE_SRSS2->Sumw2();
  h_mTl1loverlapWLepton_MM_SRSS1 = new TH2F("h_mTl1loverlapWLepton_MM_SRSS1", "h_mTl1loverlapWLepton_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlapWLepton_MM_SRSS1->Sumw2(); 
  h_mTl1loverlapWLepton_MM_SRSS2 = new TH2F("h_mTl1loverlapWLepton_MM_SRSS2", "h_mTl1loverlapWLepton_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlapWLepton_MM_SRSS2->Sumw2();
  h_mTl1loverlapWLepton_MM_SRSS3 = new TH2F("h_mTl1loverlapWLepton_MM_SRSS3", "h_mTl1loverlapWLepton_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlapWLepton_MM_SRSS3->Sumw2();
  h_mTl1loverlapWLepton_MM_SRSS4 = new TH2F("h_mTl1loverlapWLepton_MM_SRSS4", "h_mTl1loverlapWLepton_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlapWLepton_MM_SRSS4->Sumw2(); 
  h_mTl1loverlapWLepton_EM_SRSS1 = new TH2F("h_mTl1loverlapWLepton_EM_SRSS1", "h_mTl1loverlapWLepton_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlapWLepton_EM_SRSS1->Sumw2();
  h_mTl1loverlapWLepton_EM_SRSS2 = new TH2F("h_mTl1loverlapWLepton_EM_SRSS2", "h_mTl1loverlapWLepton_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlapWLepton_EM_SRSS2->Sumw2();
  h_mTl1loverlapWLepton_EE_SROS1 = new TH2F("h_mTl1loverlapWLepton_EE_SROS1", "h_mTl1loverlapWLepton_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlapWLepton_EE_SROS1->Sumw2(); 
  h_mTl1loverlapWLepton_MM_SROS1 = new TH2F("h_mTl1loverlapWLepton_MM_SROS1", "h_mTl1loverlapWLepton_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlapWLepton_MM_SROS1->Sumw2();
  h_mTl1loverlapWLepton_EM_SROS1 = new TH2F("h_mTl1loverlapWLepton_EM_SROS1", "h_mTl1loverlapWLepton_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl1loverlapWLepton_EM_SROS1->Sumw2();

  h_DeltaRl0loverlapWLepton_EE_SRSS1 = new TH2F("h_DeltaRl0loverlapWLepton_EE_SRSS1", "h_DeltaRl0loverlapWLepton_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0loverlapWLepton_EE_SRSS1->Sumw2();
  h_DeltaRl0loverlapWLepton_EE_SRSS2 = new TH2F("h_DeltaRl0loverlapWLepton_EE_SRSS2", "h_DeltaRl0loverlapWLepton_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0loverlapWLepton_EE_SRSS2->Sumw2();
  h_DeltaRl0loverlapWLepton_MM_SRSS1 = new TH2F("h_DeltaRl0loverlapWLepton_MM_SRSS1", "h_DeltaRl0loverlapWLepton_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0loverlapWLepton_MM_SRSS1->Sumw2();
  h_DeltaRl0loverlapWLepton_MM_SRSS2 = new TH2F("h_DeltaRl0loverlapWLepton_MM_SRSS2", "h_DeltaRl0loverlapWLepton_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0loverlapWLepton_MM_SRSS2->Sumw2();
  h_DeltaRl0loverlapWLepton_MM_SRSS3 = new TH2F("h_DeltaRl0loverlapWLepton_MM_SRSS3", "h_DeltaRl0loverlapWLepton_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0loverlapWLepton_MM_SRSS3->Sumw2();
  h_DeltaRl0loverlapWLepton_MM_SRSS4 = new TH2F("h_DeltaRl0loverlapWLepton_MM_SRSS4", "h_DeltaRl0loverlapWLepton_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0loverlapWLepton_MM_SRSS4->Sumw2();
  h_DeltaRl0loverlapWLepton_EM_SRSS1 = new TH2F("h_DeltaRl0loverlapWLepton_EM_SRSS1", "h_DeltaRl0loverlapWLepton_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0loverlapWLepton_EM_SRSS1->Sumw2();
  h_DeltaRl0loverlapWLepton_EM_SRSS2 = new TH2F("h_DeltaRl0loverlapWLepton_EM_SRSS2", "h_DeltaRl0loverlapWLepton_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0loverlapWLepton_EM_SRSS2->Sumw2();
  h_DeltaRl0loverlapWLepton_EE_SROS1 = new TH2F("h_DeltaRl0loverlapWLepton_EE_SROS1", "h_DeltaRl0loverlapWLepton_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0loverlapWLepton_EE_SROS1->Sumw2();
  h_DeltaRl0loverlapWLepton_MM_SROS1 = new TH2F("h_DeltaRl0loverlapWLepton_MM_SROS1", "h_DeltaRl0loverlapWLepton_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0loverlapWLepton_MM_SROS1->Sumw2();
  h_DeltaRl0loverlapWLepton_EM_SROS1 = new TH2F("h_DeltaRl0loverlapWLepton_EM_SROS1", "h_DeltaRl0loverlapWLepton_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0loverlapWLepton_EM_SROS1->Sumw2();
  
  h_DeltaRl1loverlapWLepton_EE_SRSS1 = new TH2F("h_DeltaRl1loverlapWLepton_EE_SRSS1", "h_DeltaRl1loverlapWLepton_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1loverlapWLepton_EE_SRSS1->Sumw2();
  h_DeltaRl1loverlapWLepton_EE_SRSS2 = new TH2F("h_DeltaRl1loverlapWLepton_EE_SRSS2", "h_DeltaRl1loverlapWLepton_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1loverlapWLepton_EE_SRSS2->Sumw2();
  h_DeltaRl1loverlapWLepton_MM_SRSS1 = new TH2F("h_DeltaRl1loverlapWLepton_MM_SRSS1", "h_DeltaRl1loverlapWLepton_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1loverlapWLepton_MM_SRSS1->Sumw2(); 
  h_DeltaRl1loverlapWLepton_MM_SRSS2 = new TH2F("h_DeltaRl1loverlapWLepton_MM_SRSS2", "h_DeltaRl1loverlapWLepton_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1loverlapWLepton_MM_SRSS2->Sumw2();
  h_DeltaRl1loverlapWLepton_MM_SRSS3 = new TH2F("h_DeltaRl1loverlapWLepton_MM_SRSS3", "h_DeltaRl1loverlapWLepton_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1loverlapWLepton_MM_SRSS3->Sumw2();
  h_DeltaRl1loverlapWLepton_MM_SRSS4 = new TH2F("h_DeltaRl1loverlapWLepton_MM_SRSS4", "h_DeltaRl1loverlapWLepton_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1loverlapWLepton_MM_SRSS4->Sumw2(); 
  h_DeltaRl1loverlapWLepton_EM_SRSS1 = new TH2F("h_DeltaRl1loverlapWLepton_EM_SRSS1", "h_DeltaRl1loverlapWLepton_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1loverlapWLepton_EM_SRSS1->Sumw2();
  h_DeltaRl1loverlapWLepton_EM_SRSS2 = new TH2F("h_DeltaRl1loverlapWLepton_EM_SRSS2", "h_DeltaRl1loverlapWLepton_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1loverlapWLepton_EM_SRSS2->Sumw2();
  h_DeltaRl1loverlapWLepton_EE_SROS1 = new TH2F("h_DeltaRl1loverlapWLepton_EE_SROS1", "h_DeltaRl1loverlapWLepton_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1loverlapWLepton_EE_SROS1->Sumw2(); 
  h_DeltaRl1loverlapWLepton_MM_SROS1 = new TH2F("h_DeltaRl1loverlapWLepton_MM_SROS1", "h_DeltaRl1loverlapWLepton_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1loverlapWLepton_MM_SROS1->Sumw2();
  h_DeltaRl1loverlapWLepton_EM_SROS1 = new TH2F("h_DeltaRl1loverlapWLepton_EM_SROS1", "h_DeltaRl1loverlapWLepton_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1loverlapWLepton_EM_SROS1->Sumw2();
  
  h_DeltaRZl0loverlapWLepton_EE_SRSS1 = new TH2F("h_DeltaRZl0loverlapWLepton_EE_SRSS1", "h_DeltaRZl0loverlapWLepton_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0loverlapWLepton_EE_SRSS1->Sumw2();
  h_DeltaRZl0loverlapWLepton_EE_SRSS2 = new TH2F("h_DeltaRZl0loverlapWLepton_EE_SRSS2", "h_DeltaRZl0loverlapWLepton_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0loverlapWLepton_EE_SRSS2->Sumw2();
  h_DeltaRZl0loverlapWLepton_MM_SRSS1 = new TH2F("h_DeltaRZl0loverlapWLepton_MM_SRSS1", "h_DeltaRZl0loverlapWLepton_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0loverlapWLepton_MM_SRSS1->Sumw2();
  h_DeltaRZl0loverlapWLepton_MM_SRSS2 = new TH2F("h_DeltaRZl0loverlapWLepton_MM_SRSS2", "h_DeltaRZl0loverlapWLepton_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0loverlapWLepton_MM_SRSS2->Sumw2();
  h_DeltaRZl0loverlapWLepton_MM_SRSS3 = new TH2F("h_DeltaRZl0loverlapWLepton_MM_SRSS3", "h_DeltaRZl0loverlapWLepton_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0loverlapWLepton_MM_SRSS3->Sumw2();
  h_DeltaRZl0loverlapWLepton_MM_SRSS4 = new TH2F("h_DeltaRZl0loverlapWLepton_MM_SRSS4", "h_DeltaRZl0loverlapWLepton_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0loverlapWLepton_MM_SRSS4->Sumw2();
  h_DeltaRZl0loverlapWLepton_EM_SRSS1 = new TH2F("h_DeltaRZl0loverlapWLepton_EM_SRSS1", "h_DeltaRZl0loverlapWLepton_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0loverlapWLepton_EM_SRSS1->Sumw2();
  h_DeltaRZl0loverlapWLepton_EM_SRSS2 = new TH2F("h_DeltaRZl0loverlapWLepton_EM_SRSS2", "h_DeltaRZl0loverlapWLepton_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0loverlapWLepton_EM_SRSS2->Sumw2();
  h_DeltaRZl0loverlapWLepton_EE_SROS1 = new TH2F("h_DeltaRZl0loverlapWLepton_EE_SROS1", "h_DeltaRZl0loverlapWLepton_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0loverlapWLepton_EE_SROS1->Sumw2();
  h_DeltaRZl0loverlapWLepton_MM_SROS1 = new TH2F("h_DeltaRZl0loverlapWLepton_MM_SROS1", "h_DeltaRZl0loverlapWLepton_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0loverlapWLepton_MM_SROS1->Sumw2();
  h_DeltaRZl0loverlapWLepton_EM_SROS1 = new TH2F("h_DeltaRZl0loverlapWLepton_EM_SROS1", "h_DeltaRZl0loverlapWLepton_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0loverlapWLepton_EM_SROS1->Sumw2();
  
  h_DeltaRZl1loverlapWLepton_EE_SRSS1 = new TH2F("h_DeltaRZl1loverlapWLepton_EE_SRSS1", "h_DeltaRZl1loverlapWLepton_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1loverlapWLepton_EE_SRSS1->Sumw2();
  h_DeltaRZl1loverlapWLepton_EE_SRSS2 = new TH2F("h_DeltaRZl1loverlapWLepton_EE_SRSS2", "h_DeltaRZl1loverlapWLepton_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1loverlapWLepton_EE_SRSS2->Sumw2();
  h_DeltaRZl1loverlapWLepton_MM_SRSS1 = new TH2F("h_DeltaRZl1loverlapWLepton_MM_SRSS1", "h_DeltaRZl1loverlapWLepton_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1loverlapWLepton_MM_SRSS1->Sumw2(); 
  h_DeltaRZl1loverlapWLepton_MM_SRSS2 = new TH2F("h_DeltaRZl1loverlapWLepton_MM_SRSS2", "h_DeltaRZl1loverlapWLepton_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1loverlapWLepton_MM_SRSS2->Sumw2();
  h_DeltaRZl1loverlapWLepton_MM_SRSS3 = new TH2F("h_DeltaRZl1loverlapWLepton_MM_SRSS3", "h_DeltaRZl1loverlapWLepton_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1loverlapWLepton_MM_SRSS3->Sumw2();
  h_DeltaRZl1loverlapWLepton_MM_SRSS4 = new TH2F("h_DeltaRZl1loverlapWLepton_MM_SRSS4", "h_DeltaRZl1loverlapWLepton_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1loverlapWLepton_MM_SRSS4->Sumw2(); 
  h_DeltaRZl1loverlapWLepton_EM_SRSS1 = new TH2F("h_DeltaRZl1loverlapWLepton_EM_SRSS1", "h_DeltaRZl1loverlapWLepton_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1loverlapWLepton_EM_SRSS1->Sumw2();
  h_DeltaRZl1loverlapWLepton_EM_SRSS2 = new TH2F("h_DeltaRZl1loverlapWLepton_EM_SRSS2", "h_DeltaRZl1loverlapWLepton_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1loverlapWLepton_EM_SRSS2->Sumw2();
  h_DeltaRZl1loverlapWLepton_EE_SROS1 = new TH2F("h_DeltaRZl1loverlapWLepton_EE_SROS1", "h_DeltaRZl1loverlapWLepton_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1loverlapWLepton_EE_SROS1->Sumw2(); 
  h_DeltaRZl1loverlapWLepton_MM_SROS1 = new TH2F("h_DeltaRZl1loverlapWLepton_MM_SROS1", "h_DeltaRZl1loverlapWLepton_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1loverlapWLepton_MM_SROS1->Sumw2();
  h_DeltaRZl1loverlapWLepton_EM_SROS1 = new TH2F("h_DeltaRZl1loverlapWLepton_EM_SROS1", "h_DeltaRZl1loverlapWLepton_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1loverlapWLepton_EM_SROS1->Sumw2();  
  
  h_DeltaEtaZl0loverlapWLepton_EE_SRSS1 = new TH2F("h_DeltaEtaZl0loverlapWLepton_EE_SRSS1", "h_DeltaEtaZl0loverlapWLepton_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0loverlapWLepton_EE_SRSS1->Sumw2();
  h_DeltaEtaZl0loverlapWLepton_EE_SRSS2 = new TH2F("h_DeltaEtaZl0loverlapWLepton_EE_SRSS2", "h_DeltaEtaZl0loverlapWLepton_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0loverlapWLepton_EE_SRSS2->Sumw2();
  h_DeltaEtaZl0loverlapWLepton_MM_SRSS1 = new TH2F("h_DeltaEtaZl0loverlapWLepton_MM_SRSS1", "h_DeltaEtaZl0loverlapWLepton_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0loverlapWLepton_MM_SRSS1->Sumw2();
  h_DeltaEtaZl0loverlapWLepton_MM_SRSS2 = new TH2F("h_DeltaEtaZl0loverlapWLepton_MM_SRSS2", "h_DeltaEtaZl0loverlapWLepton_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0loverlapWLepton_MM_SRSS2->Sumw2();
  h_DeltaEtaZl0loverlapWLepton_MM_SRSS3 = new TH2F("h_DeltaEtaZl0loverlapWLepton_MM_SRSS3", "h_DeltaEtaZl0loverlapWLepton_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0loverlapWLepton_MM_SRSS3->Sumw2();
  h_DeltaEtaZl0loverlapWLepton_MM_SRSS4 = new TH2F("h_DeltaEtaZl0loverlapWLepton_MM_SRSS4", "h_DeltaEtaZl0loverlapWLepton_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0loverlapWLepton_MM_SRSS4->Sumw2();
  h_DeltaEtaZl0loverlapWLepton_EM_SRSS1 = new TH2F("h_DeltaEtaZl0loverlapWLepton_EM_SRSS1", "h_DeltaEtaZl0loverlapWLepton_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0loverlapWLepton_EM_SRSS1->Sumw2();
  h_DeltaEtaZl0loverlapWLepton_EM_SRSS2 = new TH2F("h_DeltaEtaZl0loverlapWLepton_EM_SRSS2", "h_DeltaEtaZl0loverlapWLepton_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0loverlapWLepton_EM_SRSS2->Sumw2();
  h_DeltaEtaZl0loverlapWLepton_EE_SROS1 = new TH2F("h_DeltaEtaZl0loverlapWLepton_EE_SROS1", "h_DeltaEtaZl0loverlapWLepton_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0loverlapWLepton_EE_SROS1->Sumw2();
  h_DeltaEtaZl0loverlapWLepton_MM_SROS1 = new TH2F("h_DeltaEtaZl0loverlapWLepton_MM_SROS1", "h_DeltaEtaZl0loverlapWLepton_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0loverlapWLepton_MM_SROS1->Sumw2();
  h_DeltaEtaZl0loverlapWLepton_EM_SROS1 = new TH2F("h_DeltaEtaZl0loverlapWLepton_EM_SROS1", "h_DeltaEtaZl0loverlapWLepton_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0loverlapWLepton_EM_SROS1->Sumw2();
  
  h_DeltaEtaZl1loverlapWLepton_EE_SRSS1 = new TH2F("h_DeltaEtaZl1loverlapWLepton_EE_SRSS1", "h_DeltaEtaZl1loverlapWLepton_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1loverlapWLepton_EE_SRSS1->Sumw2();
  h_DeltaEtaZl1loverlapWLepton_EE_SRSS2 = new TH2F("h_DeltaEtaZl1loverlapWLepton_EE_SRSS2", "h_DeltaEtaZl1loverlapWLepton_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1loverlapWLepton_EE_SRSS2->Sumw2();
  h_DeltaEtaZl1loverlapWLepton_MM_SRSS1 = new TH2F("h_DeltaEtaZl1loverlapWLepton_MM_SRSS1", "h_DeltaEtaZl1loverlapWLepton_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1loverlapWLepton_MM_SRSS1->Sumw2(); 
  h_DeltaEtaZl1loverlapWLepton_MM_SRSS2 = new TH2F("h_DeltaEtaZl1loverlapWLepton_MM_SRSS2", "h_DeltaEtaZl1loverlapWLepton_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1loverlapWLepton_MM_SRSS2->Sumw2();
  h_DeltaEtaZl1loverlapWLepton_MM_SRSS3 = new TH2F("h_DeltaEtaZl1loverlapWLepton_MM_SRSS3", "h_DeltaEtaZl1loverlapWLepton_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1loverlapWLepton_MM_SRSS3->Sumw2();
  h_DeltaEtaZl1loverlapWLepton_MM_SRSS4 = new TH2F("h_DeltaEtaZl1loverlapWLepton_MM_SRSS4", "h_DeltaEtaZl1loverlapWLepton_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1loverlapWLepton_MM_SRSS4->Sumw2(); 
  h_DeltaEtaZl1loverlapWLepton_EM_SRSS1 = new TH2F("h_DeltaEtaZl1loverlapWLepton_EM_SRSS1", "h_DeltaEtaZl1loverlapWLepton_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1loverlapWLepton_EM_SRSS1->Sumw2();
  h_DeltaEtaZl1loverlapWLepton_EM_SRSS2 = new TH2F("h_DeltaEtaZl1loverlapWLepton_EM_SRSS2", "h_DeltaEtaZl1loverlapWLepton_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1loverlapWLepton_EM_SRSS2->Sumw2();
  h_DeltaEtaZl1loverlapWLepton_EE_SROS1 = new TH2F("h_DeltaEtaZl1loverlapWLepton_EE_SROS1", "h_DeltaEtaZl1loverlapWLepton_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1loverlapWLepton_EE_SROS1->Sumw2(); 
  h_DeltaEtaZl1loverlapWLepton_MM_SROS1 = new TH2F("h_DeltaEtaZl1loverlapWLepton_MM_SROS1", "h_DeltaEtaZl1loverlapWLepton_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1loverlapWLepton_MM_SROS1->Sumw2();
  h_DeltaEtaZl1loverlapWLepton_EM_SROS1 = new TH2F("h_DeltaEtaZl1loverlapWLepton_EM_SROS1", "h_DeltaEtaZl1loverlapWLepton_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1loverlapWLepton_EM_SROS1->Sumw2();    
  
  h_mTllloverlapWLepton_EE_SRSS1 = new TH2F("h_mTllloverlapWLepton_EE_SRSS1", "h_mTllloverlapWLepton_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTllloverlapWLepton_EE_SRSS1->Sumw2();
  h_mTllloverlapWLepton_EE_SRSS2 = new TH2F("h_mTllloverlapWLepton_EE_SRSS2", "h_mTllloverlapWLepton_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTllloverlapWLepton_EE_SRSS2->Sumw2();
  h_mTllloverlapWLepton_MM_SRSS1 = new TH2F("h_mTllloverlapWLepton_MM_SRSS1", "h_mTllloverlapWLepton_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTllloverlapWLepton_MM_SRSS1->Sumw2(); 
  h_mTllloverlapWLepton_MM_SRSS2 = new TH2F("h_mTllloverlapWLepton_MM_SRSS2", "h_mTllloverlapWLepton_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTllloverlapWLepton_MM_SRSS2->Sumw2();
  h_mTllloverlapWLepton_MM_SRSS3 = new TH2F("h_mTllloverlapWLepton_MM_SRSS3", "h_mTllloverlapWLepton_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_mTllloverlapWLepton_MM_SRSS3->Sumw2();
  h_mTllloverlapWLepton_MM_SRSS4 = new TH2F("h_mTllloverlapWLepton_MM_SRSS4", "h_mTllloverlapWLepton_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_mTllloverlapWLepton_MM_SRSS4->Sumw2(); 
  h_mTllloverlapWLepton_EM_SRSS1 = new TH2F("h_mTllloverlapWLepton_EM_SRSS1", "h_mTllloverlapWLepton_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTllloverlapWLepton_EM_SRSS1->Sumw2();
  h_mTllloverlapWLepton_EM_SRSS2 = new TH2F("h_mTllloverlapWLepton_EM_SRSS2", "h_mTllloverlapWLepton_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTllloverlapWLepton_EM_SRSS2->Sumw2();
  h_mTllloverlapWLepton_EE_SROS1 = new TH2F("h_mTllloverlapWLepton_EE_SROS1", "h_mTllloverlapWLepton_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTllloverlapWLepton_EE_SROS1->Sumw2(); 
  h_mTllloverlapWLepton_MM_SROS1 = new TH2F("h_mTllloverlapWLepton_MM_SROS1", "h_mTllloverlapWLepton_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTllloverlapWLepton_MM_SROS1->Sumw2();
  h_mTllloverlapWLepton_EM_SROS1 = new TH2F("h_mTllloverlapWLepton_EM_SROS1", "h_mTllloverlapWLepton_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTllloverlapWLepton_EM_SROS1->Sumw2();
     
  
   //Mll
  h_ml0lMll_EE_SRSS1 = new TH2F("h_ml0lMll_EE_SRSS1", "h_ml0lMll_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0lMll_EE_SRSS1->Sumw2();
  h_ml0lMll_EE_SRSS2 = new TH2F("h_ml0lMll_EE_SRSS2", "h_ml0lMll_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ml0lMll_EE_SRSS2->Sumw2();
  h_ml0lMll_MM_SRSS1 = new TH2F("h_ml0lMll_MM_SRSS1", "h_ml0lMll_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0lMll_MM_SRSS1->Sumw2();
  h_ml0lMll_MM_SRSS2 = new TH2F("h_ml0lMll_MM_SRSS2", "h_ml0lMll_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ml0lMll_MM_SRSS2->Sumw2();
  h_ml0lMll_MM_SRSS3 = new TH2F("h_ml0lMll_MM_SRSS3", "h_ml0lMll_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_ml0lMll_MM_SRSS3->Sumw2();
  h_ml0lMll_MM_SRSS4 = new TH2F("h_ml0lMll_MM_SRSS4", "h_ml0lMll_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_ml0lMll_MM_SRSS4->Sumw2();
  h_ml0lMll_EM_SRSS1 = new TH2F("h_ml0lMll_EM_SRSS1", "h_ml0lMll_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml0lMll_EM_SRSS1->Sumw2();
  h_ml0lMll_EM_SRSS2 = new TH2F("h_ml0lMll_EM_SRSS2", "h_ml0lMll_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ml0lMll_EM_SRSS2->Sumw2();
  h_ml0lMll_EE_SROS1 = new TH2F("h_ml0lMll_EE_SROS1", "h_ml0lMll_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_ml0lMll_EE_SROS1->Sumw2();
  h_ml0lMll_MM_SROS1 = new TH2F("h_ml0lMll_MM_SROS1", "h_ml0lMll_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_ml0lMll_MM_SROS1->Sumw2();
  h_ml0lMll_EM_SROS1 = new TH2F("h_ml0lMll_EM_SROS1", "h_ml0lMll_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_ml0lMll_EM_SROS1->Sumw2();
  
  h_ml1lMll_EE_SRSS1 = new TH2F("h_ml1lMll_EE_SRSS1", "h_ml1lMll_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1lMll_EE_SRSS1->Sumw2();
  h_ml1lMll_EE_SRSS2 = new TH2F("h_ml1lMll_EE_SRSS2", "h_ml1lMll_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ml1lMll_EE_SRSS2->Sumw2();
  h_ml1lMll_MM_SRSS1 = new TH2F("h_ml1lMll_MM_SRSS1", "h_ml1lMll_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1lMll_MM_SRSS1->Sumw2();
  h_ml1lMll_MM_SRSS2 = new TH2F("h_ml1lMll_MM_SRSS2", "h_ml1lMll_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ml1lMll_MM_SRSS2->Sumw2();
  h_ml1lMll_MM_SRSS3 = new TH2F("h_ml1lMll_MM_SRSS3", "h_ml1lMll_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_ml1lMll_MM_SRSS3->Sumw2();
  h_ml1lMll_MM_SRSS4 = new TH2F("h_ml1lMll_MM_SRSS4", "h_ml1lMll_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_ml1lMll_MM_SRSS4->Sumw2();
  h_ml1lMll_EM_SRSS1 = new TH2F("h_ml1lMll_EM_SRSS1", "h_ml1lMll_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ml1lMll_EM_SRSS1->Sumw2();
  h_ml1lMll_EM_SRSS2 = new TH2F("h_ml1lMll_EM_SRSS2", "h_ml1lMll_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ml1lMll_EM_SRSS2->Sumw2();
  h_ml1lMll_EE_SROS1 = new TH2F("h_ml1lMll_EE_SROS1", "h_ml1lMll_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_ml1lMll_EE_SROS1->Sumw2();
  h_ml1lMll_MM_SROS1 = new TH2F("h_ml1lMll_MM_SROS1", "h_ml1lMll_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_ml1lMll_MM_SROS1->Sumw2();
  h_ml1lMll_EM_SROS1 = new TH2F("h_ml1lMll_EM_SROS1", "h_ml1lMll_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_ml1lMll_EM_SROS1->Sumw2();
  
  
  h_mTl0lMll_EE_SRSS1 = new TH2F("h_mTl0lMll_EE_SRSS1", "h_mTl0lMll_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0lMll_EE_SRSS1->Sumw2();
  h_mTl0lMll_EE_SRSS2 = new TH2F("h_mTl0lMll_EE_SRSS2", "h_mTl0lMll_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl0lMll_EE_SRSS2->Sumw2();
  h_mTl0lMll_MM_SRSS1 = new TH2F("h_mTl0lMll_MM_SRSS1", "h_mTl0lMll_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0lMll_MM_SRSS1->Sumw2();
  h_mTl0lMll_MM_SRSS2 = new TH2F("h_mTl0lMll_MM_SRSS2", "h_mTl0lMll_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl0lMll_MM_SRSS2->Sumw2();
  h_mTl0lMll_MM_SRSS3 = new TH2F("h_mTl0lMll_MM_SRSS3", "h_mTl0lMll_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_mTl0lMll_MM_SRSS3->Sumw2();
  h_mTl0lMll_MM_SRSS4 = new TH2F("h_mTl0lMll_MM_SRSS4", "h_mTl0lMll_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_mTl0lMll_MM_SRSS4->Sumw2();
  h_mTl0lMll_EM_SRSS1 = new TH2F("h_mTl0lMll_EM_SRSS1", "h_mTl0lMll_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl0lMll_EM_SRSS1->Sumw2();
  h_mTl0lMll_EM_SRSS2 = new TH2F("h_mTl0lMll_EM_SRSS2", "h_mTl0lMll_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl0lMll_EM_SRSS2->Sumw2();
  h_mTl0lMll_EE_SROS1 = new TH2F("h_mTl0lMll_EE_SROS1", "h_mTl0lMll_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl0lMll_EE_SROS1->Sumw2();
  h_mTl0lMll_MM_SROS1 = new TH2F("h_mTl0lMll_MM_SROS1", "h_mTl0lMll_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl0lMll_MM_SROS1->Sumw2();
  h_mTl0lMll_EM_SROS1 = new TH2F("h_mTl0lMll_EM_SROS1", "h_mTl0lMll_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl0lMll_EM_SROS1->Sumw2();
  
  h_mTl1lMll_EE_SRSS1 = new TH2F("h_mTl1lMll_EE_SRSS1", "h_mTl1lMll_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1lMll_EE_SRSS1->Sumw2();
  h_mTl1lMll_EE_SRSS2 = new TH2F("h_mTl1lMll_EE_SRSS2", "h_mTl1lMll_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl1lMll_EE_SRSS2->Sumw2();
  h_mTl1lMll_MM_SRSS1 = new TH2F("h_mTl1lMll_MM_SRSS1", "h_mTl1lMll_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1lMll_MM_SRSS1->Sumw2(); 
  h_mTl1lMll_MM_SRSS2 = new TH2F("h_mTl1lMll_MM_SRSS2", "h_mTl1lMll_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl1lMll_MM_SRSS2->Sumw2();
  h_mTl1lMll_MM_SRSS3 = new TH2F("h_mTl1lMll_MM_SRSS3", "h_mTl1lMll_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_mTl1lMll_MM_SRSS3->Sumw2();
  h_mTl1lMll_MM_SRSS4 = new TH2F("h_mTl1lMll_MM_SRSS4", "h_mTl1lMll_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_mTl1lMll_MM_SRSS4->Sumw2(); 
  h_mTl1lMll_EM_SRSS1 = new TH2F("h_mTl1lMll_EM_SRSS1", "h_mTl1lMll_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTl1lMll_EM_SRSS1->Sumw2();
  h_mTl1lMll_EM_SRSS2 = new TH2F("h_mTl1lMll_EM_SRSS2", "h_mTl1lMll_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTl1lMll_EM_SRSS2->Sumw2();
  h_mTl1lMll_EE_SROS1 = new TH2F("h_mTl1lMll_EE_SROS1", "h_mTl1lMll_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl1lMll_EE_SROS1->Sumw2(); 
  h_mTl1lMll_MM_SROS1 = new TH2F("h_mTl1lMll_MM_SROS1", "h_mTl1lMll_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl1lMll_MM_SROS1->Sumw2();
  h_mTl1lMll_EM_SROS1 = new TH2F("h_mTl1lMll_EM_SROS1", "h_mTl1lMll_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTl1lMll_EM_SROS1->Sumw2();

  h_DeltaRl0lMll_EE_SRSS1 = new TH2F("h_DeltaRl0lMll_EE_SRSS1", "h_DeltaRl0lMll_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0lMll_EE_SRSS1->Sumw2();
  h_DeltaRl0lMll_EE_SRSS2 = new TH2F("h_DeltaRl0lMll_EE_SRSS2", "h_DeltaRl0lMll_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0lMll_EE_SRSS2->Sumw2();
  h_DeltaRl0lMll_MM_SRSS1 = new TH2F("h_DeltaRl0lMll_MM_SRSS1", "h_DeltaRl0lMll_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0lMll_MM_SRSS1->Sumw2();
  h_DeltaRl0lMll_MM_SRSS2 = new TH2F("h_DeltaRl0lMll_MM_SRSS2", "h_DeltaRl0lMll_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0lMll_MM_SRSS2->Sumw2();
  h_DeltaRl0lMll_MM_SRSS3 = new TH2F("h_DeltaRl0lMll_MM_SRSS3", "h_DeltaRl0lMll_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0lMll_MM_SRSS3->Sumw2();
  h_DeltaRl0lMll_MM_SRSS4 = new TH2F("h_DeltaRl0lMll_MM_SRSS4", "h_DeltaRl0lMll_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0lMll_MM_SRSS4->Sumw2();
  h_DeltaRl0lMll_EM_SRSS1 = new TH2F("h_DeltaRl0lMll_EM_SRSS1", "h_DeltaRl0lMll_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0lMll_EM_SRSS1->Sumw2();
  h_DeltaRl0lMll_EM_SRSS2 = new TH2F("h_DeltaRl0lMll_EM_SRSS2", "h_DeltaRl0lMll_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0lMll_EM_SRSS2->Sumw2();
  h_DeltaRl0lMll_EE_SROS1 = new TH2F("h_DeltaRl0lMll_EE_SROS1", "h_DeltaRl0lMll_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0lMll_EE_SROS1->Sumw2();
  h_DeltaRl0lMll_MM_SROS1 = new TH2F("h_DeltaRl0lMll_MM_SROS1", "h_DeltaRl0lMll_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0lMll_MM_SROS1->Sumw2();
  h_DeltaRl0lMll_EM_SROS1 = new TH2F("h_DeltaRl0lMll_EM_SROS1", "h_DeltaRl0lMll_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl0lMll_EM_SROS1->Sumw2();
  
  h_DeltaRl1lMll_EE_SRSS1 = new TH2F("h_DeltaRl1lMll_EE_SRSS1", "h_DeltaRl1lMll_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1lMll_EE_SRSS1->Sumw2();
  h_DeltaRl1lMll_EE_SRSS2 = new TH2F("h_DeltaRl1lMll_EE_SRSS2", "h_DeltaRl1lMll_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1lMll_EE_SRSS2->Sumw2();
  h_DeltaRl1lMll_MM_SRSS1 = new TH2F("h_DeltaRl1lMll_MM_SRSS1", "h_DeltaRl1lMll_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1lMll_MM_SRSS1->Sumw2(); 
  h_DeltaRl1lMll_MM_SRSS2 = new TH2F("h_DeltaRl1lMll_MM_SRSS2", "h_DeltaRl1lMll_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1lMll_MM_SRSS2->Sumw2();
  h_DeltaRl1lMll_MM_SRSS3 = new TH2F("h_DeltaRl1lMll_MM_SRSS3", "h_DeltaRl1lMll_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1lMll_MM_SRSS3->Sumw2();
  h_DeltaRl1lMll_MM_SRSS4 = new TH2F("h_DeltaRl1lMll_MM_SRSS4", "h_DeltaRl1lMll_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1lMll_MM_SRSS4->Sumw2(); 
  h_DeltaRl1lMll_EM_SRSS1 = new TH2F("h_DeltaRl1lMll_EM_SRSS1", "h_DeltaRl1lMll_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1lMll_EM_SRSS1->Sumw2();
  h_DeltaRl1lMll_EM_SRSS2 = new TH2F("h_DeltaRl1lMll_EM_SRSS2", "h_DeltaRl1lMll_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1lMll_EM_SRSS2->Sumw2();
  h_DeltaRl1lMll_EE_SROS1 = new TH2F("h_DeltaRl1lMll_EE_SROS1", "h_DeltaRl1lMll_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1lMll_EE_SROS1->Sumw2(); 
  h_DeltaRl1lMll_MM_SROS1 = new TH2F("h_DeltaRl1lMll_MM_SROS1", "h_DeltaRl1lMll_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1lMll_MM_SROS1->Sumw2();
  h_DeltaRl1lMll_EM_SROS1 = new TH2F("h_DeltaRl1lMll_EM_SROS1", "h_DeltaRl1lMll_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRl1lMll_EM_SROS1->Sumw2();
  
  h_DeltaRZl0lMll_EE_SRSS1 = new TH2F("h_DeltaRZl0lMll_EE_SRSS1", "h_DeltaRZl0lMll_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0lMll_EE_SRSS1->Sumw2();
  h_DeltaRZl0lMll_EE_SRSS2 = new TH2F("h_DeltaRZl0lMll_EE_SRSS2", "h_DeltaRZl0lMll_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0lMll_EE_SRSS2->Sumw2();
  h_DeltaRZl0lMll_MM_SRSS1 = new TH2F("h_DeltaRZl0lMll_MM_SRSS1", "h_DeltaRZl0lMll_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0lMll_MM_SRSS1->Sumw2();
  h_DeltaRZl0lMll_MM_SRSS2 = new TH2F("h_DeltaRZl0lMll_MM_SRSS2", "h_DeltaRZl0lMll_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0lMll_MM_SRSS2->Sumw2();
  h_DeltaRZl0lMll_MM_SRSS3 = new TH2F("h_DeltaRZl0lMll_MM_SRSS3", "h_DeltaRZl0lMll_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0lMll_MM_SRSS3->Sumw2();
  h_DeltaRZl0lMll_MM_SRSS4 = new TH2F("h_DeltaRZl0lMll_MM_SRSS4", "h_DeltaRZl0lMll_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0lMll_MM_SRSS4->Sumw2();
  h_DeltaRZl0lMll_EM_SRSS1 = new TH2F("h_DeltaRZl0lMll_EM_SRSS1", "h_DeltaRZl0lMll_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0lMll_EM_SRSS1->Sumw2();
  h_DeltaRZl0lMll_EM_SRSS2 = new TH2F("h_DeltaRZl0lMll_EM_SRSS2", "h_DeltaRZl0lMll_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0lMll_EM_SRSS2->Sumw2();
  h_DeltaRZl0lMll_EE_SROS1 = new TH2F("h_DeltaRZl0lMll_EE_SROS1", "h_DeltaRZl0lMll_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0lMll_EE_SROS1->Sumw2();
  h_DeltaRZl0lMll_MM_SROS1 = new TH2F("h_DeltaRZl0lMll_MM_SROS1", "h_DeltaRZl0lMll_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0lMll_MM_SROS1->Sumw2();
  h_DeltaRZl0lMll_EM_SROS1 = new TH2F("h_DeltaRZl0lMll_EM_SROS1", "h_DeltaRZl0lMll_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl0lMll_EM_SROS1->Sumw2();
  
  h_DeltaRZl1lMll_EE_SRSS1 = new TH2F("h_DeltaRZl1lMll_EE_SRSS1", "h_DeltaRZl1lMll_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1lMll_EE_SRSS1->Sumw2();
  h_DeltaRZl1lMll_EE_SRSS2 = new TH2F("h_DeltaRZl1lMll_EE_SRSS2", "h_DeltaRZl1lMll_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1lMll_EE_SRSS2->Sumw2();
  h_DeltaRZl1lMll_MM_SRSS1 = new TH2F("h_DeltaRZl1lMll_MM_SRSS1", "h_DeltaRZl1lMll_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1lMll_MM_SRSS1->Sumw2(); 
  h_DeltaRZl1lMll_MM_SRSS2 = new TH2F("h_DeltaRZl1lMll_MM_SRSS2", "h_DeltaRZl1lMll_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1lMll_MM_SRSS2->Sumw2();
  h_DeltaRZl1lMll_MM_SRSS3 = new TH2F("h_DeltaRZl1lMll_MM_SRSS3", "h_DeltaRZl1lMll_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1lMll_MM_SRSS3->Sumw2();
  h_DeltaRZl1lMll_MM_SRSS4 = new TH2F("h_DeltaRZl1lMll_MM_SRSS4", "h_DeltaRZl1lMll_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1lMll_MM_SRSS4->Sumw2(); 
  h_DeltaRZl1lMll_EM_SRSS1 = new TH2F("h_DeltaRZl1lMll_EM_SRSS1", "h_DeltaRZl1lMll_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1lMll_EM_SRSS1->Sumw2();
  h_DeltaRZl1lMll_EM_SRSS2 = new TH2F("h_DeltaRZl1lMll_EM_SRSS2", "h_DeltaRZl1lMll_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1lMll_EM_SRSS2->Sumw2();
  h_DeltaRZl1lMll_EE_SROS1 = new TH2F("h_DeltaRZl1lMll_EE_SROS1", "h_DeltaRZl1lMll_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1lMll_EE_SROS1->Sumw2(); 
  h_DeltaRZl1lMll_MM_SROS1 = new TH2F("h_DeltaRZl1lMll_MM_SROS1", "h_DeltaRZl1lMll_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1lMll_MM_SROS1->Sumw2();
  h_DeltaRZl1lMll_EM_SROS1 = new TH2F("h_DeltaRZl1lMll_EM_SROS1", "h_DeltaRZl1lMll_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaRZl1lMll_EM_SROS1->Sumw2();  
  
  h_DeltaEtaZl0lMll_EE_SRSS1 = new TH2F("h_DeltaEtaZl0lMll_EE_SRSS1", "h_DeltaEtaZl0lMll_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0lMll_EE_SRSS1->Sumw2();
  h_DeltaEtaZl0lMll_EE_SRSS2 = new TH2F("h_DeltaEtaZl0lMll_EE_SRSS2", "h_DeltaEtaZl0lMll_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0lMll_EE_SRSS2->Sumw2();
  h_DeltaEtaZl0lMll_MM_SRSS1 = new TH2F("h_DeltaEtaZl0lMll_MM_SRSS1", "h_DeltaEtaZl0lMll_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0lMll_MM_SRSS1->Sumw2();
  h_DeltaEtaZl0lMll_MM_SRSS2 = new TH2F("h_DeltaEtaZl0lMll_MM_SRSS2", "h_DeltaEtaZl0lMll_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0lMll_MM_SRSS2->Sumw2();
  h_DeltaEtaZl0lMll_MM_SRSS3 = new TH2F("h_DeltaEtaZl0lMll_MM_SRSS3", "h_DeltaEtaZl0lMll_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0lMll_MM_SRSS3->Sumw2();
  h_DeltaEtaZl0lMll_MM_SRSS4 = new TH2F("h_DeltaEtaZl0lMll_MM_SRSS4", "h_DeltaEtaZl0lMll_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0lMll_MM_SRSS4->Sumw2();
  h_DeltaEtaZl0lMll_EM_SRSS1 = new TH2F("h_DeltaEtaZl0lMll_EM_SRSS1", "h_DeltaEtaZl0lMll_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0lMll_EM_SRSS1->Sumw2();
  h_DeltaEtaZl0lMll_EM_SRSS2 = new TH2F("h_DeltaEtaZl0lMll_EM_SRSS2", "h_DeltaEtaZl0lMll_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0lMll_EM_SRSS2->Sumw2();
  h_DeltaEtaZl0lMll_EE_SROS1 = new TH2F("h_DeltaEtaZl0lMll_EE_SROS1", "h_DeltaEtaZl0lMll_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0lMll_EE_SROS1->Sumw2();
  h_DeltaEtaZl0lMll_MM_SROS1 = new TH2F("h_DeltaEtaZl0lMll_MM_SROS1", "h_DeltaEtaZl0lMll_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0lMll_MM_SROS1->Sumw2();
  h_DeltaEtaZl0lMll_EM_SROS1 = new TH2F("h_DeltaEtaZl0lMll_EM_SROS1", "h_DeltaEtaZl0lMll_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl0lMll_EM_SROS1->Sumw2();
  
  h_DeltaEtaZl1lMll_EE_SRSS1 = new TH2F("h_DeltaEtaZl1lMll_EE_SRSS1", "h_DeltaEtaZl1lMll_EE_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1lMll_EE_SRSS1->Sumw2();
  h_DeltaEtaZl1lMll_EE_SRSS2 = new TH2F("h_DeltaEtaZl1lMll_EE_SRSS2", "h_DeltaEtaZl1lMll_EE_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1lMll_EE_SRSS2->Sumw2();
  h_DeltaEtaZl1lMll_MM_SRSS1 = new TH2F("h_DeltaEtaZl1lMll_MM_SRSS1", "h_DeltaEtaZl1lMll_MM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1lMll_MM_SRSS1->Sumw2(); 
  h_DeltaEtaZl1lMll_MM_SRSS2 = new TH2F("h_DeltaEtaZl1lMll_MM_SRSS2", "h_DeltaEtaZl1lMll_MM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1lMll_MM_SRSS2->Sumw2();
  h_DeltaEtaZl1lMll_MM_SRSS3 = new TH2F("h_DeltaEtaZl1lMll_MM_SRSS3", "h_DeltaEtaZl1lMll_MM_SRSS3", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1lMll_MM_SRSS3->Sumw2();
  h_DeltaEtaZl1lMll_MM_SRSS4 = new TH2F("h_DeltaEtaZl1lMll_MM_SRSS4", "h_DeltaEtaZl1lMll_MM_SRSS4", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1lMll_MM_SRSS4->Sumw2(); 
  h_DeltaEtaZl1lMll_EM_SRSS1 = new TH2F("h_DeltaEtaZl1lMll_EM_SRSS1", "h_DeltaEtaZl1lMll_EM_SRSS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1lMll_EM_SRSS1->Sumw2();
  h_DeltaEtaZl1lMll_EM_SRSS2 = new TH2F("h_DeltaEtaZl1lMll_EM_SRSS2", "h_DeltaEtaZl1lMll_EM_SRSS2", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1lMll_EM_SRSS2->Sumw2();
  h_DeltaEtaZl1lMll_EE_SROS1 = new TH2F("h_DeltaEtaZl1lMll_EE_SROS1", "h_DeltaEtaZl1lMll_EE_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1lMll_EE_SROS1->Sumw2(); 
  h_DeltaEtaZl1lMll_MM_SROS1 = new TH2F("h_DeltaEtaZl1lMll_MM_SROS1", "h_DeltaEtaZl1lMll_MM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1lMll_MM_SROS1->Sumw2();
  h_DeltaEtaZl1lMll_EM_SROS1 = new TH2F("h_DeltaEtaZl1lMll_EM_SROS1", "h_DeltaEtaZl1lMll_EM_SROS1", 70, 0, 7 ,130, 0, 129);  h_DeltaEtaZl1lMll_EM_SROS1->Sumw2();    
  
  h_mTlllMll_EE_SRSS1 = new TH2F("h_mTlllMll_EE_SRSS1", "h_mTlllMll_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTlllMll_EE_SRSS1->Sumw2();
  h_mTlllMll_EE_SRSS2 = new TH2F("h_mTlllMll_EE_SRSS2", "h_mTlllMll_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTlllMll_EE_SRSS2->Sumw2();
  h_mTlllMll_MM_SRSS1 = new TH2F("h_mTlllMll_MM_SRSS1", "h_mTlllMll_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTlllMll_MM_SRSS1->Sumw2(); 
  h_mTlllMll_MM_SRSS2 = new TH2F("h_mTlllMll_MM_SRSS2", "h_mTlllMll_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTlllMll_MM_SRSS2->Sumw2();
  h_mTlllMll_MM_SRSS3 = new TH2F("h_mTlllMll_MM_SRSS3", "h_mTlllMll_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_mTlllMll_MM_SRSS3->Sumw2();
  h_mTlllMll_MM_SRSS4 = new TH2F("h_mTlllMll_MM_SRSS4", "h_mTlllMll_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_mTlllMll_MM_SRSS4->Sumw2(); 
  h_mTlllMll_EM_SRSS1 = new TH2F("h_mTlllMll_EM_SRSS1", "h_mTlllMll_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mTlllMll_EM_SRSS1->Sumw2();
  h_mTlllMll_EM_SRSS2 = new TH2F("h_mTlllMll_EM_SRSS2", "h_mTlllMll_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mTlllMll_EM_SRSS2->Sumw2();
  h_mTlllMll_EE_SROS1 = new TH2F("h_mTlllMll_EE_SROS1", "h_mTlllMll_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTlllMll_EE_SROS1->Sumw2(); 
  h_mTlllMll_MM_SROS1 = new TH2F("h_mTlllMll_MM_SROS1", "h_mTlllMll_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTlllMll_MM_SROS1->Sumw2();
  h_mTlllMll_EM_SROS1 = new TH2F("h_mTlllMll_EM_SROS1", "h_mTlllMll_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mTlllMll_EM_SROS1->Sumw2();

  
  h_Mljj_EE_SRSS1 = new TH2F("h_Mljj_EE_SRSS1", "h_Mljj_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_Mljj_EE_SRSS1->Sumw2();
  h_Mljj_EE_SRSS2 = new TH2F("h_Mljj_EE_SRSS2", "h_Mljj_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_Mljj_EE_SRSS2->Sumw2();
  h_Mljj_MM_SRSS1 = new TH2F("h_Mljj_MM_SRSS1", "h_Mljj_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_Mljj_MM_SRSS1->Sumw2();
  h_Mljj_MM_SRSS2 = new TH2F("h_Mljj_MM_SRSS2", "h_Mljj_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_Mljj_MM_SRSS2->Sumw2();
  h_Mljj_MM_SRSS3 = new TH2F("h_Mljj_MM_SRSS3", "h_Mljj_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_Mljj_MM_SRSS3->Sumw2();
  h_Mljj_MM_SRSS4 = new TH2F("h_Mljj_MM_SRSS4", "h_Mljj_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_Mljj_MM_SRSS4->Sumw2();
  h_Mljj_EM_SRSS1 = new TH2F("h_Mljj_EM_SRSS1", "h_Mljj_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_Mljj_EM_SRSS1->Sumw2();
  h_Mljj_EM_SRSS2 = new TH2F("h_Mljj_EM_SRSS2", "h_Mljj_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_Mljj_EM_SRSS2->Sumw2();
  h_Mljj_EE_SROS1 = new TH2F("h_Mljj_EE_SROS1", "h_Mljj_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_Mljj_EE_SROS1->Sumw2();
  h_Mljj_MM_SROS1 = new TH2F("h_Mljj_MM_SROS1", "h_Mljj_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_Mljj_MM_SROS1->Sumw2();
  h_Mljj_EM_SROS1 = new TH2F("h_Mljj_EM_SROS1", "h_Mljj_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_Mljj_EM_SROS1->Sumw2();
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
  h_mt2_EE_SRSS1 = new TH2F("h_mt2_EE_SRSS1", "h_mt2_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mt2_EE_SRSS1->Sumw2();
  h_mt2_EE_SRSS2 = new TH2F("h_mt2_EE_SRSS2", "h_mt2_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mt2_EE_SRSS2->Sumw2();
  h_mt2_MM_SRSS1 = new TH2F("h_mt2_MM_SRSS1", "h_mt2_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mt2_MM_SRSS1->Sumw2();
  h_mt2_MM_SRSS2 = new TH2F("h_mt2_MM_SRSS2", "h_mt2_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mt2_MM_SRSS2->Sumw2();  
  h_mt2_MM_SRSS3 = new TH2F("h_mt2_MM_SRSS3", "h_mt2_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_mt2_MM_SRSS3->Sumw2();
  h_mt2_MM_SRSS4 = new TH2F("h_mt2_MM_SRSS4", "h_mt2_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_mt2_MM_SRSS4->Sumw2();
  h_mt2_EM_SRSS1 = new TH2F("h_mt2_EM_SRSS1", "h_mt2_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mt2_EM_SRSS1->Sumw2();
  h_mt2_EM_SRSS2 = new TH2F("h_mt2_EM_SRSS2", "h_mt2_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mt2_EM_SRSS2->Sumw2();
  h_mt2_EE_SROS1 = new TH2F("h_mt2_EE_SROS1", "h_mt2_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_mt2_EE_SROS1->Sumw2();
  h_mt2_MM_SROS1 = new TH2F("h_mt2_MM_SROS1", "h_mt2_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mt2_MM_SROS1->Sumw2();
  h_mt2_EM_SROS1 = new TH2F("h_mt2_EM_SROS1", "h_mt2_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mt2_EM_SROS1->Sumw2();
/*--------------------------------------------------------------------------------*/ 
  h_mt2J_EE_SRSS1 = new TH2F("h_mt2J_EE_SRSS1", "h_mt2J_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mt2J_EE_SRSS1->Sumw2();
  h_mt2J_EE_SRSS2 = new TH2F("h_mt2J_EE_SRSS2", "h_mt2J_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mt2J_EE_SRSS2->Sumw2();
  h_mt2J_MM_SRSS1 = new TH2F("h_mt2J_MM_SRSS1", "h_mt2J_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mt2J_MM_SRSS1->Sumw2();
  h_mt2J_MM_SRSS2 = new TH2F("h_mt2J_MM_SRSS2", "h_mt2J_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mt2J_MM_SRSS2->Sumw2();  
  h_mt2J_MM_SRSS3 = new TH2F("h_mt2J_MM_SRSS3", "h_mt2J_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_mt2J_MM_SRSS3->Sumw2();
  h_mt2J_MM_SRSS4 = new TH2F("h_mt2J_MM_SRSS4", "h_mt2J_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_mt2J_MM_SRSS4->Sumw2();
  h_mt2J_EM_SRSS1 = new TH2F("h_mt2J_EM_SRSS1", "h_mt2J_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mt2J_EM_SRSS1->Sumw2();
  h_mt2J_EM_SRSS2 = new TH2F("h_mt2J_EM_SRSS2", "h_mt2J_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mt2J_EM_SRSS2->Sumw2();
  h_mt2J_EE_SROS1 = new TH2F("h_mt2J_EE_SROS1", "h_mt2J_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_mt2J_EE_SROS1->Sumw2();
  h_mt2J_MM_SROS1 = new TH2F("h_mt2J_MM_SROS1", "h_mt2J_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mt2J_MM_SROS1->Sumw2();
  h_mt2J_EM_SROS1 = new TH2F("h_mt2J_EM_SROS1", "h_mt2J_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mt2J_EM_SROS1->Sumw2();  
  
  /*--------------------------------------------------------------------------------*/ 
  h_mt2J0LepM_EE_SRSS1 = new TH2F("h_mt2J0LepM_EE_SRSS1", "h_mt2J0LepM_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mt2J0LepM_EE_SRSS1->Sumw2();
  h_mt2J0LepM_EE_SRSS2 = new TH2F("h_mt2J0LepM_EE_SRSS2", "h_mt2J0LepM_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mt2J0LepM_EE_SRSS2->Sumw2();
  h_mt2J0LepM_MM_SRSS1 = new TH2F("h_mt2J0LepM_MM_SRSS1", "h_mt2J0LepM_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mt2J0LepM_MM_SRSS1->Sumw2();
  h_mt2J0LepM_MM_SRSS2 = new TH2F("h_mt2J0LepM_MM_SRSS2", "h_mt2J0LepM_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mt2J0LepM_MM_SRSS2->Sumw2();  
  h_mt2J0LepM_MM_SRSS3 = new TH2F("h_mt2J0LepM_MM_SRSS3", "h_mt2J0LepM_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_mt2J0LepM_MM_SRSS3->Sumw2();
  h_mt2J0LepM_MM_SRSS4 = new TH2F("h_mt2J0LepM_MM_SRSS4", "h_mt2J0LepM_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_mt2J0LepM_MM_SRSS4->Sumw2();
  h_mt2J0LepM_EM_SRSS1 = new TH2F("h_mt2J0LepM_EM_SRSS1", "h_mt2J0LepM_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_mt2J0LepM_EM_SRSS1->Sumw2();
  h_mt2J0LepM_EM_SRSS2 = new TH2F("h_mt2J0LepM_EM_SRSS2", "h_mt2J0LepM_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_mt2J0LepM_EM_SRSS2->Sumw2();
  h_mt2J0LepM_EE_SROS1 = new TH2F("h_mt2J0LepM_EE_SROS1", "h_mt2J0LepM_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_mt2J0LepM_EE_SROS1->Sumw2();
  h_mt2J0LepM_MM_SROS1 = new TH2F("h_mt2J0LepM_MM_SROS1", "h_mt2J0LepM_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mt2J0LepM_MM_SROS1->Sumw2();
  h_mt2J0LepM_EM_SROS1 = new TH2F("h_mt2J0LepM_EM_SROS1", "h_mt2J0LepM_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_mt2J0LepM_EM_SROS1->Sumw2();  

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
  h_ptll_EE_SRSS1 = new TH2F("h_ptll_EE_SRSS1", "h_ptll_EE_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ptll_EE_SRSS1->Sumw2();
  h_ptll_EE_SRSS2 = new TH2F("h_ptll_EE_SRSS2", "h_ptll_EE_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ptll_EE_SRSS2->Sumw2();
  h_ptll_MM_SRSS1 = new TH2F("h_ptll_MM_SRSS1", "h_ptll_MM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ptll_MM_SRSS1->Sumw2();  
  h_ptll_MM_SRSS2 = new TH2F("h_ptll_MM_SRSS2", "h_ptll_MM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ptll_MM_SRSS2->Sumw2();
  h_ptll_MM_SRSS3 = new TH2F("h_ptll_MM_SRSS3", "h_ptll_MM_SRSS3", 100, 0, 500 ,130, 0, 129);  h_ptll_MM_SRSS3->Sumw2();
  h_ptll_MM_SRSS4 = new TH2F("h_ptll_MM_SRSS4", "h_ptll_MM_SRSS4", 100, 0, 500 ,130, 0, 129);  h_ptll_MM_SRSS4->Sumw2();
  h_ptll_EM_SRSS1 = new TH2F("h_ptll_EM_SRSS1", "h_ptll_EM_SRSS1", 100, 0, 500 ,130, 0, 129);  h_ptll_EM_SRSS1->Sumw2();
  h_ptll_EM_SRSS2 = new TH2F("h_ptll_EM_SRSS2", "h_ptll_EM_SRSS2", 100, 0, 500 ,130, 0, 129);  h_ptll_EM_SRSS2->Sumw2();
  h_ptll_EE_SROS1 = new TH2F("h_ptll_EE_SROS1", "h_ptll_EE_SROS1", 100, 0, 500 ,130, 0, 129);  h_ptll_EE_SROS1->Sumw2();
  h_ptll_MM_SROS1 = new TH2F("h_ptll_MM_SROS1", "h_ptll_MM_SROS1", 100, 0, 500 ,130, 0, 129);  h_ptll_MM_SROS1->Sumw2();
  h_ptll_EM_SROS1 = new TH2F("h_ptll_EM_SROS1", "h_ptll_EM_SROS1", 100, 0, 500 ,130, 0, 129);  h_ptll_EM_SROS1->Sumw2();
  
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
    
    if(EE_SRSS1) h_mt2_EE_SRSS1->Write();
    if(EE_SRSS2) h_mt2_EE_SRSS2->Write();
    if(MM_SRSS1) h_mt2_MM_SRSS1->Write();
    if(MM_SRSS2) h_mt2_MM_SRSS2->Write();  
    if(MM_SRSS3) h_mt2_MM_SRSS3->Write();
    if(MM_SRSS4) h_mt2_MM_SRSS4->Write();
    if(EM_SRSS1) h_mt2_EM_SRSS1->Write();
    if(EM_SRSS2) h_mt2_EM_SRSS2->Write();
    if(EE_SROS1) h_mt2_EE_SROS1->Write();
    if(MM_SROS1) h_mt2_MM_SROS1->Write();
    if(EM_SROS1) h_mt2_EM_SROS1->Write();
/*--------------------------------------------------------------------------------*/     
    
    if(EE_SRSS1) h_mt2J_EE_SRSS1->Write();
    if(EE_SRSS2) h_mt2J_EE_SRSS2->Write();
    if(MM_SRSS1) h_mt2J_MM_SRSS1->Write();
    if(MM_SRSS2) h_mt2J_MM_SRSS2->Write();  
    if(MM_SRSS3) h_mt2J_MM_SRSS3->Write();
    if(MM_SRSS4) h_mt2J_MM_SRSS4->Write();
    if(EM_SRSS1) h_mt2J_EM_SRSS1->Write();
    if(EM_SRSS2) h_mt2J_EM_SRSS2->Write();
    if(EE_SROS1) h_mt2J_EE_SROS1->Write();
    if(MM_SROS1) h_mt2J_MM_SROS1->Write();
    if(EM_SROS1) h_mt2J_EM_SROS1->Write();    
/*--------------------------------------------------------------------------------*/     
    
    if(EE_SRSS1) h_mt2J0LepM_EE_SRSS1->Write();
    if(EE_SRSS2) h_mt2J0LepM_EE_SRSS2->Write();
    if(MM_SRSS1) h_mt2J0LepM_MM_SRSS1->Write();
    if(MM_SRSS2) h_mt2J0LepM_MM_SRSS2->Write();  
    if(MM_SRSS3) h_mt2J0LepM_MM_SRSS3->Write();
    if(MM_SRSS4) h_mt2J0LepM_MM_SRSS4->Write();
    if(EM_SRSS1) h_mt2J0LepM_EM_SRSS1->Write();
    if(EM_SRSS2) h_mt2J0LepM_EM_SRSS2->Write();
    if(EE_SROS1) h_mt2J0LepM_EE_SROS1->Write();
    if(MM_SROS1) h_mt2J0LepM_MM_SROS1->Write();
    if(EM_SROS1) h_mt2J0LepM_EM_SROS1->Write();        
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
  if(EE_SRSS1) h_ptll_EE_SRSS1->Write(); 
  if(EE_SRSS2) h_ptll_EE_SRSS2->Write(); 
  if(MM_SRSS1) h_ptll_MM_SRSS1->Write();   
  if(MM_SRSS2) h_ptll_MM_SRSS2->Write(); 
  if(MM_SRSS3) h_ptll_MM_SRSS3->Write(); 
  if(MM_SRSS4) h_ptll_MM_SRSS4->Write(); 
  if(EM_SRSS1) h_ptll_EM_SRSS1->Write(); 
  if(EM_SRSS2) h_ptll_EM_SRSS2->Write(); 
  if(EE_SROS1) h_ptll_EE_SROS1->Write(); 
  if(MM_SROS1) h_ptll_MM_SROS1->Write(); 
  if(EM_SROS1) h_ptll_EM_SROS1->Write(); 
  
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
  
  /*--------------------------------------------------------------------------------*/    
  if(EE_SRSS1) h_ml0llost_EE_SRSS1->Write(); 
  if(EE_SRSS2) h_ml0llost_EE_SRSS2->Write();
  if(MM_SRSS1) h_ml0llost_MM_SRSS1->Write();
  if(MM_SRSS2) h_ml0llost_MM_SRSS2->Write();
  if(MM_SRSS3) h_ml0llost_MM_SRSS3->Write();
  if(MM_SRSS4) h_ml0llost_MM_SRSS4->Write();
  if(EM_SRSS1) h_ml0llost_EM_SRSS1->Write();
  if(EM_SRSS2) h_ml0llost_EM_SRSS2->Write();
  if(EE_SROS1) h_ml0llost_EE_SROS1->Write();
  if(MM_SROS1) h_ml0llost_MM_SROS1->Write();
  if(EM_SROS1) h_ml0llost_EM_SROS1->Write();
/*--------------------------------------------------------------------------------*/    
  if(EE_SRSS1) h_ml1llost_EE_SRSS1->Write();
  if(EE_SRSS2) h_ml1llost_EE_SRSS2->Write();
  if(MM_SRSS1) h_ml1llost_MM_SRSS1->Write();
  if(MM_SRSS2) h_ml1llost_MM_SRSS2->Write();
  if(MM_SRSS3) h_ml1llost_MM_SRSS3->Write();
  if(MM_SRSS4) h_ml1llost_MM_SRSS4->Write();
  if(EM_SRSS1) h_ml1llost_EM_SRSS1->Write();
  if(EM_SRSS2) h_ml1llost_EM_SRSS2->Write();
  if(EE_SROS1) h_ml1llost_EE_SROS1->Write();
  if(MM_SROS1) h_ml1llost_MM_SROS1->Write();
  if(EM_SROS1) h_ml1llost_EM_SROS1->Write();
/*--------------------------------------------------------------------------------*/    
  
  if(EE_SRSS1) h_mTl0llost_EE_SRSS1->Write();
  if(EE_SRSS2) h_mTl0llost_EE_SRSS2->Write();
  if(MM_SRSS1) h_mTl0llost_MM_SRSS1->Write();
  if(MM_SRSS2) h_mTl0llost_MM_SRSS2->Write();
  if(MM_SRSS3) h_mTl0llost_MM_SRSS3->Write();
  if(MM_SRSS4) h_mTl0llost_MM_SRSS4->Write();
  if(EM_SRSS1) h_mTl0llost_EM_SRSS1->Write();
  if(EM_SRSS2) h_mTl0llost_EM_SRSS2->Write();
  if(EE_SROS1) h_mTl0llost_EE_SROS1->Write();
  if(MM_SROS1) h_mTl0llost_MM_SROS1->Write();
  if(EM_SROS1) h_mTl0llost_EM_SROS1->Write();
/*--------------------------------------------------------------------------------*/    
  if(EE_SRSS1) h_mTl1llost_EE_SRSS1->Write();
  if(EE_SRSS2) h_mTl1llost_EE_SRSS2->Write();
  if(MM_SRSS1) h_mTl1llost_MM_SRSS1->Write();
  if(MM_SRSS2) h_mTl1llost_MM_SRSS2->Write();
  if(MM_SRSS3) h_mTl1llost_MM_SRSS3->Write();
  if(MM_SRSS4) h_mTl1llost_MM_SRSS4->Write();
  if(EM_SRSS1) h_mTl1llost_EM_SRSS1->Write();
  if(EM_SRSS2) h_mTl1llost_EM_SRSS2->Write();
  if(EE_SROS1) h_mTl1llost_EE_SROS1->Write();
  if(MM_SROS1) h_mTl1llost_MM_SROS1->Write();
  if(EM_SROS1) h_mTl1llost_EM_SROS1->Write();
  
/*--------------------------------------------------------------------------------*/    
  
  if(EE_SRSS1) h_DeltaRl0llost_EE_SRSS1->Write();
  if(EE_SRSS2) h_DeltaRl0llost_EE_SRSS2->Write();
  if(MM_SRSS1) h_DeltaRl0llost_MM_SRSS1->Write();
  if(MM_SRSS2) h_DeltaRl0llost_MM_SRSS2->Write();
  if(MM_SRSS3) h_DeltaRl0llost_MM_SRSS3->Write();
  if(MM_SRSS4) h_DeltaRl0llost_MM_SRSS4->Write();
  if(EM_SRSS1) h_DeltaRl0llost_EM_SRSS1->Write();
  if(EM_SRSS2) h_DeltaRl0llost_EM_SRSS2->Write();
  if(EE_SROS1) h_DeltaRl0llost_EE_SROS1->Write();
  if(MM_SROS1) h_DeltaRl0llost_MM_SROS1->Write();
  if(EM_SROS1) h_DeltaRl0llost_EM_SROS1->Write();
/*--------------------------------------------------------------------------------*/    
  if(EE_SRSS1) h_DeltaRl1llost_EE_SRSS1->Write();
  if(EE_SRSS2) h_DeltaRl1llost_EE_SRSS2->Write();
  if(MM_SRSS1) h_DeltaRl1llost_MM_SRSS1->Write();
  if(MM_SRSS2) h_DeltaRl1llost_MM_SRSS2->Write();
  if(MM_SRSS3) h_DeltaRl1llost_MM_SRSS3->Write();
  if(MM_SRSS4) h_DeltaRl1llost_MM_SRSS4->Write();
  if(EM_SRSS1) h_DeltaRl1llost_EM_SRSS1->Write();
  if(EM_SRSS2) h_DeltaRl1llost_EM_SRSS2->Write();
  if(EE_SROS1) h_DeltaRl1llost_EE_SROS1->Write();
  if(MM_SROS1) h_DeltaRl1llost_MM_SROS1->Write();
  if(EM_SROS1) h_DeltaRl1llost_EM_SROS1->Write();
  
/*--------------------------------------------------------------------------------*/    
  if(EE_SRSS1) h_DeltaRZl0llost_EE_SRSS1->Write();
  if(EE_SRSS2) h_DeltaRZl0llost_EE_SRSS2->Write();
  if(MM_SRSS1) h_DeltaRZl0llost_MM_SRSS1->Write();
  if(MM_SRSS2) h_DeltaRZl0llost_MM_SRSS2->Write();
  if(MM_SRSS3) h_DeltaRZl0llost_MM_SRSS3->Write();
  if(MM_SRSS4) h_DeltaRZl0llost_MM_SRSS4->Write();
  if(EM_SRSS1) h_DeltaRZl0llost_EM_SRSS1->Write();
  if(EM_SRSS2) h_DeltaRZl0llost_EM_SRSS2->Write();
  if(EE_SROS1) h_DeltaRZl0llost_EE_SROS1->Write();
  if(MM_SROS1) h_DeltaRZl0llost_MM_SROS1->Write();
  if(EM_SROS1) h_DeltaRZl0llost_EM_SROS1->Write();
/*--------------------------------------------------------------------------------*/    
  if(EE_SRSS1) h_DeltaRZl1llost_EE_SRSS1->Write();
  if(EE_SRSS2) h_DeltaRZl1llost_EE_SRSS2->Write();
  if(MM_SRSS1) h_DeltaRZl1llost_MM_SRSS1->Write();
  if(MM_SRSS2) h_DeltaRZl1llost_MM_SRSS2->Write();
  if(MM_SRSS3) h_DeltaRZl1llost_MM_SRSS3->Write();
  if(MM_SRSS4) h_DeltaRZl1llost_MM_SRSS4->Write();
  if(EM_SRSS1) h_DeltaRZl1llost_EM_SRSS1->Write();
  if(EM_SRSS2) h_DeltaRZl1llost_EM_SRSS2->Write();
  if(EE_SROS1) h_DeltaRZl1llost_EE_SROS1->Write();
  if(MM_SROS1) h_DeltaRZl1llost_MM_SROS1->Write();
  if(EM_SROS1) h_DeltaRZl1llost_EM_SROS1->Write();  
  
/*--------------------------------------------------------------------------------*/    
  if(EE_SRSS1) h_DeltaEtaZl0llost_EE_SRSS1->Write();
  if(EE_SRSS2) h_DeltaEtaZl0llost_EE_SRSS2->Write();
  if(MM_SRSS1) h_DeltaEtaZl0llost_MM_SRSS1->Write();
  if(MM_SRSS2) h_DeltaEtaZl0llost_MM_SRSS2->Write();
  if(MM_SRSS3) h_DeltaEtaZl0llost_MM_SRSS3->Write();
  if(MM_SRSS4) h_DeltaEtaZl0llost_MM_SRSS4->Write();
  if(EM_SRSS1) h_DeltaEtaZl0llost_EM_SRSS1->Write();
  if(EM_SRSS2) h_DeltaEtaZl0llost_EM_SRSS2->Write();
  if(EE_SROS1) h_DeltaEtaZl0llost_EE_SROS1->Write();
  if(MM_SROS1) h_DeltaEtaZl0llost_MM_SROS1->Write();
  if(EM_SROS1) h_DeltaEtaZl0llost_EM_SROS1->Write();
/*--------------------------------------------------------------------------------*/    
  if(EE_SRSS1) h_DeltaEtaZl1llost_EE_SRSS1->Write();
  if(EE_SRSS2) h_DeltaEtaZl1llost_EE_SRSS2->Write();
  if(MM_SRSS1) h_DeltaEtaZl1llost_MM_SRSS1->Write();
  if(MM_SRSS2) h_DeltaEtaZl1llost_MM_SRSS2->Write();
  if(MM_SRSS3) h_DeltaEtaZl1llost_MM_SRSS3->Write();
  if(MM_SRSS4) h_DeltaEtaZl1llost_MM_SRSS4->Write();
  if(EM_SRSS1) h_DeltaEtaZl1llost_EM_SRSS1->Write();
  if(EM_SRSS2) h_DeltaEtaZl1llost_EM_SRSS2->Write();
  if(EE_SROS1) h_DeltaEtaZl1llost_EE_SROS1->Write();
  if(MM_SROS1) h_DeltaEtaZl1llost_MM_SROS1->Write();
  if(EM_SROS1) h_DeltaEtaZl1llost_EM_SROS1->Write();    
/*--------------------------------------------------------------------------------*/    
  if(EE_SRSS1) h_mTllllost_EE_SRSS1->Write();
  if(EE_SRSS2) h_mTllllost_EE_SRSS2->Write();
  if(MM_SRSS1) h_mTllllost_MM_SRSS1->Write();
  if(MM_SRSS2) h_mTllllost_MM_SRSS2->Write();
  if(MM_SRSS3) h_mTllllost_MM_SRSS3->Write();
  if(MM_SRSS4) h_mTllllost_MM_SRSS4->Write();
  if(EM_SRSS1) h_mTllllost_EM_SRSS1->Write();
  if(EM_SRSS2) h_mTllllost_EM_SRSS2->Write();
  if(EE_SROS1) h_mTllllost_EE_SROS1->Write();
  if(MM_SROS1) h_mTllllost_MM_SROS1->Write();
  if(EM_SROS1) h_mTllllost_EM_SROS1->Write();

  
/*--------------------------------------------------------------------------------*/    
  if(EE_SRSS1) h_ml0lsoft_EE_SRSS1->Write(); 
  if(EE_SRSS2) h_ml0lsoft_EE_SRSS2->Write();
  if(MM_SRSS1) h_ml0lsoft_MM_SRSS1->Write();
  if(MM_SRSS2) h_ml0lsoft_MM_SRSS2->Write();
  if(MM_SRSS3) h_ml0lsoft_MM_SRSS3->Write();
  if(MM_SRSS4) h_ml0lsoft_MM_SRSS4->Write();
  if(EM_SRSS1) h_ml0lsoft_EM_SRSS1->Write();
  if(EM_SRSS2) h_ml0lsoft_EM_SRSS2->Write();
  if(EE_SROS1) h_ml0lsoft_EE_SROS1->Write();
  if(MM_SROS1) h_ml0lsoft_MM_SROS1->Write();
  if(EM_SROS1) h_ml0lsoft_EM_SROS1->Write();
/*--------------------------------------------------------------------------------*/    
  if(EE_SRSS1) h_ml1lsoft_EE_SRSS1->Write();
  if(EE_SRSS2) h_ml1lsoft_EE_SRSS2->Write();
  if(MM_SRSS1) h_ml1lsoft_MM_SRSS1->Write();
  if(MM_SRSS2) h_ml1lsoft_MM_SRSS2->Write();
  if(MM_SRSS3) h_ml1lsoft_MM_SRSS3->Write();
  if(MM_SRSS4) h_ml1lsoft_MM_SRSS4->Write();
  if(EM_SRSS1) h_ml1lsoft_EM_SRSS1->Write();
  if(EM_SRSS2) h_ml1lsoft_EM_SRSS2->Write();
  if(EE_SROS1) h_ml1lsoft_EE_SROS1->Write();
  if(MM_SROS1) h_ml1lsoft_MM_SROS1->Write();
  if(EM_SROS1) h_ml1lsoft_EM_SROS1->Write();
/*--------------------------------------------------------------------------------*/    
  
  if(EE_SRSS1) h_mTl0lsoft_EE_SRSS1->Write();
  if(EE_SRSS2) h_mTl0lsoft_EE_SRSS2->Write();
  if(MM_SRSS1) h_mTl0lsoft_MM_SRSS1->Write();
  if(MM_SRSS2) h_mTl0lsoft_MM_SRSS2->Write();
  if(MM_SRSS3) h_mTl0lsoft_MM_SRSS3->Write();
  if(MM_SRSS4) h_mTl0lsoft_MM_SRSS4->Write();
  if(EM_SRSS1) h_mTl0lsoft_EM_SRSS1->Write();
  if(EM_SRSS2) h_mTl0lsoft_EM_SRSS2->Write();
  if(EE_SROS1) h_mTl0lsoft_EE_SROS1->Write();
  if(MM_SROS1) h_mTl0lsoft_MM_SROS1->Write();
  if(EM_SROS1) h_mTl0lsoft_EM_SROS1->Write();
/*--------------------------------------------------------------------------------*/    
  if(EE_SRSS1) h_mTl1lsoft_EE_SRSS1->Write();
  if(EE_SRSS2) h_mTl1lsoft_EE_SRSS2->Write();
  if(MM_SRSS1) h_mTl1lsoft_MM_SRSS1->Write();
  if(MM_SRSS2) h_mTl1lsoft_MM_SRSS2->Write();
  if(MM_SRSS3) h_mTl1lsoft_MM_SRSS3->Write();
  if(MM_SRSS4) h_mTl1lsoft_MM_SRSS4->Write();
  if(EM_SRSS1) h_mTl1lsoft_EM_SRSS1->Write();
  if(EM_SRSS2) h_mTl1lsoft_EM_SRSS2->Write();
  if(EE_SROS1) h_mTl1lsoft_EE_SROS1->Write();
  if(MM_SROS1) h_mTl1lsoft_MM_SROS1->Write();
  if(EM_SROS1) h_mTl1lsoft_EM_SROS1->Write();
  
/*--------------------------------------------------------------------------------*/    
  
  if(EE_SRSS1) h_DeltaRl0lsoft_EE_SRSS1->Write();
  if(EE_SRSS2) h_DeltaRl0lsoft_EE_SRSS2->Write();
  if(MM_SRSS1) h_DeltaRl0lsoft_MM_SRSS1->Write();
  if(MM_SRSS2) h_DeltaRl0lsoft_MM_SRSS2->Write();
  if(MM_SRSS3) h_DeltaRl0lsoft_MM_SRSS3->Write();
  if(MM_SRSS4) h_DeltaRl0lsoft_MM_SRSS4->Write();
  if(EM_SRSS1) h_DeltaRl0lsoft_EM_SRSS1->Write();
  if(EM_SRSS2) h_DeltaRl0lsoft_EM_SRSS2->Write();
  if(EE_SROS1) h_DeltaRl0lsoft_EE_SROS1->Write();
  if(MM_SROS1) h_DeltaRl0lsoft_MM_SROS1->Write();
  if(EM_SROS1) h_DeltaRl0lsoft_EM_SROS1->Write();
/*--------------------------------------------------------------------------------*/    
  if(EE_SRSS1) h_DeltaRl1lsoft_EE_SRSS1->Write();
  if(EE_SRSS2) h_DeltaRl1lsoft_EE_SRSS2->Write();
  if(MM_SRSS1) h_DeltaRl1lsoft_MM_SRSS1->Write();
  if(MM_SRSS2) h_DeltaRl1lsoft_MM_SRSS2->Write();
  if(MM_SRSS3) h_DeltaRl1lsoft_MM_SRSS3->Write();
  if(MM_SRSS4) h_DeltaRl1lsoft_MM_SRSS4->Write();
  if(EM_SRSS1) h_DeltaRl1lsoft_EM_SRSS1->Write();
  if(EM_SRSS2) h_DeltaRl1lsoft_EM_SRSS2->Write();
  if(EE_SROS1) h_DeltaRl1lsoft_EE_SROS1->Write();
  if(MM_SROS1) h_DeltaRl1lsoft_MM_SROS1->Write();
  if(EM_SROS1) h_DeltaRl1lsoft_EM_SROS1->Write();
  
/*--------------------------------------------------------------------------------*/    
  
  if(EE_SRSS1) h_DeltaRZl0lsoft_EE_SRSS1->Write();
  if(EE_SRSS2) h_DeltaRZl0lsoft_EE_SRSS2->Write();
  if(MM_SRSS1) h_DeltaRZl0lsoft_MM_SRSS1->Write();
  if(MM_SRSS2) h_DeltaRZl0lsoft_MM_SRSS2->Write();
  if(MM_SRSS3) h_DeltaRZl0lsoft_MM_SRSS3->Write();
  if(MM_SRSS4) h_DeltaRZl0lsoft_MM_SRSS4->Write();
  if(EM_SRSS1) h_DeltaRZl0lsoft_EM_SRSS1->Write();
  if(EM_SRSS2) h_DeltaRZl0lsoft_EM_SRSS2->Write();
  if(EE_SROS1) h_DeltaRZl0lsoft_EE_SROS1->Write();
  if(MM_SROS1) h_DeltaRZl0lsoft_MM_SROS1->Write();
  if(EM_SROS1) h_DeltaRZl0lsoft_EM_SROS1->Write();
/*--------------------------------------------------------------------------------*/    
  if(EE_SRSS1) h_DeltaRZl1lsoft_EE_SRSS1->Write();
  if(EE_SRSS2) h_DeltaRZl1lsoft_EE_SRSS2->Write();
  if(MM_SRSS1) h_DeltaRZl1lsoft_MM_SRSS1->Write();
  if(MM_SRSS2) h_DeltaRZl1lsoft_MM_SRSS2->Write();
  if(MM_SRSS3) h_DeltaRZl1lsoft_MM_SRSS3->Write();
  if(MM_SRSS4) h_DeltaRZl1lsoft_MM_SRSS4->Write();
  if(EM_SRSS1) h_DeltaRZl1lsoft_EM_SRSS1->Write();
  if(EM_SRSS2) h_DeltaRZl1lsoft_EM_SRSS2->Write();
  if(EE_SROS1) h_DeltaRZl1lsoft_EE_SROS1->Write();
  if(MM_SROS1) h_DeltaRZl1lsoft_MM_SROS1->Write();
  if(EM_SROS1) h_DeltaRZl1lsoft_EM_SROS1->Write();
/*--------------------------------------------------------------------------------*/    
  
  if(EE_SRSS1) h_DeltaEtaZl0lsoft_EE_SRSS1->Write();
  if(EE_SRSS2) h_DeltaEtaZl0lsoft_EE_SRSS2->Write();
  if(MM_SRSS1) h_DeltaEtaZl0lsoft_MM_SRSS1->Write();
  if(MM_SRSS2) h_DeltaEtaZl0lsoft_MM_SRSS2->Write();
  if(MM_SRSS3) h_DeltaEtaZl0lsoft_MM_SRSS3->Write();
  if(MM_SRSS4) h_DeltaEtaZl0lsoft_MM_SRSS4->Write();
  if(EM_SRSS1) h_DeltaEtaZl0lsoft_EM_SRSS1->Write();
  if(EM_SRSS2) h_DeltaEtaZl0lsoft_EM_SRSS2->Write();
  if(EE_SROS1) h_DeltaEtaZl0lsoft_EE_SROS1->Write();
  if(MM_SROS1) h_DeltaEtaZl0lsoft_MM_SROS1->Write();
  if(EM_SROS1) h_DeltaEtaZl0lsoft_EM_SROS1->Write();
/*--------------------------------------------------------------------------------*/    
  if(EE_SRSS1) h_DeltaEtaZl1lsoft_EE_SRSS1->Write();
  if(EE_SRSS2) h_DeltaEtaZl1lsoft_EE_SRSS2->Write();
  if(MM_SRSS1) h_DeltaEtaZl1lsoft_MM_SRSS1->Write();
  if(MM_SRSS2) h_DeltaEtaZl1lsoft_MM_SRSS2->Write();
  if(MM_SRSS3) h_DeltaEtaZl1lsoft_MM_SRSS3->Write();
  if(MM_SRSS4) h_DeltaEtaZl1lsoft_MM_SRSS4->Write();
  if(EM_SRSS1) h_DeltaEtaZl1lsoft_EM_SRSS1->Write();
  if(EM_SRSS2) h_DeltaEtaZl1lsoft_EM_SRSS2->Write();
  if(EE_SROS1) h_DeltaEtaZl1lsoft_EE_SROS1->Write();
  if(MM_SROS1) h_DeltaEtaZl1lsoft_MM_SROS1->Write();
  if(EM_SROS1) h_DeltaEtaZl1lsoft_EM_SROS1->Write();    
/*--------------------------------------------------------------------------------*/    
  if(EE_SRSS1) h_mTlllsoft_EE_SRSS1->Write();
  if(EE_SRSS2) h_mTlllsoft_EE_SRSS2->Write();
  if(MM_SRSS1) h_mTlllsoft_MM_SRSS1->Write();
  if(MM_SRSS2) h_mTlllsoft_MM_SRSS2->Write();
  if(MM_SRSS3) h_mTlllsoft_MM_SRSS3->Write();
  if(MM_SRSS4) h_mTlllsoft_MM_SRSS4->Write();
  if(EM_SRSS1) h_mTlllsoft_EM_SRSS1->Write();
  if(EM_SRSS2) h_mTlllsoft_EM_SRSS2->Write();
  if(EE_SROS1) h_mTlllsoft_EE_SROS1->Write();
  if(MM_SROS1) h_mTlllsoft_MM_SROS1->Write();
  if(EM_SROS1) h_mTlllsoft_EM_SROS1->Write();

  /*--------------------------------------------------------------------------------*/    
  if(EE_SRSS1) h_ml0loverlap_EE_SRSS1->Write(); 
  if(EE_SRSS2) h_ml0loverlap_EE_SRSS2->Write();
  if(MM_SRSS1) h_ml0loverlap_MM_SRSS1->Write();
  if(MM_SRSS2) h_ml0loverlap_MM_SRSS2->Write();
  if(MM_SRSS3) h_ml0loverlap_MM_SRSS3->Write();
  if(MM_SRSS4) h_ml0loverlap_MM_SRSS4->Write();
  if(EM_SRSS1) h_ml0loverlap_EM_SRSS1->Write();
  if(EM_SRSS2) h_ml0loverlap_EM_SRSS2->Write();
  if(EE_SROS1) h_ml0loverlap_EE_SROS1->Write();
  if(MM_SROS1) h_ml0loverlap_MM_SROS1->Write();
  if(EM_SROS1) h_ml0loverlap_EM_SROS1->Write();
/*--------------------------------------------------------------------------------*/    
  if(EE_SRSS1) h_ml1loverlap_EE_SRSS1->Write();
  if(EE_SRSS2) h_ml1loverlap_EE_SRSS2->Write();
  if(MM_SRSS1) h_ml1loverlap_MM_SRSS1->Write();
  if(MM_SRSS2) h_ml1loverlap_MM_SRSS2->Write();
  if(MM_SRSS3) h_ml1loverlap_MM_SRSS3->Write();
  if(MM_SRSS4) h_ml1loverlap_MM_SRSS4->Write();
  if(EM_SRSS1) h_ml1loverlap_EM_SRSS1->Write();
  if(EM_SRSS2) h_ml1loverlap_EM_SRSS2->Write();
  if(EE_SROS1) h_ml1loverlap_EE_SROS1->Write();
  if(MM_SROS1) h_ml1loverlap_MM_SROS1->Write();
  if(EM_SROS1) h_ml1loverlap_EM_SROS1->Write();
/*--------------------------------------------------------------------------------*/    
  
  if(EE_SRSS1) h_mTl0loverlap_EE_SRSS1->Write();
  if(EE_SRSS2) h_mTl0loverlap_EE_SRSS2->Write();
  if(MM_SRSS1) h_mTl0loverlap_MM_SRSS1->Write();
  if(MM_SRSS2) h_mTl0loverlap_MM_SRSS2->Write();
  if(MM_SRSS3) h_mTl0loverlap_MM_SRSS3->Write();
  if(MM_SRSS4) h_mTl0loverlap_MM_SRSS4->Write();
  if(EM_SRSS1) h_mTl0loverlap_EM_SRSS1->Write();
  if(EM_SRSS2) h_mTl0loverlap_EM_SRSS2->Write();
  if(EE_SROS1) h_mTl0loverlap_EE_SROS1->Write();
  if(MM_SROS1) h_mTl0loverlap_MM_SROS1->Write();
  if(EM_SROS1) h_mTl0loverlap_EM_SROS1->Write();
/*--------------------------------------------------------------------------------*/    
  if(EE_SRSS1) h_mTl1loverlap_EE_SRSS1->Write();
  if(EE_SRSS2) h_mTl1loverlap_EE_SRSS2->Write();
  if(MM_SRSS1) h_mTl1loverlap_MM_SRSS1->Write();
  if(MM_SRSS2) h_mTl1loverlap_MM_SRSS2->Write();
  if(MM_SRSS3) h_mTl1loverlap_MM_SRSS3->Write();
  if(MM_SRSS4) h_mTl1loverlap_MM_SRSS4->Write();
  if(EM_SRSS1) h_mTl1loverlap_EM_SRSS1->Write();
  if(EM_SRSS2) h_mTl1loverlap_EM_SRSS2->Write();
  if(EE_SROS1) h_mTl1loverlap_EE_SROS1->Write();
  if(MM_SROS1) h_mTl1loverlap_MM_SROS1->Write();
  if(EM_SROS1) h_mTl1loverlap_EM_SROS1->Write();
  
/*--------------------------------------------------------------------------------*/    
  
  if(EE_SRSS1) h_DeltaRl0loverlap_EE_SRSS1->Write();
  if(EE_SRSS2) h_DeltaRl0loverlap_EE_SRSS2->Write();
  if(MM_SRSS1) h_DeltaRl0loverlap_MM_SRSS1->Write();
  if(MM_SRSS2) h_DeltaRl0loverlap_MM_SRSS2->Write();
  if(MM_SRSS3) h_DeltaRl0loverlap_MM_SRSS3->Write();
  if(MM_SRSS4) h_DeltaRl0loverlap_MM_SRSS4->Write();
  if(EM_SRSS1) h_DeltaRl0loverlap_EM_SRSS1->Write();
  if(EM_SRSS2) h_DeltaRl0loverlap_EM_SRSS2->Write();
  if(EE_SROS1) h_DeltaRl0loverlap_EE_SROS1->Write();
  if(MM_SROS1) h_DeltaRl0loverlap_MM_SROS1->Write();
  if(EM_SROS1) h_DeltaRl0loverlap_EM_SROS1->Write();
/*--------------------------------------------------------------------------------*/    
  if(EE_SRSS1) h_DeltaRl1loverlap_EE_SRSS1->Write();
  if(EE_SRSS2) h_DeltaRl1loverlap_EE_SRSS2->Write();
  if(MM_SRSS1) h_DeltaRl1loverlap_MM_SRSS1->Write();
  if(MM_SRSS2) h_DeltaRl1loverlap_MM_SRSS2->Write();
  if(MM_SRSS3) h_DeltaRl1loverlap_MM_SRSS3->Write();
  if(MM_SRSS4) h_DeltaRl1loverlap_MM_SRSS4->Write();
  if(EM_SRSS1) h_DeltaRl1loverlap_EM_SRSS1->Write();
  if(EM_SRSS2) h_DeltaRl1loverlap_EM_SRSS2->Write();
  if(EE_SROS1) h_DeltaRl1loverlap_EE_SROS1->Write();
  if(MM_SROS1) h_DeltaRl1loverlap_MM_SROS1->Write();
  if(EM_SROS1) h_DeltaRl1loverlap_EM_SROS1->Write();
  
/*--------------------------------------------------------------------------------*/    
  
  if(EE_SRSS1) h_DeltaRZl0loverlap_EE_SRSS1->Write();
  if(EE_SRSS2) h_DeltaRZl0loverlap_EE_SRSS2->Write();
  if(MM_SRSS1) h_DeltaRZl0loverlap_MM_SRSS1->Write();
  if(MM_SRSS2) h_DeltaRZl0loverlap_MM_SRSS2->Write();
  if(MM_SRSS3) h_DeltaRZl0loverlap_MM_SRSS3->Write();
  if(MM_SRSS4) h_DeltaRZl0loverlap_MM_SRSS4->Write();
  if(EM_SRSS1) h_DeltaRZl0loverlap_EM_SRSS1->Write();
  if(EM_SRSS2) h_DeltaRZl0loverlap_EM_SRSS2->Write();
  if(EE_SROS1) h_DeltaRZl0loverlap_EE_SROS1->Write();
  if(MM_SROS1) h_DeltaRZl0loverlap_MM_SROS1->Write();
  if(EM_SROS1) h_DeltaRZl0loverlap_EM_SROS1->Write();
/*--------------------------------------------------------------------------------*/    
  if(EE_SRSS1) h_DeltaRZl1loverlap_EE_SRSS1->Write();
  if(EE_SRSS2) h_DeltaRZl1loverlap_EE_SRSS2->Write();
  if(MM_SRSS1) h_DeltaRZl1loverlap_MM_SRSS1->Write();
  if(MM_SRSS2) h_DeltaRZl1loverlap_MM_SRSS2->Write();
  if(MM_SRSS3) h_DeltaRZl1loverlap_MM_SRSS3->Write();
  if(MM_SRSS4) h_DeltaRZl1loverlap_MM_SRSS4->Write();
  if(EM_SRSS1) h_DeltaRZl1loverlap_EM_SRSS1->Write();
  if(EM_SRSS2) h_DeltaRZl1loverlap_EM_SRSS2->Write();
  if(EE_SROS1) h_DeltaRZl1loverlap_EE_SROS1->Write();
  if(MM_SROS1) h_DeltaRZl1loverlap_MM_SROS1->Write();
  if(EM_SROS1) h_DeltaRZl1loverlap_EM_SROS1->Write();
/*--------------------------------------------------------------------------------*/    
  
  if(EE_SRSS1) h_DeltaEtaZl0loverlap_EE_SRSS1->Write();
  if(EE_SRSS2) h_DeltaEtaZl0loverlap_EE_SRSS2->Write();
  if(MM_SRSS1) h_DeltaEtaZl0loverlap_MM_SRSS1->Write();
  if(MM_SRSS2) h_DeltaEtaZl0loverlap_MM_SRSS2->Write();
  if(MM_SRSS3) h_DeltaEtaZl0loverlap_MM_SRSS3->Write();
  if(MM_SRSS4) h_DeltaEtaZl0loverlap_MM_SRSS4->Write();
  if(EM_SRSS1) h_DeltaEtaZl0loverlap_EM_SRSS1->Write();
  if(EM_SRSS2) h_DeltaEtaZl0loverlap_EM_SRSS2->Write();
  if(EE_SROS1) h_DeltaEtaZl0loverlap_EE_SROS1->Write();
  if(MM_SROS1) h_DeltaEtaZl0loverlap_MM_SROS1->Write();
  if(EM_SROS1) h_DeltaEtaZl0loverlap_EM_SROS1->Write();
/*--------------------------------------------------------------------------------*/    
  if(EE_SRSS1) h_DeltaEtaZl1loverlap_EE_SRSS1->Write();
  if(EE_SRSS2) h_DeltaEtaZl1loverlap_EE_SRSS2->Write();
  if(MM_SRSS1) h_DeltaEtaZl1loverlap_MM_SRSS1->Write();
  if(MM_SRSS2) h_DeltaEtaZl1loverlap_MM_SRSS2->Write();
  if(MM_SRSS3) h_DeltaEtaZl1loverlap_MM_SRSS3->Write();
  if(MM_SRSS4) h_DeltaEtaZl1loverlap_MM_SRSS4->Write();
  if(EM_SRSS1) h_DeltaEtaZl1loverlap_EM_SRSS1->Write();
  if(EM_SRSS2) h_DeltaEtaZl1loverlap_EM_SRSS2->Write();
  if(EE_SROS1) h_DeltaEtaZl1loverlap_EE_SROS1->Write();
  if(MM_SROS1) h_DeltaEtaZl1loverlap_MM_SROS1->Write();
  if(EM_SROS1) h_DeltaEtaZl1loverlap_EM_SROS1->Write();  
  
/*--------------------------------------------------------------------------------*/    
  if(EE_SRSS1) h_mTllloverlap_EE_SRSS1->Write();
  if(EE_SRSS2) h_mTllloverlap_EE_SRSS2->Write();
  if(MM_SRSS1) h_mTllloverlap_MM_SRSS1->Write();
  if(MM_SRSS2) h_mTllloverlap_MM_SRSS2->Write();
  if(MM_SRSS3) h_mTllloverlap_MM_SRSS3->Write();
  if(MM_SRSS4) h_mTllloverlap_MM_SRSS4->Write();
  if(EM_SRSS1) h_mTllloverlap_EM_SRSS1->Write();
  if(EM_SRSS2) h_mTllloverlap_EM_SRSS2->Write();
  if(EE_SROS1) h_mTllloverlap_EE_SROS1->Write();
  if(MM_SROS1) h_mTllloverlap_MM_SROS1->Write();
  if(EM_SROS1) h_mTllloverlap_EM_SROS1->Write();

/*--------------------------------------------------------------------------------*/    
  if(EE_SRSS1) h_Mljj_EE_SRSS1->Write();
  if(EE_SRSS2) h_Mljj_EE_SRSS2->Write();
  if(MM_SRSS1) h_Mljj_MM_SRSS1->Write();
  if(MM_SRSS2) h_Mljj_MM_SRSS2->Write();
  if(MM_SRSS3) h_Mljj_MM_SRSS3->Write();
  if(MM_SRSS4) h_Mljj_MM_SRSS4->Write();
  if(EM_SRSS1) h_Mljj_EM_SRSS1->Write();
  if(EM_SRSS2) h_Mljj_EM_SRSS2->Write();
  if(EE_SROS1) h_Mljj_EE_SROS1->Write();
  if(MM_SROS1) h_Mljj_MM_SROS1->Write();
  if(EM_SROS1) h_Mljj_EM_SROS1->Write();
  
    
    return true;
}

bool TSelector_SusyNtuple::addHistos(){

  //needed when running with Proof On Demand

//     fOutput->Add( h_storeSumwMcid);

  return true;
    
}
void TSelector_SusyNtuple::calcJet_variables(TLorentzVector signalJet0_TLV, TLorentzVector signalJet1_TLV, TLorentzVector met_TLV){
  
  nSignalJets = numberOfCLJets(m_signalJets2Lep);
  TLorentzVector jet0_TLV, jet1_TLV;
  if(nSignalJets>0) jet0_TLV.SetPtEtaPhiE(m_signalJets2Lep.at(0)->pt, m_signalJets2Lep.at(0)->eta ,m_signalJets2Lep.at(0)->phi, m_signalJets2Lep.at(0)->pt*cosh(m_signalJets2Lep.at(0)->eta));
  if(nSignalJets>1) jet1_TLV.SetPtEtaPhiE(m_signalJets2Lep.at(1)->pt, m_signalJets2Lep.at(1)->eta ,m_signalJets2Lep.at(1)->phi, m_signalJets2Lep.at(1)->pt*cosh(m_signalJets2Lep.at(1)->eta));
  
  MET = met_TLV.Pt();
  if(nSignalJets>0){
    pTj0 = jet0_TLV.Pt();
    pTj1 = (nSignalJets>1) ? jet1_TLV.Pt() : 0.;
    eta_j0 = jet0_TLV.Eta();
    eta_j1 = (nSignalJets>1) ? jet1_TLV.Eta() : 0.;
    mjj = (nSignalJets>1) ? (jet0_TLV + jet1_TLV).M() : jet0_TLV.M();
    DeltaPhijj = (nSignalJets>1) ? fabs(jet0_TLV.DeltaPhi(jet1_TLV)) : 0.;
    pTjj = (nSignalJets>1) ? (jet0_TLV + jet1_TLV).Pt() : jet0_TLV.Pt();
    DeltaPhiMETj0 = fabs(jet0_TLV.DeltaPhi(met_TLV));
    DeltaPhiMETj1 = (nSignalJets>1) ? fabs(jet1_TLV.DeltaPhi(met_TLV)) : 0.;
    DeltaRjj = (nSignalJets>1) ?  fabs(jet0_TLV.DeltaR(jet1_TLV)) : 0.;
    DeltaEtajj = (nSignalJets>1) ? fabs(jet0_TLV.Eta() - jet1_TLV.Eta()) : 0.;
    DeltaYjj = (nSignalJets>1) ? fabs(jet0_TLV.Rapidity() - jet1_TLV.Rapidity()) : 0.;
    DeltaPhiMETjj = (nSignalJets>1) ? fabs((jet0_TLV+ jet1_TLV).DeltaPhi(met_TLV)) : fabs(jet0_TLV.DeltaPhi(met_TLV));
    NBJets = numberOfCBJets(m_signalJets2Lep);
    NCJets = numberOfCLJets(m_signalJets2Lep);
    NFJets = numberOfFJets(m_signalJets2Lep);
    meff = calcMeff(met_TLV, m_signalJets2Lep);
  }
    
}
void TSelector_SusyNtuple::calc_EE_variables(LeptonVector &leptons, Electron* el0, Electron* el1, TLorentzVector el0_TLV, TLorentzVector el1_TLV, TLorentzVector met_TLV, TLorentzVector signalJet0_TLV, TLorentzVector signalJet1_TLV, bool useForwardJets, SusyNtObject* susyNt){
  
  ptel0 = el0_TLV.Pt() > el1_TLV.Pt() ? el0_TLV.Pt() : el1_TLV.Pt();
  ptel1 = el0_TLV.Pt() > el1_TLV.Pt() ? el1_TLV.Pt() : el0_TLV.Pt();
  eta_el0 = el0_TLV.Eta();
  eta_el1 = el1_TLV.Eta();
  DeltaRee = fabs(el0_TLV.DeltaR(el1_TLV));
  pTee = (el0_TLV + el1_TLV).Pt();
  Mee = Mll(el0, el1);
  METrelee = recalcMetRel(met_TLV, el0_TLV, el1_TLV, m_signalJets2Lep, useForwardJets);
  METee = met_TLV.Pt();
  HT_EE = calcHT(el0_TLV, el1_TLV, met_TLV, m_signalJets2Lep);
  mTWW_EE = calcMt((el0_TLV + el1_TLV), met_TLV);
  mTee = calcMt((el0_TLV+el1_TLV), met_TLV);
  mTemin = (calcMt(el0_TLV, met_TLV) > calcMt(el1_TLV, met_TLV)) ? calcMt(el1_TLV, met_TLV) : calcMt(el0_TLV, met_TLV);
  mTemax = (calcMt(el0_TLV, met_TLV) < calcMt(el1_TLV, met_TLV)) ? calcMt(el1_TLV, met_TLV) : calcMt(el0_TLV, met_TLV);
  mTel0MET = calcMt(el0_TLV, met_TLV);
  mTel1MET = calcMt(el1_TLV, met_TLV);
  mMETee = (el0_TLV + el1_TLV + met_TLV).M();
  DeltaPhiEE = fabs(el0_TLV.DeltaPhi(el1_TLV));
  DeltaPhiMETel0 = fabs(el0_TLV.DeltaPhi(met_TLV));
  DeltaPhiMETel1 = fabs(el1_TLV.DeltaPhi(met_TLV));
  DeltaPhiMETee = fabs((el0_TLV + el1_TLV).DeltaPhi(met_TLV));
  if(nSignalJets>0){
    DeltaPhieejj = (nSignalJets>1) ? fabs((el0_TLV + el1_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV)) : fabs((el0_TLV + el1_TLV).DeltaPhi(signalJet0_TLV));
    DeltaPhieejj = (nSignalJets>1) ? (el0_TLV + el1_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV) : 0.;
    
    DeltaPhiel0jj = (nSignalJets>1) ? ((el0_TLV.Pt()> el1_TLV.Pt()) ? (el0_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV) : (el1_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV)) : ((el0_TLV.Pt()> el1_TLV.Pt()) ? (el0_TLV).DeltaPhi(signalJet0_TLV) : (el1_TLV).DeltaPhi(signalJet0_TLV));
    DeltaPhiel1jj= (nSignalJets>1) ?  ((el0_TLV.Pt()< el1_TLV.Pt()) ? (el1_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV) : (el0_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV)) : ((el0_TLV.Pt()< el1_TLV.Pt()) ? (el1_TLV).DeltaPhi(signalJet0_TLV) : (el0_TLV).DeltaPhi(signalJet0_TLV));
    DeltaReejj = (nSignalJets>1) ? (el0_TLV + el1_TLV).DeltaR(signalJet0_TLV + signalJet1_TLV) : (el0_TLV + el1_TLV).DeltaR(signalJet0_TLV);
  }
  
  //Mljj: invariant mass of the lepton-dijet system formed by the two highest pT jets and the lepton closest to the dijet axis.
  Mljj_EE = 0.;
  if(nSignalJets>1){
    //find dijet axis:
    double DeltaRDijetEl0 = el0_TLV.DeltaR(signalJet0_TLV + signalJet1_TLV); //sqrt(pow(fabs(etaDijetAxis - el0_TLV.Eta()),2) + pow(fabs(phiDijetAxis - el0_TLV.Phi()),2));
    double DeltaRDijetEl1 = el1_TLV.DeltaR(signalJet0_TLV + signalJet1_TLV); //sqrt(pow(fabs(etaDijetAxis - el1_TLV.Eta()),2) + pow(fabs(phiDijetAxis - el1_TLV.Phi()),2));
    TLorentzVector closestElecDijetAxis_TLV = (DeltaRDijetEl0 > DeltaRDijetEl1) ? el1_TLV : el0_TLV;
    Mljj_EE = (signalJet0_TLV + signalJet1_TLV + closestElecDijetAxis_TLV).M();
  }
  
  mt2_ee = calcMT2(met_TLV, el0_TLV, el1_TLV);
  if(nSignalJets>1) mt2J_ee = calcMT2J(met_TLV, el0_TLV, el1_TLV, signalJet0_TLV, signalJet1_TLV);
  if(nSignalJets>1) mt2J0LepM_ee = calcMT2J0LepM(met_TLV, el0_TLV, el1_TLV, signalJet0_TLV, signalJet1_TLV);
  

  DeltaEtaee = fabs(el0_TLV.Eta() - el1_TLV.Eta());
    
  bool unbiased = true;
  if(unbiased){
    D0_branch_el0 = el0->d0Unbiased;
    D0_branch_el1 = el1->d0Unbiased;
    D0err_branch_el0 = el0->errD0Unbiased;
    D0err_branch_el1 = el1->errD0Unbiased;
  }
  else{
    D0_branch_el0 = el0->d0;
    D0_branch_el1 = el1->d0;
    D0err_branch_el0 = el0->errD0;
    D0err_branch_el1 = el1->errD0;
  }
  
  
  sD0Signif_branch_el0 = calc_D0(unbiased, leptons.at(0)) / D0err_branch_el0;
  sD0Signif_branch_el1 = calc_D0(unbiased, leptons.at(1)) / D0err_branch_el1;

  		
 //softElectrons: electrons which are too soft: pT < 10 GeV [susyNt->ele() but pT < 10 GeV, no signal elon]
  ElectronVector softElectrons = getSoftElectrons(&nt, NtSys_NOM);
  //overlapElectrons: electrons which are removed in OR [getPreElectrons() but not m_baseElectrons (= no signal elon)]
  ElectronVector overlapElectrons = getOverlapElectrons(&nt, NtSys_NOM);
  
//     int n_lost_electrons = 0;
//   cout << "susyNt->muo()->size()= " << susyNt->muo()->size() << endl;
//   cout << "mu0->pt= " << mu0->pt << " mu1->pt= " << mu1->pt << endl;
//   for(uint ie=0; ie<susyNt->ele()->size(); ie++){
//     Electron* elec_lost = & susyNt->ele()->at(ie);
//     if((elec_lost->DeltaR(*el0) < 0.0001) || (elec_lost->DeltaR(*el1) < 0.0001)) continue; //no signal lepton
//       n_lost_electrons += 1;
//   }
//   cout << "n_soft " << softElectrons.size() << " n_precar " << precarElectrons.size() << " n_overl " << overlapElectrons.size() << " total " << softElectrons.size() + precarElectrons.size() + overlapElectrons.size() << " lost " << n_lost_electrons << endl;
  
  ml0lsoft_EE = -1.;      
  mTl0lsoft_EE = -1.;
  mTlllsoft_EE = -1.;
  DeltaRl0lsoft_EE = -1.;  
  DeltaRZl0lsoft_EE = -1.;  
  DeltaEtaZl0lsoft_EE = -1.;   
  ml1lsoft_EE = -1.;
  mTl1lsoft_EE = -1.;
  mTlllsoft_EE = -1.;
  DeltaRl1lsoft_EE = -1.;
  DeltaRZl1lsoft_EE = -1.;
  DeltaEtaZl1lsoft_EE = -1.;
  
  ml0llost_EE = -1.;      
  mTl0llost_EE = -1.;
  mTllllost_EE = -1.;
  DeltaRl0llost_EE = -1.;  
  DeltaRZl0llost_EE = -1.;  
  DeltaEtaZl0llost_EE = -1.;  
  ml1llost_EE = -1.;
  mTl1llost_EE = -1.;
  mTllllost_EE = -1.;
  DeltaRl1llost_EE = -1.;
  DeltaRZl1llost_EE = -1.;
  DeltaEtaZl1llost_EE = -1.;
  
  ml0loverlap_EE = -1.;      
  mTl0loverlap_EE = -1.;
  mTllloverlap_EE = -1.;
  DeltaRl0loverlap_EE = -1.;  
  DeltaRZl0loverlap_EE = -1.;  
  DeltaEtaZl0loverlap_EE = -1.;  
  ml1loverlap_EE = -1.;
  mTl1loverlap_EE = -1.;
  mTllloverlap_EE = -1.;
  DeltaRl1loverlap_EE = -1.;  
  DeltaRZl1loverlap_EE = -1.;  
  DeltaEtaZl1loverlap_EE = -1.;  
  
  for(uint iel=0; iel<susyNt->ele()->size(); iel++){
    Electron* el_lost = & susyNt->ele()->at(iel);
    if((el_lost->DeltaR(*el0) < 0.0001) || (el_lost->DeltaR(*el1) < 0.0001)) continue;  //no signal lepton
    
    if((el_lost->q * el0->q)<0. || (el_lost->q * el1->q)<0.){
      TLorentzVector el_lost_TLV;
      el_lost_TLV.SetPtEtaPhiE(el_lost->pt, el_lost->eta ,el_lost->phi, el_lost->pt*cosh(el_lost->eta));
      bool isSoftElectron = false;
      for(uint iel1=0; iel1<softElectrons.size(); iel1++){
	if(el_lost->DeltaR(*softElectrons.at(iel1)) < 0.0001) isSoftElectron = true;
      }
      bool isOverlapElectron = false;
      for(uint iel1=0; iel1<overlapElectrons.size(); iel1++){
	if(el_lost->DeltaR(*overlapElectrons.at(iel1)) < 0.0001) isOverlapElectron = true;
      }
      
//       cout << "lost in any case" << endl;
      ml0llost_EE = (el0_TLV + el_lost_TLV).M();      
      mTl0llost_EE = calcMt(el0_TLV, el_lost_TLV);      
      mTllllost_EE = calcMt(el0_TLV + el1_TLV, el_lost_TLV);      
      DeltaRl0llost_EE = el0_TLV.DeltaR(el_lost_TLV);
      
      ml1llost_EE = (el1_TLV + el_lost_TLV).M();      
      mTl1llost_EE = calcMt(el1_TLV, el_lost_TLV);      
      mTllllost_EE = calcMt(el1_TLV + el1_TLV, el_lost_TLV);      
      DeltaRl1llost_EE = el1_TLV.DeltaR(el_lost_TLV);
      if((el0_TLV + el_lost_TLV).M() < MZ+10. && (el0_TLV + el_lost_TLV).M() > MZ-10.){
	  DeltaRZl0llost_EE = el0_TLV.DeltaR(el_lost_TLV);
	  DeltaRZl1llost_EE = el1_TLV.DeltaR(el_lost_TLV);
	  DeltaEtaZl0llost_EE = fabs(el0_TLV.Eta() - el_lost_TLV.Eta());
	  DeltaEtaZl1llost_EE = fabs(el1_TLV.Eta() - el_lost_TLV.Eta());
	}      
      
      if(isSoftElectron){
// 	cout << "soft" << endl;
	ml0lsoft_EE = (el0_TLV + el_lost_TLV).M();      
	mTl0lsoft_EE = calcMt(el0_TLV, el_lost_TLV);      
	mTlllsoft_EE = calcMt(el0_TLV + el1_TLV, el_lost_TLV);      
	DeltaRl0lsoft_EE = el0_TLV.DeltaR(el_lost_TLV);
	
	
	ml1lsoft_EE = (el1_TLV + el_lost_TLV).M();      
	mTl1lsoft_EE = calcMt(el1_TLV, el_lost_TLV);      
	mTlllsoft_EE = calcMt(el1_TLV + el1_TLV, el_lost_TLV);      
	DeltaRl1lsoft_EE = el1_TLV.DeltaR(el_lost_TLV);
	
	
	if((el0_TLV + el_lost_TLV).M() < MZ+10. && (el0_TLV + el_lost_TLV).M() > MZ-10.){
	  DeltaRZl0lsoft_EE = el0_TLV.DeltaR(el_lost_TLV);
	  DeltaRZl1lsoft_EE = el1_TLV.DeltaR(el_lost_TLV);
	  DeltaEtaZl0lsoft_EE = fabs(el0_TLV.Eta() - el_lost_TLV.Eta());
	  DeltaEtaZl1lsoft_EE = fabs(el1_TLV.Eta() - el_lost_TLV.Eta());
	}
      }
      
      if(isOverlapElectron){
// 	cout << "overlap" << endl;
	ml0loverlap_EE = (el0_TLV + el_lost_TLV).M();      
	mTl0loverlap_EE = calcMt(el0_TLV, el_lost_TLV);      
	mTllloverlap_EE = calcMt(el0_TLV + el1_TLV, el_lost_TLV);      
	DeltaRl0loverlap_EE = el0_TLV.DeltaR(el_lost_TLV);
	
	ml1loverlap_EE = (el1_TLV + el_lost_TLV).M();      
	mTl1loverlap_EE = calcMt(el1_TLV, el_lost_TLV);      
	mTllloverlap_EE = calcMt(el1_TLV + el1_TLV, el_lost_TLV);      
	DeltaRl1loverlap_EE = el1_TLV.DeltaR(el_lost_TLV);
	if((el0_TLV + el_lost_TLV).M() < MZ+10. && (el0_TLV + el_lost_TLV).M() > MZ-10.){
	  DeltaRZl0loverlap_EE = el0_TLV.DeltaR(el_lost_TLV);
	  DeltaRZl1loverlap_EE = el1_TLV.DeltaR(el_lost_TLV);
	  DeltaEtaZl0loverlap_EE = fabs(el0_TLV.Eta() - el_lost_TLV.Eta());
	  DeltaEtaZl1loverlap_EE = fabs(el0_TLV.Eta() - el_lost_TLV.Eta());
	}
      }      
      
      break; // only use lost OS lepton with highest pT
      
    }
  }
  
   mZTT_coll = calcMZTauTau_coll(el0_TLV, el1_TLV, met_TLV); 
}

void TSelector_SusyNtuple::calc_MM_variables(LeptonVector &leptons, Muon* mu0, Muon* mu1, TLorentzVector mu0_TLV, TLorentzVector mu1_TLV, TLorentzVector met_TLV, TLorentzVector signalJet0_TLV, TLorentzVector signalJet1_TLV, bool useForwardJets, SusyNtObject* susyNt){
  
  TLorentzVector mu0_TLV_n, mu1_TLV_n;
  mu0_TLV_n.SetPtEtaPhiE(mu0->pt, mu0->eta ,mu0->phi, mu0->pt*cosh(mu0->eta));
  mu0_TLV_n.SetPtEtaPhiE(mu1->pt, mu1->eta ,mu1->phi, mu1->pt*cosh(mu1->eta));
  
  DeltaRmm = mu0_TLV.DeltaR(mu1_TLV);
  ptmu0 = mu0_TLV.Pt() > mu1_TLV.Pt() ? mu0_TLV.Pt() : mu1_TLV.Pt();
  ptmu1 = mu0_TLV.Pt() > mu1_TLV.Pt() ? mu1_TLV.Pt() : mu0_TLV.Pt();
  eta_mu0 = mu0_TLV.Eta();
  eta_mu1 = mu1_TLV.Eta();
  pTmm = (mu0_TLV_n + mu1_TLV_n).Pt();
  Mmm = Mll(mu0, mu1);
  METrelmm = recalcMetRel(met_TLV, mu0_TLV, mu1_TLV, m_signalJets2Lep, useForwardJets);
  METmm = met_TLV.Pt();
  HT_MM = calcHT(mu0_TLV, mu1_TLV, met_TLV, m_signalJets2Lep);
  mTWW_MM = calcMt((mu0_TLV + mu1_TLV), met_TLV);

  mTmm = calcMt((mu0_TLV+mu1_TLV), met_TLV);
  mTmmin = (calcMt(mu0_TLV, met_TLV) > calcMt(mu1_TLV, met_TLV)) ? calcMt(mu1_TLV, met_TLV) : calcMt(mu0_TLV, met_TLV);
  mTmmax = (calcMt(mu0_TLV, met_TLV) < calcMt(mu1_TLV, met_TLV)) ? calcMt(mu1_TLV, met_TLV) : calcMt(mu0_TLV, met_TLV);
  mTmu0MET = calcMt(mu0_TLV, met_TLV);
  mTmu1MET = calcMt(mu1_TLV, met_TLV);
  mMETmm = (mu0_TLV + mu1_TLV + met_TLV).M();
  DeltaPhiMM = fabs(mu0_TLV.DeltaPhi(mu1_TLV));
  DeltaPhiMETmu0 = fabs(mu0_TLV.DeltaPhi(met_TLV));
  DeltaPhiMETmu1 = fabs(mu1_TLV.DeltaPhi(met_TLV));
  DeltaPhiMETmm = fabs((mu0_TLV + mu1_TLV).DeltaPhi(met_TLV));
  if(nSignalJets>0){
    DeltaPhimmjj = (nSignalJets>1) ? fabs((mu0_TLV + mu1_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV)) : fabs((mu0_TLV + mu1_TLV).DeltaPhi(signalJet0_TLV));
    DeltaPhimmjj = (nSignalJets>1) ?  (mu0_TLV + mu1_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV) : (mu0_TLV + mu1_TLV).DeltaPhi(signalJet0_TLV);
    DeltaPhimu0jj = (nSignalJets>1) ?  ((mu0_TLV.Pt()> mu1_TLV.Pt()) ? (mu0_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV) : (mu1_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV)) : ((mu0_TLV.Pt()> mu1_TLV.Pt()) ? (mu0_TLV).DeltaPhi(signalJet0_TLV) : (mu1_TLV).DeltaPhi(signalJet0_TLV));
    DeltaPhimu1jj= (nSignalJets>1) ?  ((mu0_TLV.Pt()< mu1_TLV.Pt()) ? (mu1_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV) : (mu0_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV)) : ((mu0_TLV.Pt()< mu1_TLV.Pt()) ? (mu1_TLV).DeltaPhi(signalJet0_TLV) : (mu0_TLV).DeltaPhi(signalJet0_TLV));
    DeltaRmmjj = (nSignalJets>1) ?  (mu0_TLV + mu1_TLV).DeltaR(signalJet0_TLV + signalJet1_TLV) : (mu0_TLV + mu1_TLV).DeltaR(signalJet0_TLV);
  }
  
  //Mljj: invariant mass of the lepton-dijet system formed by the two highest pT jets and the lepton closest to the dijet axis.
  Mljj_MM = 0.;
  if(nSignalJets>1){
    double DeltaRDijetMu0 = mu0_TLV.DeltaR(signalJet0_TLV + signalJet1_TLV); //sqrt(pow(fabs(etaDijetAxis - mu0_TLV.Eta()),2) + pow(fabs(phiDijetAxis - mu0_TLV.Phi()),2));
    double DeltaRDijetMu1 = mu1_TLV.DeltaR(signalJet0_TLV + signalJet1_TLV); //sqrt(pow(fabs(etaDijetAxis - mu1_TLV.Eta()),2) + pow(fabs(phiDijetAxis - mu1_TLV.Phi()),2));
    TLorentzVector closestMuonDijetAxis_TLV = (DeltaRDijetMu0 > DeltaRDijetMu1) ? mu1_TLV : mu0_TLV;
    Mljj_MM = (signalJet0_TLV + signalJet1_TLV + closestMuonDijetAxis_TLV).M();
  }
  
  mt2_mm = calcMT2(met_TLV, mu0_TLV, mu1_TLV);
  if(nSignalJets>1) mt2J_mm = calcMT2J(met_TLV, mu0_TLV, mu1_TLV, signalJet0_TLV, signalJet1_TLV);
  if(nSignalJets>1) mt2J0LepM_mm = calcMT2J0LepM(met_TLV, mu0_TLV, mu1_TLV, signalJet0_TLV, signalJet1_TLV);
  
  DeltaEtamm = fabs(mu0_TLV.Eta() - mu1_TLV.Eta());
  
bool unbiased = true;
  if(unbiased){
    D0_branch_mu0 = mu0->d0Unbiased;
    D0_branch_mu1 = mu1->d0Unbiased;
    D0err_branch_mu0 = mu0->errD0Unbiased;
    D0err_branch_mu1 = mu1->errD0Unbiased;
  }
  else{
    D0_branch_mu0 = mu0->d0;
    D0_branch_mu1 = mu1->d0;
    D0err_branch_mu0 = mu0->errD0;
    D0err_branch_mu1 = mu1->errD0;
  }
  
  sD0Signif_branch_mu0 = calc_D0(unbiased, leptons.at(0)) / D0err_branch_mu0;
  sD0Signif_branch_mu1 = calc_D0(unbiased, leptons.at(1)) / D0err_branch_mu1;
  
//   cout << "next===================== " << endl;
//   softMuons: muons which are too soft: pT < 10 GeV [susyNt->muo() but pT < 10 GeV, no signal muon]
  MuonVector softMuons = getSoftMuons(&nt, NtSys_NOM);
//   overlapMuons: muons which are removed in OR [getPreMuons() but not m_baseMuons (= no signal muon)]
  MuonVector overlapMuons = getOverlapMuons(&nt, NtSys_NOM);
//   
//   int n_lost_muons = 0;
//   cout << "susyNt->muo()->size()= " << susyNt->muo()->size() << endl;
//   cout << "mu0->pt= " << mu0->pt << " mu1->pt= " << mu1->pt << endl;
//   for(uint im=0; im<susyNt->muo()->size(); im++){
//     Muon* mu_lost = & susyNt->muo()->at(im);
//     cout << "mu_lost->DeltaR(*mu0)= " << mu_lost->DeltaR(*mu0) << " (mu_lost->DeltaR(*mu1)= " << mu_lost->DeltaR(*mu1) << endl;
//     if((mu_lost->DeltaR(*mu0) < 0.0001) || (mu_lost->DeltaR(*mu1) < 0.0001)) continue; //no signal lepton
//     if((mu_lost->q * mu0->q)<0. || (mu_lost->q * mu1->q)<0.){
//       n_lost_muons += 1;
//     }
//   }
//   cout << "n_soft " << softMuons.size() << " n_precar " << precarMuons.size() << " n_overl " << overlapMuons.size() << " total " << softMuons.size() + precarMuons.size() + overlapMuons.size() << " lost " << n_lost_muons << endl;

  ml0llost_MM = -1.;      
  mTl0llost_MM = -1.;
  mTllllost_MM = -1.;
  DeltaRl0llost_MM = -1.;  
  DeltaRZl0llost_MM = -1.; 
  DeltaEtaZl0llost_MM = -1.; 
  ml1llost_MM = -1.;
  mTl1llost_MM = -1.;
  mTllllost_MM = -1.;
  DeltaRl1llost_MM = -1.;  
  DeltaRZl1llost_MM = -1.;  
  DeltaEtaZl1llost_MM = -1.;    
  
  ml0lsoft_MM = -1.;      
  mTl0lsoft_MM = -1.;
  mTlllsoft_MM = -1.;
  DeltaRl0lsoft_MM = -1.;  
  DeltaRZl0lsoft_MM = -1.;  
  DeltaEtaZl0lsoft_MM = -1.;  
  ml1lsoft_MM = -1.;
  mTl1lsoft_MM = -1.;
  mTlllsoft_MM = -1.;
  DeltaRl1lsoft_MM = -1.;
  DeltaRZl1lsoft_MM = -1.;
  DeltaEtaZl1lsoft_MM = -1.;
  
  ml0loverlap_MM = -1.;      
  mTl0loverlap_MM = -1.;
  mTllloverlap_MM = -1.;
  DeltaRl0loverlap_MM = -1.;  
  DeltaRZl0loverlap_MM = -1.;  
  DeltaEtaZl0loverlap_MM = -1.;  
  ml1loverlap_MM = -1.;
  mTl1loverlap_MM = -1.;
  mTllloverlap_MM = -1.;
  DeltaRl1loverlap_MM = -1.;  
  DeltaRZl1loverlap_MM = -1.;  
  DeltaEtaZl1loverlap_MM = -1.;  
  
  for(uint im=0; im<susyNt->muo()->size(); im++){
    Muon* mu_lost = & susyNt->muo()->at(im);
    if((mu_lost->DeltaR(*mu0) < 0.0001) || (mu_lost->DeltaR(*mu1) < 0.0001)) continue; //no signal lepton

    if((mu_lost->q * mu0->q)<0. || (mu_lost->q * mu1->q)<0.){
      TLorentzVector mu_lost_TLV;
      mu_lost_TLV.SetPtEtaPhiE(mu_lost->pt, mu_lost->eta ,mu_lost->phi, mu_lost->pt*cosh(mu_lost->eta));
      bool isSoftMuon = false;
      
      for(uint im1=0; im1<softMuons.size(); im1++){
// 	cout << "mu_lost->DeltaR(*softMuons.at(im1)= " << mu_lost->DeltaR(*softMuons.at(im1)) << endl;
	if(mu_lost->DeltaR(*softMuons.at(im1)) < 0.0001) isSoftMuon = true;
	
      }
      bool isOverlapMuon = false;
      for(uint im1=0; im1<overlapMuons.size(); im1++){

	if(mu_lost->DeltaR(*overlapMuons.at(im1)) < 0.0001) isOverlapMuon = true;	
      }
	ml0llost_MM = (mu0_TLV + mu_lost_TLV).M();      
	mTl0llost_MM = calcMt(mu0_TLV, mu_lost_TLV);      
	mTllllost_MM = calcMt(mu0_TLV + mu1_TLV, mu_lost_TLV);      
	DeltaRl0llost_MM = mu0_TLV.DeltaR(mu_lost_TLV);
	
	ml1llost_MM = (mu1_TLV + mu_lost_TLV).M();      
	mTl1llost_MM = calcMt(mu1_TLV, mu_lost_TLV);      
	mTllllost_MM = calcMt(mu1_TLV + mu1_TLV, mu_lost_TLV);      
	DeltaRl1llost_MM = mu1_TLV.DeltaR(mu_lost_TLV);
	
	if((mu0_TLV + mu_lost_TLV).M() < MZ+10. && (mu0_TLV + mu_lost_TLV).M() > MZ-10.){
	  DeltaRZl0llost_MM = mu0_TLV.DeltaR(mu_lost_TLV);
	  DeltaRZl1llost_MM = mu1_TLV.DeltaR(mu_lost_TLV);
	  DeltaEtaZl0llost_MM = fabs(mu0_TLV.Eta() - mu_lost_TLV.Eta());
	  DeltaEtaZl1llost_MM = fabs(mu1_TLV.Eta() - mu_lost_TLV.Eta());	  
	  
	}
	
      if(isSoftMuon){
// 	cout << "soft" << endl;
	ml0lsoft_MM = (mu0_TLV + mu_lost_TLV).M();      
	mTl0lsoft_MM = calcMt(mu0_TLV, mu_lost_TLV);      
	mTlllsoft_MM = calcMt(mu0_TLV + mu1_TLV, mu_lost_TLV);      
	DeltaRl0lsoft_MM = mu0_TLV.DeltaR(mu_lost_TLV);
	
	ml1lsoft_MM = (mu1_TLV + mu_lost_TLV).M();      
	mTl1lsoft_MM = calcMt(mu1_TLV, mu_lost_TLV);      
	mTlllsoft_MM = calcMt(mu1_TLV + mu1_TLV, mu_lost_TLV);      
	DeltaRl1lsoft_MM = mu1_TLV.DeltaR(mu_lost_TLV);
	if((mu0_TLV + mu_lost_TLV).M() < MZ+10. && (mu0_TLV + mu_lost_TLV).M() > MZ-10.){
	  DeltaRZl0lsoft_MM = mu0_TLV.DeltaR(mu_lost_TLV);
	  DeltaRZl1lsoft_MM = mu1_TLV.DeltaR(mu_lost_TLV);
	  DeltaEtaZl0lsoft_MM = fabs(mu0_TLV.Eta() - mu_lost_TLV.Eta());
	  DeltaEtaZl1lsoft_MM = fabs(mu1_TLV.Eta() - mu_lost_TLV.Eta());	  
	  
	}	
      }
      
      if(isOverlapMuon){

	//OR: remove first object type if overlapping with second object type
	ml0loverlap_MM = (mu0_TLV + mu_lost_TLV).M();      
	mTl0loverlap_MM = calcMt(mu0_TLV, mu_lost_TLV);      
	mTllloverlap_MM = calcMt(mu0_TLV + mu1_TLV, mu_lost_TLV);      
	DeltaRl0loverlap_MM = mu0_TLV.DeltaR(mu_lost_TLV);
	
	ml1loverlap_MM = (mu1_TLV + mu_lost_TLV).M();      
	mTl1loverlap_MM = calcMt(mu1_TLV, mu_lost_TLV);      
	mTllloverlap_MM = calcMt(mu1_TLV + mu1_TLV, mu_lost_TLV);      
	DeltaRl1loverlap_MM = mu1_TLV.DeltaR(mu_lost_TLV);
	if((mu0_TLV + mu_lost_TLV).M() < MZ+10. && (mu0_TLV + mu_lost_TLV).M() > MZ-10.){
	  DeltaRZl0loverlap_MM = mu0_TLV.DeltaR(mu_lost_TLV);
	  DeltaRZl1loverlap_MM = mu1_TLV.DeltaR(mu_lost_TLV);
	  DeltaEtaZl0loverlap_MM = fabs(mu0_TLV.Eta() - mu_lost_TLV.Eta());
	  DeltaEtaZl1loverlap_MM = fabs(mu1_TLV.Eta() - mu_lost_TLV.Eta());	  
	  
	}	
	
	//remove muon if DR < 0.4 with jet
	MuonVector muons_afterORJet = overlap_removal(m_susyObj, *susyNt->muo(), m_baseMuons, *susyNt->jet(), m_preJets, 0.4, false, false);
	bool overlappingWJet = false;
	for(uint im1=0; im1<muons_afterORJet.size(); im1++){
	if(mu_lost->DeltaR(*muons_afterORJet.at(im1)) < 0.0001) overlappingWJet = true;	
      }
      if(overlappingWJet){
	ml0loverlapWJet_MM = (mu0_TLV + mu_lost_TLV).M();      
	mTl0loverlapWJet_MM = calcMt(mu0_TLV, mu_lost_TLV);      
	mTllloverlapWJet_MM = calcMt(mu0_TLV + mu1_TLV, mu_lost_TLV);      
	DeltaRl0loverlapWJet_MM = mu0_TLV.DeltaR(mu_lost_TLV);
	
	ml1loverlapWJet_MM = (mu1_TLV + mu_lost_TLV).M();      
	mTl1loverlapWJet_MM = calcMt(mu1_TLV, mu_lost_TLV);      
	mTllloverlapWJet_MM = calcMt(mu1_TLV + mu1_TLV, mu_lost_TLV);      
	DeltaRl1loverlapWJet_MM = mu1_TLV.DeltaR(mu_lost_TLV);
	if((mu0_TLV + mu_lost_TLV).M() < MZ+10. && (mu0_TLV + mu_lost_TLV).M() > MZ-10.){
	  DeltaRZl0loverlapWJet_MM = mu0_TLV.DeltaR(mu_lost_TLV);
	  DeltaRZl1loverlapWJet_MM = mu1_TLV.DeltaR(mu_lost_TLV);
	  DeltaEtaZl0loverlapWJet_MM = fabs(mu0_TLV.Eta() - mu_lost_TLV.Eta());
	  DeltaEtaZl1loverlapWJet_MM = fabs(mu1_TLV.Eta() - mu_lost_TLV.Eta());	  
	  
	}
      }
	//remove muon if deltaR < 0.1 with electron
	MuonVector muons_afterORElectron = overlap_removal(m_susyObj, *susyNt->muo(), m_baseMuons, *susyNt->ele(), m_baseElectrons, 0.1, false, false);
	//remove muon if DR < 0.05 with muon
	MuonVector muons_afterORMuon = overlap_removal(m_susyObj, *susyNt->muo(), m_baseMuons, *susyNt->muo(), m_baseMuons, 0.05, true, false);
	//remove muon if mll<12 GeV
	MuonVector muons_afterMll = RemoveSFOSPair(m_susyObj, *susyNt->muo(), m_baseMuons, 12.);
	
      }      
      
      break; // only use lost OS lepton with highest pT
      
    }
  }
    
  mZTT_coll = calcMZTauTau_coll(mu0_TLV, mu1_TLV, met_TLV); 
}

void TSelector_SusyNtuple::calc_EM_variables(LeptonVector &leptons, Electron* el, Muon* mu, TLorentzVector mu_TLV, TLorentzVector el_TLV, TLorentzVector met_TLV, TLorentzVector signalJet0_TLV, TLorentzVector signalJet1_TLV, bool useForwardJets, SusyNtObject* susyNt){
  
  ptl0 = (el_TLV.Pt() > mu_TLV.Pt()) ? el_TLV.Pt() : mu_TLV.Pt();
  ptl1 = (el_TLV.Pt() > mu_TLV.Pt()) ? mu_TLV.Pt() : el_TLV.Pt();
  eta_l0 = (el_TLV.Pt() > mu_TLV.Pt()) ? el_TLV.Eta() : mu_TLV.Eta();
  eta_l1 = (el_TLV.Pt() > mu_TLV.Pt()) ? mu_TLV.Eta() : el_TLV.Eta();
  DeltaRem = fabs(mu_TLV.DeltaR(el_TLV));
  pTem = (mu_TLV + el_TLV).Pt();
  Mem = Mll(mu, el);
  METrelem = recalcMetRel(met_TLV, mu_TLV, el_TLV, m_signalJets2Lep, useForwardJets);
  METem = met_TLV.Pt();
  HT_EM = calcHT(mu_TLV, el_TLV, met_TLV, m_signalJets2Lep);
  mTWW_EM = calcMt((mu_TLV + el_TLV), met_TLV);
  mTem = calcMt((mu_TLV+el_TLV), met_TLV);
  mTemmin = (calcMt(mu_TLV, met_TLV) > calcMt(el_TLV, met_TLV)) ? calcMt(el_TLV, met_TLV) : calcMt(mu_TLV, met_TLV);
  mTemmax = (calcMt(mu_TLV, met_TLV) < calcMt(el_TLV, met_TLV)) ? calcMt(el_TLV, met_TLV) : calcMt(mu_TLV, met_TLV);
  mTl0MET = (el_TLV.Pt() > mu_TLV.Pt()) ? calcMt(el_TLV, met_TLV) : calcMt(mu_TLV, met_TLV);
  mTl1MET = (el_TLV.Pt() > mu_TLV.Pt()) ? calcMt(mu_TLV, met_TLV) : calcMt(el_TLV, met_TLV);
  mMETem = (mu_TLV + el_TLV + met_TLV).M();
  DeltaPhiem = fabs(mu_TLV.DeltaPhi(el_TLV));
  DeltaPhiMETl0 = (el_TLV.Pt() > mu_TLV.Pt()) ? fabs(el_TLV.DeltaPhi(met_TLV)) : fabs(mu_TLV.DeltaPhi(met_TLV));
  DeltaPhiMETl1 = (el_TLV.Pt() > mu_TLV.Pt()) ? fabs(mu_TLV.DeltaPhi(met_TLV)) : fabs(el_TLV.DeltaPhi(met_TLV));
  DeltaPhiMETem = fabs((mu_TLV + el_TLV).DeltaPhi(met_TLV));
  if(nSignalJets>0){
    DeltaPhiemjj = (nSignalJets>1) ? fabs((el_TLV + mu_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV)) : fabs((el_TLV + mu_TLV).DeltaPhi(signalJet0_TLV));
    DeltaPhiemjj = (nSignalJets>1) ? (mu_TLV + el_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV) : (mu_TLV + el_TLV).DeltaPhi(signalJet0_TLV);
    DeltaPhil0jj = (nSignalJets>1) ? ((mu_TLV.Pt()> el_TLV.Pt()) ? (mu_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV) : (el_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV)) : ((mu_TLV.Pt()> el_TLV.Pt()) ? (mu_TLV).DeltaPhi(signalJet0_TLV) : (el_TLV).DeltaPhi(signalJet0_TLV));
    DeltaPhil1jj = (nSignalJets>1) ? ((mu_TLV.Pt()< el_TLV.Pt()) ? (el_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV) : (mu_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV)) : ((mu_TLV.Pt()< el_TLV.Pt()) ? (el_TLV).DeltaPhi(signalJet0_TLV) : (mu_TLV).DeltaPhi(signalJet0_TLV));
    DeltaRemjj = (nSignalJets>1) ? (mu_TLV + el_TLV).DeltaR(signalJet0_TLV + signalJet1_TLV) : (mu_TLV + el_TLV).DeltaR(signalJet0_TLV);
  }
  
  //Mljj: invariant mass of the lepton-dijet system formed by the two highest pT jets and the lepton closest to the dijet axis.
  Mljj_EM = 0.;
  if(nSignalJets>1){
    //find dijet axis:
    double DeltaRDijetMu = mu_TLV.DeltaR(signalJet0_TLV + signalJet1_TLV); //sqrt(pow(fabs(etaDijetAxis - mu_TLV.Eta()),2) + pow(fabs(phiDijetAxis - mu_TLV.Phi()),2));
    double DeltaRDijetEl = el_TLV.DeltaR(signalJet0_TLV + signalJet1_TLV); //sqrt(pow(fabs(etaDijetAxis - el_TLV.Eta()),2) + pow(fabs(phiDijetAxis - el_TLV.Phi()),2));
    TLorentzVector closestLepDijetAxis_TLV = (DeltaRDijetMu > DeltaRDijetEl) ? el_TLV : mu_TLV;

    Mljj_EM = (signalJet0_TLV + signalJet1_TLV + closestLepDijetAxis_TLV).M();

  }
  
  mt2_em = calcMT2(met_TLV, el_TLV, mu_TLV);
  if(nSignalJets>1) mt2J_em = calcMT2J(met_TLV, el_TLV, mu_TLV, signalJet0_TLV, signalJet1_TLV);
  if(nSignalJets>1) mt2J0LepM_em = calcMT2J0LepM(met_TLV, el_TLV, mu_TLV, signalJet0_TLV, signalJet1_TLV);
  
  DeltaEtaem = fabs(mu_TLV.Eta() - el_TLV.Eta());  
  
bool unbiased = true;
  if(unbiased){
    D0_branch_l0 = leptons.at(0)->d0Unbiased;
    D0_branch_l1 = leptons.at(1)->d0Unbiased;
    D0err_branch_l0 = leptons.at(0)->errD0Unbiased;
    D0err_branch_l1 = leptons.at(1)->errD0Unbiased;
  }
  else{
    D0_branch_l0 = leptons.at(0)->d0;
    D0_branch_l1 = leptons.at(1)->d0;
    D0err_branch_l0 = leptons.at(0)->errD0;
    D0err_branch_l1 = leptons.at(1)->errD0;
  }
  
  sD0Signif_branch_l0 = calc_D0(unbiased, leptons.at(0)) / D0err_branch_l0;
  sD0Signif_branch_l1 = calc_D0(unbiased, leptons.at(1)) / D0err_branch_l1;
  
  //softMuons: muons which are too soft: pT < 10 GeV [susyNt->muo() but pT < 10 GeV, no signal muon]
  MuonVector softMuons = getSoftMuons(&nt, NtSys_NOM);
  ElectronVector softElectrons = getSoftElectrons(&nt, NtSys_NOM);
  //overlapMuons: muons which are removed in OR [getPreMuons() but not m_baseMuons (= no signal muon)]
  MuonVector overlapMuons = getOverlapMuons(&nt, NtSys_NOM);
  ElectronVector overlapElectrons = getOverlapElectrons(&nt, NtSys_NOM);
  
//   int n_lost_muons = 0;
//   for(uint im=0; im<susyNt->muo()->size(); im++){
//     Muon* mu_lost = & susyNt->muo()->at(im);
//     if(mu_lost->DeltaR(*mu) < 0.0001) continue; //no signal lepton
//       n_lost_muons += 1;
//   }
//   cout << "muons: n_soft " << softMuons.size() << " n_precar " << precarMuons.size() << " n_overl " << overlapMuons.size() << " total " << softMuons.size() + precarMuons.size() + overlapMuons.size() << " lost " << n_lost_muons << endl;
// 
//     int n_lost_electrons = 0;
// //   cout << "susyNt->muo()->size()= " << susyNt->muo()->size() << endl;
// //   cout << "mu0->pt= " << mu0->pt << " mu1->pt= " << mu1->pt << endl;
//   for(uint ie=0; ie<susyNt->ele()->size(); ie++){
//     Electron* elec_lost = & susyNt->ele()->at(ie);
//     if(elec_lost->DeltaR(*el) < 0.0001) continue; //no signal lepton
//       n_lost_electrons += 1;
//   }
//   cout << "elecs: n_soft " << softElectrons.size() << " n_precar " << precarElectrons.size() << " n_overl " << overlapElectrons.size() << " total " << softElectrons.size() + precarElectrons.size() + overlapElectrons.size() << " lost " << n_lost_electrons << endl;



  ml0llost_EM = -1.;      
  mTl0llost_EM = -1.;
  mTllllost_EM = -1.;
  DeltaRl0llost_EM = -1.;  
  DeltaRZl0llost_EM = -1.;  
  DeltaEtaZl0llost_EM = -1.;    
  ml1llost_EM = -1.;
  mTl1llost_EM = -1.;
  mTllllost_EM = -1.;
  DeltaRl1llost_EM = -1.;
  DeltaRZl1llost_EM = -1.;
  DeltaEtaZl1llost_EM = -1.;  
  
  ml0lsoft_EM = -1.;      
  mTl0lsoft_EM = -1.;
  mTlllsoft_EM = -1.;
  DeltaRl0lsoft_EM = -1.;  
  DeltaRZl0lsoft_EM = -1.;  
  DeltaEtaZl0lsoft_EM = -1.;    
  ml1lsoft_EM = -1.;
  mTl1lsoft_EM = -1.;
  mTlllsoft_EM = -1.;
  DeltaRl1lsoft_EM = -1.;
  DeltaRZl1lsoft_EM = -1.;
  DeltaEtaZl1lsoft_EM = -1.;  
  
  ml0loverlap_EM = -1.;      
  mTl0loverlap_EM = -1.;
  mTllloverlap_EM = -1.;
  DeltaRl0loverlap_EM = -1.;  
  DeltaRZl0loverlap_EM = -1.;  
  DeltaEtaZl0loverlap_EM = -1.;    
  ml1loverlap_EM = -1.;
  mTl1loverlap_EM = -1.;
  mTllloverlap_EM = -1.;
  DeltaRl1loverlap_EM = -1.;  
  DeltaRZl1loverlap_EM = -1.;  
  DeltaEtaZl1loverlap_EM = -1.;    
  
  for(uint im=0; im<susyNt->muo()->size(); im++){
    Muon* mu_lost = & susyNt->muo()->at(im);
    if(mu_lost->DeltaR(*mu) < 0.0001) continue;  //no signal lepton
    if((mu_lost->q * mu->q)<0.){
//       cout << "OS mu" << endl;
      TLorentzVector mu_lost_TLV;
      mu_lost_TLV.SetPtEtaPhiE(mu_lost->pt, mu_lost->eta ,mu_lost->phi, mu_lost->pt*cosh(mu_lost->eta));
      bool isSoftMuon = false;
      for(uint im1=0; im1<softMuons.size(); im1++){
	if(mu_lost->DeltaR(*softMuons.at(im1)) < 0.0001) isSoftMuon = true;
      }
      bool isOverlapMuon = false;
      for(uint im1=0; im1<overlapMuons.size(); im1++){
	if(mu_lost->DeltaR(*overlapMuons.at(im1)) < 0.0001) isOverlapMuon = true;
      }
//       cout << "lost mu" << endl;
      if(mu_TLV.Pt() > el_TLV.Pt()){
	ml0llost_EM = (mu_TLV + mu_lost_TLV).M();      
	mTl0llost_EM = calcMt(mu_TLV, mu_lost_TLV);      
	mTllllost_EM = calcMt(mu_TLV + el_TLV, mu_lost_TLV);      
	DeltaRl0llost_EM = mu_TLV.DeltaR(mu_lost_TLV);
	if((mu_TLV + mu_lost_TLV).M() < MZ+10. && (mu_TLV + mu_lost_TLV).M() > MZ-10.){
	  DeltaRZl0llost_EM = mu_TLV.DeltaR(mu_lost_TLV);
	  DeltaEtaZl0llost_EM = fabs(mu_TLV.Eta() - mu_lost_TLV.Eta());
	}
      }
      else{
	ml1llost_EM = (mu_TLV + mu_lost_TLV).M();      
	mTl1llost_EM = calcMt(mu_TLV, mu_lost_TLV);      
	mTllllost_EM = calcMt(mu_TLV + el_TLV, mu_lost_TLV);      
	DeltaRl1llost_EM = mu_TLV.DeltaR(mu_lost_TLV);
	if((mu_TLV + mu_lost_TLV).M() < MZ+10. && (mu_TLV + mu_lost_TLV).M() > MZ-10.){
	  DeltaRZl1llost_EM = mu_TLV.DeltaR(mu_lost_TLV);
	  DeltaEtaZl1llost_EM = fabs(mu_TLV.Eta() - mu_lost_TLV.Eta());	  
	}
      }
      
	
      if(isSoftMuon){
// 	cout << "soft mu" << endl;
	if(mu_TLV.Pt() > el_TLV.Pt()){
	  ml0lsoft_EM = (mu_TLV + mu_lost_TLV).M();      
	  mTl0lsoft_EM = calcMt(mu_TLV, mu_lost_TLV);      
	  mTlllsoft_EM = calcMt(mu_TLV + el_TLV, mu_lost_TLV);      
	  DeltaRl0lsoft_EM = mu_TLV.DeltaR(mu_lost_TLV);
	  if((mu_TLV + mu_lost_TLV).M() < MZ+10. && (mu_TLV + mu_lost_TLV).M() > MZ-10.){
	    DeltaRZl0lsoft_EM = mu_TLV.DeltaR(mu_lost_TLV);
	    DeltaEtaZl0lsoft_EM = fabs(mu_TLV.Eta() - mu_lost_TLV.Eta());
	  }
	}
	else{
	  ml1lsoft_EM = (mu_TLV + mu_lost_TLV).M();      
	  mTl1lsoft_EM = calcMt(mu_TLV, mu_lost_TLV);      
	  mTlllsoft_EM = calcMt(mu_TLV + el_TLV, mu_lost_TLV);      
	  DeltaRl1lsoft_EM = mu_TLV.DeltaR(mu_lost_TLV);
	  if((mu_TLV + mu_lost_TLV).M() < MZ+10. && (mu_TLV + mu_lost_TLV).M() > MZ-10.){
	    DeltaRZl1lsoft_EM = mu_TLV.DeltaR(mu_lost_TLV);
	    DeltaEtaZl1lsoft_EM = fabs(mu_TLV.Eta() - mu_lost_TLV.Eta());
	  }
	}
      }
      
      if(isOverlapMuon){
// 	cout << "overl mu" << endl;
	if(mu_TLV.Pt() > el_TLV.Pt()){
	  ml0loverlap_EM = (mu_TLV + mu_lost_TLV).M();      
	  mTl0loverlap_EM = calcMt(mu_TLV, mu_lost_TLV);      
	  mTllloverlap_EM = calcMt(mu_TLV + el_TLV, mu_lost_TLV);      
	  DeltaRl0loverlap_EM = mu_TLV.DeltaR(mu_lost_TLV);
	  if((mu_TLV + mu_lost_TLV).M() < MZ+10. && (mu_TLV + mu_lost_TLV).M() > MZ-10.){
	    DeltaRZl0loverlap_EM = mu_TLV.DeltaR(mu_lost_TLV);
	    DeltaEtaZl0loverlap_EM = fabs(mu_TLV.Eta() - mu_lost_TLV.Eta());
	  }
	}
	else{
	  ml1loverlap_EM = (mu_TLV + mu_lost_TLV).M();      
	  mTl1loverlap_EM = calcMt(mu_TLV, mu_lost_TLV);      
	  mTllloverlap_EM = calcMt(mu_TLV + el_TLV, mu_lost_TLV);      
	  DeltaRl1loverlap_EM = mu_TLV.DeltaR(mu_lost_TLV);
	  if((mu_TLV + mu_lost_TLV).M() < MZ+10. && (mu_TLV + mu_lost_TLV).M() > MZ-10.){
	    DeltaRZl1loverlap_EM = mu_TLV.DeltaR(mu_lost_TLV);
	    DeltaEtaZl1loverlap_EM = fabs(mu_TLV.Eta() - mu_lost_TLV.Eta());
	  }
	}
      }      
      
      break; // only use lost OS lepton with highest pT
      
    }
  }
  
  for(uint iel=0; iel<susyNt->ele()->size(); iel++){
    Electron* el_lost = & susyNt->ele()->at(iel);
    if(el_lost->DeltaR(*el) < 0.0001) continue;  //no signal lepton
    if((el_lost->q * el->q)<0.){
      TLorentzVector el_lost_TLV;
      el_lost_TLV.SetPtEtaPhiE(el_lost->pt, el_lost->eta ,el_lost->phi, el_lost->pt*cosh(el_lost->eta));
      bool isSoftElectron = false;
      for(uint iel1=0; iel1<softElectrons.size(); iel1++){
	if(el_lost->DeltaR(*softElectrons.at(iel1)) < 0.0001) isSoftElectron = true;
      }
      bool isOverlapElectron = false;
      for(uint iel1=0; iel1<overlapElectrons.size(); iel1++){
	if(el_lost->DeltaR(*overlapElectrons.at(iel1)) < 0.0001) isOverlapElectron = true;
      }
//       cout << "lost elec" << endl;
      if(mu_TLV.Pt() < el_TLV.Pt()){
	ml0llost_EM = (el_TLV + el_lost_TLV).M();            
	mTl0llost_EM = calcMt(el_TLV, el_lost_TLV);            
	mTllllost_EM = calcMt(el_TLV + mu_TLV, el_lost_TLV);           
	DeltaRl0llost_EM = el_TLV.DeltaR(el_lost_TLV);
	if((el_TLV + el_lost_TLV).M() < MZ+10. && (el_TLV + el_lost_TLV).M() > MZ-10.){
	  DeltaRZl0llost_EM = el_TLV.DeltaR(el_lost_TLV);
	  DeltaEtaZl0llost_EM = fabs(el_TLV.Eta() - el_lost_TLV.Eta());
	}
      }
      else{
	ml1llost_EM = (el_TLV + el_lost_TLV).M();            
	mTl1llost_EM = calcMt(el_TLV, el_lost_TLV);      
	mTllllost_EM = calcMt(el_TLV + mu_TLV, el_lost_TLV);                 
	DeltaRl1llost_EM = el_TLV.DeltaR(el_lost_TLV);
	if((el_TLV + el_lost_TLV).M() < MZ+10. && (el_TLV + el_lost_TLV).M() > MZ-10.){
	  DeltaRZl1llost_EM = el_TLV.DeltaR(el_lost_TLV);
	  DeltaEtaZl1llost_EM = fabs(el_TLV.Eta() - el_lost_TLV.Eta());
	}
      }
      
      if(isSoftElectron){
// 	cout << "soft elec" << endl;
	if(mu_TLV.Pt() < el_TLV.Pt()){
	  ml0lsoft_EM = (el_TLV + el_lost_TLV).M();      
	  mTl0lsoft_EM = calcMt(el_TLV, el_lost_TLV);      
	  mTlllsoft_EM = calcMt(el_TLV + mu_TLV, el_lost_TLV);                
	  DeltaRl0lsoft_EM = el_TLV.DeltaR(el_lost_TLV);
	  if((el_TLV + el_lost_TLV).M() < MZ+10. && (el_TLV + el_lost_TLV).M() > MZ-10.){
	    DeltaRZl0lsoft_EM = el_TLV.DeltaR(el_lost_TLV);
	    DeltaEtaZl0lsoft_EM = fabs(el_TLV.Eta() - el_lost_TLV.Eta());	    
	  }
	}
	else{
	  ml1lsoft_EM = (el_TLV + el_lost_TLV).M();      
	  mTl1lsoft_EM = calcMt(el_TLV, el_lost_TLV);      
	  mTlllsoft_EM = calcMt(el_TLV + mu_TLV, el_lost_TLV);           
	  DeltaRl1lsoft_EM = el_TLV.DeltaR(el_lost_TLV);
	  if((el_TLV + el_lost_TLV).M() < MZ+10. && (el_TLV + el_lost_TLV).M() > MZ-10.){
	    DeltaRZl1lsoft_EM = el_TLV.DeltaR(el_lost_TLV);
	    DeltaEtaZl1lsoft_EM = fabs(el_TLV.Eta() - el_lost_TLV.Eta());
	  }
	}
      }
      
      if(isOverlapElectron){
// 	cout << "overl elec" << endl;
	if(mu_TLV.Pt() < el_TLV.Pt()){
	  ml0loverlap_EM = (el_TLV + el_lost_TLV).M();      
	  mTl0loverlap_EM = calcMt(el_TLV, el_lost_TLV);      
	  mTllloverlap_EM = calcMt(el_TLV + mu_TLV, el_lost_TLV);           
	  DeltaRl0loverlap_EM = el_TLV.DeltaR(el_lost_TLV);
	  if((el_TLV + el_lost_TLV).M() < MZ+10. && (el_TLV + el_lost_TLV).M() > MZ-10.){
	    DeltaRZl0loverlap_EM = el_TLV.DeltaR(el_lost_TLV);
	    DeltaEtaZl0loverlap_EM = fabs(el_TLV.Eta() - el_lost_TLV.Eta());
	  } 
	}
	else{
	  ml1loverlap_EM = (el_TLV + el_lost_TLV).M();      
	  mTl1loverlap_EM = calcMt(el_TLV, el_lost_TLV);      
	  mTllloverlap_EM = calcMt(el_TLV + mu_TLV, el_lost_TLV);                
	  DeltaRl1loverlap_EM = el_TLV.DeltaR(el_lost_TLV);
	  if((el_TLV + el_lost_TLV).M() < MZ+10. && (el_TLV + el_lost_TLV).M() > MZ-10.){
	    DeltaRZl1loverlap_EM = el_TLV.DeltaR(el_lost_TLV);
	    DeltaEtaZl1loverlap_EM = fabs(el_TLV.Eta() - el_lost_TLV.Eta());
	  }
	}
      }      
      
      break; // only use lost OS lepton with highest pT
      
    }
  }
  
  mZTT_coll = calcMZTauTau_coll(el_TLV, mu_TLV, met_TLV); 
}

void TSelector_SusyNtuple::fillHistos_EE_SRSS1(float cut_EE, int mcid, float weight_ALL_EE){
//   if (weight_ALL_EE<0.) cout << "NEGATIVE EE" << endl;
  fillHistos_EE(cut_EE, weight_ALL_EE);
 
  h_DeltaRLeptons_EE_SRSS1->Fill(DeltaRee, cut_EE, weight_ALL_EE); 
  h_pTl0_EE_SRSS1->Fill(ptel0, cut_EE, weight_ALL_EE); 
  h_pTl1_EE_SRSS1->Fill(ptel1, cut_EE, weight_ALL_EE); 
  h_pTj0_EE_SRSS1->Fill(pTj0, cut_EE, weight_ALL_EE); 
  h_pTj1_EE_SRSS1->Fill(pTj1, cut_EE, weight_ALL_EE); 
  h_mll_EE_SRSS1->Fill(Mee, cut_EE, weight_ALL_EE); 
  h_METrel_EE_SRSS1->Fill(METrelee, cut_EE, weight_ALL_EE); 
  h_MET_EE_SRSS1->Fill(METee, cut_EE, weight_ALL_EE); 
  h_HT_EE_SRSS1->Fill(HT_EE, cut_EE, weight_ALL_EE); 
  h_mWWt_EE_SRSS1->Fill(mTWW_EE, cut_EE, weight_ALL_EE); 
  h_mTlmin_EE_SRSS1->Fill(mTemin, cut_EE, weight_ALL_EE); 
  h_mTlmax_EE_SRSS1->Fill(mTemax, cut_EE, weight_ALL_EE); 
  h_meff_EE_SRSS1->Fill(meff, cut_EE, weight_ALL_EE); 
  h_mt2_EE_SRSS1->Fill(mt2_ee, cut_EE, weight_ALL_EE); 
  h_mt2J_EE_SRSS1->Fill(mt2J_ee, cut_EE, weight_ALL_EE); 
  h_mt2J0LepM_EE_SRSS1->Fill(mt2J0LepM_ee, cut_EE, weight_ALL_EE); 
  h_mjj_EE_SRSS1->Fill(mjj, cut_EE, weight_ALL_EE); 
  h_DeltaPhiMETll_EE_SRSS1->Fill(DeltaRee, cut_EE, weight_ALL_EE); 
  h_DeltaPhill_EE_SRSS1->Fill(DeltaPhiEE, cut_EE, weight_ALL_EE); 
  h_NBJets_EE_SRSS1->Fill(NBJets, cut_EE, weight_ALL_EE); 
  h_NCJets_EE_SRSS1->Fill(NCJets, cut_EE, weight_ALL_EE); 
  h_NFJets_EE_SRSS1->Fill(NFJets, cut_EE, weight_ALL_EE); 
  h_mZTT_coll_EE_SRSS1->Fill(mZTT_coll, cut_EE, weight_ALL_EE); 
  h_mZTT_mmc_EE_SRSS1->Fill(mZTT_mmc, cut_EE, weight_ALL_EE); 
  
  h_DeltaPhijj_EE_SRSS1->Fill(DeltaPhijj, cut_EE, weight_ALL_EE);  
  h_pTjj_EE_SRSS1->Fill(pTjj, cut_EE, weight_ALL_EE);  
  h_ptll_EE_SRSS1->Fill(pTee, cut_EE, weight_ALL_EE);  
  h_DeltaPhiMETl0_EE_SRSS1->Fill(DeltaPhiMETel0, cut_EE, weight_ALL_EE);  
  h_DeltaPhiMETl1_EE_SRSS1->Fill(DeltaPhiMETel1, cut_EE, weight_ALL_EE);    
  h_DeltaPhiMETj0_EE_SRSS1->Fill(DeltaPhiMETj0, cut_EE, weight_ALL_EE);  
  h_DeltaPhiMETj1_EE_SRSS1->Fill(DeltaPhiMETj1, cut_EE, weight_ALL_EE);  
  h_DeltaPhiMETjj_EE_SRSS1->Fill(DeltaPhiMETjj, cut_EE, weight_ALL_EE);  
  h_DeltaRjj_EE_SRSS1->Fill(DeltaRjj, cut_EE, weight_ALL_EE);  
  h_Mljj_EE_SRSS1->Fill(Mljj_EE, cut_EE, weight_ALL_EE);
  h_etal0_EE_SRSS1->Fill(fabs(eta_el0), cut_EE, weight_ALL_EE);  
  h_etal1_EE_SRSS1->Fill(fabs(eta_el1), cut_EE, weight_ALL_EE);  
  h_etaj0_EE_SRSS1->Fill(fabs(eta_j0), cut_EE, weight_ALL_EE);  
  h_etaj1_EE_SRSS1->Fill(fabs(eta_j1), cut_EE, weight_ALL_EE);  
  h_mTl0MET_EE_SRSS1->Fill(mTel0MET, cut_EE, weight_ALL_EE);  
  h_mTl1MET_EE_SRSS1->Fill(mTel1MET, cut_EE, weight_ALL_EE);  
  h_DeltaPhilljj_EE_SRSS1->Fill(DeltaPhieejj, cut_EE, weight_ALL_EE);  
  h_DeltaPhil0jj_EE_SRSS1->Fill(DeltaPhiel0jj, cut_EE, weight_ALL_EE);  
  h_DeltaPhil1jj_EE_SRSS1->Fill(DeltaPhiel1jj, cut_EE, weight_ALL_EE);  
  h_DeltaRlljj_EE_SRSS1->Fill(DeltaReejj, cut_EE, weight_ALL_EE);  
  h_DeltaEtajj_EE_SRSS1->Fill(DeltaEtajj, cut_EE, weight_ALL_EE);  
  h_DeltaEtall_EE_SRSS1->Fill(DeltaEtaee, cut_EE, weight_ALL_EE);  
  h_mTll_EE_SRSS1->Fill(mTee, cut_EE, weight_ALL_EE);  
  h_mMETll_EE_SRSS1->Fill(mMETee, cut_EE, weight_ALL_EE);  
  h_DeltaYjj_EE_SRSS1->Fill(DeltaYjj, cut_EE, weight_ALL_EE);  
  
  h_D0_branch_l0_EE_SRSS1->Fill(D0_branch_el0, cut_EE, weight_ALL_EE);  
  h_D0_branch_l1_EE_SRSS1->Fill(D0_branch_el1, cut_EE, weight_ALL_EE);  
  h_D0Signif_branch_l0_EE_SRSS1->Fill(sD0Signif_branch_el0, cut_EE, weight_ALL_EE);  
  h_D0Signif_branch_l1_EE_SRSS1->Fill(sD0Signif_branch_el1, cut_EE, weight_ALL_EE);  

  //lost lepton
  h_ml0llost_EE_SRSS1->Fill(ml0llost_EE, cut_EE, weight_ALL_EE);
  h_ml1llost_EE_SRSS1->Fill(ml1llost_EE, cut_EE, weight_ALL_EE);
  h_mTl0llost_EE_SRSS1->Fill(mTl0llost_EE, cut_EE, weight_ALL_EE);
  h_mTl1llost_EE_SRSS1->Fill(mTl1llost_EE, cut_EE, weight_ALL_EE);
  h_DeltaRl0llost_EE_SRSS1->Fill(DeltaRl0llost_EE, cut_EE, weight_ALL_EE);
  h_DeltaRl1llost_EE_SRSS1->Fill(DeltaRl1llost_EE, cut_EE, weight_ALL_EE);  
  h_DeltaRZl0llost_EE_SRSS1->Fill(DeltaRZl0llost_EE, cut_EE, weight_ALL_EE);
  h_DeltaRZl1llost_EE_SRSS1->Fill(DeltaRZl1llost_EE, cut_EE, weight_ALL_EE);  
  h_DeltaEtaZl0llost_EE_SRSS1->Fill(DeltaEtaZl0llost_EE, cut_EE, weight_ALL_EE);
  h_DeltaEtaZl1llost_EE_SRSS1->Fill(DeltaEtaZl1llost_EE, cut_EE, weight_ALL_EE);  
  h_mTllllost_EE_SRSS1->Fill(mTllllost_EE, cut_EE, weight_ALL_EE);
//soft lepton
  h_ml0lsoft_EE_SRSS1->Fill(ml0lsoft_EE, cut_EE, weight_ALL_EE);
  h_ml1lsoft_EE_SRSS1->Fill(ml1lsoft_EE, cut_EE, weight_ALL_EE);
  h_mTl0lsoft_EE_SRSS1->Fill(mTl0lsoft_EE, cut_EE, weight_ALL_EE);
  h_mTl1lsoft_EE_SRSS1->Fill(mTl1lsoft_EE, cut_EE, weight_ALL_EE);
  h_DeltaRl0lsoft_EE_SRSS1->Fill(DeltaRl0lsoft_EE, cut_EE, weight_ALL_EE);
  h_DeltaRl1lsoft_EE_SRSS1->Fill(DeltaRl1lsoft_EE, cut_EE, weight_ALL_EE);  
  h_DeltaRZl0lsoft_EE_SRSS1->Fill(DeltaRZl0lsoft_EE, cut_EE, weight_ALL_EE);
  h_DeltaRZl1lsoft_EE_SRSS1->Fill(DeltaRZl1lsoft_EE, cut_EE, weight_ALL_EE);  
  h_DeltaEtaZl0lsoft_EE_SRSS1->Fill(DeltaEtaZl0lsoft_EE, cut_EE, weight_ALL_EE);
  h_DeltaEtaZl1lsoft_EE_SRSS1->Fill(DeltaEtaZl1lsoft_EE, cut_EE, weight_ALL_EE);
  h_mTlllsoft_EE_SRSS1->Fill(mTlllsoft_EE, cut_EE, weight_ALL_EE);
//overlap lepton
  h_ml0loverlap_EE_SRSS1->Fill(ml0loverlap_EE, cut_EE, weight_ALL_EE);
  h_ml1loverlap_EE_SRSS1->Fill(ml1loverlap_EE, cut_EE, weight_ALL_EE);
  h_mTl0loverlap_EE_SRSS1->Fill(mTl0loverlap_EE, cut_EE, weight_ALL_EE);
  h_mTl1loverlap_EE_SRSS1->Fill(mTl1loverlap_EE, cut_EE, weight_ALL_EE);
  h_DeltaRl0loverlap_EE_SRSS1->Fill(DeltaRl0loverlap_EE, cut_EE, weight_ALL_EE);
  h_DeltaRl1loverlap_EE_SRSS1->Fill(DeltaRl1loverlap_EE, cut_EE, weight_ALL_EE);  
  h_DeltaRZl0loverlap_EE_SRSS1->Fill(DeltaRZl0loverlap_EE, cut_EE, weight_ALL_EE);
  h_DeltaRZl1loverlap_EE_SRSS1->Fill(DeltaRZl1loverlap_EE, cut_EE, weight_ALL_EE);  
  h_DeltaEtaZl0loverlap_EE_SRSS1->Fill(DeltaEtaZl0loverlap_EE, cut_EE, weight_ALL_EE);
  h_DeltaEtaZl1loverlap_EE_SRSS1->Fill(DeltaEtaZl1loverlap_EE, cut_EE, weight_ALL_EE);    
  h_mTllloverlap_EE_SRSS1->Fill(mTllloverlap_EE, cut_EE, weight_ALL_EE);


  
}

void TSelector_SusyNtuple::fillHistos_EE_SRSS2(float cut_EE, int mcid, float weight_ALL_EE){
  
//   fillHistos_EE(cut_EE, weight_ALL_EE);
 
  h_DeltaRLeptons_EE_SRSS2->Fill(DeltaRee, cut_EE, weight_ALL_EE); 
  h_pTl0_EE_SRSS2->Fill(ptel0, cut_EE, weight_ALL_EE); 
  h_pTl1_EE_SRSS2->Fill(ptel1, cut_EE, weight_ALL_EE); 
  h_pTj0_EE_SRSS2->Fill(pTj0, cut_EE, weight_ALL_EE); 
  h_pTj1_EE_SRSS2->Fill(pTj1, cut_EE, weight_ALL_EE); 
  h_mll_EE_SRSS2->Fill(Mee, cut_EE, weight_ALL_EE); 
  h_METrel_EE_SRSS2->Fill(METrelee, cut_EE, weight_ALL_EE); 
  h_MET_EE_SRSS2->Fill(METee, cut_EE, weight_ALL_EE); 
  h_HT_EE_SRSS2->Fill(HT_EE, cut_EE, weight_ALL_EE); 
  h_mWWt_EE_SRSS2->Fill(mTWW_EE, cut_EE, weight_ALL_EE); 
  h_mTlmin_EE_SRSS2->Fill(mTemin, cut_EE, weight_ALL_EE); 
  h_mTlmax_EE_SRSS2->Fill(mTemax, cut_EE, weight_ALL_EE); 
  h_meff_EE_SRSS2->Fill(meff, cut_EE, weight_ALL_EE); 
  h_mt2_EE_SRSS2->Fill(mt2_ee, cut_EE, weight_ALL_EE); 
  h_mt2J_EE_SRSS2->Fill(mt2J_ee, cut_EE, weight_ALL_EE); 
  h_mt2J0LepM_EE_SRSS2->Fill(mt2J0LepM_ee, cut_EE, weight_ALL_EE); 
  h_mjj_EE_SRSS2->Fill(mjj, cut_EE, weight_ALL_EE); 
  h_DeltaPhiMETll_EE_SRSS2->Fill(DeltaRee, cut_EE, weight_ALL_EE); 
  h_DeltaPhill_EE_SRSS2->Fill(DeltaPhiEE, cut_EE, weight_ALL_EE); 
  h_NBJets_EE_SRSS2->Fill(NBJets, cut_EE, weight_ALL_EE); 
  h_NCJets_EE_SRSS2->Fill(NCJets, cut_EE, weight_ALL_EE); 
  h_NFJets_EE_SRSS2->Fill(NFJets, cut_EE, weight_ALL_EE); 
  h_mZTT_coll_EE_SRSS2->Fill(mZTT_coll, cut_EE, weight_ALL_EE); 
  h_mZTT_mmc_EE_SRSS2->Fill(mZTT_mmc, cut_EE, weight_ALL_EE); 
  
  h_DeltaPhijj_EE_SRSS2->Fill(DeltaPhijj, cut_EE, weight_ALL_EE);  
  h_pTjj_EE_SRSS2->Fill(pTjj, cut_EE, weight_ALL_EE);  
  h_ptll_EE_SRSS2->Fill(pTee, cut_EE, weight_ALL_EE);  
  h_DeltaPhiMETl0_EE_SRSS2->Fill(DeltaPhiMETel0, cut_EE, weight_ALL_EE);  
  h_DeltaPhiMETl1_EE_SRSS2->Fill(DeltaPhiMETel1, cut_EE, weight_ALL_EE);    
  h_DeltaPhiMETj0_EE_SRSS2->Fill(DeltaPhiMETj0, cut_EE, weight_ALL_EE);  
  h_DeltaPhiMETj1_EE_SRSS2->Fill(DeltaPhiMETj1, cut_EE, weight_ALL_EE);  
  h_DeltaPhiMETjj_EE_SRSS2->Fill(DeltaPhiMETjj, cut_EE, weight_ALL_EE);  
  h_DeltaRjj_EE_SRSS2->Fill(DeltaRjj, cut_EE, weight_ALL_EE);  
  h_Mljj_EE_SRSS2->Fill(Mljj_EE, cut_EE, weight_ALL_EE);
  h_etal0_EE_SRSS2->Fill(fabs(eta_el0), cut_EE, weight_ALL_EE);  
  h_etal1_EE_SRSS2->Fill(fabs(eta_el1), cut_EE, weight_ALL_EE);  
  h_etaj0_EE_SRSS2->Fill(fabs(eta_j0), cut_EE, weight_ALL_EE);  
  h_etaj1_EE_SRSS2->Fill(fabs(eta_j1), cut_EE, weight_ALL_EE);  
  h_mTl0MET_EE_SRSS2->Fill(mTel0MET, cut_EE, weight_ALL_EE);  
  h_mTl1MET_EE_SRSS2->Fill(mTel1MET, cut_EE, weight_ALL_EE);  
  h_DeltaPhilljj_EE_SRSS2->Fill(DeltaPhieejj, cut_EE, weight_ALL_EE);  
  h_DeltaPhil0jj_EE_SRSS2->Fill(DeltaPhiel0jj, cut_EE, weight_ALL_EE);  
  h_DeltaPhil1jj_EE_SRSS2->Fill(DeltaPhiel1jj, cut_EE, weight_ALL_EE);  
  h_DeltaRlljj_EE_SRSS2->Fill(DeltaReejj, cut_EE, weight_ALL_EE);  
  h_DeltaEtajj_EE_SRSS2->Fill(DeltaEtajj, cut_EE, weight_ALL_EE);
  h_DeltaEtall_EE_SRSS2->Fill(DeltaEtaee, cut_EE, weight_ALL_EE);    
  h_mTll_EE_SRSS2->Fill(mTee, cut_EE, weight_ALL_EE);  
  h_mMETll_EE_SRSS2->Fill(mMETee, cut_EE, weight_ALL_EE);  
  h_DeltaYjj_EE_SRSS2->Fill(DeltaYjj, cut_EE, weight_ALL_EE);  

  h_D0_branch_l0_EE_SRSS2->Fill(D0_branch_el0, cut_EE, weight_ALL_EE);  
  h_D0_branch_l1_EE_SRSS2->Fill(D0_branch_el1, cut_EE, weight_ALL_EE);  
  h_D0Signif_branch_l0_EE_SRSS2->Fill(sD0Signif_branch_el0, cut_EE, weight_ALL_EE);  
  h_D0Signif_branch_l1_EE_SRSS2->Fill(sD0Signif_branch_el1, cut_EE, weight_ALL_EE);  

//lost lepton
  h_ml0llost_EE_SRSS2->Fill(ml0llost_EE, cut_EE, weight_ALL_EE);
  h_ml1llost_EE_SRSS2->Fill(ml1llost_EE, cut_EE, weight_ALL_EE);
  h_mTl0llost_EE_SRSS2->Fill(mTl0llost_EE, cut_EE, weight_ALL_EE);
  h_mTl1llost_EE_SRSS2->Fill(mTl1llost_EE, cut_EE, weight_ALL_EE);
  h_DeltaRl0llost_EE_SRSS2->Fill(DeltaRl0llost_EE, cut_EE, weight_ALL_EE);
  h_DeltaRl1llost_EE_SRSS2->Fill(DeltaRl1llost_EE, cut_EE, weight_ALL_EE);  
  h_DeltaRZl0llost_EE_SRSS2->Fill(DeltaRZl0llost_EE, cut_EE, weight_ALL_EE);
  h_DeltaRZl1llost_EE_SRSS2->Fill(DeltaRZl1llost_EE, cut_EE, weight_ALL_EE);    
  h_DeltaEtaZl0llost_EE_SRSS2->Fill(DeltaEtaZl0llost_EE, cut_EE, weight_ALL_EE);
  h_DeltaEtaZl1llost_EE_SRSS2->Fill(DeltaEtaZl1llost_EE, cut_EE, weight_ALL_EE);     
  h_mTllllost_EE_SRSS2->Fill(mTllllost_EE, cut_EE, weight_ALL_EE);  
//soft lepton
  h_ml0lsoft_EE_SRSS2->Fill(ml0lsoft_EE, cut_EE, weight_ALL_EE);
  h_ml1lsoft_EE_SRSS2->Fill(ml1lsoft_EE, cut_EE, weight_ALL_EE);
  h_mTl0lsoft_EE_SRSS2->Fill(mTl0lsoft_EE, cut_EE, weight_ALL_EE);
  h_mTl1lsoft_EE_SRSS2->Fill(mTl1lsoft_EE, cut_EE, weight_ALL_EE);
  h_DeltaRl0lsoft_EE_SRSS2->Fill(DeltaRl0lsoft_EE, cut_EE, weight_ALL_EE);
  h_DeltaRl1lsoft_EE_SRSS2->Fill(DeltaRl1lsoft_EE, cut_EE, weight_ALL_EE);  
  h_DeltaRZl0lsoft_EE_SRSS2->Fill(DeltaRZl0lsoft_EE, cut_EE, weight_ALL_EE);
  h_DeltaRZl1lsoft_EE_SRSS2->Fill(DeltaRZl1lsoft_EE, cut_EE, weight_ALL_EE);  
  h_DeltaEtaZl0lsoft_EE_SRSS2->Fill(DeltaEtaZl0lsoft_EE, cut_EE, weight_ALL_EE);
  h_DeltaEtaZl1lsoft_EE_SRSS2->Fill(DeltaEtaZl1lsoft_EE, cut_EE, weight_ALL_EE);    
  h_mTlllsoft_EE_SRSS2->Fill(mTlllsoft_EE, cut_EE, weight_ALL_EE);
//overlap lepton
  h_ml0loverlap_EE_SRSS2->Fill(ml0loverlap_EE, cut_EE, weight_ALL_EE);
  h_ml1loverlap_EE_SRSS2->Fill(ml1loverlap_EE, cut_EE, weight_ALL_EE);
  h_mTl0loverlap_EE_SRSS2->Fill(mTl0loverlap_EE, cut_EE, weight_ALL_EE);
  h_mTl1loverlap_EE_SRSS2->Fill(mTl1loverlap_EE, cut_EE, weight_ALL_EE);
  h_DeltaRl0loverlap_EE_SRSS2->Fill(DeltaRl0loverlap_EE, cut_EE, weight_ALL_EE);
  h_DeltaRl1loverlap_EE_SRSS2->Fill(DeltaRl1loverlap_EE, cut_EE, weight_ALL_EE);  
  h_DeltaRZl0loverlap_EE_SRSS2->Fill(DeltaRZl0loverlap_EE, cut_EE, weight_ALL_EE);
  h_DeltaRZl1loverlap_EE_SRSS2->Fill(DeltaRZl1loverlap_EE, cut_EE, weight_ALL_EE);    
  h_DeltaEtaZl0loverlap_EE_SRSS2->Fill(DeltaEtaZl0loverlap_EE, cut_EE, weight_ALL_EE);
  h_DeltaEtaZl1loverlap_EE_SRSS2->Fill(DeltaEtaZl1loverlap_EE, cut_EE, weight_ALL_EE);      
  h_mTllloverlap_EE_SRSS2->Fill(mTllloverlap_EE, cut_EE, weight_ALL_EE);


  
}

void TSelector_SusyNtuple::fillHistos_EE_SROS1(float cut_EE, int mcid, float weight_ALL_EE){

  fillHistos_EE(cut_EE, weight_ALL_EE);
  
  h_DeltaRLeptons_EE_SROS1->Fill(DeltaRee, cut_EE, weight_ALL_EE); 
  h_pTl0_EE_SROS1->Fill(ptel0, cut_EE, weight_ALL_EE); 
  h_pTl1_EE_SROS1->Fill(ptel1, cut_EE, weight_ALL_EE); 
  h_pTj0_EE_SROS1->Fill(pTj0, cut_EE, weight_ALL_EE); 
  h_pTj1_EE_SROS1->Fill(pTj1, cut_EE, weight_ALL_EE); 
  h_mll_EE_SROS1->Fill(Mee, cut_EE, weight_ALL_EE); 
  h_METrel_EE_SROS1->Fill(METrelee, cut_EE, weight_ALL_EE); 
  h_MET_EE_SROS1->Fill(METee, cut_EE, weight_ALL_EE); 
  h_HT_EE_SROS1->Fill(HT_EE, cut_EE, weight_ALL_EE); 
  h_mWWt_EE_SROS1->Fill(mTWW_EE, cut_EE, weight_ALL_EE); 
  h_mTlmin_EE_SROS1->Fill(mTemin, cut_EE, weight_ALL_EE); 
  h_mTlmax_EE_SROS1->Fill(mTemax, cut_EE, weight_ALL_EE); 
  h_meff_EE_SROS1->Fill(meff, cut_EE, weight_ALL_EE); 
  h_mt2_EE_SROS1->Fill(mt2_ee, cut_EE, weight_ALL_EE); 
  h_mt2J_EE_SROS1->Fill(mt2J_ee, cut_EE, weight_ALL_EE); 
  h_mt2J0LepM_EE_SROS1->Fill(mt2J0LepM_ee, cut_EE, weight_ALL_EE); 
  h_mjj_EE_SROS1->Fill(mjj, cut_EE, weight_ALL_EE); 
  h_DeltaPhiMETll_EE_SROS1->Fill(DeltaRee, cut_EE, weight_ALL_EE); 
  h_DeltaPhill_EE_SROS1->Fill(DeltaPhiEE, cut_EE, weight_ALL_EE); 
  h_NBJets_EE_SROS1->Fill(NBJets, cut_EE, weight_ALL_EE); 
  h_NCJets_EE_SROS1->Fill(NCJets, cut_EE, weight_ALL_EE); 
  h_NFJets_EE_SROS1->Fill(NFJets, cut_EE, weight_ALL_EE); 
  h_mZTT_coll_EE_SROS1->Fill(mZTT_coll, cut_EE, weight_ALL_EE); 
  h_mZTT_mmc_EE_SROS1->Fill(mZTT_mmc, cut_EE, weight_ALL_EE); 
  
  h_DeltaPhijj_EE_SROS1->Fill(DeltaPhijj, cut_EE, weight_ALL_EE);  
  h_pTjj_EE_SROS1->Fill(pTjj, cut_EE, weight_ALL_EE);  
  h_ptll_EE_SROS1->Fill(pTee, cut_EE, weight_ALL_EE);  
  h_DeltaPhiMETl0_EE_SROS1->Fill(DeltaPhiMETel0, cut_EE, weight_ALL_EE);  
  h_DeltaPhiMETl1_EE_SROS1->Fill(DeltaPhiMETel1, cut_EE, weight_ALL_EE);    
  h_DeltaPhiMETj0_EE_SROS1->Fill(DeltaPhiMETj0, cut_EE, weight_ALL_EE);  
  h_DeltaPhiMETj1_EE_SROS1->Fill(DeltaPhiMETj1, cut_EE, weight_ALL_EE);  
  h_DeltaPhiMETjj_EE_SROS1->Fill(DeltaPhiMETjj, cut_EE, weight_ALL_EE);  
  h_DeltaRjj_EE_SROS1->Fill(DeltaRjj, cut_EE, weight_ALL_EE);  
  h_Mljj_EE_SROS1->Fill(Mljj_EE, cut_EE, weight_ALL_EE);
  h_etal0_EE_SROS1->Fill(fabs(eta_el0), cut_EE, weight_ALL_EE);  
  h_etal1_EE_SROS1->Fill(fabs(eta_el1), cut_EE, weight_ALL_EE);  
  h_etaj0_EE_SROS1->Fill(fabs(eta_j0), cut_EE, weight_ALL_EE);  
  h_etaj1_EE_SROS1->Fill(fabs(eta_j1), cut_EE, weight_ALL_EE);  
  h_mTl0MET_EE_SROS1->Fill(mTel0MET, cut_EE, weight_ALL_EE);  
  h_mTl1MET_EE_SROS1->Fill(mTel1MET, cut_EE, weight_ALL_EE);  
  h_DeltaPhilljj_EE_SROS1->Fill(DeltaPhieejj, cut_EE, weight_ALL_EE);  
  h_DeltaPhil0jj_EE_SROS1->Fill(DeltaPhiel0jj, cut_EE, weight_ALL_EE);  
  h_DeltaPhil1jj_EE_SROS1->Fill(DeltaPhiel1jj, cut_EE, weight_ALL_EE);  
  h_DeltaRlljj_EE_SROS1->Fill(DeltaReejj, cut_EE, weight_ALL_EE);  
  h_DeltaEtajj_EE_SROS1->Fill(DeltaEtajj, cut_EE, weight_ALL_EE);  
  h_DeltaEtall_EE_SROS1->Fill(DeltaEtaee, cut_EE, weight_ALL_EE);    
  h_mTll_EE_SROS1->Fill(mTee, cut_EE, weight_ALL_EE);  
  h_mMETll_EE_SROS1->Fill(mMETee, cut_EE, weight_ALL_EE);  
  h_DeltaYjj_EE_SROS1->Fill(DeltaYjj, cut_EE, weight_ALL_EE);  

  h_D0_branch_l0_EE_SROS1->Fill(D0_branch_el0, cut_EE, weight_ALL_EE);  
  h_D0_branch_l1_EE_SROS1->Fill(D0_branch_el1, cut_EE, weight_ALL_EE);  
  h_D0Signif_branch_l0_EE_SROS1->Fill(sD0Signif_branch_el0, cut_EE, weight_ALL_EE);  
  h_D0Signif_branch_l1_EE_SROS1->Fill(sD0Signif_branch_el1, cut_EE, weight_ALL_EE);  
  
//lost lepton
  h_ml0llost_EE_SROS1->Fill(ml0llost_EE, cut_EE, weight_ALL_EE);
  h_ml1llost_EE_SROS1->Fill(ml1llost_EE, cut_EE, weight_ALL_EE);
  h_mTl0llost_EE_SROS1->Fill(mTl0llost_EE, cut_EE, weight_ALL_EE);
  h_mTl1llost_EE_SROS1->Fill(mTl1llost_EE, cut_EE, weight_ALL_EE);
  h_DeltaRl0llost_EE_SROS1->Fill(DeltaRl0llost_EE, cut_EE, weight_ALL_EE);
  h_DeltaRl1llost_EE_SROS1->Fill(DeltaRl1llost_EE, cut_EE, weight_ALL_EE);  
  h_DeltaRZl0llost_EE_SROS1->Fill(DeltaRZl0llost_EE, cut_EE, weight_ALL_EE);
  h_DeltaRZl1llost_EE_SROS1->Fill(DeltaRZl1llost_EE, cut_EE, weight_ALL_EE);    
  h_DeltaEtaZl0llost_EE_SROS1->Fill(DeltaEtaZl0llost_EE, cut_EE, weight_ALL_EE);
  h_DeltaEtaZl1llost_EE_SROS1->Fill(DeltaEtaZl1llost_EE, cut_EE, weight_ALL_EE);  
  h_mTllllost_EE_SROS1->Fill(mTllllost_EE, cut_EE, weight_ALL_EE);  
//soft lepton
  h_ml0lsoft_EE_SROS1->Fill(ml0lsoft_EE, cut_EE, weight_ALL_EE);
  h_ml1lsoft_EE_SROS1->Fill(ml1lsoft_EE, cut_EE, weight_ALL_EE);
  h_mTl0lsoft_EE_SROS1->Fill(mTl0lsoft_EE, cut_EE, weight_ALL_EE);
  h_mTl1lsoft_EE_SROS1->Fill(mTl1lsoft_EE, cut_EE, weight_ALL_EE);
  h_DeltaRl0lsoft_EE_SROS1->Fill(DeltaRl0lsoft_EE, cut_EE, weight_ALL_EE);
  h_DeltaRl1lsoft_EE_SROS1->Fill(DeltaRl1lsoft_EE, cut_EE, weight_ALL_EE);  
  h_DeltaRZl0lsoft_EE_SROS1->Fill(DeltaRZl0lsoft_EE, cut_EE, weight_ALL_EE);
  h_DeltaRZl1lsoft_EE_SROS1->Fill(DeltaRZl1lsoft_EE, cut_EE, weight_ALL_EE);    
  h_DeltaEtaZl0lsoft_EE_SROS1->Fill(DeltaEtaZl0lsoft_EE, cut_EE, weight_ALL_EE);
  h_DeltaEtaZl1lsoft_EE_SROS1->Fill(DeltaEtaZl1lsoft_EE, cut_EE, weight_ALL_EE);     
  h_mTlllsoft_EE_SROS1->Fill(mTlllsoft_EE, cut_EE, weight_ALL_EE);
//overlap lepton
  h_ml0loverlap_EE_SROS1->Fill(ml0loverlap_EE, cut_EE, weight_ALL_EE);
  h_ml1loverlap_EE_SROS1->Fill(ml1loverlap_EE, cut_EE, weight_ALL_EE);
  h_mTl0loverlap_EE_SROS1->Fill(mTl0loverlap_EE, cut_EE, weight_ALL_EE);
  h_mTl1loverlap_EE_SROS1->Fill(mTl1loverlap_EE, cut_EE, weight_ALL_EE);
  h_DeltaRl0loverlap_EE_SROS1->Fill(DeltaRl0loverlap_EE, cut_EE, weight_ALL_EE);
  h_DeltaRl1loverlap_EE_SROS1->Fill(DeltaRl1loverlap_EE, cut_EE, weight_ALL_EE);  
  h_DeltaRZl0loverlap_EE_SROS1->Fill(DeltaRZl0loverlap_EE, cut_EE, weight_ALL_EE);
  h_DeltaRZl1loverlap_EE_SROS1->Fill(DeltaRZl1loverlap_EE, cut_EE, weight_ALL_EE);    
  h_DeltaEtaZl0loverlap_EE_SROS1->Fill(DeltaEtaZl0loverlap_EE, cut_EE, weight_ALL_EE);
  h_DeltaEtaZl1loverlap_EE_SROS1->Fill(DeltaEtaZl1loverlap_EE, cut_EE, weight_ALL_EE);      
  h_mTllloverlap_EE_SROS1->Fill(mTllloverlap_EE, cut_EE, weight_ALL_EE);

}


void TSelector_SusyNtuple::fillHistos_MM_SRSS1(float cut_MM, int mcid, float weight_ALL_MM){
  
  fillHistos_MM(cut_MM, weight_ALL_MM);
    
  h_DeltaRLeptons_MM_SRSS1->Fill(DeltaRmm, cut_MM, weight_ALL_MM); 
  h_pTl0_MM_SRSS1->Fill(ptmu0, cut_MM, weight_ALL_MM); 
  h_pTl1_MM_SRSS1->Fill(ptmu1, cut_MM, weight_ALL_MM); 
  h_pTj0_MM_SRSS1->Fill(pTj0, cut_MM, weight_ALL_MM); 
  h_pTj1_MM_SRSS1->Fill(pTj1, cut_MM, weight_ALL_MM); 
  h_mll_MM_SRSS1->Fill(Mmm, cut_MM, weight_ALL_MM); 
  h_METrel_MM_SRSS1->Fill(METrelmm, cut_MM, weight_ALL_MM); 
  h_MET_MM_SRSS1->Fill(METmm, cut_MM, weight_ALL_MM); 
  h_HT_MM_SRSS1->Fill(HT_MM, cut_MM, weight_ALL_MM); 
  h_mWWt_MM_SRSS1->Fill(mTWW_MM, cut_MM, weight_ALL_MM); 
  h_mTlmin_MM_SRSS1->Fill(mTmmin, cut_MM, weight_ALL_MM); 
  h_mTlmax_MM_SRSS1->Fill(mTmmax, cut_MM, weight_ALL_MM); 
  h_meff_MM_SRSS1->Fill(meff, cut_MM, weight_ALL_MM); 
  h_mt2_MM_SRSS1->Fill(mt2_mm, cut_MM, weight_ALL_MM); 
  h_mt2J_MM_SRSS1->Fill(mt2J_mm, cut_MM, weight_ALL_MM);   
  h_mt2J0LepM_MM_SRSS1->Fill(mt2J0LepM_mm, cut_MM, weight_ALL_MM);   
  h_mjj_MM_SRSS1->Fill(mjj, cut_MM, weight_ALL_MM); 
  h_DeltaPhiMETll_MM_SRSS1->Fill(DeltaRmm, cut_MM, weight_ALL_MM); 
  h_DeltaPhill_MM_SRSS1->Fill(DeltaPhiMM, cut_MM, weight_ALL_MM); 
  h_NBJets_MM_SRSS1->Fill(NBJets, cut_MM, weight_ALL_MM); 
  h_NCJets_MM_SRSS1->Fill(NCJets, cut_MM, weight_ALL_MM); 
  h_NFJets_MM_SRSS1->Fill(NFJets, cut_MM, weight_ALL_MM); 
  h_mZTT_coll_MM_SRSS1->Fill(mZTT_coll, cut_MM, weight_ALL_MM); 
  h_mZTT_mmc_MM_SRSS1->Fill(mZTT_mmc, cut_MM, weight_ALL_MM); 
  
  h_DeltaPhijj_MM_SRSS1->Fill(DeltaPhijj, cut_MM, weight_ALL_MM);  
  h_pTjj_MM_SRSS1->Fill(pTjj, cut_MM, weight_ALL_MM);  
  h_ptll_MM_SRSS1->Fill(pTmm, cut_MM, weight_ALL_MM);  
  h_DeltaPhiMETl0_MM_SRSS1->Fill(DeltaPhiMETmu0, cut_MM, weight_ALL_MM);  
  h_DeltaPhiMETl1_MM_SRSS1->Fill(DeltaPhiMETmu1, cut_MM, weight_ALL_MM);    
  h_DeltaPhiMETj0_MM_SRSS1->Fill(DeltaPhiMETj0, cut_MM, weight_ALL_MM);  
  h_DeltaPhiMETj1_MM_SRSS1->Fill(DeltaPhiMETj1, cut_MM, weight_ALL_MM);  
  h_DeltaPhiMETjj_MM_SRSS1->Fill(DeltaPhiMETjj, cut_MM, weight_ALL_MM);  
  h_DeltaRjj_MM_SRSS1->Fill(DeltaRjj, cut_MM, weight_ALL_MM);  
  h_Mljj_MM_SRSS1->Fill(Mljj_MM, cut_MM, weight_ALL_MM);
  h_etal0_MM_SRSS1->Fill(fabs(eta_mu0), cut_MM, weight_ALL_MM);  
  h_etal1_MM_SRSS1->Fill(fabs(eta_mu1), cut_MM, weight_ALL_MM);  
  h_etaj0_MM_SRSS1->Fill(fabs(eta_j0), cut_MM, weight_ALL_MM);  
  h_etaj1_MM_SRSS1->Fill(fabs(eta_j1), cut_MM, weight_ALL_MM);  
  h_mTl0MET_MM_SRSS1->Fill(mTmu0MET, cut_MM, weight_ALL_MM);  
  h_mTl1MET_MM_SRSS1->Fill(mTmu1MET, cut_MM, weight_ALL_MM);  
  h_DeltaPhilljj_MM_SRSS1->Fill(DeltaPhimmjj, cut_MM, weight_ALL_MM);  
  h_DeltaPhil0jj_MM_SRSS1->Fill(DeltaPhimu0jj, cut_MM, weight_ALL_MM);  
  h_DeltaPhil1jj_MM_SRSS1->Fill(DeltaPhimu1jj, cut_MM, weight_ALL_MM);  
  h_DeltaRlljj_MM_SRSS1->Fill(DeltaRmmjj, cut_MM, weight_ALL_MM);  
  h_DeltaEtajj_MM_SRSS1->Fill(DeltaEtajj, cut_MM, weight_ALL_MM);  
  h_DeltaEtall_MM_SRSS1->Fill(DeltaEtamm, cut_MM, weight_ALL_MM);    
  h_mTll_MM_SRSS1->Fill(mTmm, cut_MM, weight_ALL_MM);  
  h_mMETll_MM_SRSS1->Fill(mMETmm, cut_MM, weight_ALL_MM);  
  h_DeltaYjj_MM_SRSS1->Fill(DeltaYjj, cut_MM, weight_ALL_MM);

  h_D0_branch_l0_MM_SRSS1->Fill(D0_branch_mu0, cut_MM, weight_ALL_MM);  
  h_D0_branch_l1_MM_SRSS1->Fill(D0_branch_mu1, cut_MM, weight_ALL_MM);  
  h_D0Signif_branch_l0_MM_SRSS1->Fill(sD0Signif_branch_mu0, cut_MM, weight_ALL_MM);  
  h_D0Signif_branch_l1_MM_SRSS1->Fill(sD0Signif_branch_mu1, cut_MM, weight_ALL_MM);  

  //lost lepton
  h_ml0llost_MM_SRSS1->Fill(ml0llost_MM, cut_MM, weight_ALL_MM);
  h_ml1llost_MM_SRSS1->Fill(ml1llost_MM, cut_MM, weight_ALL_MM);
  h_mTl0llost_MM_SRSS1->Fill(mTl0llost_MM, cut_MM, weight_ALL_MM);
  h_mTl1llost_MM_SRSS1->Fill(mTl1llost_MM, cut_MM, weight_ALL_MM);
  h_DeltaRl0llost_MM_SRSS1->Fill(DeltaRl0llost_MM, cut_MM, weight_ALL_MM);
  h_DeltaRl1llost_MM_SRSS1->Fill(DeltaRl1llost_MM, cut_MM, weight_ALL_MM);  
  h_DeltaRZl0llost_MM_SRSS1->Fill(DeltaRZl0llost_MM, cut_MM, weight_ALL_MM);
  h_DeltaRZl1llost_MM_SRSS1->Fill(DeltaRZl1llost_MM, cut_MM, weight_ALL_MM);    
  h_DeltaEtaZl0llost_MM_SRSS1->Fill(DeltaEtaZl0llost_MM, cut_MM, weight_ALL_MM);
  h_DeltaEtaZl1llost_MM_SRSS1->Fill(DeltaEtaZl1llost_MM, cut_MM, weight_ALL_MM);      
  h_mTllllost_MM_SRSS1->Fill(mTllllost_MM, cut_MM, weight_ALL_MM);  
  //soft lepton
  h_ml0lsoft_MM_SRSS1->Fill(ml0lsoft_MM, cut_MM, weight_ALL_MM);
  h_ml1lsoft_MM_SRSS1->Fill(ml1lsoft_MM, cut_MM, weight_ALL_MM);
  h_mTl0lsoft_MM_SRSS1->Fill(mTl0lsoft_MM, cut_MM, weight_ALL_MM);
  h_mTl1lsoft_MM_SRSS1->Fill(mTl1lsoft_MM, cut_MM, weight_ALL_MM);
  h_DeltaRl0lsoft_MM_SRSS1->Fill(DeltaRl0lsoft_MM, cut_MM, weight_ALL_MM);
  h_DeltaRl1lsoft_MM_SRSS1->Fill(DeltaRl1lsoft_MM, cut_MM, weight_ALL_MM);  
  h_DeltaRZl0lsoft_MM_SRSS1->Fill(DeltaRZl0lsoft_MM, cut_MM, weight_ALL_MM);
  h_DeltaRZl1lsoft_MM_SRSS1->Fill(DeltaRZl1lsoft_MM, cut_MM, weight_ALL_MM);    
  h_DeltaEtaZl0lsoft_MM_SRSS1->Fill(DeltaEtaZl0lsoft_MM, cut_MM, weight_ALL_MM);
  h_DeltaEtaZl1lsoft_MM_SRSS1->Fill(DeltaEtaZl1lsoft_MM, cut_MM, weight_ALL_MM);      
  h_mTlllsoft_MM_SRSS1->Fill(mTlllsoft_MM, cut_MM, weight_ALL_MM);
//overlap lepton
  h_ml0loverlap_MM_SRSS1->Fill(ml0loverlap_MM, cut_MM, weight_ALL_MM);
  h_ml1loverlap_MM_SRSS1->Fill(ml1loverlap_MM, cut_MM, weight_ALL_MM);
  h_mTl0loverlap_MM_SRSS1->Fill(mTl0loverlap_MM, cut_MM, weight_ALL_MM);
  h_mTl1loverlap_MM_SRSS1->Fill(mTl1loverlap_MM, cut_MM, weight_ALL_MM);
  h_DeltaRl0loverlap_MM_SRSS1->Fill(DeltaRl0loverlap_MM, cut_MM, weight_ALL_MM);
  h_DeltaRl1loverlap_MM_SRSS1->Fill(DeltaRl1loverlap_MM, cut_MM, weight_ALL_MM);  
  h_DeltaRZl0loverlap_MM_SRSS1->Fill(DeltaRZl0loverlap_MM, cut_MM, weight_ALL_MM);
  h_DeltaRZl1loverlap_MM_SRSS1->Fill(DeltaRZl1loverlap_MM, cut_MM, weight_ALL_MM);    
  h_DeltaEtaZl0loverlap_MM_SRSS1->Fill(DeltaEtaZl0loverlap_MM, cut_MM, weight_ALL_MM);
  h_DeltaEtaZl1loverlap_MM_SRSS1->Fill(DeltaEtaZl1loverlap_MM, cut_MM, weight_ALL_MM);  
  h_mTllloverlap_MM_SRSS1->Fill(mTllloverlap_MM, cut_MM, weight_ALL_MM);

}

void TSelector_SusyNtuple::fillHistos_MM_SRSS2(float cut_MM, int mcid, float weight_ALL_MM){
  
//   fillHistos_MM(cut_MM, weight_ALL_MM);
    
  h_DeltaRLeptons_MM_SRSS2->Fill(DeltaRmm, cut_MM, weight_ALL_MM); 
  h_pTl0_MM_SRSS2->Fill(ptmu0, cut_MM, weight_ALL_MM); 
  h_pTl1_MM_SRSS2->Fill(ptmu1, cut_MM, weight_ALL_MM); 
  h_pTj0_MM_SRSS2->Fill(pTj0, cut_MM, weight_ALL_MM); 
  h_pTj1_MM_SRSS2->Fill(pTj1, cut_MM, weight_ALL_MM); 
  h_mll_MM_SRSS2->Fill(Mmm, cut_MM, weight_ALL_MM); 
  h_METrel_MM_SRSS2->Fill(METrelmm, cut_MM, weight_ALL_MM); 
  h_MET_MM_SRSS2->Fill(METmm, cut_MM, weight_ALL_MM); 
  h_HT_MM_SRSS2->Fill(HT_MM, cut_MM, weight_ALL_MM); 
  h_mWWt_MM_SRSS2->Fill(mTWW_MM, cut_MM, weight_ALL_MM); 
  h_mTlmin_MM_SRSS2->Fill(mTmmin, cut_MM, weight_ALL_MM); 
  h_mTlmax_MM_SRSS2->Fill(mTmmax, cut_MM, weight_ALL_MM); 
  h_meff_MM_SRSS2->Fill(meff, cut_MM, weight_ALL_MM); 
  h_mt2_MM_SRSS2->Fill(mt2_mm, cut_MM, weight_ALL_MM); 
  h_mt2J_MM_SRSS2->Fill(mt2J_mm, cut_MM, weight_ALL_MM);   
  h_mt2J0LepM_MM_SRSS2->Fill(mt2J0LepM_mm, cut_MM, weight_ALL_MM);   
  h_mjj_MM_SRSS2->Fill(mjj, cut_MM, weight_ALL_MM); 
  h_DeltaPhiMETll_MM_SRSS2->Fill(DeltaRmm, cut_MM, weight_ALL_MM); 
  h_DeltaPhill_MM_SRSS2->Fill(DeltaPhiMM, cut_MM, weight_ALL_MM); 
  h_NBJets_MM_SRSS2->Fill(NBJets, cut_MM, weight_ALL_MM); 
  h_NCJets_MM_SRSS2->Fill(NCJets, cut_MM, weight_ALL_MM); 
  h_NFJets_MM_SRSS2->Fill(NFJets, cut_MM, weight_ALL_MM); 
  h_mZTT_coll_MM_SRSS2->Fill(mZTT_coll, cut_MM, weight_ALL_MM); 
  h_mZTT_mmc_MM_SRSS2->Fill(mZTT_mmc, cut_MM, weight_ALL_MM); 
  
  h_DeltaPhijj_MM_SRSS2->Fill(DeltaPhijj, cut_MM, weight_ALL_MM);  
  h_pTjj_MM_SRSS2->Fill(pTjj, cut_MM, weight_ALL_MM);  
  h_ptll_MM_SRSS2->Fill(pTmm, cut_MM, weight_ALL_MM);  
  h_DeltaPhiMETl0_MM_SRSS2->Fill(DeltaPhiMETmu0, cut_MM, weight_ALL_MM);  
  h_DeltaPhiMETl1_MM_SRSS2->Fill(DeltaPhiMETmu1, cut_MM, weight_ALL_MM);    
  h_DeltaPhiMETj0_MM_SRSS2->Fill(DeltaPhiMETj0, cut_MM, weight_ALL_MM);  
  h_DeltaPhiMETj1_MM_SRSS2->Fill(DeltaPhiMETj1, cut_MM, weight_ALL_MM);  
  h_DeltaPhiMETjj_MM_SRSS2->Fill(DeltaPhiMETjj, cut_MM, weight_ALL_MM);  
  h_DeltaRjj_MM_SRSS2->Fill(DeltaRjj, cut_MM, weight_ALL_MM);  
  h_Mljj_MM_SRSS2->Fill(Mljj_MM, cut_MM, weight_ALL_MM);
  h_etal0_MM_SRSS2->Fill(fabs(eta_mu0), cut_MM, weight_ALL_MM);  
  h_etal1_MM_SRSS2->Fill(fabs(eta_mu1), cut_MM, weight_ALL_MM);  
  h_etaj0_MM_SRSS2->Fill(fabs(eta_j0), cut_MM, weight_ALL_MM);  
  h_etaj1_MM_SRSS2->Fill(fabs(eta_j1), cut_MM, weight_ALL_MM);  
  h_mTl0MET_MM_SRSS2->Fill(mTmu0MET, cut_MM, weight_ALL_MM);  
  h_mTl1MET_MM_SRSS2->Fill(mTmu1MET, cut_MM, weight_ALL_MM);  
  h_DeltaPhilljj_MM_SRSS2->Fill(DeltaPhimmjj, cut_MM, weight_ALL_MM);  
  h_DeltaPhil0jj_MM_SRSS2->Fill(DeltaPhimu0jj, cut_MM, weight_ALL_MM);  
  h_DeltaPhil1jj_MM_SRSS2->Fill(DeltaPhimu1jj, cut_MM, weight_ALL_MM);  
  h_DeltaRlljj_MM_SRSS2->Fill(DeltaRmmjj, cut_MM, weight_ALL_MM);  
  h_DeltaEtajj_MM_SRSS2->Fill(DeltaEtajj, cut_MM, weight_ALL_MM);  
  h_DeltaEtall_MM_SRSS2->Fill(DeltaEtamm, cut_MM, weight_ALL_MM);    
  h_mTll_MM_SRSS2->Fill(mTmm, cut_MM, weight_ALL_MM);  
  h_mMETll_MM_SRSS2->Fill(mMETmm, cut_MM, weight_ALL_MM);  
  h_DeltaYjj_MM_SRSS2->Fill(DeltaYjj, cut_MM, weight_ALL_MM);  

  h_D0_branch_l0_MM_SRSS2->Fill(D0_branch_mu0, cut_MM, weight_ALL_MM);  
  h_D0_branch_l1_MM_SRSS2->Fill(D0_branch_mu1, cut_MM, weight_ALL_MM);  
  h_D0Signif_branch_l0_MM_SRSS2->Fill(sD0Signif_branch_mu0, cut_MM, weight_ALL_MM);  
  h_D0Signif_branch_l1_MM_SRSS2->Fill(sD0Signif_branch_mu1, cut_MM, weight_ALL_MM);  
  
  //lost lepton
  h_ml0llost_MM_SRSS2->Fill(ml0llost_MM, cut_MM, weight_ALL_MM);
  h_ml1llost_MM_SRSS2->Fill(ml1llost_MM, cut_MM, weight_ALL_MM);
  h_mTl0llost_MM_SRSS2->Fill(mTl0llost_MM, cut_MM, weight_ALL_MM);
  h_mTl1llost_MM_SRSS2->Fill(mTl1llost_MM, cut_MM, weight_ALL_MM);
  h_DeltaRl0llost_MM_SRSS2->Fill(DeltaRl0llost_MM, cut_MM, weight_ALL_MM);
  h_DeltaRl1llost_MM_SRSS2->Fill(DeltaRl1llost_MM, cut_MM, weight_ALL_MM);  
  h_DeltaRZl0llost_MM_SRSS2->Fill(DeltaRZl0llost_MM, cut_MM, weight_ALL_MM);
  h_DeltaRZl1llost_MM_SRSS2->Fill(DeltaRZl1llost_MM, cut_MM, weight_ALL_MM);    
  h_DeltaEtaZl0llost_MM_SRSS2->Fill(DeltaEtaZl0llost_MM, cut_MM, weight_ALL_MM);
  h_DeltaEtaZl1llost_MM_SRSS2->Fill(DeltaEtaZl1llost_MM, cut_MM, weight_ALL_MM);     
  h_mTllllost_MM_SRSS2->Fill(mTllllost_MM, cut_MM, weight_ALL_MM);  
  //soft lepton
  h_ml0lsoft_MM_SRSS2->Fill(ml0lsoft_MM, cut_MM, weight_ALL_MM);
  h_ml1lsoft_MM_SRSS2->Fill(ml1lsoft_MM, cut_MM, weight_ALL_MM);
  h_mTl0lsoft_MM_SRSS2->Fill(mTl0lsoft_MM, cut_MM, weight_ALL_MM);
  h_mTl1lsoft_MM_SRSS2->Fill(mTl1lsoft_MM, cut_MM, weight_ALL_MM);
  h_DeltaRl0lsoft_MM_SRSS2->Fill(DeltaRl0lsoft_MM, cut_MM, weight_ALL_MM);
  h_DeltaRl1lsoft_MM_SRSS2->Fill(DeltaRl1lsoft_MM, cut_MM, weight_ALL_MM);  
  h_DeltaRZl0lsoft_MM_SRSS2->Fill(DeltaRZl0lsoft_MM, cut_MM, weight_ALL_MM);
  h_DeltaRZl1lsoft_MM_SRSS2->Fill(DeltaRZl1lsoft_MM, cut_MM, weight_ALL_MM);    
  h_DeltaEtaZl0lsoft_MM_SRSS2->Fill(DeltaEtaZl0lsoft_MM, cut_MM, weight_ALL_MM);
  h_DeltaEtaZl1lsoft_MM_SRSS2->Fill(DeltaEtaZl1lsoft_MM, cut_MM, weight_ALL_MM);      
  h_mTlllsoft_MM_SRSS2->Fill(mTlllsoft_MM, cut_MM, weight_ALL_MM);
//overlap lepton
  h_ml0loverlap_MM_SRSS2->Fill(ml0loverlap_MM, cut_MM, weight_ALL_MM);
  h_ml1loverlap_MM_SRSS2->Fill(ml1loverlap_MM, cut_MM, weight_ALL_MM);
  h_mTl0loverlap_MM_SRSS2->Fill(mTl0loverlap_MM, cut_MM, weight_ALL_MM);
  h_mTl1loverlap_MM_SRSS2->Fill(mTl1loverlap_MM, cut_MM, weight_ALL_MM);
  h_DeltaRl0loverlap_MM_SRSS2->Fill(DeltaRl0loverlap_MM, cut_MM, weight_ALL_MM);
  h_DeltaRl1loverlap_MM_SRSS2->Fill(DeltaRl1loverlap_MM, cut_MM, weight_ALL_MM);  
  h_DeltaRZl0loverlap_MM_SRSS2->Fill(DeltaRZl0loverlap_MM, cut_MM, weight_ALL_MM);
  h_DeltaRZl1loverlap_MM_SRSS2->Fill(DeltaRZl1loverlap_MM, cut_MM, weight_ALL_MM);
  h_DeltaEtaZl0loverlap_MM_SRSS2->Fill(DeltaEtaZl0loverlap_MM, cut_MM, weight_ALL_MM);
  h_DeltaEtaZl1loverlap_MM_SRSS2->Fill(DeltaEtaZl1loverlap_MM, cut_MM, weight_ALL_MM);      
  h_mTllloverlap_MM_SRSS2->Fill(mTllloverlap_MM, cut_MM, weight_ALL_MM);

}

void TSelector_SusyNtuple::fillHistos_MM_SRSS3(float cut_MM, int mcid, float weight_ALL_MM){
  
//   fillHistos_MM(cut_MM, weight_ALL_MM);
    
  h_DeltaRLeptons_MM_SRSS3->Fill(DeltaRmm, cut_MM, weight_ALL_MM); 
  h_pTl0_MM_SRSS3->Fill(ptmu0, cut_MM, weight_ALL_MM); 
  h_pTl1_MM_SRSS3->Fill(ptmu1, cut_MM, weight_ALL_MM); 
  h_pTj0_MM_SRSS3->Fill(pTj0, cut_MM, weight_ALL_MM); 
  h_pTj1_MM_SRSS3->Fill(pTj1, cut_MM, weight_ALL_MM); 
  h_mll_MM_SRSS3->Fill(Mmm, cut_MM, weight_ALL_MM); 
  h_METrel_MM_SRSS3->Fill(METrelmm, cut_MM, weight_ALL_MM); 
  h_MET_MM_SRSS3->Fill(METmm, cut_MM, weight_ALL_MM); 
  h_HT_MM_SRSS3->Fill(HT_MM, cut_MM, weight_ALL_MM); 
  h_mWWt_MM_SRSS3->Fill(mTWW_MM, cut_MM, weight_ALL_MM); 
  h_mTlmin_MM_SRSS3->Fill(mTmmin, cut_MM, weight_ALL_MM); 
  h_mTlmax_MM_SRSS3->Fill(mTmmax, cut_MM, weight_ALL_MM); 
  h_meff_MM_SRSS3->Fill(meff, cut_MM, weight_ALL_MM); 
  h_mt2_MM_SRSS3->Fill(mt2_mm, cut_MM, weight_ALL_MM); 
  h_mt2J_MM_SRSS3->Fill(mt2J_mm, cut_MM, weight_ALL_MM);   
  h_mt2J0LepM_MM_SRSS3->Fill(mt2J0LepM_mm, cut_MM, weight_ALL_MM);   
  h_mjj_MM_SRSS3->Fill(mjj, cut_MM, weight_ALL_MM); 
  h_DeltaPhiMETll_MM_SRSS3->Fill(DeltaRmm, cut_MM, weight_ALL_MM); 
  h_DeltaPhill_MM_SRSS3->Fill(DeltaPhiMM, cut_MM, weight_ALL_MM); 
  h_NBJets_MM_SRSS3->Fill(NBJets, cut_MM, weight_ALL_MM); 
  h_NCJets_MM_SRSS3->Fill(NCJets, cut_MM, weight_ALL_MM); 
  h_NFJets_MM_SRSS3->Fill(NFJets, cut_MM, weight_ALL_MM); 
  h_mZTT_coll_MM_SRSS3->Fill(mZTT_coll, cut_MM, weight_ALL_MM); 
  h_mZTT_mmc_MM_SRSS3->Fill(mZTT_mmc, cut_MM, weight_ALL_MM); 
  
  h_DeltaPhijj_MM_SRSS3->Fill(DeltaPhijj, cut_MM, weight_ALL_MM);  
  h_pTjj_MM_SRSS3->Fill(pTjj, cut_MM, weight_ALL_MM);  
  h_ptll_MM_SRSS3->Fill(pTmm, cut_MM, weight_ALL_MM);  
  h_DeltaPhiMETl0_MM_SRSS3->Fill(DeltaPhiMETmu0, cut_MM, weight_ALL_MM);  
  h_DeltaPhiMETl1_MM_SRSS3->Fill(DeltaPhiMETmu1, cut_MM, weight_ALL_MM);    
  h_DeltaPhiMETj0_MM_SRSS3->Fill(DeltaPhiMETj0, cut_MM, weight_ALL_MM);  
  h_DeltaPhiMETj1_MM_SRSS3->Fill(DeltaPhiMETj1, cut_MM, weight_ALL_MM);  
  h_DeltaPhiMETjj_MM_SRSS3->Fill(DeltaPhiMETjj, cut_MM, weight_ALL_MM);  
  h_DeltaRjj_MM_SRSS3->Fill(DeltaRjj, cut_MM, weight_ALL_MM);  
  h_Mljj_MM_SRSS3->Fill(Mljj_MM, cut_MM, weight_ALL_MM);
  h_etal0_MM_SRSS3->Fill(fabs(eta_mu0), cut_MM, weight_ALL_MM);  
  h_etal1_MM_SRSS3->Fill(fabs(eta_mu1), cut_MM, weight_ALL_MM);  
  h_etaj0_MM_SRSS3->Fill(fabs(eta_j0), cut_MM, weight_ALL_MM);  
  h_etaj1_MM_SRSS3->Fill(fabs(eta_j1), cut_MM, weight_ALL_MM);  
  h_mTl0MET_MM_SRSS3->Fill(mTmu0MET, cut_MM, weight_ALL_MM);  
  h_mTl1MET_MM_SRSS3->Fill(mTmu1MET, cut_MM, weight_ALL_MM);  
  h_DeltaPhilljj_MM_SRSS3->Fill(DeltaPhimmjj, cut_MM, weight_ALL_MM);  
  h_DeltaPhil0jj_MM_SRSS3->Fill(DeltaPhimu0jj, cut_MM, weight_ALL_MM);  
  h_DeltaPhil1jj_MM_SRSS3->Fill(DeltaPhimu1jj, cut_MM, weight_ALL_MM);  
  h_DeltaRlljj_MM_SRSS3->Fill(DeltaRmmjj, cut_MM, weight_ALL_MM);  
  h_DeltaEtajj_MM_SRSS3->Fill(DeltaEtajj, cut_MM, weight_ALL_MM);  
  h_DeltaEtall_MM_SRSS3->Fill(DeltaEtamm, cut_MM, weight_ALL_MM);    
  h_mTll_MM_SRSS3->Fill(mTmm, cut_MM, weight_ALL_MM);  
  h_mMETll_MM_SRSS3->Fill(mMETmm, cut_MM, weight_ALL_MM);  
  h_DeltaYjj_MM_SRSS3->Fill(DeltaYjj, cut_MM, weight_ALL_MM);  

  h_D0_branch_l0_MM_SRSS3->Fill(D0_branch_mu0, cut_MM, weight_ALL_MM);  
  h_D0_branch_l1_MM_SRSS3->Fill(D0_branch_mu1, cut_MM, weight_ALL_MM);  
  h_D0Signif_branch_l0_MM_SRSS3->Fill(sD0Signif_branch_mu0, cut_MM, weight_ALL_MM);  
  h_D0Signif_branch_l1_MM_SRSS3->Fill(sD0Signif_branch_mu1, cut_MM, weight_ALL_MM);  
  
   //lost lepton
  h_ml0llost_MM_SRSS3->Fill(ml0llost_MM, cut_MM, weight_ALL_MM);
  h_ml1llost_MM_SRSS3->Fill(ml1llost_MM, cut_MM, weight_ALL_MM);
  h_mTl0llost_MM_SRSS3->Fill(mTl0llost_MM, cut_MM, weight_ALL_MM);
  h_mTl1llost_MM_SRSS3->Fill(mTl1llost_MM, cut_MM, weight_ALL_MM);
  h_DeltaRl0llost_MM_SRSS3->Fill(DeltaRl0llost_MM, cut_MM, weight_ALL_MM);
  h_DeltaRl1llost_MM_SRSS3->Fill(DeltaRl1llost_MM, cut_MM, weight_ALL_MM);  
  h_DeltaRZl0llost_MM_SRSS3->Fill(DeltaRZl0llost_MM, cut_MM, weight_ALL_MM);
  h_DeltaRZl1llost_MM_SRSS3->Fill(DeltaRZl1llost_MM, cut_MM, weight_ALL_MM);    
  h_DeltaEtaZl0llost_MM_SRSS3->Fill(DeltaEtaZl0llost_MM, cut_MM, weight_ALL_MM);
  h_DeltaEtaZl1llost_MM_SRSS3->Fill(DeltaEtaZl1llost_MM, cut_MM, weight_ALL_MM);    
  h_mTllllost_MM_SRSS3->Fill(mTllllost_MM, cut_MM, weight_ALL_MM);   
  //soft lepton
  h_ml0lsoft_MM_SRSS3->Fill(ml0lsoft_MM, cut_MM, weight_ALL_MM);
  h_ml1lsoft_MM_SRSS3->Fill(ml1lsoft_MM, cut_MM, weight_ALL_MM);
  h_mTl0lsoft_MM_SRSS3->Fill(mTl0lsoft_MM, cut_MM, weight_ALL_MM);
  h_mTl1lsoft_MM_SRSS3->Fill(mTl1lsoft_MM, cut_MM, weight_ALL_MM);
  h_DeltaRl0lsoft_MM_SRSS3->Fill(DeltaRl0lsoft_MM, cut_MM, weight_ALL_MM);
  h_DeltaRl1lsoft_MM_SRSS3->Fill(DeltaRl1lsoft_MM, cut_MM, weight_ALL_MM);  
  h_DeltaRZl0lsoft_MM_SRSS3->Fill(DeltaRZl0lsoft_MM, cut_MM, weight_ALL_MM);
  h_DeltaRZl1lsoft_MM_SRSS3->Fill(DeltaRZl1lsoft_MM, cut_MM, weight_ALL_MM);    
  h_DeltaEtaZl0lsoft_MM_SRSS3->Fill(DeltaEtaZl0lsoft_MM, cut_MM, weight_ALL_MM);
  h_DeltaEtaZl1lsoft_MM_SRSS3->Fill(DeltaEtaZl1lsoft_MM, cut_MM, weight_ALL_MM);      
  h_mTlllsoft_MM_SRSS3->Fill(mTlllsoft_MM, cut_MM, weight_ALL_MM);
//overlap lepton
  h_ml0loverlap_MM_SRSS3->Fill(ml0loverlap_MM, cut_MM, weight_ALL_MM);
  h_ml1loverlap_MM_SRSS3->Fill(ml1loverlap_MM, cut_MM, weight_ALL_MM);
  h_mTl0loverlap_MM_SRSS3->Fill(mTl0loverlap_MM, cut_MM, weight_ALL_MM);
  h_mTl1loverlap_MM_SRSS3->Fill(mTl1loverlap_MM, cut_MM, weight_ALL_MM);
  h_DeltaRl0loverlap_MM_SRSS3->Fill(DeltaRl0loverlap_MM, cut_MM, weight_ALL_MM);
  h_DeltaRl1loverlap_MM_SRSS3->Fill(DeltaRl1loverlap_MM, cut_MM, weight_ALL_MM);  
  h_DeltaRZl0loverlap_MM_SRSS3->Fill(DeltaRZl0loverlap_MM, cut_MM, weight_ALL_MM);
  h_DeltaRZl1loverlap_MM_SRSS3->Fill(DeltaRZl1loverlap_MM, cut_MM, weight_ALL_MM);  
  h_DeltaEtaZl0loverlap_MM_SRSS3->Fill(DeltaEtaZl0loverlap_MM, cut_MM, weight_ALL_MM);
  h_DeltaEtaZl1loverlap_MM_SRSS3->Fill(DeltaEtaZl1loverlap_MM, cut_MM, weight_ALL_MM);    
  h_mTllloverlap_MM_SRSS3->Fill(mTllloverlap_MM, cut_MM, weight_ALL_MM);

}

void TSelector_SusyNtuple::fillHistos_MM_SRSS4(float cut_MM, int mcid, float weight_ALL_MM){
  
//   fillHistos_MM(cut_MM, weight_ALL_MM);

  h_DeltaRLeptons_MM_SRSS4->Fill(DeltaRmm, cut_MM, weight_ALL_MM); 
  h_pTl0_MM_SRSS4->Fill(ptmu0, cut_MM, weight_ALL_MM); 
  h_pTl1_MM_SRSS4->Fill(ptmu1, cut_MM, weight_ALL_MM); 
  h_pTj0_MM_SRSS4->Fill(pTj0, cut_MM, weight_ALL_MM); 
  h_pTj1_MM_SRSS4->Fill(pTj1, cut_MM, weight_ALL_MM); 
  h_mll_MM_SRSS4->Fill(Mmm, cut_MM, weight_ALL_MM); 
  h_METrel_MM_SRSS4->Fill(METrelmm, cut_MM, weight_ALL_MM); 
  h_MET_MM_SRSS4->Fill(METmm, cut_MM, weight_ALL_MM); 
  h_HT_MM_SRSS4->Fill(HT_MM, cut_MM, weight_ALL_MM); 
  h_mWWt_MM_SRSS4->Fill(mTWW_MM, cut_MM, weight_ALL_MM); 
  h_mTlmin_MM_SRSS4->Fill(mTmmin, cut_MM, weight_ALL_MM); 
  h_mTlmax_MM_SRSS4->Fill(mTmmax, cut_MM, weight_ALL_MM); 
  h_meff_MM_SRSS4->Fill(meff, cut_MM, weight_ALL_MM); 
  h_mt2_MM_SRSS4->Fill(mt2_mm, cut_MM, weight_ALL_MM); 
  h_mt2J_MM_SRSS4->Fill(mt2J_mm, cut_MM, weight_ALL_MM);   
  h_mt2J0LepM_MM_SRSS4->Fill(mt2J0LepM_mm, cut_MM, weight_ALL_MM);   
  h_mjj_MM_SRSS4->Fill(mjj, cut_MM, weight_ALL_MM); 
  h_DeltaPhiMETll_MM_SRSS4->Fill(DeltaRmm, cut_MM, weight_ALL_MM); 
  h_DeltaPhill_MM_SRSS4->Fill(DeltaPhiMM, cut_MM, weight_ALL_MM); 
  h_NBJets_MM_SRSS4->Fill(NBJets, cut_MM, weight_ALL_MM); 
  h_NCJets_MM_SRSS4->Fill(NCJets, cut_MM, weight_ALL_MM); 
  h_NFJets_MM_SRSS4->Fill(NFJets, cut_MM, weight_ALL_MM); 
  h_mZTT_coll_MM_SRSS4->Fill(mZTT_coll, cut_MM, weight_ALL_MM); 
  h_mZTT_mmc_MM_SRSS4->Fill(mZTT_mmc, cut_MM, weight_ALL_MM); 
  
  h_DeltaPhijj_MM_SRSS4->Fill(DeltaPhijj, cut_MM, weight_ALL_MM);  
  h_pTjj_MM_SRSS4->Fill(pTjj, cut_MM, weight_ALL_MM);  
  h_ptll_MM_SRSS4->Fill(pTmm, cut_MM, weight_ALL_MM);  
  h_DeltaPhiMETl0_MM_SRSS4->Fill(DeltaPhiMETmu0, cut_MM, weight_ALL_MM);  
  h_DeltaPhiMETl1_MM_SRSS4->Fill(DeltaPhiMETmu1, cut_MM, weight_ALL_MM);    
  h_DeltaPhiMETj0_MM_SRSS4->Fill(DeltaPhiMETj0, cut_MM, weight_ALL_MM);  
  h_DeltaPhiMETj1_MM_SRSS4->Fill(DeltaPhiMETj1, cut_MM, weight_ALL_MM);  
  h_DeltaPhiMETjj_MM_SRSS4->Fill(DeltaPhiMETjj, cut_MM, weight_ALL_MM);  
  h_DeltaRjj_MM_SRSS4->Fill(DeltaRjj, cut_MM, weight_ALL_MM);  
  h_Mljj_MM_SRSS4->Fill(Mljj_MM, cut_MM, weight_ALL_MM);
  h_etal0_MM_SRSS4->Fill(fabs(eta_mu0), cut_MM, weight_ALL_MM);  
  h_etal1_MM_SRSS4->Fill(fabs(eta_mu1), cut_MM, weight_ALL_MM);  
  h_etaj0_MM_SRSS4->Fill(fabs(eta_j0), cut_MM, weight_ALL_MM);  
  h_etaj1_MM_SRSS4->Fill(fabs(eta_j1), cut_MM, weight_ALL_MM);  
  h_mTl0MET_MM_SRSS4->Fill(mTmu0MET, cut_MM, weight_ALL_MM);  
  h_mTl1MET_MM_SRSS4->Fill(mTmu1MET, cut_MM, weight_ALL_MM);  
  h_DeltaPhilljj_MM_SRSS4->Fill(DeltaPhimmjj, cut_MM, weight_ALL_MM);  
  h_DeltaPhil0jj_MM_SRSS4->Fill(DeltaPhimu0jj, cut_MM, weight_ALL_MM);  
  h_DeltaPhil1jj_MM_SRSS4->Fill(DeltaPhimu1jj, cut_MM, weight_ALL_MM);  
  h_DeltaRlljj_MM_SRSS4->Fill(DeltaRmmjj, cut_MM, weight_ALL_MM);  
  h_DeltaEtajj_MM_SRSS4->Fill(DeltaEtajj, cut_MM, weight_ALL_MM);  
  h_DeltaEtall_MM_SRSS4->Fill(DeltaEtamm, cut_MM, weight_ALL_MM);    
  h_mTll_MM_SRSS4->Fill(mTmm, cut_MM, weight_ALL_MM);  
  h_mMETll_MM_SRSS4->Fill(mMETmm, cut_MM, weight_ALL_MM);  
  h_DeltaYjj_MM_SRSS4->Fill(DeltaYjj, cut_MM, weight_ALL_MM);  

  h_D0_branch_l0_MM_SRSS4->Fill(D0_branch_mu0, cut_MM, weight_ALL_MM);  
  h_D0_branch_l1_MM_SRSS4->Fill(D0_branch_mu1, cut_MM, weight_ALL_MM);  
  h_D0Signif_branch_l0_MM_SRSS4->Fill(sD0Signif_branch_mu0, cut_MM, weight_ALL_MM);  
  h_D0Signif_branch_l1_MM_SRSS4->Fill(sD0Signif_branch_mu1, cut_MM, weight_ALL_MM);  
  
  //lost lepton
  h_ml0llost_MM_SRSS4->Fill(ml0llost_MM, cut_MM, weight_ALL_MM);
  h_ml1llost_MM_SRSS4->Fill(ml1llost_MM, cut_MM, weight_ALL_MM);
  h_mTl0llost_MM_SRSS4->Fill(mTl0llost_MM, cut_MM, weight_ALL_MM);
  h_mTl1llost_MM_SRSS4->Fill(mTl1llost_MM, cut_MM, weight_ALL_MM);
  h_DeltaRl0llost_MM_SRSS4->Fill(DeltaRl0llost_MM, cut_MM, weight_ALL_MM);
  h_DeltaRl1llost_MM_SRSS4->Fill(DeltaRl1llost_MM, cut_MM, weight_ALL_MM);  
  h_DeltaRZl0llost_MM_SRSS4->Fill(DeltaRZl0llost_MM, cut_MM, weight_ALL_MM);
  h_DeltaRZl1llost_MM_SRSS4->Fill(DeltaRZl1llost_MM, cut_MM, weight_ALL_MM);    
  h_DeltaEtaZl0llost_MM_SRSS4->Fill(DeltaEtaZl0llost_MM, cut_MM, weight_ALL_MM);
  h_DeltaEtaZl1llost_MM_SRSS4->Fill(DeltaEtaZl1llost_MM, cut_MM, weight_ALL_MM);      
  h_mTllllost_MM_SRSS4->Fill(mTllllost_MM, cut_MM, weight_ALL_MM);  
  //soft lepton
  h_ml0lsoft_MM_SRSS4->Fill(ml0lsoft_MM, cut_MM, weight_ALL_MM);
  h_ml1lsoft_MM_SRSS4->Fill(ml1lsoft_MM, cut_MM, weight_ALL_MM);
  h_mTl0lsoft_MM_SRSS4->Fill(mTl0lsoft_MM, cut_MM, weight_ALL_MM);
  h_mTl1lsoft_MM_SRSS4->Fill(mTl1lsoft_MM, cut_MM, weight_ALL_MM);
  h_DeltaRl0lsoft_MM_SRSS4->Fill(DeltaRl0lsoft_MM, cut_MM, weight_ALL_MM);
  h_DeltaRl1lsoft_MM_SRSS4->Fill(DeltaRl1lsoft_MM, cut_MM, weight_ALL_MM);  
  h_DeltaRZl0lsoft_MM_SRSS4->Fill(DeltaRZl0lsoft_MM, cut_MM, weight_ALL_MM);
  h_DeltaRZl1lsoft_MM_SRSS4->Fill(DeltaRZl1lsoft_MM, cut_MM, weight_ALL_MM);
  h_DeltaEtaZl0lsoft_MM_SRSS4->Fill(DeltaEtaZl0lsoft_MM, cut_MM, weight_ALL_MM);
  h_DeltaEtaZl1lsoft_MM_SRSS4->Fill(DeltaEtaZl1lsoft_MM, cut_MM, weight_ALL_MM);      
  h_mTlllsoft_MM_SRSS4->Fill(mTlllsoft_MM, cut_MM, weight_ALL_MM);
//overlap lepton
  h_ml0loverlap_MM_SRSS4->Fill(ml0loverlap_MM, cut_MM, weight_ALL_MM);
  h_ml1loverlap_MM_SRSS4->Fill(ml1loverlap_MM, cut_MM, weight_ALL_MM);
  h_mTl0loverlap_MM_SRSS4->Fill(mTl0loverlap_MM, cut_MM, weight_ALL_MM);
  h_mTl1loverlap_MM_SRSS4->Fill(mTl1loverlap_MM, cut_MM, weight_ALL_MM);
  h_DeltaRl0loverlap_MM_SRSS4->Fill(DeltaRl0loverlap_MM, cut_MM, weight_ALL_MM);
  h_DeltaRl1loverlap_MM_SRSS4->Fill(DeltaRl1loverlap_MM, cut_MM, weight_ALL_MM);  
  h_DeltaRZl0loverlap_MM_SRSS4->Fill(DeltaRZl0loverlap_MM, cut_MM, weight_ALL_MM);
  h_DeltaRZl1loverlap_MM_SRSS4->Fill(DeltaRZl1loverlap_MM, cut_MM, weight_ALL_MM);    
  h_DeltaEtaZl0loverlap_MM_SRSS4->Fill(DeltaEtaZl0loverlap_MM, cut_MM, weight_ALL_MM);
  h_DeltaEtaZl1loverlap_MM_SRSS4->Fill(DeltaEtaZl1loverlap_MM, cut_MM, weight_ALL_MM);      
  h_mTllloverlap_MM_SRSS4->Fill(mTllloverlap_MM, cut_MM, weight_ALL_MM);
}

void TSelector_SusyNtuple::fillHistos_MM_SROS1(float cut_MM, int mcid, float weight_ALL_MM){
  
  fillHistos_MM(cut_MM, weight_ALL_MM);

  h_DeltaRLeptons_MM_SROS1->Fill(DeltaRmm, cut_MM, weight_ALL_MM); 
  h_pTl0_MM_SROS1->Fill(ptmu0, cut_MM, weight_ALL_MM); 
  h_pTl1_MM_SROS1->Fill(ptmu1, cut_MM, weight_ALL_MM); 
  h_pTj0_MM_SROS1->Fill(pTj0, cut_MM, weight_ALL_MM); 
  h_pTj1_MM_SROS1->Fill(pTj1, cut_MM, weight_ALL_MM); 
  h_mll_MM_SROS1->Fill(Mmm, cut_MM, weight_ALL_MM); 
  h_METrel_MM_SROS1->Fill(METrelmm, cut_MM, weight_ALL_MM); 
  h_MET_MM_SROS1->Fill(METmm, cut_MM, weight_ALL_MM); 
  h_HT_MM_SROS1->Fill(HT_MM, cut_MM, weight_ALL_MM); 
  h_mWWt_MM_SROS1->Fill(mTWW_MM, cut_MM, weight_ALL_MM); 
  h_mTlmin_MM_SROS1->Fill(mTmmin, cut_MM, weight_ALL_MM); 
  h_mTlmax_MM_SROS1->Fill(mTmmax, cut_MM, weight_ALL_MM);   
  h_meff_MM_SROS1->Fill(meff, cut_MM, weight_ALL_MM); 
  h_mt2_MM_SROS1->Fill(mt2_mm, cut_MM, weight_ALL_MM); 
  h_mt2J_MM_SROS1->Fill(mt2J_mm, cut_MM, weight_ALL_MM);   
  h_mt2J0LepM_MM_SROS1->Fill(mt2J0LepM_mm, cut_MM, weight_ALL_MM);   
  h_mjj_MM_SROS1->Fill(mjj, cut_MM, weight_ALL_MM); 
  h_DeltaPhiMETll_MM_SROS1->Fill(DeltaRmm, cut_MM, weight_ALL_MM); 
  h_DeltaPhill_MM_SROS1->Fill(DeltaPhiMM, cut_MM, weight_ALL_MM); 
  h_NBJets_MM_SROS1->Fill(NBJets, cut_MM, weight_ALL_MM); 
  h_NCJets_MM_SROS1->Fill(NCJets, cut_MM, weight_ALL_MM); 
  h_NFJets_MM_SROS1->Fill(NFJets, cut_MM, weight_ALL_MM); 
  h_mZTT_coll_MM_SROS1->Fill(mZTT_coll, cut_MM, weight_ALL_MM); 
  h_mZTT_mmc_MM_SROS1->Fill(mZTT_mmc, cut_MM, weight_ALL_MM); 
  
  h_DeltaPhijj_MM_SROS1->Fill(DeltaPhijj, cut_MM, weight_ALL_MM);  
  h_pTjj_MM_SROS1->Fill(pTjj, cut_MM, weight_ALL_MM);  
  h_ptll_MM_SROS1->Fill(pTmm, cut_MM, weight_ALL_MM);  
  h_DeltaPhiMETl0_MM_SROS1->Fill(DeltaPhiMETmu0, cut_MM, weight_ALL_MM);  
  h_DeltaPhiMETl1_MM_SROS1->Fill(DeltaPhiMETmu1, cut_MM, weight_ALL_MM);    
  h_DeltaPhiMETj0_MM_SROS1->Fill(DeltaPhiMETj0, cut_MM, weight_ALL_MM);  
  h_DeltaPhiMETj1_MM_SROS1->Fill(DeltaPhiMETj1, cut_MM, weight_ALL_MM);  
  h_DeltaPhiMETjj_MM_SROS1->Fill(DeltaPhiMETjj, cut_MM, weight_ALL_MM);  
  h_DeltaRjj_MM_SROS1->Fill(DeltaRjj, cut_MM, weight_ALL_MM);  
  h_Mljj_MM_SROS1->Fill(Mljj_MM, cut_MM, weight_ALL_MM);
  h_etal0_MM_SROS1->Fill(fabs(eta_mu0), cut_MM, weight_ALL_MM);  
  h_etal1_MM_SROS1->Fill(fabs(eta_mu1), cut_MM, weight_ALL_MM);  
  h_etaj0_MM_SROS1->Fill(fabs(eta_j0), cut_MM, weight_ALL_MM);  
  h_etaj1_MM_SROS1->Fill(fabs(eta_j1), cut_MM, weight_ALL_MM);  
  h_mTl0MET_MM_SROS1->Fill(mTmu0MET, cut_MM, weight_ALL_MM);  
  h_mTl1MET_MM_SROS1->Fill(mTmu1MET, cut_MM, weight_ALL_MM);  
  h_DeltaPhilljj_MM_SROS1->Fill(DeltaPhimmjj, cut_MM, weight_ALL_MM);  
  h_DeltaPhil0jj_MM_SROS1->Fill(DeltaPhimu0jj, cut_MM, weight_ALL_MM);  
  h_DeltaPhil1jj_MM_SROS1->Fill(DeltaPhimu1jj, cut_MM, weight_ALL_MM);  
  h_DeltaRlljj_MM_SROS1->Fill(DeltaRmmjj, cut_MM, weight_ALL_MM);  
  h_DeltaEtajj_MM_SROS1->Fill(DeltaEtajj, cut_MM, weight_ALL_MM);  
  h_DeltaEtall_MM_SROS1->Fill(DeltaEtamm, cut_MM, weight_ALL_MM);    
  h_mTll_MM_SROS1->Fill(mTmm, cut_MM, weight_ALL_MM);  
  h_mMETll_MM_SROS1->Fill(mMETmm, cut_MM, weight_ALL_MM);  
  h_DeltaYjj_MM_SROS1->Fill(DeltaYjj, cut_MM, weight_ALL_MM);  

  h_D0_branch_l0_MM_SROS1->Fill(D0_branch_mu0, cut_MM, weight_ALL_MM);  
  h_D0_branch_l1_MM_SROS1->Fill(D0_branch_mu1, cut_MM, weight_ALL_MM);  
  h_D0Signif_branch_l0_MM_SROS1->Fill(sD0Signif_branch_mu0, cut_MM, weight_ALL_MM);  
  h_D0Signif_branch_l1_MM_SROS1->Fill(sD0Signif_branch_mu1, cut_MM, weight_ALL_MM);  

  //lost lepton
  h_ml0llost_MM_SROS1->Fill(ml0llost_MM, cut_MM, weight_ALL_MM);
  h_ml1llost_MM_SROS1->Fill(ml1llost_MM, cut_MM, weight_ALL_MM);
  h_mTl0llost_MM_SROS1->Fill(mTl0llost_MM, cut_MM, weight_ALL_MM);
  h_mTl1llost_MM_SROS1->Fill(mTl1llost_MM, cut_MM, weight_ALL_MM);
  h_DeltaRl0llost_MM_SROS1->Fill(DeltaRl0llost_MM, cut_MM, weight_ALL_MM);
  h_DeltaRl1llost_MM_SROS1->Fill(DeltaRl1llost_MM, cut_MM, weight_ALL_MM);  
  h_DeltaRZl0llost_MM_SROS1->Fill(DeltaRZl0llost_MM, cut_MM, weight_ALL_MM);
  h_DeltaRZl1llost_MM_SROS1->Fill(DeltaRZl1llost_MM, cut_MM, weight_ALL_MM);    
  h_DeltaEtaZl0llost_MM_SROS1->Fill(DeltaEtaZl0llost_MM, cut_MM, weight_ALL_MM);
  h_DeltaEtaZl1llost_MM_SROS1->Fill(DeltaEtaZl1llost_MM, cut_MM, weight_ALL_MM);      
  h_mTllllost_MM_SROS1->Fill(mTllllost_MM, cut_MM, weight_ALL_MM);  
  //soft lepton
  h_ml0lsoft_MM_SROS1->Fill(ml0lsoft_MM, cut_MM, weight_ALL_MM);
  h_ml1lsoft_MM_SROS1->Fill(ml1lsoft_MM, cut_MM, weight_ALL_MM);
  h_mTl0lsoft_MM_SROS1->Fill(mTl0lsoft_MM, cut_MM, weight_ALL_MM);
  h_mTl1lsoft_MM_SROS1->Fill(mTl1lsoft_MM, cut_MM, weight_ALL_MM);
  h_DeltaRl0lsoft_MM_SROS1->Fill(DeltaRl0lsoft_MM, cut_MM, weight_ALL_MM);
  h_DeltaRl1lsoft_MM_SROS1->Fill(DeltaRl1lsoft_MM, cut_MM, weight_ALL_MM);  
  h_DeltaRZl0lsoft_MM_SROS1->Fill(DeltaRZl0lsoft_MM, cut_MM, weight_ALL_MM);
  h_DeltaRZl1lsoft_MM_SROS1->Fill(DeltaRZl1lsoft_MM, cut_MM, weight_ALL_MM);  
  h_DeltaEtaZl0lsoft_MM_SROS1->Fill(DeltaEtaZl0lsoft_MM, cut_MM, weight_ALL_MM);
  h_DeltaEtaZl1lsoft_MM_SROS1->Fill(DeltaEtaZl1lsoft_MM, cut_MM, weight_ALL_MM);    
  h_mTlllsoft_MM_SROS1->Fill(mTlllsoft_MM, cut_MM, weight_ALL_MM);
//overlap lepton
  h_ml0loverlap_MM_SROS1->Fill(ml0loverlap_MM, cut_MM, weight_ALL_MM);
  h_ml1loverlap_MM_SROS1->Fill(ml1loverlap_MM, cut_MM, weight_ALL_MM);
  h_mTl0loverlap_MM_SROS1->Fill(mTl0loverlap_MM, cut_MM, weight_ALL_MM);
  h_mTl1loverlap_MM_SROS1->Fill(mTl1loverlap_MM, cut_MM, weight_ALL_MM);
  h_DeltaRl0loverlap_MM_SROS1->Fill(DeltaRl0loverlap_MM, cut_MM, weight_ALL_MM);
  h_DeltaRl1loverlap_MM_SROS1->Fill(DeltaRl1loverlap_MM, cut_MM, weight_ALL_MM);  
  h_DeltaRZl0loverlap_MM_SROS1->Fill(DeltaRZl0loverlap_MM, cut_MM, weight_ALL_MM);
  h_DeltaRZl1loverlap_MM_SROS1->Fill(DeltaRZl1loverlap_MM, cut_MM, weight_ALL_MM);    
  h_DeltaEtaZl0loverlap_MM_SROS1->Fill(DeltaEtaZl0loverlap_MM, cut_MM, weight_ALL_MM);
  h_DeltaEtaZl1loverlap_MM_SROS1->Fill(DeltaEtaZl1loverlap_MM, cut_MM, weight_ALL_MM);      
  h_mTllloverlap_MM_SROS1->Fill(mTllloverlap_MM, cut_MM, weight_ALL_MM);

}

void TSelector_SusyNtuple::fillHistos_EM_SRSS1(float cut_EM, int mcid, float weight_ALL_EM){

  fillHistos_EM(cut_EM, weight_ALL_EM);
  h_DeltaRLeptons_EM_SRSS1->Fill(DeltaRem, cut_EM, weight_ALL_EM); 
  h_pTl0_EM_SRSS1->Fill(ptl0, cut_EM, weight_ALL_EM); 
  h_pTl1_EM_SRSS1->Fill(ptl1, cut_EM, weight_ALL_EM); 
  h_pTj0_EM_SRSS1->Fill(pTj0, cut_EM, weight_ALL_EM); 
  h_pTj1_EM_SRSS1->Fill(pTj1, cut_EM, weight_ALL_EM); 
  h_mll_EM_SRSS1->Fill(Mem, cut_EM, weight_ALL_EM); 
  h_METrel_EM_SRSS1->Fill(METrelem, cut_EM, weight_ALL_EM); 
  h_MET_EM_SRSS1->Fill(METem, cut_EM, weight_ALL_EM); 
  h_HT_EM_SRSS1->Fill(HT_EM, cut_EM, weight_ALL_EM); 
  h_mWWt_EM_SRSS1->Fill(mTWW_EM, cut_EM, weight_ALL_EM); 
  h_mTlmin_EM_SRSS1->Fill(mTemmin, cut_EM, weight_ALL_EM); 
  h_mTlmax_EM_SRSS1->Fill(mTemmax, cut_EM, weight_ALL_EM); 
  h_meff_EM_SRSS1->Fill(meff, cut_EM, weight_ALL_EM); 
  h_mt2_EM_SRSS1->Fill(mt2_em, cut_EM, weight_ALL_EM); 
  h_mt2J_EM_SRSS1->Fill(mt2J_em, cut_EM, weight_ALL_EM); 
  h_mt2J0LepM_EM_SRSS1->Fill(mt2J0LepM_em, cut_EM, weight_ALL_EM); 
  h_mjj_EM_SRSS1->Fill(mjj, cut_EM, weight_ALL_EM); 
  h_DeltaPhiMETll_EM_SRSS1->Fill(DeltaRem, cut_EM, weight_ALL_EM); 
  h_DeltaPhill_EM_SRSS1->Fill(DeltaPhiem, cut_EM, weight_ALL_EM); 
  h_NBJets_EM_SRSS1->Fill(NBJets, cut_EM, weight_ALL_EM); 
  h_NCJets_EM_SRSS1->Fill(NCJets, cut_EM, weight_ALL_EM); 
  h_NFJets_EM_SRSS1->Fill(NFJets, cut_EM, weight_ALL_EM); 
  h_mZTT_coll_EM_SRSS1->Fill(mZTT_coll, cut_EM, weight_ALL_EM); 
  h_mZTT_mmc_EM_SRSS1->Fill(mZTT_mmc, cut_EM, weight_ALL_EM); 
  
  h_DeltaPhijj_EM_SRSS1->Fill(DeltaPhijj, cut_EM, weight_ALL_EM);  
  h_pTjj_EM_SRSS1->Fill(pTjj, cut_EM, weight_ALL_EM);  
  h_ptll_EM_SRSS1->Fill(pTem, cut_EM, weight_ALL_EM);  
  h_DeltaPhiMETl0_EM_SRSS1->Fill(DeltaPhiMETl0, cut_EM, weight_ALL_EM);  
  h_DeltaPhiMETl1_EM_SRSS1->Fill(DeltaPhiMETl1, cut_EM, weight_ALL_EM);    
  h_DeltaPhiMETj0_EM_SRSS1->Fill(DeltaPhiMETj0, cut_EM, weight_ALL_EM);  
  h_DeltaPhiMETj1_EM_SRSS1->Fill(DeltaPhiMETj1, cut_EM, weight_ALL_EM);  
  h_DeltaPhiMETjj_EM_SRSS1->Fill(DeltaPhiMETjj, cut_EM, weight_ALL_EM);  
  h_DeltaRjj_EM_SRSS1->Fill(DeltaRjj, cut_EM, weight_ALL_EM);  
  h_Mljj_EM_SRSS1->Fill(Mljj_EM, cut_EM, weight_ALL_EM);
  h_etal0_EM_SRSS1->Fill(fabs(eta_l0), cut_EM, weight_ALL_EM);  
  h_etal1_EM_SRSS1->Fill(fabs(eta_l1), cut_EM, weight_ALL_EM);  
  h_etaj0_EM_SRSS1->Fill(fabs(eta_j0), cut_EM, weight_ALL_EM);  
  h_etaj1_EM_SRSS1->Fill(fabs(eta_j1), cut_EM, weight_ALL_EM);  
  h_mTl0MET_EM_SRSS1->Fill(mTl0MET, cut_EM, weight_ALL_EM);  
  h_mTl1MET_EM_SRSS1->Fill(mTl1MET, cut_EM, weight_ALL_EM);  
  h_DeltaPhilljj_EM_SRSS1->Fill(DeltaPhiemjj, cut_EM, weight_ALL_EM);  
  h_DeltaPhil0jj_EM_SRSS1->Fill(DeltaPhil0jj, cut_EM, weight_ALL_EM);  
  h_DeltaPhil1jj_EM_SRSS1->Fill(DeltaPhil1jj, cut_EM, weight_ALL_EM);  
  h_DeltaRlljj_EM_SRSS1->Fill(DeltaRemjj, cut_EM, weight_ALL_EM);  
  h_DeltaEtajj_EM_SRSS1->Fill(DeltaEtajj, cut_EM, weight_ALL_EM);  
  h_DeltaEtall_EM_SRSS1->Fill(DeltaEtaem, cut_EM, weight_ALL_EM);    
  h_mTll_EM_SRSS1->Fill(mTem, cut_EM, weight_ALL_EM);  
  h_mMETll_EM_SRSS1->Fill(mMETem, cut_EM, weight_ALL_EM);  
  h_DeltaYjj_EM_SRSS1->Fill(DeltaYjj, cut_EM, weight_ALL_EM);  

  h_D0_branch_l0_EM_SRSS1->Fill(D0_branch_l0, cut_EM, weight_ALL_EM);  
  h_D0_branch_l1_EM_SRSS1->Fill(D0_branch_l1, cut_EM, weight_ALL_EM);  
  h_D0Signif_branch_l0_EM_SRSS1->Fill(sD0Signif_branch_l0, cut_EM, weight_ALL_EM);  
  h_D0Signif_branch_l1_EM_SRSS1->Fill(sD0Signif_branch_l1, cut_EM, weight_ALL_EM);  

  //lost lepton
  h_ml0llost_EM_SRSS1->Fill(ml0llost_EM, cut_EM, weight_ALL_EM);
  h_ml1llost_EM_SRSS1->Fill(ml1llost_EM, cut_EM, weight_ALL_EM);
  h_mTl0llost_EM_SRSS1->Fill(mTl0llost_EM, cut_EM, weight_ALL_EM);
  h_mTl1llost_EM_SRSS1->Fill(mTl1llost_EM, cut_EM, weight_ALL_EM);
  h_DeltaRl0llost_EM_SRSS1->Fill(DeltaRl0llost_EM, cut_EM, weight_ALL_EM);
  h_DeltaRl1llost_EM_SRSS1->Fill(DeltaRl1llost_EM, cut_EM, weight_ALL_EM);  
  h_DeltaRZl0llost_EM_SRSS1->Fill(DeltaRZl0llost_EM, cut_EM, weight_ALL_EM);
  h_DeltaRZl1llost_EM_SRSS1->Fill(DeltaRZl1llost_EM, cut_EM, weight_ALL_EM);    
  h_DeltaEtaZl0llost_EM_SRSS1->Fill(DeltaEtaZl0llost_EM, cut_EM, weight_ALL_EM);
  h_DeltaEtaZl1llost_EM_SRSS1->Fill(DeltaEtaZl1llost_EM, cut_EM, weight_ALL_EM);      
  h_mTllllost_EM_SRSS1->Fill(mTllllost_EM, cut_EM, weight_ALL_EM);  
  //soft lepton
  h_ml0lsoft_EM_SRSS1->Fill(ml0lsoft_EM, cut_EM, weight_ALL_EM);
  h_ml1lsoft_EM_SRSS1->Fill(ml1lsoft_EM, cut_EM, weight_ALL_EM);
  h_mTl0lsoft_EM_SRSS1->Fill(mTl0lsoft_EM, cut_EM, weight_ALL_EM);
  h_mTl1lsoft_EM_SRSS1->Fill(mTl1lsoft_EM, cut_EM, weight_ALL_EM);
  h_DeltaRl0lsoft_EM_SRSS1->Fill(DeltaRl0lsoft_EM, cut_EM, weight_ALL_EM);
  h_DeltaRl1lsoft_EM_SRSS1->Fill(DeltaRl1lsoft_EM, cut_EM, weight_ALL_EM);  
  h_DeltaRZl0lsoft_EM_SRSS1->Fill(DeltaRZl0lsoft_EM, cut_EM, weight_ALL_EM);
  h_DeltaRZl1lsoft_EM_SRSS1->Fill(DeltaRZl1lsoft_EM, cut_EM, weight_ALL_EM);    
  h_DeltaEtaZl0lsoft_EM_SRSS1->Fill(DeltaEtaZl0lsoft_EM, cut_EM, weight_ALL_EM);
  h_DeltaEtaZl1lsoft_EM_SRSS1->Fill(DeltaEtaZl1lsoft_EM, cut_EM, weight_ALL_EM);      
  h_mTlllsoft_EM_SRSS1->Fill(mTlllsoft_EM, cut_EM, weight_ALL_EM);
//overlap lepton
  h_ml0loverlap_EM_SRSS1->Fill(ml0loverlap_EM, cut_EM, weight_ALL_EM);
  h_ml1loverlap_EM_SRSS1->Fill(ml1loverlap_EM, cut_EM, weight_ALL_EM);
  h_mTl0loverlap_EM_SRSS1->Fill(mTl0loverlap_EM, cut_EM, weight_ALL_EM);
  h_mTl1loverlap_EM_SRSS1->Fill(mTl1loverlap_EM, cut_EM, weight_ALL_EM);
  h_DeltaRl0loverlap_EM_SRSS1->Fill(DeltaRl0loverlap_EM, cut_EM, weight_ALL_EM);
  h_DeltaRl1loverlap_EM_SRSS1->Fill(DeltaRl1loverlap_EM, cut_EM, weight_ALL_EM);  
  h_DeltaRZl0loverlap_EM_SRSS1->Fill(DeltaRZl0loverlap_EM, cut_EM, weight_ALL_EM);
  h_DeltaRZl1loverlap_EM_SRSS1->Fill(DeltaRZl1loverlap_EM, cut_EM, weight_ALL_EM);
  h_DeltaEtaZl0loverlap_EM_SRSS1->Fill(DeltaEtaZl0loverlap_EM, cut_EM, weight_ALL_EM);
  h_DeltaEtaZl1loverlap_EM_SRSS1->Fill(DeltaEtaZl1loverlap_EM, cut_EM, weight_ALL_EM);      
  h_mTllloverlap_EM_SRSS1->Fill(mTllloverlap_EM, cut_EM, weight_ALL_EM);


}

void TSelector_SusyNtuple::fillHistos_EM_SRSS2(float cut_EM, int mcid, float weight_ALL_EM){

//   fillHistos_EM(cut_EM, weight_ALL_EM);
  h_DeltaRLeptons_EM_SRSS2->Fill(DeltaRem, cut_EM, weight_ALL_EM); 
  h_pTl0_EM_SRSS2->Fill(ptl0, cut_EM, weight_ALL_EM); 
  h_pTl1_EM_SRSS2->Fill(ptl1, cut_EM, weight_ALL_EM); 
  h_pTj0_EM_SRSS2->Fill(pTj0, cut_EM, weight_ALL_EM); 
  h_pTj1_EM_SRSS2->Fill(pTj1, cut_EM, weight_ALL_EM); 
  h_mll_EM_SRSS2->Fill(Mem, cut_EM, weight_ALL_EM); 
  h_METrel_EM_SRSS2->Fill(METrelem, cut_EM, weight_ALL_EM); 
  h_MET_EM_SRSS2->Fill(METem, cut_EM, weight_ALL_EM); 
  h_HT_EM_SRSS2->Fill(HT_EM, cut_EM, weight_ALL_EM); 
  h_mWWt_EM_SRSS2->Fill(mTWW_EM, cut_EM, weight_ALL_EM); 
  h_mTlmin_EM_SRSS2->Fill(mTemmin, cut_EM, weight_ALL_EM); 
  h_mTlmax_EM_SRSS2->Fill(mTemmax, cut_EM, weight_ALL_EM); 
  h_meff_EM_SRSS2->Fill(meff, cut_EM, weight_ALL_EM); 
  h_mt2_EM_SRSS2->Fill(mt2_em, cut_EM, weight_ALL_EM); 
  h_mt2J_EM_SRSS2->Fill(mt2J_em, cut_EM, weight_ALL_EM); 
  h_mt2J0LepM_EM_SRSS2->Fill(mt2J0LepM_em, cut_EM, weight_ALL_EM); 
  h_mjj_EM_SRSS2->Fill(mjj, cut_EM, weight_ALL_EM); 
  h_DeltaPhiMETll_EM_SRSS2->Fill(DeltaRem, cut_EM, weight_ALL_EM); 
  h_DeltaPhill_EM_SRSS2->Fill(DeltaPhiem, cut_EM, weight_ALL_EM); 
  h_NBJets_EM_SRSS2->Fill(NBJets, cut_EM, weight_ALL_EM); 
  h_NCJets_EM_SRSS2->Fill(NCJets, cut_EM, weight_ALL_EM); 
  h_NFJets_EM_SRSS2->Fill(NFJets, cut_EM, weight_ALL_EM); 
  h_mZTT_coll_EM_SRSS2->Fill(mZTT_coll, cut_EM, weight_ALL_EM); 
  h_mZTT_mmc_EM_SRSS2->Fill(mZTT_mmc, cut_EM, weight_ALL_EM); 
  
  h_DeltaPhijj_EM_SRSS2->Fill(DeltaPhijj, cut_EM, weight_ALL_EM);  
  h_pTjj_EM_SRSS2->Fill(pTjj, cut_EM, weight_ALL_EM);  
  h_ptll_EM_SRSS2->Fill(pTem, cut_EM, weight_ALL_EM);  
  h_DeltaPhiMETl0_EM_SRSS2->Fill(DeltaPhiMETl0, cut_EM, weight_ALL_EM);  
  h_DeltaPhiMETl1_EM_SRSS2->Fill(DeltaPhiMETl1, cut_EM, weight_ALL_EM);    
  h_DeltaPhiMETj0_EM_SRSS2->Fill(DeltaPhiMETj0, cut_EM, weight_ALL_EM);  
  h_DeltaPhiMETj1_EM_SRSS2->Fill(DeltaPhiMETj1, cut_EM, weight_ALL_EM);  
  h_DeltaPhiMETjj_EM_SRSS2->Fill(DeltaPhiMETjj, cut_EM, weight_ALL_EM);  
  h_DeltaRjj_EM_SRSS2->Fill(DeltaRjj, cut_EM, weight_ALL_EM);  
  h_Mljj_EM_SRSS2->Fill(Mljj_EM, cut_EM, weight_ALL_EM);
  h_etal0_EM_SRSS2->Fill(fabs(eta_l0), cut_EM, weight_ALL_EM);  
  h_etal1_EM_SRSS2->Fill(fabs(eta_l1), cut_EM, weight_ALL_EM);  
  h_etaj0_EM_SRSS2->Fill(fabs(eta_j0), cut_EM, weight_ALL_EM);  
  h_etaj1_EM_SRSS2->Fill(fabs(eta_j1), cut_EM, weight_ALL_EM);  
  h_mTl0MET_EM_SRSS2->Fill(mTl0MET, cut_EM, weight_ALL_EM);  
  h_mTl1MET_EM_SRSS2->Fill(mTl1MET, cut_EM, weight_ALL_EM);  
  h_DeltaPhilljj_EM_SRSS2->Fill(DeltaPhiemjj, cut_EM, weight_ALL_EM);  
  h_DeltaPhil0jj_EM_SRSS2->Fill(DeltaPhil0jj, cut_EM, weight_ALL_EM);  
  h_DeltaPhil1jj_EM_SRSS2->Fill(DeltaPhil1jj, cut_EM, weight_ALL_EM);  
  h_DeltaRlljj_EM_SRSS2->Fill(DeltaRemjj, cut_EM, weight_ALL_EM);  
  h_DeltaEtajj_EM_SRSS2->Fill(DeltaEtajj, cut_EM, weight_ALL_EM);  
  h_DeltaEtall_EM_SRSS2->Fill(DeltaEtaem, cut_EM, weight_ALL_EM);    
  h_mTll_EM_SRSS2->Fill(mTem, cut_EM, weight_ALL_EM);  
  h_mMETll_EM_SRSS2->Fill(mMETem, cut_EM, weight_ALL_EM);  
  h_DeltaYjj_EM_SRSS2->Fill(DeltaYjj, cut_EM, weight_ALL_EM);  

  h_D0_branch_l0_EM_SRSS2->Fill(D0_branch_l0, cut_EM, weight_ALL_EM);  
  h_D0_branch_l1_EM_SRSS2->Fill(D0_branch_l1, cut_EM, weight_ALL_EM);  
  h_D0Signif_branch_l0_EM_SRSS2->Fill(sD0Signif_branch_l0, cut_EM, weight_ALL_EM);  
  h_D0Signif_branch_l1_EM_SRSS2->Fill(sD0Signif_branch_l1, cut_EM, weight_ALL_EM);  

//lost lepton
  h_ml0llost_EM_SRSS2->Fill(ml0llost_EM, cut_EM, weight_ALL_EM);
  h_ml1llost_EM_SRSS2->Fill(ml1llost_EM, cut_EM, weight_ALL_EM);
  h_mTl0llost_EM_SRSS2->Fill(mTl0llost_EM, cut_EM, weight_ALL_EM);
  h_mTl1llost_EM_SRSS2->Fill(mTl1llost_EM, cut_EM, weight_ALL_EM);
  h_DeltaRl0llost_EM_SRSS2->Fill(DeltaRl0llost_EM, cut_EM, weight_ALL_EM);
  h_DeltaRl1llost_EM_SRSS2->Fill(DeltaRl1llost_EM, cut_EM, weight_ALL_EM);  
  h_DeltaRZl0llost_EM_SRSS2->Fill(DeltaRZl0llost_EM, cut_EM, weight_ALL_EM);
  h_DeltaRZl1llost_EM_SRSS2->Fill(DeltaRZl1llost_EM, cut_EM, weight_ALL_EM);    
  h_DeltaEtaZl0llost_EM_SRSS2->Fill(DeltaEtaZl0llost_EM, cut_EM, weight_ALL_EM);
  h_DeltaEtaZl1llost_EM_SRSS2->Fill(DeltaEtaZl1llost_EM, cut_EM, weight_ALL_EM);     
  h_mTllllost_EM_SRSS2->Fill(mTllllost_EM, cut_EM, weight_ALL_EM);  
//soft lepton
  h_ml0lsoft_EM_SRSS2->Fill(ml0lsoft_EM, cut_EM, weight_ALL_EM);
  h_ml1lsoft_EM_SRSS2->Fill(ml1lsoft_EM, cut_EM, weight_ALL_EM);
  h_mTl0lsoft_EM_SRSS2->Fill(mTl0lsoft_EM, cut_EM, weight_ALL_EM);
  h_mTl1lsoft_EM_SRSS2->Fill(mTl1lsoft_EM, cut_EM, weight_ALL_EM);
  h_DeltaRl0lsoft_EM_SRSS2->Fill(DeltaRl0lsoft_EM, cut_EM, weight_ALL_EM);
  h_DeltaRl1lsoft_EM_SRSS2->Fill(DeltaRl1lsoft_EM, cut_EM, weight_ALL_EM);  
  h_DeltaRZl0lsoft_EM_SRSS2->Fill(DeltaRZl0lsoft_EM, cut_EM, weight_ALL_EM);
  h_DeltaRZl1lsoft_EM_SRSS2->Fill(DeltaRZl1lsoft_EM, cut_EM, weight_ALL_EM);
  h_DeltaEtaZl0lsoft_EM_SRSS2->Fill(DeltaEtaZl0lsoft_EM, cut_EM, weight_ALL_EM);
  h_DeltaEtaZl1lsoft_EM_SRSS2->Fill(DeltaEtaZl1lsoft_EM, cut_EM, weight_ALL_EM);    
  h_mTlllsoft_EM_SRSS2->Fill(mTlllsoft_EM, cut_EM, weight_ALL_EM);
//overlap lepton
  h_ml0loverlap_EM_SRSS2->Fill(ml0loverlap_EM, cut_EM, weight_ALL_EM);
  h_ml1loverlap_EM_SRSS2->Fill(ml1loverlap_EM, cut_EM, weight_ALL_EM);
  h_mTl0loverlap_EM_SRSS2->Fill(mTl0loverlap_EM, cut_EM, weight_ALL_EM);
  h_mTl1loverlap_EM_SRSS2->Fill(mTl1loverlap_EM, cut_EM, weight_ALL_EM);
  h_DeltaRl0loverlap_EM_SRSS2->Fill(DeltaRl0loverlap_EM, cut_EM, weight_ALL_EM);
  h_DeltaRl1loverlap_EM_SRSS2->Fill(DeltaRl1loverlap_EM, cut_EM, weight_ALL_EM);  
  h_DeltaRZl0loverlap_EM_SRSS2->Fill(DeltaRZl0loverlap_EM, cut_EM, weight_ALL_EM);
  h_DeltaRZl1loverlap_EM_SRSS2->Fill(DeltaRZl1loverlap_EM, cut_EM, weight_ALL_EM);    
    h_DeltaEtaZl0loverlap_EM_SRSS2->Fill(DeltaEtaZl0loverlap_EM, cut_EM, weight_ALL_EM);
  h_DeltaEtaZl1loverlap_EM_SRSS2->Fill(DeltaEtaZl1loverlap_EM, cut_EM, weight_ALL_EM);    
  h_mTllloverlap_EM_SRSS2->Fill(mTllloverlap_EM, cut_EM, weight_ALL_EM);


}
void TSelector_SusyNtuple::fillHistos_EM_SROS1(float cut_EM, int mcid, float weight_ALL_EM){

  
  fillHistos_EM(cut_EM, weight_ALL_EM);

  h_DeltaRLeptons_EM_SROS1->Fill(DeltaRem, cut_EM, weight_ALL_EM); 
  h_pTl0_EM_SROS1->Fill(ptl0, cut_EM, weight_ALL_EM); 
  h_pTl1_EM_SROS1->Fill(ptl1, cut_EM, weight_ALL_EM); 
  h_pTj0_EM_SROS1->Fill(pTj0, cut_EM, weight_ALL_EM); 
  h_pTj1_EM_SROS1->Fill(pTj1, cut_EM, weight_ALL_EM); 
  h_mll_EM_SROS1->Fill(Mem, cut_EM, weight_ALL_EM); 
  h_METrel_EM_SROS1->Fill(METrelem, cut_EM, weight_ALL_EM); 
  h_MET_EM_SROS1->Fill(METem, cut_EM, weight_ALL_EM); 
  h_HT_EM_SROS1->Fill(HT_EM, cut_EM, weight_ALL_EM); 
  h_mWWt_EM_SROS1->Fill(mTWW_EM, cut_EM, weight_ALL_EM); 
  h_mTlmin_EM_SROS1->Fill(mTemmin, cut_EM, weight_ALL_EM); 
  h_mTlmax_EM_SROS1->Fill(mTemmax, cut_EM, weight_ALL_EM); 
  h_meff_EM_SROS1->Fill(meff, cut_EM, weight_ALL_EM); 
  h_mt2_EM_SROS1->Fill(mt2_em, cut_EM, weight_ALL_EM); 
  h_mt2J_EM_SROS1->Fill(mt2J_em, cut_EM, weight_ALL_EM); 
  h_mt2J0LepM_EM_SROS1->Fill(mt2J0LepM_em, cut_EM, weight_ALL_EM); 
  h_mjj_EM_SROS1->Fill(mjj, cut_EM, weight_ALL_EM); 
  h_DeltaPhiMETll_EM_SROS1->Fill(DeltaRem, cut_EM, weight_ALL_EM); 
  h_DeltaPhill_EM_SROS1->Fill(DeltaPhiem, cut_EM, weight_ALL_EM); 
  h_NBJets_EM_SROS1->Fill(NBJets, cut_EM, weight_ALL_EM); 
  h_NCJets_EM_SROS1->Fill(NCJets, cut_EM, weight_ALL_EM); 
  h_NFJets_EM_SROS1->Fill(NFJets, cut_EM, weight_ALL_EM); 
  h_mZTT_coll_EM_SROS1->Fill(mZTT_coll, cut_EM, weight_ALL_EM); 
  h_mZTT_mmc_EM_SROS1->Fill(mZTT_mmc, cut_EM, weight_ALL_EM); 
  
  h_DeltaPhijj_EM_SROS1->Fill(DeltaPhijj, cut_EM, weight_ALL_EM);  
  h_pTjj_EM_SROS1->Fill(pTjj, cut_EM, weight_ALL_EM);  
  h_ptll_EM_SROS1->Fill(pTem, cut_EM, weight_ALL_EM);  
  h_DeltaPhiMETl0_EM_SROS1->Fill(DeltaPhiMETl0, cut_EM, weight_ALL_EM);  
  h_DeltaPhiMETl1_EM_SROS1->Fill(DeltaPhiMETl1, cut_EM, weight_ALL_EM);    
  h_DeltaPhiMETj0_EM_SROS1->Fill(DeltaPhiMETj0, cut_EM, weight_ALL_EM);  
  h_DeltaPhiMETj1_EM_SROS1->Fill(DeltaPhiMETj1, cut_EM, weight_ALL_EM);  
  h_DeltaPhiMETjj_EM_SROS1->Fill(DeltaPhiMETjj, cut_EM, weight_ALL_EM);  
  h_DeltaRjj_EM_SROS1->Fill(DeltaRjj, cut_EM, weight_ALL_EM);  
  h_Mljj_EM_SROS1->Fill(Mljj_EM, cut_EM, weight_ALL_EM);
  h_etal0_EM_SROS1->Fill(fabs(eta_l0), cut_EM, weight_ALL_EM);  
  h_etal1_EM_SROS1->Fill(fabs(eta_l1), cut_EM, weight_ALL_EM);  
  h_etaj0_EM_SROS1->Fill(fabs(eta_j0), cut_EM, weight_ALL_EM);  
  h_etaj1_EM_SROS1->Fill(fabs(eta_j1), cut_EM, weight_ALL_EM);  
  h_mTl0MET_EM_SROS1->Fill(mTl0MET, cut_EM, weight_ALL_EM);  
  h_mTl1MET_EM_SROS1->Fill(mTl1MET, cut_EM, weight_ALL_EM);  
  h_DeltaPhilljj_EM_SROS1->Fill(DeltaPhiemjj, cut_EM, weight_ALL_EM);  
  h_DeltaPhil0jj_EM_SROS1->Fill(DeltaPhil0jj, cut_EM, weight_ALL_EM);  
  h_DeltaPhil1jj_EM_SROS1->Fill(DeltaPhil1jj, cut_EM, weight_ALL_EM);  
  h_DeltaRlljj_EM_SROS1->Fill(DeltaRemjj, cut_EM, weight_ALL_EM);  
  h_DeltaEtajj_EM_SROS1->Fill(DeltaEtajj, cut_EM, weight_ALL_EM); 
  h_DeltaEtall_EM_SROS1->Fill(DeltaEtaem, cut_EM, weight_ALL_EM);    
  h_mTll_EM_SROS1->Fill(mTem, cut_EM, weight_ALL_EM);  
  h_mMETll_EM_SROS1->Fill(mMETem, cut_EM, weight_ALL_EM);  
  h_DeltaYjj_EM_SROS1->Fill(DeltaYjj, cut_EM, weight_ALL_EM);  

  h_D0_branch_l0_EM_SROS1->Fill(D0_branch_l0, cut_EM, weight_ALL_EM);  
  h_D0_branch_l1_EM_SROS1->Fill(D0_branch_l1, cut_EM, weight_ALL_EM);  
  h_D0Signif_branch_l0_EM_SROS1->Fill(sD0Signif_branch_l0, cut_EM, weight_ALL_EM);  
  h_D0Signif_branch_l1_EM_SROS1->Fill(sD0Signif_branch_l1, cut_EM, weight_ALL_EM);  

  //lost lepton
  h_ml0llost_EM_SROS1->Fill(ml0llost_EM, cut_EM, weight_ALL_EM);
  h_ml1llost_EM_SROS1->Fill(ml1llost_EM, cut_EM, weight_ALL_EM);
  h_mTl0llost_EM_SROS1->Fill(mTl0llost_EM, cut_EM, weight_ALL_EM);
  h_mTl1llost_EM_SROS1->Fill(mTl1llost_EM, cut_EM, weight_ALL_EM);
  h_DeltaRl0llost_EM_SROS1->Fill(DeltaRl0llost_EM, cut_EM, weight_ALL_EM);
  h_DeltaRl1llost_EM_SROS1->Fill(DeltaRl1llost_EM, cut_EM, weight_ALL_EM);  
  h_DeltaRZl0llost_EM_SROS1->Fill(DeltaRZl0llost_EM, cut_EM, weight_ALL_EM);
  h_DeltaRZl1llost_EM_SROS1->Fill(DeltaRZl1llost_EM, cut_EM, weight_ALL_EM);    
  h_DeltaEtaZl0llost_EM_SROS1->Fill(DeltaEtaZl0llost_EM, cut_EM, weight_ALL_EM);
  h_DeltaEtaZl1llost_EM_SROS1->Fill(DeltaEtaZl1llost_EM, cut_EM, weight_ALL_EM);      
  h_mTllllost_EM_SROS1->Fill(mTllllost_EM, cut_EM, weight_ALL_EM);  
  //soft lepton
  h_ml0lsoft_EM_SROS1->Fill(ml0lsoft_EM, cut_EM, weight_ALL_EM);
  h_ml1lsoft_EM_SROS1->Fill(ml1lsoft_EM, cut_EM, weight_ALL_EM);
  h_mTl0lsoft_EM_SROS1->Fill(mTl0lsoft_EM, cut_EM, weight_ALL_EM);
  h_mTl1lsoft_EM_SROS1->Fill(mTl1lsoft_EM, cut_EM, weight_ALL_EM);
  h_DeltaRl0lsoft_EM_SROS1->Fill(DeltaRl0lsoft_EM, cut_EM, weight_ALL_EM);
  h_DeltaRl1lsoft_EM_SROS1->Fill(DeltaRl1lsoft_EM, cut_EM, weight_ALL_EM);  
  h_DeltaRZl0lsoft_EM_SROS1->Fill(DeltaRZl0lsoft_EM, cut_EM, weight_ALL_EM);
  h_DeltaRZl1lsoft_EM_SROS1->Fill(DeltaRZl1lsoft_EM, cut_EM, weight_ALL_EM);    
  h_DeltaEtaZl0lsoft_EM_SROS1->Fill(DeltaEtaZl0lsoft_EM, cut_EM, weight_ALL_EM);
  h_DeltaEtaZl1lsoft_EM_SROS1->Fill(DeltaEtaZl1lsoft_EM, cut_EM, weight_ALL_EM);  
  h_mTlllsoft_EM_SROS1->Fill(mTlllsoft_EM, cut_EM, weight_ALL_EM);
//overlap lepton
  h_ml0loverlap_EM_SROS1->Fill(ml0loverlap_EM, cut_EM, weight_ALL_EM);
  h_ml1loverlap_EM_SROS1->Fill(ml1loverlap_EM, cut_EM, weight_ALL_EM);
  h_mTl0loverlap_EM_SROS1->Fill(mTl0loverlap_EM, cut_EM, weight_ALL_EM);
  h_mTl1loverlap_EM_SROS1->Fill(mTl1loverlap_EM, cut_EM, weight_ALL_EM);
  h_DeltaRl0loverlap_EM_SROS1->Fill(DeltaRl0loverlap_EM, cut_EM, weight_ALL_EM);
  h_DeltaRl1loverlap_EM_SROS1->Fill(DeltaRl1loverlap_EM, cut_EM, weight_ALL_EM);  
  h_DeltaRZl0loverlap_EM_SROS1->Fill(DeltaRZl0loverlap_EM, cut_EM, weight_ALL_EM);
  h_DeltaRZl1loverlap_EM_SROS1->Fill(DeltaRZl1loverlap_EM, cut_EM, weight_ALL_EM);    
  h_DeltaEtaZl0loverlap_EM_SROS1->Fill(DeltaEtaZl0loverlap_EM, cut_EM, weight_ALL_EM);
  h_DeltaEtaZl1loverlap_EM_SROS1->Fill(DeltaEtaZl1loverlap_EM, cut_EM, weight_ALL_EM);      
  h_mTllloverlap_EM_SROS1->Fill(mTllloverlap_EM, cut_EM, weight_ALL_EM);
}