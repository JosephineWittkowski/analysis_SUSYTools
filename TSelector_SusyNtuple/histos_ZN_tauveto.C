bool TSelector_SusyNtuple::defineHistos(){

  h_storeSumwMcid = new TH1F("h_storeSumwMcid", "h_storeSumwMcid", 200000, 0, 200000.);  h_storeSumwMcid->Sumw2();
  
  cutflow_EE = new TH1F("cutflow_EE", "cutflow_EE" ,130, 0, 129);
  cutflow_EE_ALL = new TH1F("cutflow_EE_ALL", "cutflow_EE_ALL" ,130, 0, 129);

  cutflow_MM = new TH1F("cutflow_MM", "cutflow_MM" ,130, 0, 129);
  cutflow_MM_ALL = new TH1F("cutflow_MM_ALL", "cutflow_MM_ALL" ,130, 0, 129);

  cutflow_EM = new TH1F("cutflow_EM", "cutflow_EM" ,130, 0, 129);
  cutflow_EM_ALL = new TH1F("cutflow_EM_ALL", "cutflow_EM_ALL" ,130, 0, 129);  
  
  h_D0Signif_recalc_PR_EE = new TH2F("h_D0Signif_recalc_PR_EE", "h_D0Signif_recalc_PR_EE", 2000, -10, 10, 10, -1, 9);  h_D0Signif_recalc_PR_EE->Sumw2();
  h_D0Signif_recalc_HF_EE = new TH2F("h_D0Signif_recalc_HF_EE", "h_D0Signif_recalc_HF_EE", 2000, -10, 10, 10, -1, 9);  h_D0Signif_recalc_HF_EE->Sumw2();
  h_D0Signif_recalc_LF_EE = new TH2F("h_D0Signif_recalc_LF_EE", "h_D0Signif_recalc_LF_EE", 2000, -10, 10, 10, -1, 9);  h_D0Signif_recalc_LF_EE->Sumw2();
  h_D0Signif_recalc_PR_MM = new TH2F("h_D0Signif_recalc_PR_MM", "h_D0Signif_recalc_PR_MM", 2000, -10, 10, 10, -1, 9);  h_D0Signif_recalc_PR_MM->Sumw2();
  h_D0Signif_recalc_HF_MM = new TH2F("h_D0Signif_recalc_HF_MM", "h_D0Signif_recalc_HF_MM", 2000, -10, 10, 10, -1, 9);  h_D0Signif_recalc_HF_MM->Sumw2();
  h_D0Signif_recalc_LF_MM = new TH2F("h_D0Signif_recalc_LF_MM", "h_D0Signif_recalc_LF_MM", 2000, -10, 10, 10, -1, 9);  h_D0Signif_recalc_LF_MM->Sumw2();
  h_D0Signif_recalc_PR_EM = new TH2F("h_D0Signif_recalc_PR_EM", "h_D0Signif_recalc_PR_EM", 2000, -10, 10, 10, -1, 9);  h_D0Signif_recalc_PR_EM->Sumw2();
  h_D0Signif_recalc_HF_EM = new TH2F("h_D0Signif_recalc_HF_EM", "h_D0Signif_recalc_HF_EM", 2000, -10, 10, 10, -1, 9);  h_D0Signif_recalc_HF_EM->Sumw2();
  h_D0Signif_recalc_LF_EM = new TH2F("h_D0Signif_recalc_LF_EM", "h_D0Signif_recalc_LF_EM", 2000, -10, 10, 10, -1, 9);  h_D0Signif_recalc_LF_EM->Sumw2();
  
  h_D0_recalc_PR_EE = new TH2F("h_D0_recalc_PR_EE", "h_D0_recalc_PR_EE", 1200, -1.5, 1.5, 10, -1, 9);  h_D0_recalc_PR_EE->Sumw2();
  h_D0_recalc_HF_EE = new TH2F("h_D0_recalc_HF_EE", "h_D0_recalc_HF_EE", 1200, -1.5, 1.5, 10, -1, 9);  h_D0_recalc_HF_EE->Sumw2();
  h_D0_recalc_LF_EE = new TH2F("h_D0_recalc_LF_EE", "h_D0_recalc_LF_EE", 1200, -1.5, 1.5, 10, -1, 9);  h_D0_recalc_LF_EE->Sumw2();
  h_D0_recalc_PR_MM = new TH2F("h_D0_recalc_PR_MM", "h_D0_recalc_PR_MM", 1200, -1.5, 1.5, 10, -1, 9);  h_D0_recalc_PR_MM->Sumw2();
  h_D0_recalc_HF_MM = new TH2F("h_D0_recalc_HF_MM", "h_D0_recalc_HF_MM", 1200, -1.5, 1.5, 10, -1, 9);  h_D0_recalc_HF_MM->Sumw2();
  h_D0_recalc_LF_MM = new TH2F("h_D0_recalc_LF_MM", "h_D0_recalc_LF_MM", 1200, -1.5, 1.5, 10, -1, 9);  h_D0_recalc_LF_MM->Sumw2();
  h_D0_recalc_PR_EM = new TH2F("h_D0_recalc_PR_EM", "h_D0_recalc_PR_EM", 1200, -1.5, 1.5, 10, -1, 9);  h_D0_recalc_PR_EM->Sumw2();
  h_D0_recalc_HF_EM = new TH2F("h_D0_recalc_HF_EM", "h_D0_recalc_HF_EM", 1200, -1.5, 1.5, 10, -1, 9);  h_D0_recalc_HF_EM->Sumw2();
  h_D0_recalc_LF_EM = new TH2F("h_D0_recalc_LF_EM", "h_D0_recalc_LF_EM", 1200, -1.5, 1.5, 10, -1, 9);  h_D0_recalc_LF_EM->Sumw2();

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
  h_D0_recalc_l0_EE_SRSS1 = new TH2F("h_D0_recalc_l0_EE_SRSS1", "h_D0_recalc_l0_EE_SRSS1", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_recalc_l0_EE_SRSS1->Sumw2();
  h_D0_recalc_l0_EE_SRSS2 = new TH2F("h_D0_recalc_l0_EE_SRSS2", "h_D0_recalc_l0_EE_SRSS2", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_recalc_l0_EE_SRSS2->Sumw2();
  h_D0_recalc_l0_MM_SRSS1 = new TH2F("h_D0_recalc_l0_MM_SRSS1", "h_D0_recalc_l0_MM_SRSS1", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_recalc_l0_MM_SRSS1->Sumw2();  
  h_D0_recalc_l0_MM_SRSS2 = new TH2F("h_D0_recalc_l0_MM_SRSS2", "h_D0_recalc_l0_MM_SRSS2", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_recalc_l0_MM_SRSS2->Sumw2();
  h_D0_recalc_l0_MM_SRSS3 = new TH2F("h_D0_recalc_l0_MM_SRSS3", "h_D0_recalc_l0_MM_SRSS3", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_recalc_l0_MM_SRSS3->Sumw2();
  h_D0_recalc_l0_MM_SRSS4 = new TH2F("h_D0_recalc_l0_MM_SRSS4", "h_D0_recalc_l0_MM_SRSS4", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_recalc_l0_MM_SRSS4->Sumw2();
  h_D0_recalc_l0_EM_SRSS1 = new TH2F("h_D0_recalc_l0_EM_SRSS1", "h_D0_recalc_l0_EM_SRSS1", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_recalc_l0_EM_SRSS1->Sumw2();
  h_D0_recalc_l0_EM_SRSS2 = new TH2F("h_D0_recalc_l0_EM_SRSS2", "h_D0_recalc_l0_EM_SRSS2", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_recalc_l0_EM_SRSS2->Sumw2();
  h_D0_recalc_l0_EE_SROS1 = new TH2F("h_D0_recalc_l0_EE_SROS1", "h_D0_recalc_l0_EE_SROS1", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_recalc_l0_EE_SROS1->Sumw2();
  h_D0_recalc_l0_MM_SROS1 = new TH2F("h_D0_recalc_l0_MM_SROS1", "h_D0_recalc_l0_MM_SROS1", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_recalc_l0_MM_SROS1->Sumw2();
  h_D0_recalc_l0_EM_SROS1 = new TH2F("h_D0_recalc_l0_EM_SROS1", "h_D0_recalc_l0_EM_SROS1", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_recalc_l0_EM_SROS1->Sumw2();
  
  /*--------------------------------------------------------------------------------*/ 
  h_D0_recalc_l1_EE_SRSS1 = new TH2F("h_D0_recalc_l1_EE_SRSS1", "h_D0_recalc_l1_EE_SRSS1", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_recalc_l1_EE_SRSS1->Sumw2();
  h_D0_recalc_l1_EE_SRSS2 = new TH2F("h_D0_recalc_l1_EE_SRSS2", "h_D0_recalc_l1_EE_SRSS2", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_recalc_l1_EE_SRSS2->Sumw2();
  h_D0_recalc_l1_MM_SRSS1 = new TH2F("h_D0_recalc_l1_MM_SRSS1", "h_D0_recalc_l1_MM_SRSS1", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_recalc_l1_MM_SRSS1->Sumw2();  
  h_D0_recalc_l1_MM_SRSS2 = new TH2F("h_D0_recalc_l1_MM_SRSS2", "h_D0_recalc_l1_MM_SRSS2", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_recalc_l1_MM_SRSS2->Sumw2();
  h_D0_recalc_l1_MM_SRSS3 = new TH2F("h_D0_recalc_l1_MM_SRSS3", "h_D0_recalc_l1_MM_SRSS3", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_recalc_l1_MM_SRSS3->Sumw2();
  h_D0_recalc_l1_MM_SRSS4 = new TH2F("h_D0_recalc_l1_MM_SRSS4", "h_D0_recalc_l1_MM_SRSS4", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_recalc_l1_MM_SRSS4->Sumw2();
  h_D0_recalc_l1_EM_SRSS1 = new TH2F("h_D0_recalc_l1_EM_SRSS1", "h_D0_recalc_l1_EM_SRSS1", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_recalc_l1_EM_SRSS1->Sumw2();
  h_D0_recalc_l1_EM_SRSS2 = new TH2F("h_D0_recalc_l1_EM_SRSS2", "h_D0_recalc_l1_EM_SRSS2", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_recalc_l1_EM_SRSS2->Sumw2();
  h_D0_recalc_l1_EE_SROS1 = new TH2F("h_D0_recalc_l1_EE_SROS1", "h_D0_recalc_l1_EE_SROS1", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_recalc_l1_EE_SROS1->Sumw2();
  h_D0_recalc_l1_MM_SROS1 = new TH2F("h_D0_recalc_l1_MM_SROS1", "h_D0_recalc_l1_MM_SROS1", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_recalc_l1_MM_SROS1->Sumw2();
  h_D0_recalc_l1_EM_SROS1 = new TH2F("h_D0_recalc_l1_EM_SROS1", "h_D0_recalc_l1_EM_SROS1", 1200, -1.5, 1.5 ,130, 0, 129);  h_D0_recalc_l1_EM_SROS1->Sumw2();

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
  h_D0Signif_recalc_l0_EE_SRSS1 = new TH2F("h_D0Signif_recalc_l0_EE_SRSS1", "h_D0Signif_recalc_l0_EE_SRSS1", 200, -10, 10 ,130, 0, 129);  h_D0Signif_recalc_l0_EE_SRSS1->Sumw2();
  h_D0Signif_recalc_l0_EE_SRSS2 = new TH2F("h_D0Signif_recalc_l0_EE_SRSS2", "h_D0Signif_recalc_l0_EE_SRSS2", 200, -10, 10 ,130, 0, 129);  h_D0Signif_recalc_l0_EE_SRSS2->Sumw2();
  h_D0Signif_recalc_l0_MM_SRSS1 = new TH2F("h_D0Signif_recalc_l0_MM_SRSS1", "h_D0Signif_recalc_l0_MM_SRSS1", 200, -10, 10 ,130, 0, 129);  h_D0Signif_recalc_l0_MM_SRSS1->Sumw2();  
  h_D0Signif_recalc_l0_MM_SRSS2 = new TH2F("h_D0Signif_recalc_l0_MM_SRSS2", "h_D0Signif_recalc_l0_MM_SRSS2", 200, -10, 10 ,130, 0, 129);  h_D0Signif_recalc_l0_MM_SRSS2->Sumw2();
  h_D0Signif_recalc_l0_MM_SRSS3 = new TH2F("h_D0Signif_recalc_l0_MM_SRSS3", "h_D0Signif_recalc_l0_MM_SRSS3", 200, -10, 10 ,130, 0, 129);  h_D0Signif_recalc_l0_MM_SRSS3->Sumw2();
  h_D0Signif_recalc_l0_MM_SRSS4 = new TH2F("h_D0Signif_recalc_l0_MM_SRSS4", "h_D0Signif_recalc_l0_MM_SRSS4", 200, -10, 10 ,130, 0, 129);  h_D0Signif_recalc_l0_MM_SRSS4->Sumw2();
  h_D0Signif_recalc_l0_EM_SRSS1 = new TH2F("h_D0Signif_recalc_l0_EM_SRSS1", "h_D0Signif_recalc_l0_EM_SRSS1", 200, -10, 10 ,130, 0, 129);  h_D0Signif_recalc_l0_EM_SRSS1->Sumw2();
  h_D0Signif_recalc_l0_EM_SRSS2 = new TH2F("h_D0Signif_recalc_l0_EM_SRSS2", "h_D0Signif_recalc_l0_EM_SRSS2", 200, -10, 10 ,130, 0, 129);  h_D0Signif_recalc_l0_EM_SRSS2->Sumw2();
  h_D0Signif_recalc_l0_EE_SROS1 = new TH2F("h_D0Signif_recalc_l0_EE_SROS1", "h_D0Signif_recalc_l0_EE_SROS1", 200, -10, 10 ,130, 0, 129);  h_D0Signif_recalc_l0_EE_SROS1->Sumw2();
  h_D0Signif_recalc_l0_MM_SROS1 = new TH2F("h_D0Signif_recalc_l0_MM_SROS1", "h_D0Signif_recalc_l0_MM_SROS1", 200, -10, 10 ,130, 0, 129);  h_D0Signif_recalc_l0_MM_SROS1->Sumw2();
  h_D0Signif_recalc_l0_EM_SROS1 = new TH2F("h_D0Signif_recalc_l0_EM_SROS1", "h_D0Signif_recalc_l0_EM_SROS1", 200, -10, 10 ,130, 0, 129);  h_D0Signif_recalc_l0_EM_SROS1->Sumw2();
  
  /*--------------------------------------------------------------------------------*/ 
  h_D0Signif_recalc_l1_EE_SRSS1 = new TH2F("h_D0Signif_recalc_l1_EE_SRSS1", "h_D0Signif_recalc_l1_EE_SRSS1", 200, -10, 10 ,130, 0, 129);  h_D0Signif_recalc_l1_EE_SRSS1->Sumw2();
  h_D0Signif_recalc_l1_EE_SRSS2 = new TH2F("h_D0Signif_recalc_l1_EE_SRSS2", "h_D0Signif_recalc_l1_EE_SRSS2", 200, -10, 10 ,130, 0, 129);  h_D0Signif_recalc_l1_EE_SRSS2->Sumw2();
  h_D0Signif_recalc_l1_MM_SRSS1 = new TH2F("h_D0Signif_recalc_l1_MM_SRSS1", "h_D0Signif_recalc_l1_MM_SRSS1", 200, -10, 10 ,130, 0, 129);  h_D0Signif_recalc_l1_MM_SRSS1->Sumw2();  
  h_D0Signif_recalc_l1_MM_SRSS2 = new TH2F("h_D0Signif_recalc_l1_MM_SRSS2", "h_D0Signif_recalc_l1_MM_SRSS2", 200, -10, 10 ,130, 0, 129);  h_D0Signif_recalc_l1_MM_SRSS2->Sumw2();
  h_D0Signif_recalc_l1_MM_SRSS3 = new TH2F("h_D0Signif_recalc_l1_MM_SRSS3", "h_D0Signif_recalc_l1_MM_SRSS3", 200, -10, 10 ,130, 0, 129);  h_D0Signif_recalc_l1_MM_SRSS3->Sumw2();
  h_D0Signif_recalc_l1_MM_SRSS4 = new TH2F("h_D0Signif_recalc_l1_MM_SRSS4", "h_D0Signif_recalc_l1_MM_SRSS4", 200, -10, 10 ,130, 0, 129);  h_D0Signif_recalc_l1_MM_SRSS4->Sumw2();
  h_D0Signif_recalc_l1_EM_SRSS1 = new TH2F("h_D0Signif_recalc_l1_EM_SRSS1", "h_D0Signif_recalc_l1_EM_SRSS1", 200, -10, 10 ,130, 0, 129);  h_D0Signif_recalc_l1_EM_SRSS1->Sumw2();
  h_D0Signif_recalc_l1_EM_SRSS2 = new TH2F("h_D0Signif_recalc_l1_EM_SRSS2", "h_D0Signif_recalc_l1_EM_SRSS2", 200, -10, 10 ,130, 0, 129);  h_D0Signif_recalc_l1_EM_SRSS2->Sumw2();
  h_D0Signif_recalc_l1_EE_SROS1 = new TH2F("h_D0Signif_recalc_l1_EE_SROS1", "h_D0Signif_recalc_l1_EE_SROS1", 200, -10, 10 ,130, 0, 129);  h_D0Signif_recalc_l1_EE_SROS1->Sumw2();
  h_D0Signif_recalc_l1_MM_SROS1 = new TH2F("h_D0Signif_recalc_l1_MM_SROS1", "h_D0Signif_recalc_l1_MM_SROS1", 200, -10, 10 ,130, 0, 129);  h_D0Signif_recalc_l1_MM_SROS1->Sumw2();
  h_D0Signif_recalc_l1_EM_SROS1 = new TH2F("h_D0Signif_recalc_l1_EM_SROS1", "h_D0Signif_recalc_l1_EM_SROS1", 200, -10, 10 ,130, 0, 129);  h_D0Signif_recalc_l1_EM_SROS1->Sumw2();

  /*--------------------------------------------------------------------------------*/ 




  
  return true;

}


bool TSelector_SusyNtuple::writeHistos(){
  
    h_storeSumwMcid->Write();
    
    h_DeltaRLeptons_EE_SRSS1->Write();
    h_DeltaRLeptons_EE_SRSS2->Write();
    h_DeltaRLeptons_MM_SRSS1->Write();
    h_DeltaRLeptons_MM_SRSS2->Write();
    h_DeltaRLeptons_MM_SRSS3->Write();
    h_DeltaRLeptons_MM_SRSS4->Write();
    h_DeltaRLeptons_EM_SRSS1->Write();
    h_DeltaRLeptons_EM_SRSS2->Write();
    h_DeltaRLeptons_EE_SROS1->Write();
    h_DeltaRLeptons_MM_SROS1->Write();
    h_DeltaRLeptons_EM_SROS1->Write();
    
    h_pTl0_EE_SRSS1->Write();
    h_pTl0_EE_SRSS2->Write();
    h_pTl0_MM_SRSS1->Write();
    h_pTl0_MM_SRSS2->Write();
    h_pTl0_MM_SRSS3->Write();
    h_pTl0_MM_SRSS4->Write();
    h_pTl0_EM_SRSS1->Write();
    h_pTl0_EM_SRSS2->Write();
    h_pTl0_EE_SROS1->Write();
    h_pTl0_MM_SROS1->Write();
    h_pTl0_EM_SROS1->Write();
    
    /*--------------------------------------------------------------------------------*/ 
    h_pTl1_EE_SRSS1->Write();
    h_pTl1_EE_SRSS2->Write();
    h_pTl1_MM_SRSS1->Write();
    h_pTl1_MM_SRSS2->Write();
    h_pTl1_MM_SRSS3->Write();
    h_pTl1_MM_SRSS4->Write();
    h_pTl1_EM_SRSS1->Write();
    h_pTl1_EM_SRSS2->Write();
    h_pTl1_EE_SROS1->Write();
    h_pTl1_MM_SROS1->Write();
    h_pTl1_EM_SROS1->Write();
    
      /*--------------------------------------------------------------------------------*/ 
    h_pTj0_EE_SRSS1->Write();
    h_pTj0_EE_SRSS2->Write();
    h_pTj0_MM_SRSS1->Write();
    h_pTj0_MM_SRSS2->Write();
    h_pTj0_MM_SRSS3->Write();
    h_pTj0_MM_SRSS4->Write();
    h_pTj0_EM_SRSS1->Write();
    h_pTj0_EM_SRSS2->Write();
    h_pTj0_EE_SROS1->Write();
    h_pTj0_MM_SROS1->Write();
    h_pTj0_EM_SROS1->Write();
    
    /*--------------------------------------------------------------------------------*/ 
    h_pTj1_EE_SRSS1->Write();
    h_pTj1_EE_SRSS2->Write();
    h_pTj1_MM_SRSS1->Write();  
    h_pTj1_MM_SRSS2->Write();
    h_pTj1_MM_SRSS3->Write();
    h_pTj1_MM_SRSS4->Write();
    h_pTj1_EM_SRSS1->Write();
    h_pTj1_EM_SRSS2->Write();
    h_pTj1_EE_SROS1->Write();
    h_pTj1_MM_SROS1->Write();
    h_pTj1_EM_SROS1->Write();
    
    h_mll_EE_SRSS1->Write();
    h_mll_EE_SRSS2->Write();
    h_mll_MM_SRSS1->Write(); 
    h_mll_MM_SRSS2->Write();
    h_mll_MM_SRSS3->Write();
    h_mll_MM_SRSS4->Write();
    h_mll_EM_SRSS1->Write();
    h_mll_EM_SRSS2->Write();
    h_mll_EE_SROS1->Write();
    h_mll_MM_SROS1->Write();
    h_mll_EM_SROS1->Write();
    
    h_METrel_EE_SRSS1->Write();
    h_METrel_EE_SRSS2->Write();
    h_METrel_MM_SRSS1->Write();  
    h_METrel_MM_SRSS2->Write();  
    h_METrel_MM_SRSS3->Write();
    h_METrel_MM_SRSS4->Write();
    h_METrel_EM_SRSS1->Write();
    h_METrel_EM_SRSS2->Write();
    h_METrel_EE_SROS1->Write();
    h_METrel_MM_SROS1->Write();
    h_METrel_EM_SROS1->Write();
    
    h_MET_EE_SRSS1->Write();
    h_MET_EE_SRSS2->Write();
    h_MET_MM_SRSS1->Write();  
    h_MET_MM_SRSS2->Write();  
    h_MET_MM_SRSS3->Write();
    h_MET_MM_SRSS4->Write();
    h_MET_EM_SRSS1->Write();
    h_MET_EM_SRSS2->Write();
    h_MET_EE_SROS1->Write();
    h_MET_MM_SROS1->Write();
    h_MET_EM_SROS1->Write();
    
    h_HT_EE_SRSS1->Write();
    h_HT_EE_SRSS2->Write();
    h_HT_MM_SRSS1->Write();  
    h_HT_MM_SRSS2->Write();
    h_HT_MM_SRSS3->Write();
    h_HT_MM_SRSS4->Write();
    h_HT_EM_SRSS1->Write();
    h_HT_EM_SRSS2->Write();
    h_HT_EE_SROS1->Write();
    h_HT_MM_SROS1->Write();
    h_HT_EM_SROS1->Write();
    
    h_mWWt_EE_SRSS1->Write();
    h_mWWt_EE_SRSS2->Write();
    h_mWWt_MM_SRSS1->Write();  
    h_mWWt_MM_SRSS2->Write();
    h_mWWt_MM_SRSS3->Write();
    h_mWWt_MM_SRSS4->Write();
    h_mWWt_EM_SRSS1->Write();
    h_mWWt_EM_SRSS2->Write();
    h_mWWt_EE_SROS1->Write();
    h_mWWt_MM_SROS1->Write();
    h_mWWt_EM_SROS1->Write();
    
    h_mTlmin_EE_SRSS1->Write();
    h_mTlmin_EE_SRSS2->Write();
    h_mTlmin_MM_SRSS1->Write();  
    h_mTlmin_MM_SRSS2->Write();
    h_mTlmin_MM_SRSS3->Write();
    h_mTlmin_MM_SRSS4->Write();
    h_mTlmin_EM_SRSS1->Write();
    h_mTlmin_EM_SRSS2->Write();
    h_mTlmin_EE_SROS1->Write();
    h_mTlmin_MM_SROS1->Write();
    h_mTlmin_EM_SROS1->Write();

    h_meff_EE_SRSS1->Write();
    h_meff_EE_SRSS2->Write();
    h_meff_MM_SRSS1->Write();
    h_meff_MM_SRSS2->Write();
    h_meff_MM_SRSS3->Write();
    h_meff_MM_SRSS4->Write();
    h_meff_EM_SRSS1->Write();
    h_meff_EM_SRSS2->Write();
    h_meff_EE_SROS1->Write();
    h_meff_MM_SROS1->Write();
    h_meff_EM_SROS1->Write();
    
    
    h_mt2_EE_SRSS1->Write();
    h_mt2_EE_SRSS2->Write();
    h_mt2_MM_SRSS1->Write();
    h_mt2_MM_SRSS2->Write();  
    h_mt2_MM_SRSS3->Write();
    h_mt2_MM_SRSS4->Write();
    h_mt2_EM_SRSS1->Write();
    h_mt2_EM_SRSS2->Write();
    h_mt2_EE_SROS1->Write();
    h_mt2_MM_SROS1->Write();
    h_mt2_EM_SROS1->Write();

    h_mjj_EE_SRSS1->Write();
    h_mjj_EE_SRSS2->Write();
    h_mjj_MM_SRSS1->Write();  
    h_mjj_MM_SRSS2->Write();
    h_mjj_MM_SRSS3->Write();
    h_mjj_MM_SRSS4->Write();
    h_mjj_EM_SRSS1->Write();
    h_mjj_EM_SRSS2->Write();
    h_mjj_EE_SROS1->Write();
    h_mjj_MM_SROS1->Write();
    h_mjj_EM_SROS1->Write();
    
    h_DeltaPhiMETll_EE_SRSS1->Write();
    h_DeltaPhiMETll_EE_SRSS2->Write();
    h_DeltaPhiMETll_MM_SRSS1->Write();  
    h_DeltaPhiMETll_MM_SRSS2->Write();
    h_DeltaPhiMETll_MM_SRSS3->Write();
    h_DeltaPhiMETll_MM_SRSS4->Write();
    h_DeltaPhiMETll_EM_SRSS1->Write();
    h_DeltaPhiMETll_EM_SRSS2->Write();
    h_DeltaPhiMETll_EE_SROS1->Write();
    h_DeltaPhiMETll_MM_SROS1->Write();
    h_DeltaPhiMETll_EM_SROS1->Write();
    
    h_DeltaPhill_EE_SRSS1->Write();
    h_DeltaPhill_EE_SRSS2->Write();
    h_DeltaPhill_MM_SRSS1->Write();  
    h_DeltaPhill_MM_SRSS2->Write();
    h_DeltaPhill_MM_SRSS3->Write();
    h_DeltaPhill_MM_SRSS4->Write();
    h_DeltaPhill_EM_SRSS1->Write();
    h_DeltaPhill_EM_SRSS2->Write();
    h_DeltaPhill_EE_SROS1->Write();
    h_DeltaPhill_MM_SROS1->Write();
    h_DeltaPhill_EM_SROS1->Write();

    h_NBJets_EE_SRSS1->Write();
    h_NBJets_EE_SRSS2->Write();
    h_NBJets_MM_SRSS1->Write();  
    h_NBJets_MM_SRSS2->Write();
    h_NBJets_MM_SRSS3->Write();
    h_NBJets_MM_SRSS4->Write();
    h_NBJets_EM_SRSS1->Write();
    h_NBJets_EM_SRSS2->Write();
    h_NBJets_EE_SROS1->Write();
    h_NBJets_MM_SROS1->Write();
    h_NBJets_EM_SROS1->Write();

    h_NCJets_EE_SRSS1->Write();
    h_NCJets_EE_SRSS2->Write();
    h_NCJets_MM_SRSS1->Write();  
    h_NCJets_MM_SRSS2->Write();
    h_NCJets_MM_SRSS3->Write();
    h_NCJets_MM_SRSS4->Write();
    h_NCJets_EM_SRSS1->Write();
    h_NCJets_EM_SRSS2->Write();
    h_NCJets_EE_SROS1->Write();
    h_NCJets_MM_SROS1->Write();
    h_NCJets_EM_SROS1->Write();

    h_NFJets_EE_SRSS1->Write();
    h_NFJets_EE_SRSS2->Write();
    h_NFJets_MM_SRSS1->Write();  
    h_NFJets_MM_SRSS2->Write();
    h_NFJets_MM_SRSS3->Write();
    h_NFJets_MM_SRSS4->Write();
    h_NFJets_EM_SRSS1->Write();
    h_NFJets_EM_SRSS2->Write();
    h_NFJets_EE_SROS1->Write();
    h_NFJets_MM_SROS1->Write();
    h_NFJets_EM_SROS1->Write();
    
 
    h_mZTT_mmc_EE_SRSS1->Write();
    h_mZTT_mmc_EE_SRSS2->Write();
    h_mZTT_mmc_MM_SRSS1->Write();
    h_mZTT_mmc_MM_SRSS2->Write();
    h_mZTT_mmc_MM_SRSS3->Write();
    h_mZTT_mmc_MM_SRSS4->Write();
    h_mZTT_mmc_EM_SRSS1->Write();
    h_mZTT_mmc_EM_SRSS2->Write();
    h_mZTT_mmc_EE_SROS1->Write();
    h_mZTT_mmc_MM_SROS1->Write();
    h_mZTT_mmc_EM_SROS1->Write();
//     ---------------------------    
    h_mZTT_coll_EE_SRSS1->Write();
    h_mZTT_coll_EE_SRSS2->Write();
    h_mZTT_coll_MM_SRSS1->Write();
    h_mZTT_coll_MM_SRSS2->Write();
    h_mZTT_coll_MM_SRSS3->Write();
    h_mZTT_coll_MM_SRSS4->Write();    
    h_mZTT_coll_EM_SRSS1->Write();   
    h_mZTT_coll_EM_SRSS2->Write();   
    h_mZTT_coll_EE_SROS1->Write();   
    h_mZTT_coll_MM_SROS1->Write();   
    h_mZTT_coll_EM_SROS1->Write();   
//     ---------------------------  
    
    
  /*--------------------------------------------------------------------------------*/ 
  h_DeltaPhijj_EE_SRSS1->Write(); 
  h_DeltaPhijj_EE_SRSS2->Write(); 
  h_DeltaPhijj_MM_SRSS1->Write();   
  h_DeltaPhijj_MM_SRSS2->Write(); 
  h_DeltaPhijj_MM_SRSS3->Write(); 
  h_DeltaPhijj_MM_SRSS4->Write(); 
  h_DeltaPhijj_EM_SRSS1->Write(); 
  h_DeltaPhijj_EM_SRSS2->Write(); 
  h_DeltaPhijj_EE_SROS1->Write(); 
  h_DeltaPhijj_MM_SROS1->Write(); 
  h_DeltaPhijj_EM_SROS1->Write(); 
  
  /*--------------------------------------------------------------------------------*/ 
  h_pTjj_EE_SRSS1->Write(); 
  h_pTjj_EE_SRSS2->Write(); 
  h_pTjj_MM_SRSS1->Write(); 
  h_pTjj_MM_SRSS2->Write(); 
  h_pTjj_MM_SRSS3->Write(); 
  h_pTjj_MM_SRSS4->Write(); 
  h_pTjj_EM_SRSS1->Write(); 
  h_pTjj_EM_SRSS2->Write(); 
  h_pTjj_EE_SROS1->Write(); 
  h_pTjj_MM_SROS1->Write(); 
  h_pTjj_EM_SROS1->Write(); 

  /*----------------------------------------------------------------------------*/ 
  h_ptll_EE_SRSS1->Write(); 
  h_ptll_EE_SRSS2->Write(); 
  h_ptll_MM_SRSS1->Write();   
  h_ptll_MM_SRSS2->Write(); 
  h_ptll_MM_SRSS3->Write(); 
  h_ptll_MM_SRSS4->Write(); 
  h_ptll_EM_SRSS1->Write(); 
  h_ptll_EM_SRSS2->Write(); 
  h_ptll_EE_SROS1->Write(); 
  h_ptll_MM_SROS1->Write(); 
  h_ptll_EM_SROS1->Write(); 
  
  /*--------------------------------------------------------------------------------*/ 
  h_DeltaPhiMETl0_EE_SRSS1->Write(); 
  h_DeltaPhiMETl0_EE_SRSS2->Write(); 
  h_DeltaPhiMETl0_MM_SRSS1->Write();   
  h_DeltaPhiMETl0_MM_SRSS2->Write(); 
  h_DeltaPhiMETl0_MM_SRSS3->Write(); 
  h_DeltaPhiMETl0_MM_SRSS4->Write(); 
  h_DeltaPhiMETl0_EM_SRSS1->Write(); 
  h_DeltaPhiMETl0_EM_SRSS2->Write(); 
  h_DeltaPhiMETl0_EE_SROS1->Write(); 
  h_DeltaPhiMETl0_MM_SROS1->Write(); 
  h_DeltaPhiMETl0_EM_SROS1->Write(); 

  /*-------------------------------------------------------------------------------------*/ 
  h_DeltaPhiMETl1_EE_SRSS1->Write(); 
  h_DeltaPhiMETl1_EE_SRSS2->Write(); 
  h_DeltaPhiMETl1_MM_SRSS1->Write();   
  h_DeltaPhiMETl1_MM_SRSS2->Write(); 
  h_DeltaPhiMETl1_MM_SRSS3->Write(); 
  h_DeltaPhiMETl1_MM_SRSS4->Write(); 
  h_DeltaPhiMETl1_EM_SRSS1->Write(); 
  h_DeltaPhiMETl1_EM_SRSS2->Write(); 
  h_DeltaPhiMETl1_EE_SROS1->Write(); 
  h_DeltaPhiMETl1_MM_SROS1->Write(); 
  h_DeltaPhiMETl1_EM_SROS1->Write(); 
  
    /*-----------------------------------------------------------------------------------*/ 
  h_DeltaPhiMETj0_EE_SRSS1->Write(); 
  h_DeltaPhiMETj0_EE_SRSS2->Write(); 
  h_DeltaPhiMETj0_MM_SRSS1->Write();   
  h_DeltaPhiMETj0_MM_SRSS2->Write(); 
  h_DeltaPhiMETj0_MM_SRSS3->Write(); 
  h_DeltaPhiMETj0_MM_SRSS4->Write(); 
  h_DeltaPhiMETj0_EM_SRSS1->Write(); 
  h_DeltaPhiMETj0_EM_SRSS2->Write(); 
  h_DeltaPhiMETj0_EE_SROS1->Write(); 
  h_DeltaPhiMETj0_MM_SROS1->Write(); 
  h_DeltaPhiMETj0_EM_SROS1->Write(); 
  /*-------------------------------------------------------------------------------------*/ 
  h_DeltaPhiMETj1_EE_SRSS1->Write(); 
  h_DeltaPhiMETj1_EE_SRSS2->Write(); 
  h_DeltaPhiMETj1_MM_SRSS1->Write();   
  h_DeltaPhiMETj1_MM_SRSS2->Write(); 
  h_DeltaPhiMETj1_MM_SRSS3->Write(); 
  h_DeltaPhiMETj1_MM_SRSS4->Write(); 
  h_DeltaPhiMETj1_EM_SRSS1->Write(); 
  h_DeltaPhiMETj1_EM_SRSS2->Write(); 
  h_DeltaPhiMETj1_EE_SROS1->Write(); 
  h_DeltaPhiMETj1_MM_SROS1->Write(); 
  h_DeltaPhiMETj1_EM_SROS1->Write(); 

  /*-------------------------------------------------------------------------------------*/ 
  h_DeltaPhiMETjj_EE_SRSS1->Write(); 
  h_DeltaPhiMETjj_EE_SRSS2->Write(); 
  h_DeltaPhiMETjj_MM_SRSS1->Write();   
  h_DeltaPhiMETjj_MM_SRSS2->Write(); 
  h_DeltaPhiMETjj_MM_SRSS3->Write(); 
  h_DeltaPhiMETjj_MM_SRSS4->Write(); 
  h_DeltaPhiMETjj_EM_SRSS1->Write(); 
  h_DeltaPhiMETjj_EM_SRSS2->Write(); 
  h_DeltaPhiMETjj_EE_SROS1->Write(); 
  h_DeltaPhiMETjj_MM_SROS1->Write(); 
  h_DeltaPhiMETjj_EM_SROS1->Write(); 

    /*--------------------------------------------------------------------------------*/ 
  h_DeltaRjj_EE_SRSS1->Write(); 
  h_DeltaRjj_EE_SRSS2->Write(); 
  h_DeltaRjj_MM_SRSS1->Write();   
  h_DeltaRjj_MM_SRSS2->Write(); 
  h_DeltaRjj_MM_SRSS3->Write(); 
  h_DeltaRjj_MM_SRSS4->Write(); 
  h_DeltaRjj_EM_SRSS1->Write(); 
  h_DeltaRjj_EM_SRSS2->Write(); 
  h_DeltaRjj_EE_SROS1->Write(); 
  h_DeltaRjj_MM_SROS1->Write(); 
  h_DeltaRjj_EM_SROS1->Write(); 

  /*--------------------------------------------------------------------------------*/ 
  h_etal0_EE_SRSS1->Write(); 
  h_etal0_EE_SRSS2->Write(); 
  h_etal0_MM_SRSS1->Write();   
  h_etal0_MM_SRSS2->Write(); 
  h_etal0_MM_SRSS3->Write(); 
  h_etal0_MM_SRSS4->Write(); 
  h_etal0_EM_SRSS1->Write(); 
  h_etal0_EM_SRSS2->Write(); 
  h_etal0_EE_SROS1->Write(); 
  h_etal0_MM_SROS1->Write(); 
  h_etal0_EM_SROS1->Write(); 
    /*---------------------------------------------------------------------------*/ 
  h_etal1_EE_SRSS1->Write(); 
  h_etal1_EE_SRSS2->Write(); 
  h_etal1_MM_SRSS1->Write();   
  h_etal1_MM_SRSS2->Write(); 
  h_etal1_MM_SRSS3->Write(); 
  h_etal1_MM_SRSS4->Write(); 
  h_etal1_EM_SRSS1->Write(); 
  h_etal1_EM_SRSS2->Write(); 
  h_etal1_EE_SROS1->Write(); 
  h_etal1_MM_SROS1->Write(); 
  h_etal1_EM_SROS1->Write(); 
    /*---------------------------------------------------------------------------*/ 
  h_etaj0_EE_SRSS1->Write(); 
  h_etaj0_EE_SRSS2->Write(); 
  h_etaj0_MM_SRSS1->Write();   
  h_etaj0_MM_SRSS2->Write(); 
  h_etaj0_MM_SRSS3->Write(); 
  h_etaj0_MM_SRSS4->Write(); 
  h_etaj0_EM_SRSS1->Write(); 
  h_etaj0_EM_SRSS2->Write(); 
  h_etaj0_EE_SROS1->Write(); 
  h_etaj0_MM_SROS1->Write(); 
  h_etaj0_EM_SROS1->Write(); 
    /*---------------------------------------------------------------------------*/ 
  h_etaj1_EE_SRSS1->Write(); 
  h_etaj1_EE_SRSS2->Write(); 
  h_etaj1_MM_SRSS1->Write();   
  h_etaj1_MM_SRSS2->Write(); 
  h_etaj1_MM_SRSS3->Write(); 
  h_etaj1_MM_SRSS4->Write(); 
  h_etaj1_EM_SRSS1->Write(); 
  h_etaj1_EM_SRSS2->Write(); 
  h_etaj1_EE_SROS1->Write(); 
  h_etaj1_MM_SROS1->Write(); 
  h_etaj1_EM_SROS1->Write(); 

  /*--------------------------------------------------------------------------------*/ 
  h_mTl0MET_EE_SRSS1->Write(); 
  h_mTl0MET_EE_SRSS2->Write(); 
  h_mTl0MET_MM_SRSS1->Write();   
  h_mTl0MET_MM_SRSS2->Write(); 
  h_mTl0MET_MM_SRSS3->Write(); 
  h_mTl0MET_MM_SRSS4->Write(); 
  h_mTl0MET_EM_SRSS1->Write(); 
  h_mTl0MET_EM_SRSS2->Write(); 
  h_mTl0MET_EE_SROS1->Write(); 
  h_mTl0MET_MM_SROS1->Write(); 
  h_mTl0MET_EM_SROS1->Write(); 
  /*-------------------------------------------------------------------------------*/ 
  h_mTl1MET_EE_SRSS1->Write(); 
  h_mTl1MET_EE_SRSS2->Write(); 
  h_mTl1MET_MM_SRSS1->Write();   
  h_mTl1MET_MM_SRSS2->Write(); 
  h_mTl1MET_MM_SRSS3->Write(); 
  h_mTl1MET_MM_SRSS4->Write(); 
  h_mTl1MET_EM_SRSS1->Write(); 
  h_mTl1MET_EM_SRSS2->Write(); 
  h_mTl1MET_EE_SROS1->Write(); 
  h_mTl1MET_MM_SROS1->Write(); 
  h_mTl1MET_EM_SROS1->Write(); 

      /*--------------------------------------------------------------------------------*/ 
  h_DeltaPhilljj_EE_SRSS1->Write(); 
  h_DeltaPhilljj_EE_SRSS2->Write(); 
  h_DeltaPhilljj_MM_SRSS1->Write();   
  h_DeltaPhilljj_MM_SRSS2->Write(); 
  h_DeltaPhilljj_MM_SRSS3->Write(); 
  h_DeltaPhilljj_MM_SRSS4->Write(); 
  h_DeltaPhilljj_EM_SRSS1->Write(); 
  h_DeltaPhilljj_EM_SRSS2->Write(); 
  h_DeltaPhilljj_EE_SROS1->Write(); 
  h_DeltaPhilljj_MM_SROS1->Write(); 
  h_DeltaPhilljj_EM_SROS1->Write(); 
  /*------------------------------------------------------------------------------------*/ 
  h_DeltaPhil0jj_EE_SRSS1->Write(); 
  h_DeltaPhil0jj_EE_SRSS2->Write(); 
  h_DeltaPhil0jj_MM_SRSS1->Write();   
  h_DeltaPhil0jj_MM_SRSS2->Write(); 
  h_DeltaPhil0jj_MM_SRSS3->Write(); 
  h_DeltaPhil0jj_MM_SRSS4->Write(); 
  h_DeltaPhil0jj_EM_SRSS1->Write(); 
  h_DeltaPhil0jj_EM_SRSS2->Write(); 
  h_DeltaPhil0jj_EE_SROS1->Write(); 
  h_DeltaPhil0jj_MM_SROS1->Write(); 
  h_DeltaPhil0jj_EM_SROS1->Write(); 
  /*------------------------------------------------------------------------------------*/ 
  h_DeltaPhil1jj_EE_SRSS1->Write(); 
  h_DeltaPhil1jj_EE_SRSS2->Write(); 
  h_DeltaPhil1jj_MM_SRSS1->Write();   
  h_DeltaPhil1jj_MM_SRSS2->Write(); 
  h_DeltaPhil1jj_MM_SRSS3->Write(); 
  h_DeltaPhil1jj_MM_SRSS4->Write(); 
  h_DeltaPhil1jj_EM_SRSS1->Write(); 
  h_DeltaPhil1jj_EM_SRSS2->Write(); 
  h_DeltaPhil1jj_EE_SROS1->Write(); 
  h_DeltaPhil1jj_MM_SROS1->Write(); 
  h_DeltaPhil1jj_EM_SROS1->Write(); 

  /*--------------------------------------------------------------------------------*/ 
  h_DeltaRlljj_EE_SRSS1->Write(); 
  h_DeltaRlljj_EE_SRSS2->Write(); 
  h_DeltaRlljj_MM_SRSS1->Write();   
  h_DeltaRlljj_MM_SRSS2->Write(); 
  h_DeltaRlljj_MM_SRSS3->Write(); 
  h_DeltaRlljj_MM_SRSS4->Write(); 
  h_DeltaRlljj_EM_SRSS1->Write(); 
  h_DeltaRlljj_EM_SRSS2->Write(); 
  h_DeltaRlljj_EE_SROS1->Write(); 
  h_DeltaRlljj_MM_SROS1->Write(); 
  h_DeltaRlljj_EM_SROS1->Write(); 

    /*--------------------------------------------------------------------------------*/   
  h_DeltaEtajj_EE_SRSS1->Write(); 
  h_DeltaEtajj_EE_SRSS2->Write(); 
  h_DeltaEtajj_MM_SRSS1->Write();   
  h_DeltaEtajj_MM_SRSS2->Write(); 
  h_DeltaEtajj_MM_SRSS3->Write(); 
  h_DeltaEtajj_MM_SRSS4->Write(); 
  h_DeltaEtajj_EM_SRSS1->Write(); 
  h_DeltaEtajj_EM_SRSS2->Write(); 
  h_DeltaEtajj_EE_SROS1->Write(); 
  h_DeltaEtajj_MM_SROS1->Write(); 
  h_DeltaEtajj_EM_SROS1->Write();   
  
      /*--------------------------------------------------------------------------------*/   
  h_DeltaEtall_EE_SRSS1->Write(); 
  h_DeltaEtall_EE_SRSS2->Write(); 
  h_DeltaEtall_MM_SRSS1->Write();   
  h_DeltaEtall_MM_SRSS2->Write(); 
  h_DeltaEtall_MM_SRSS3->Write(); 
  h_DeltaEtall_MM_SRSS4->Write(); 
  h_DeltaEtall_EM_SRSS1->Write(); 
  h_DeltaEtall_EM_SRSS2->Write(); 
  h_DeltaEtall_EE_SROS1->Write(); 
  h_DeltaEtall_MM_SROS1->Write(); 
  h_DeltaEtall_EM_SROS1->Write();  


  /*--------------------------------------------------------------------------------*/ 
  h_mTll_EE_SRSS1->Write(); 
  h_mTll_EE_SRSS2->Write(); 
  h_mTll_MM_SRSS1->Write();   
  h_mTll_MM_SRSS2->Write(); 
  h_mTll_MM_SRSS3->Write(); 
  h_mTll_MM_SRSS4->Write(); 
  h_mTll_EM_SRSS1->Write(); 
  h_mTll_EM_SRSS2->Write(); 
  h_mTll_EE_SROS1->Write(); 
  h_mTll_MM_SROS1->Write(); 
  h_mTll_EM_SROS1->Write(); 


  /*--------------------------------------------------------------------------------*/ 
  h_mMETll_EE_SRSS1->Write(); 
  h_mMETll_EE_SRSS2->Write(); 
  h_mMETll_MM_SRSS1->Write();   
  h_mMETll_MM_SRSS2->Write(); 
  h_mMETll_MM_SRSS3->Write(); 
  h_mMETll_MM_SRSS4->Write(); 
  h_mMETll_EM_SRSS1->Write(); 
  h_mMETll_EM_SRSS2->Write(); 
  h_mMETll_EE_SROS1->Write(); 
  h_mMETll_MM_SROS1->Write(); 
  h_mMETll_EM_SROS1->Write(); 

  /*--------------------------------------------------------------------------------*/ 
  h_DeltaYjj_EE_SRSS1->Write(); 
  h_DeltaYjj_EE_SRSS2->Write(); 
  h_DeltaYjj_MM_SRSS1->Write();  
  h_DeltaYjj_MM_SRSS2->Write(); 
  h_DeltaYjj_MM_SRSS3->Write(); 
  h_DeltaYjj_MM_SRSS4->Write(); 
  h_DeltaYjj_EM_SRSS1->Write(); 
  h_DeltaYjj_EM_SRSS2->Write(); 
  h_DeltaYjj_EE_SROS1->Write(); 
  h_DeltaYjj_MM_SROS1->Write(); 
  h_DeltaYjj_EM_SROS1->Write(); 
  
    /*--------------------------------------------------------------------------------*/ 
  h_D0_recalc_l0_EE_SRSS1->Write();
  h_D0_recalc_l0_EE_SRSS2->Write();
  h_D0_recalc_l0_MM_SRSS1->Write();  
  h_D0_recalc_l0_MM_SRSS2->Write();
  h_D0_recalc_l0_MM_SRSS3->Write();
  h_D0_recalc_l0_MM_SRSS4->Write();
  h_D0_recalc_l0_EM_SRSS1->Write();
  h_D0_recalc_l0_EM_SRSS2->Write();
  h_D0_recalc_l0_EE_SROS1->Write();
  h_D0_recalc_l0_MM_SROS1->Write();
  h_D0_recalc_l0_EM_SROS1->Write();

    /*--------------------------------------------------------------------------------*/ 
  h_D0_recalc_l1_EE_SRSS1->Write();
  h_D0_recalc_l1_EE_SRSS2->Write();
  h_D0_recalc_l1_MM_SRSS1->Write();  
  h_D0_recalc_l1_MM_SRSS2->Write();
  h_D0_recalc_l1_MM_SRSS3->Write();
  h_D0_recalc_l1_MM_SRSS4->Write();
  h_D0_recalc_l1_EM_SRSS1->Write();
  h_D0_recalc_l1_EM_SRSS2->Write();
  h_D0_recalc_l1_EE_SROS1->Write();
  h_D0_recalc_l1_MM_SROS1->Write();
  h_D0_recalc_l1_EM_SROS1->Write();
  /*--------------------------------------------------------------------------------*/ 
  h_D0_branch_l0_EE_SRSS1->Write();
  h_D0_branch_l0_EE_SRSS2->Write();
  h_D0_branch_l0_MM_SRSS1->Write();  
  h_D0_branch_l0_MM_SRSS2->Write();
  h_D0_branch_l0_MM_SRSS3->Write();
  h_D0_branch_l0_MM_SRSS4->Write();
  h_D0_branch_l0_EM_SRSS1->Write();
  h_D0_branch_l0_EM_SRSS2->Write();
  h_D0_branch_l0_EE_SROS1->Write();
  h_D0_branch_l0_MM_SROS1->Write();
  h_D0_branch_l0_EM_SROS1->Write();

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
  h_D0Signif_recalc_l0_EE_SRSS1->Write();
  h_D0Signif_recalc_l0_EE_SRSS2->Write();
  h_D0Signif_recalc_l0_MM_SRSS1->Write();  
  h_D0Signif_recalc_l0_MM_SRSS2->Write();
  h_D0Signif_recalc_l0_MM_SRSS3->Write();
  h_D0Signif_recalc_l0_MM_SRSS4->Write();
  h_D0Signif_recalc_l0_EM_SRSS1->Write();
  h_D0Signif_recalc_l0_EM_SRSS2->Write();
  h_D0Signif_recalc_l0_EE_SROS1->Write();
  h_D0Signif_recalc_l0_MM_SROS1->Write();
  h_D0Signif_recalc_l0_EM_SROS1->Write();

    /*--------------------------------------------------------------------------------*/ 
  h_D0Signif_recalc_l1_EE_SRSS1->Write();
  h_D0Signif_recalc_l1_EE_SRSS2->Write();
  h_D0Signif_recalc_l1_MM_SRSS1->Write();  
  h_D0Signif_recalc_l1_MM_SRSS2->Write();
  h_D0Signif_recalc_l1_MM_SRSS3->Write();
  h_D0Signif_recalc_l1_MM_SRSS4->Write();
  h_D0Signif_recalc_l1_EM_SRSS1->Write();
  h_D0Signif_recalc_l1_EM_SRSS2->Write();
  h_D0Signif_recalc_l1_EE_SROS1->Write();
  h_D0Signif_recalc_l1_MM_SROS1->Write();
  h_D0Signif_recalc_l1_EM_SROS1->Write();
  /*--------------------------------------------------------------------------------*/ 
  h_D0Signif_branch_l0_EE_SRSS1->Write();
  h_D0Signif_branch_l0_EE_SRSS2->Write();
  h_D0Signif_branch_l0_MM_SRSS1->Write();  
  h_D0Signif_branch_l0_MM_SRSS2->Write();
  h_D0Signif_branch_l0_MM_SRSS3->Write();
  h_D0Signif_branch_l0_MM_SRSS4->Write();
  h_D0Signif_branch_l0_EM_SRSS1->Write();
  h_D0Signif_branch_l0_EM_SRSS2->Write();
  h_D0Signif_branch_l0_EE_SROS1->Write();
  h_D0Signif_branch_l0_MM_SROS1->Write();
  h_D0Signif_branch_l0_EM_SROS1->Write();

    /*--------------------------------------------------------------------------------*/ 
  h_D0Signif_branch_l1_EE_SRSS1->Write();
  h_D0Signif_branch_l1_EE_SRSS2->Write();
  h_D0Signif_branch_l1_MM_SRSS1->Write();  
  h_D0Signif_branch_l1_MM_SRSS2->Write();
  h_D0Signif_branch_l1_MM_SRSS3->Write();
  h_D0Signif_branch_l1_MM_SRSS4->Write();
  h_D0Signif_branch_l1_EM_SRSS1->Write();
  h_D0Signif_branch_l1_EM_SRSS2->Write();
  h_D0Signif_branch_l1_EE_SROS1->Write();
  h_D0Signif_branch_l1_MM_SROS1->Write();
  h_D0Signif_branch_l1_EM_SROS1->Write();
  
  cutflow_EE->Write();
  cutflow_EE_ALL->Write();  
  cutflow_MM->Write();
  cutflow_MM_ALL->Write();  
  cutflow_EM->Write();
  cutflow_EM_ALL->Write();
  
 h_D0Signif_recalc_PR_EE->Write();
 h_D0Signif_recalc_HF_EE->Write();
 h_D0Signif_recalc_LF_EE->Write();
 h_D0Signif_recalc_PR_MM->Write();
 h_D0Signif_recalc_HF_MM->Write();
 h_D0Signif_recalc_LF_MM->Write();
 h_D0Signif_recalc_PR_EM->Write();
 h_D0Signif_recalc_HF_EM->Write();
 h_D0Signif_recalc_LF_EM->Write();
 
 
 h_D0_recalc_PR_EE->Write();
 h_D0_recalc_HF_EE->Write();
 h_D0_recalc_LF_EE->Write();
 h_D0_recalc_PR_MM->Write();
 h_D0_recalc_HF_MM->Write();
 h_D0_recalc_LF_MM->Write();
 h_D0_recalc_PR_EM->Write();
 h_D0_recalc_HF_EM->Write();
 h_D0_recalc_LF_EM->Write();
    
    return true;
}

bool TSelector_SusyNtuple::addHistos(){
  
    fOutput->Add( h_storeSumwMcid);

    //---------------------------    
    fOutput->Add( h_DeltaRLeptons_EE_SRSS1);
    fOutput->Add( h_DeltaRLeptons_EE_SRSS2);
    fOutput->Add( h_DeltaRLeptons_MM_SRSS1);
    fOutput->Add( h_DeltaRLeptons_MM_SRSS2);
    fOutput->Add( h_DeltaRLeptons_MM_SRSS3);
    fOutput->Add( h_DeltaRLeptons_MM_SRSS4);
    fOutput->Add( h_DeltaRLeptons_EM_SRSS1);
    fOutput->Add( h_DeltaRLeptons_EM_SRSS2);
    fOutput->Add( h_DeltaRLeptons_EE_SROS1);
    fOutput->Add( h_DeltaRLeptons_MM_SROS1);
    fOutput->Add( h_DeltaRLeptons_EM_SROS1);
    
    fOutput->Add( h_pTl0_EE_SRSS1);
    fOutput->Add( h_pTl0_EE_SRSS2);
    fOutput->Add( h_pTl0_MM_SRSS1);
    fOutput->Add( h_pTl0_MM_SRSS2);
    fOutput->Add( h_pTl0_MM_SRSS3);
    fOutput->Add( h_pTl0_MM_SRSS4);
    fOutput->Add( h_pTl0_EM_SRSS1);
    fOutput->Add( h_pTl0_EM_SRSS2);
    fOutput->Add( h_pTl0_EE_SROS1);
    fOutput->Add( h_pTl0_MM_SROS1);
    fOutput->Add( h_pTl0_EM_SROS1);
    
    /*--------------------------------------------------------------------------------*/ 
    fOutput->Add( h_pTl1_EE_SRSS1);
    fOutput->Add( h_pTl1_EE_SRSS2);
    fOutput->Add( h_pTl1_MM_SRSS1);
    fOutput->Add( h_pTl1_MM_SRSS2);
    fOutput->Add( h_pTl1_MM_SRSS3);
    fOutput->Add( h_pTl1_MM_SRSS4);
    fOutput->Add( h_pTl1_EM_SRSS1);
    fOutput->Add( h_pTl1_EM_SRSS2);
    fOutput->Add( h_pTl1_EE_SROS1);
    fOutput->Add( h_pTl1_MM_SROS1);
    fOutput->Add( h_pTl1_EM_SROS1);
    
      /*--------------------------------------------------------------------------------*/ 
    fOutput->Add( h_pTj0_EE_SRSS1);
    fOutput->Add( h_pTj0_EE_SRSS2);
    fOutput->Add( h_pTj0_MM_SRSS1);
    fOutput->Add( h_pTj0_MM_SRSS2);
    fOutput->Add( h_pTj0_MM_SRSS3);
    fOutput->Add( h_pTj0_MM_SRSS4);
    fOutput->Add( h_pTj0_EM_SRSS1);
    fOutput->Add( h_pTj0_EM_SRSS2);
    fOutput->Add( h_pTj0_EE_SROS1);
    fOutput->Add( h_pTj0_MM_SROS1);
    fOutput->Add( h_pTj0_EM_SROS1);
    
    /*--------------------------------------------------------------------------------*/ 
    fOutput->Add( h_pTj1_EE_SRSS1);
    fOutput->Add( h_pTj1_EE_SRSS2);
    fOutput->Add( h_pTj1_MM_SRSS1);
    fOutput->Add( h_pTj1_MM_SRSS2);
    fOutput->Add( h_pTj1_MM_SRSS3);
    fOutput->Add( h_pTj1_MM_SRSS4);
    fOutput->Add( h_pTj1_EM_SRSS1);
    fOutput->Add( h_pTj1_EM_SRSS2);
    fOutput->Add( h_pTj1_EE_SROS1);
    fOutput->Add( h_pTj1_MM_SROS1);
    fOutput->Add( h_pTj1_EM_SROS1);
  
    fOutput->Add(h_mll_EE_SRSS1);
    fOutput->Add(h_mll_EE_SRSS2);
    fOutput->Add(h_mll_MM_SRSS1); 
    fOutput->Add(h_mll_MM_SRSS2);
    fOutput->Add(h_mll_MM_SRSS3);
    fOutput->Add(h_mll_MM_SRSS4);
    fOutput->Add(h_mll_EM_SRSS1);
    fOutput->Add(h_mll_EM_SRSS2);
    fOutput->Add(h_mll_EE_SROS1);
    fOutput->Add(h_mll_MM_SROS1);
    fOutput->Add(h_mll_EM_SROS1);
    
    fOutput->Add(h_METrel_EE_SRSS1);
    fOutput->Add(h_METrel_EE_SRSS2);
    fOutput->Add(h_METrel_MM_SRSS1);  
    fOutput->Add(h_METrel_MM_SRSS2);  
    fOutput->Add(h_METrel_MM_SRSS3);
    fOutput->Add(h_METrel_MM_SRSS4);
    fOutput->Add(h_METrel_EM_SRSS1);
    fOutput->Add(h_METrel_EM_SRSS2);
    fOutput->Add(h_METrel_EE_SROS1);
    fOutput->Add(h_METrel_MM_SROS1);
    fOutput->Add(h_METrel_EM_SROS1);
    
    fOutput->Add(h_MET_EE_SRSS1);
    fOutput->Add(h_MET_EE_SRSS2);
    fOutput->Add(h_MET_MM_SRSS1);  
    fOutput->Add(h_MET_MM_SRSS2);  
    fOutput->Add(h_MET_MM_SRSS3);
    fOutput->Add(h_MET_MM_SRSS4);
    fOutput->Add(h_MET_EM_SRSS1);
    fOutput->Add(h_MET_EM_SRSS2);
    fOutput->Add(h_MET_EE_SROS1);
    fOutput->Add(h_MET_MM_SROS1);
    fOutput->Add(h_MET_EM_SROS1);
    
    fOutput->Add(h_HT_EE_SRSS1);
    fOutput->Add(h_HT_EE_SRSS2);
    fOutput->Add(h_HT_MM_SRSS1);  
    fOutput->Add(h_HT_MM_SRSS2);
    fOutput->Add(h_HT_MM_SRSS3);
    fOutput->Add(h_HT_MM_SRSS4);
    fOutput->Add(h_HT_EM_SRSS1);
    fOutput->Add(h_HT_EM_SRSS2);
    fOutput->Add(h_HT_EE_SROS1);
    fOutput->Add(h_HT_MM_SROS1);
    fOutput->Add(h_HT_EM_SROS1);
    
    fOutput->Add(h_mWWt_EE_SRSS1);
    fOutput->Add(h_mWWt_EE_SRSS2);
    fOutput->Add(h_mWWt_MM_SRSS1);  
    fOutput->Add(h_mWWt_MM_SRSS2);
    fOutput->Add(h_mWWt_MM_SRSS3);
    fOutput->Add(h_mWWt_MM_SRSS4);
    fOutput->Add(h_mWWt_EM_SRSS1);
    fOutput->Add(h_mWWt_EM_SRSS2);
    fOutput->Add(h_mWWt_EE_SROS1);
    fOutput->Add(h_mWWt_MM_SROS1);
    fOutput->Add(h_mWWt_EM_SROS1);
    
    fOutput->Add(h_mTlmin_EE_SRSS1);
    fOutput->Add(h_mTlmin_EE_SRSS2);
    fOutput->Add(h_mTlmin_MM_SRSS1);  
    fOutput->Add(h_mTlmin_MM_SRSS2);
    fOutput->Add(h_mTlmin_MM_SRSS3);
    fOutput->Add(h_mTlmin_MM_SRSS4);
    fOutput->Add(h_mTlmin_EM_SRSS1);
    fOutput->Add(h_mTlmin_EM_SRSS2);
    fOutput->Add(h_mTlmin_EE_SROS1);
    fOutput->Add(h_mTlmin_MM_SROS1);
    fOutput->Add(h_mTlmin_EM_SROS1);

    fOutput->Add(h_meff_EE_SRSS1);
    fOutput->Add(h_meff_EE_SRSS2);
    fOutput->Add(h_meff_MM_SRSS1);
    fOutput->Add(h_meff_MM_SRSS2);
    fOutput->Add(h_meff_MM_SRSS3);
    fOutput->Add(h_meff_MM_SRSS4);
    fOutput->Add(h_meff_EM_SRSS1);
    fOutput->Add(h_meff_EM_SRSS2);
    fOutput->Add(h_meff_EE_SROS1);
    fOutput->Add(h_meff_MM_SROS1);
    fOutput->Add(h_meff_EM_SROS1);
    
    
    fOutput->Add(h_mt2_EE_SRSS1);
    fOutput->Add(h_mt2_EE_SRSS2);
    fOutput->Add(h_mt2_MM_SRSS1);
    fOutput->Add(h_mt2_MM_SRSS2);  
    fOutput->Add(h_mt2_MM_SRSS3);
    fOutput->Add(h_mt2_MM_SRSS4);
    fOutput->Add(h_mt2_EM_SRSS1);
    fOutput->Add(h_mt2_EM_SRSS2);
    fOutput->Add(h_mt2_EE_SROS1);
    fOutput->Add(h_mt2_MM_SROS1);
    fOutput->Add(h_mt2_EM_SROS1);

    fOutput->Add(h_mjj_EE_SRSS1);
    fOutput->Add(h_mjj_EE_SRSS2);
    fOutput->Add(h_mjj_MM_SRSS1);  
    fOutput->Add(h_mjj_MM_SRSS2);
    fOutput->Add(h_mjj_MM_SRSS3);
    fOutput->Add(h_mjj_MM_SRSS4);
    fOutput->Add(h_mjj_EM_SRSS1);
    fOutput->Add(h_mjj_EM_SRSS2);
    fOutput->Add(h_mjj_EE_SROS1);
    fOutput->Add(h_mjj_MM_SROS1);
    fOutput->Add(h_mjj_EM_SROS1);
    
    fOutput->Add(h_DeltaPhiMETll_EE_SRSS1);
    fOutput->Add(h_DeltaPhiMETll_EE_SRSS2);
    fOutput->Add(h_DeltaPhiMETll_MM_SRSS1);  
    fOutput->Add(h_DeltaPhiMETll_MM_SRSS2);
    fOutput->Add(h_DeltaPhiMETll_MM_SRSS3);
    fOutput->Add(h_DeltaPhiMETll_MM_SRSS4);
    fOutput->Add(h_DeltaPhiMETll_EM_SRSS1);
    fOutput->Add(h_DeltaPhiMETll_EM_SRSS2);
    fOutput->Add(h_DeltaPhiMETll_EE_SROS1);
    fOutput->Add(h_DeltaPhiMETll_MM_SROS1);
    fOutput->Add(h_DeltaPhiMETll_EM_SROS1);
    
    fOutput->Add(h_DeltaPhill_EE_SRSS1);
    fOutput->Add(h_DeltaPhill_EE_SRSS2);
    fOutput->Add(h_DeltaPhill_MM_SRSS1);  
    fOutput->Add(h_DeltaPhill_MM_SRSS2);
    fOutput->Add(h_DeltaPhill_MM_SRSS3);
    fOutput->Add(h_DeltaPhill_MM_SRSS4);
    fOutput->Add(h_DeltaPhill_EM_SRSS1);
    fOutput->Add(h_DeltaPhill_EM_SRSS2);
    fOutput->Add(h_DeltaPhill_EE_SROS1);
    fOutput->Add(h_DeltaPhill_MM_SROS1);
    fOutput->Add(h_DeltaPhill_EM_SROS1);

    fOutput->Add(h_NBJets_EE_SRSS1);
    fOutput->Add(h_NBJets_EE_SRSS2);
    fOutput->Add(h_NBJets_MM_SRSS1);  
    fOutput->Add(h_NBJets_MM_SRSS2);
    fOutput->Add(h_NBJets_MM_SRSS3);
    fOutput->Add(h_NBJets_MM_SRSS4);
    fOutput->Add(h_NBJets_EM_SRSS1);
    fOutput->Add(h_NBJets_EM_SRSS2);
    fOutput->Add(h_NBJets_EE_SROS1);
    fOutput->Add(h_NBJets_MM_SROS1);
    fOutput->Add(h_NBJets_EM_SROS1);

    fOutput->Add(h_NCJets_EE_SRSS1);
    fOutput->Add(h_NCJets_EE_SRSS2);
    fOutput->Add(h_NCJets_MM_SRSS1);  
    fOutput->Add(h_NCJets_MM_SRSS2);
    fOutput->Add(h_NCJets_MM_SRSS3);
    fOutput->Add(h_NCJets_MM_SRSS4);
    fOutput->Add(h_NCJets_EM_SRSS1);
    fOutput->Add(h_NCJets_EM_SRSS2);
    fOutput->Add(h_NCJets_EE_SROS1);
    fOutput->Add(h_NCJets_MM_SROS1);
    fOutput->Add(h_NCJets_EM_SROS1);

    fOutput->Add(h_NFJets_EE_SRSS1);
    fOutput->Add(h_NFJets_EE_SRSS2);
    fOutput->Add(h_NFJets_MM_SRSS1);  
    fOutput->Add(h_NFJets_MM_SRSS2);
    fOutput->Add(h_NFJets_MM_SRSS3);
    fOutput->Add(h_NFJets_MM_SRSS4);
    fOutput->Add(h_NFJets_EM_SRSS1);
    fOutput->Add(h_NFJets_EM_SRSS2);
    fOutput->Add(h_NFJets_EE_SROS1);
    fOutput->Add(h_NFJets_MM_SROS1);
    fOutput->Add(h_NFJets_EM_SROS1);
    
    fOutput->Add(h_mZTT_mmc_EE_SRSS1);
    fOutput->Add(h_mZTT_mmc_EE_SRSS2);
    fOutput->Add(h_mZTT_mmc_MM_SRSS1);
    fOutput->Add(h_mZTT_mmc_MM_SRSS2);
    fOutput->Add(h_mZTT_mmc_MM_SRSS3);
    fOutput->Add(h_mZTT_mmc_MM_SRSS4);
    fOutput->Add(h_mZTT_mmc_EM_SRSS1);
    fOutput->Add(h_mZTT_mmc_EM_SRSS2);
    fOutput->Add(h_mZTT_mmc_EE_SROS1);
    fOutput->Add(h_mZTT_mmc_MM_SROS1);
    fOutput->Add(h_mZTT_mmc_EM_SROS1);
//     ---------------------------    
    fOutput->Add(h_mZTT_coll_EE_SRSS1);
    fOutput->Add(h_mZTT_coll_EE_SRSS2);
    fOutput->Add(h_mZTT_coll_MM_SRSS1);
    fOutput->Add(h_mZTT_coll_MM_SRSS2);
    fOutput->Add(h_mZTT_coll_MM_SRSS3);
    fOutput->Add(h_mZTT_coll_MM_SRSS4);    
    fOutput->Add(h_mZTT_coll_EM_SRSS1);   
    fOutput->Add(h_mZTT_coll_EM_SRSS2);   
    fOutput->Add(h_mZTT_coll_EE_SROS1);   
    fOutput->Add(h_mZTT_coll_MM_SROS1);   
    fOutput->Add(h_mZTT_coll_EM_SROS1);   
    
    /*--------------------------------------------------------------------------------*/ 
  fOutput->Add( h_DeltaPhijj_EE_SRSS1); 
  fOutput->Add( h_DeltaPhijj_EE_SRSS2); 
  fOutput->Add( h_DeltaPhijj_MM_SRSS1);   
  fOutput->Add( h_DeltaPhijj_MM_SRSS2); 
  fOutput->Add( h_DeltaPhijj_MM_SRSS3); 
  fOutput->Add( h_DeltaPhijj_MM_SRSS4); 
  fOutput->Add( h_DeltaPhijj_EM_SRSS1); 
  fOutput->Add( h_DeltaPhijj_EM_SRSS2); 
  fOutput->Add( h_DeltaPhijj_EE_SROS1); 
  fOutput->Add( h_DeltaPhijj_MM_SROS1); 
  fOutput->Add( h_DeltaPhijj_EM_SROS1); 
  
  /*--------------------------------------------------------------------------------*/ 
  fOutput->Add( h_pTjj_EE_SRSS1); 
  fOutput->Add( h_pTjj_EE_SRSS2); 
  fOutput->Add( h_pTjj_MM_SRSS1); 
  fOutput->Add( h_pTjj_MM_SRSS2); 
  fOutput->Add( h_pTjj_MM_SRSS3); 
  fOutput->Add( h_pTjj_MM_SRSS4); 
  fOutput->Add( h_pTjj_EM_SRSS1); 
  fOutput->Add( h_pTjj_EM_SRSS2); 
  fOutput->Add( h_pTjj_EE_SROS1); 
  fOutput->Add( h_pTjj_MM_SROS1); 
  fOutput->Add( h_pTjj_EM_SROS1); 

  /*----------------------------------------------------------------------------*/ 
  fOutput->Add( h_ptll_EE_SRSS1); 
  fOutput->Add( h_ptll_EE_SRSS2); 
  fOutput->Add( h_ptll_MM_SRSS1);   
  fOutput->Add( h_ptll_MM_SRSS2); 
  fOutput->Add( h_ptll_MM_SRSS3); 
  fOutput->Add( h_ptll_MM_SRSS4); 
  fOutput->Add( h_ptll_EM_SRSS1); 
  fOutput->Add( h_ptll_EM_SRSS2); 
  fOutput->Add( h_ptll_EE_SROS1); 
  fOutput->Add( h_ptll_MM_SROS1); 
  fOutput->Add( h_ptll_EM_SROS1); 
  
  /*--------------------------------------------------------------------------------*/ 
  fOutput->Add( h_DeltaPhiMETl0_EE_SRSS1); 
  fOutput->Add( h_DeltaPhiMETl0_EE_SRSS2); 
  fOutput->Add( h_DeltaPhiMETl0_MM_SRSS1);   
  fOutput->Add( h_DeltaPhiMETl0_MM_SRSS2); 
  fOutput->Add( h_DeltaPhiMETl0_MM_SRSS3); 
  fOutput->Add( h_DeltaPhiMETl0_MM_SRSS4); 
  fOutput->Add( h_DeltaPhiMETl0_EM_SRSS1); 
  fOutput->Add( h_DeltaPhiMETl0_EM_SRSS2); 
  fOutput->Add( h_DeltaPhiMETl0_EE_SROS1); 
  fOutput->Add( h_DeltaPhiMETl0_MM_SROS1); 
  fOutput->Add( h_DeltaPhiMETl0_EM_SROS1); 

  /*-------------------------------------------------------------------------------------*/ 
  fOutput->Add( h_DeltaPhiMETl1_EE_SRSS1); 
  fOutput->Add( h_DeltaPhiMETl1_EE_SRSS2); 
  fOutput->Add( h_DeltaPhiMETl1_MM_SRSS1);   
  fOutput->Add( h_DeltaPhiMETl1_MM_SRSS2); 
  fOutput->Add( h_DeltaPhiMETl1_MM_SRSS3); 
  fOutput->Add( h_DeltaPhiMETl1_MM_SRSS4); 
  fOutput->Add( h_DeltaPhiMETl1_EM_SRSS1); 
  fOutput->Add( h_DeltaPhiMETl1_EM_SRSS2); 
  fOutput->Add( h_DeltaPhiMETl1_EE_SROS1); 
  fOutput->Add( h_DeltaPhiMETl1_MM_SROS1); 
  fOutput->Add( h_DeltaPhiMETl1_EM_SROS1); 
  
    /*-----------------------------------------------------------------------------------*/ 
  fOutput->Add( h_DeltaPhiMETj0_EE_SRSS1); 
  fOutput->Add( h_DeltaPhiMETj0_EE_SRSS2); 
  fOutput->Add( h_DeltaPhiMETj0_MM_SRSS1);   
  fOutput->Add( h_DeltaPhiMETj0_MM_SRSS2); 
  fOutput->Add( h_DeltaPhiMETj0_MM_SRSS3); 
  fOutput->Add( h_DeltaPhiMETj0_MM_SRSS4); 
  fOutput->Add( h_DeltaPhiMETj0_EM_SRSS1); 
  fOutput->Add( h_DeltaPhiMETj0_EM_SRSS2); 
  fOutput->Add( h_DeltaPhiMETj0_EE_SROS1); 
  fOutput->Add( h_DeltaPhiMETj0_MM_SROS1); 
  fOutput->Add( h_DeltaPhiMETj0_EM_SROS1); 
  /*-------------------------------------------------------------------------------------*/ 
  fOutput->Add( h_DeltaPhiMETj1_EE_SRSS1); 
  fOutput->Add( h_DeltaPhiMETj1_EE_SRSS2); 
  fOutput->Add( h_DeltaPhiMETj1_MM_SRSS1);   
  fOutput->Add( h_DeltaPhiMETj1_MM_SRSS2); 
  fOutput->Add( h_DeltaPhiMETj1_MM_SRSS3); 
  fOutput->Add( h_DeltaPhiMETj1_MM_SRSS4); 
  fOutput->Add( h_DeltaPhiMETj1_EM_SRSS1); 
  fOutput->Add( h_DeltaPhiMETj1_EM_SRSS2); 
  fOutput->Add( h_DeltaPhiMETj1_EE_SROS1); 
  fOutput->Add( h_DeltaPhiMETj1_MM_SROS1); 
  fOutput->Add( h_DeltaPhiMETj1_EM_SROS1); 

  /*-------------------------------------------------------------------------------------*/ 
  fOutput->Add( h_DeltaPhiMETjj_EE_SRSS1); 
  fOutput->Add( h_DeltaPhiMETjj_EE_SRSS2); 
  fOutput->Add( h_DeltaPhiMETjj_MM_SRSS1);   
  fOutput->Add( h_DeltaPhiMETjj_MM_SRSS2); 
  fOutput->Add( h_DeltaPhiMETjj_MM_SRSS3); 
  fOutput->Add( h_DeltaPhiMETjj_MM_SRSS4); 
  fOutput->Add( h_DeltaPhiMETjj_EM_SRSS1); 
  fOutput->Add( h_DeltaPhiMETjj_EM_SRSS2); 
  fOutput->Add( h_DeltaPhiMETjj_EE_SROS1); 
  fOutput->Add( h_DeltaPhiMETjj_MM_SROS1); 
  fOutput->Add( h_DeltaPhiMETjj_EM_SROS1); 

    /*--------------------------------------------------------------------------------*/ 
  fOutput->Add( h_DeltaRjj_EE_SRSS1); 
  fOutput->Add( h_DeltaRjj_EE_SRSS2); 
  fOutput->Add( h_DeltaRjj_MM_SRSS1);   
  fOutput->Add( h_DeltaRjj_MM_SRSS2); 
  fOutput->Add( h_DeltaRjj_MM_SRSS3); 
  fOutput->Add( h_DeltaRjj_MM_SRSS4); 
  fOutput->Add( h_DeltaRjj_EM_SRSS1); 
  fOutput->Add( h_DeltaRjj_EM_SRSS2); 
  fOutput->Add( h_DeltaRjj_EE_SROS1); 
  fOutput->Add( h_DeltaRjj_MM_SROS1); 
  fOutput->Add( h_DeltaRjj_EM_SROS1); 

  /*--------------------------------------------------------------------------------*/ 
  fOutput->Add( h_etal0_EE_SRSS1); 
  fOutput->Add( h_etal0_EE_SRSS2); 
  fOutput->Add( h_etal0_MM_SRSS1);   
  fOutput->Add( h_etal0_MM_SRSS2); 
  fOutput->Add( h_etal0_MM_SRSS3); 
  fOutput->Add( h_etal0_MM_SRSS4); 
  fOutput->Add( h_etal0_EM_SRSS1); 
  fOutput->Add( h_etal0_EM_SRSS2); 
  fOutput->Add( h_etal0_EE_SROS1); 
  fOutput->Add( h_etal0_MM_SROS1); 
  fOutput->Add( h_etal0_EM_SROS1); 
    /*---------------------------------------------------------------------------*/ 
  fOutput->Add( h_etal1_EE_SRSS1); 
  fOutput->Add( h_etal1_EE_SRSS2); 
  fOutput->Add( h_etal1_MM_SRSS1);   
  fOutput->Add( h_etal1_MM_SRSS2); 
  fOutput->Add( h_etal1_MM_SRSS3); 
  fOutput->Add( h_etal1_MM_SRSS4); 
  fOutput->Add( h_etal1_EM_SRSS1); 
  fOutput->Add( h_etal1_EM_SRSS2); 
  fOutput->Add( h_etal1_EE_SROS1); 
  fOutput->Add( h_etal1_MM_SROS1); 
  fOutput->Add( h_etal1_EM_SROS1); 
    /*---------------------------------------------------------------------------*/ 
  fOutput->Add( h_etaj0_EE_SRSS1); 
  fOutput->Add( h_etaj0_EE_SRSS2); 
  fOutput->Add( h_etaj0_MM_SRSS1);   
  fOutput->Add( h_etaj0_MM_SRSS2); 
  fOutput->Add( h_etaj0_MM_SRSS3); 
  fOutput->Add( h_etaj0_MM_SRSS4); 
  fOutput->Add( h_etaj0_EM_SRSS1); 
  fOutput->Add( h_etaj0_EM_SRSS2); 
  fOutput->Add( h_etaj0_EE_SROS1); 
  fOutput->Add( h_etaj0_MM_SROS1); 
  fOutput->Add( h_etaj0_EM_SROS1); 
    /*---------------------------------------------------------------------------*/ 
  fOutput->Add( h_etaj1_EE_SRSS1); 
  fOutput->Add( h_etaj1_EE_SRSS2); 
  fOutput->Add( h_etaj1_MM_SRSS1);   
  fOutput->Add( h_etaj1_MM_SRSS2); 
  fOutput->Add( h_etaj1_MM_SRSS3); 
  fOutput->Add( h_etaj1_MM_SRSS4); 
  fOutput->Add( h_etaj1_EM_SRSS1); 
  fOutput->Add( h_etaj1_EM_SRSS2); 
  fOutput->Add( h_etaj1_EE_SROS1); 
  fOutput->Add( h_etaj1_MM_SROS1); 
  fOutput->Add( h_etaj1_EM_SROS1); 

  /*--------------------------------------------------------------------------------*/ 
  fOutput->Add( h_mTl0MET_EE_SRSS1); 
  fOutput->Add( h_mTl0MET_EE_SRSS2); 
  fOutput->Add( h_mTl0MET_MM_SRSS1);   
  fOutput->Add( h_mTl0MET_MM_SRSS2); 
  fOutput->Add( h_mTl0MET_MM_SRSS3); 
  fOutput->Add( h_mTl0MET_MM_SRSS4); 
  fOutput->Add( h_mTl0MET_EM_SRSS1); 
  fOutput->Add( h_mTl0MET_EM_SRSS2); 
  fOutput->Add( h_mTl0MET_EE_SROS1); 
  fOutput->Add( h_mTl0MET_MM_SROS1); 
  fOutput->Add( h_mTl0MET_EM_SROS1); 
  /*-------------------------------------------------------------------------------*/ 
  fOutput->Add( h_mTl1MET_EE_SRSS1); 
  fOutput->Add( h_mTl1MET_EE_SRSS2); 
  fOutput->Add( h_mTl1MET_MM_SRSS1);   
  fOutput->Add( h_mTl1MET_MM_SRSS2); 
  fOutput->Add( h_mTl1MET_MM_SRSS3); 
  fOutput->Add( h_mTl1MET_MM_SRSS4); 
  fOutput->Add( h_mTl1MET_EM_SRSS1); 
  fOutput->Add( h_mTl1MET_EM_SRSS2); 
  fOutput->Add( h_mTl1MET_EE_SROS1); 
  fOutput->Add( h_mTl1MET_MM_SROS1); 
  fOutput->Add( h_mTl1MET_EM_SROS1); 

      /*--------------------------------------------------------------------------------*/ 
  fOutput->Add( h_DeltaPhilljj_EE_SRSS1); 
  fOutput->Add( h_DeltaPhilljj_EE_SRSS2); 
  fOutput->Add( h_DeltaPhilljj_MM_SRSS1);   
  fOutput->Add( h_DeltaPhilljj_MM_SRSS2); 
  fOutput->Add( h_DeltaPhilljj_MM_SRSS3); 
  fOutput->Add( h_DeltaPhilljj_MM_SRSS4); 
  fOutput->Add( h_DeltaPhilljj_EM_SRSS1); 
  fOutput->Add( h_DeltaPhilljj_EM_SRSS2); 
  fOutput->Add( h_DeltaPhilljj_EE_SROS1); 
  fOutput->Add( h_DeltaPhilljj_MM_SROS1); 
  fOutput->Add( h_DeltaPhilljj_EM_SROS1); 
  /*------------------------------------------------------------------------------------*/ 
  fOutput->Add( h_DeltaPhil0jj_EE_SRSS1); 
  fOutput->Add( h_DeltaPhil0jj_EE_SRSS2); 
  fOutput->Add( h_DeltaPhil0jj_MM_SRSS1);   
  fOutput->Add( h_DeltaPhil0jj_MM_SRSS2); 
  fOutput->Add( h_DeltaPhil0jj_MM_SRSS3); 
  fOutput->Add( h_DeltaPhil0jj_MM_SRSS4); 
  fOutput->Add( h_DeltaPhil0jj_EM_SRSS1); 
  fOutput->Add( h_DeltaPhil0jj_EM_SRSS2); 
  fOutput->Add( h_DeltaPhil0jj_EE_SROS1); 
  fOutput->Add( h_DeltaPhil0jj_MM_SROS1); 
  fOutput->Add( h_DeltaPhil0jj_EM_SROS1); 
  /*------------------------------------------------------------------------------------*/ 
  fOutput->Add( h_DeltaPhil1jj_EE_SRSS1); 
  fOutput->Add( h_DeltaPhil1jj_EE_SRSS2); 
  fOutput->Add( h_DeltaPhil1jj_MM_SRSS1);   
  fOutput->Add( h_DeltaPhil1jj_MM_SRSS2); 
  fOutput->Add( h_DeltaPhil1jj_MM_SRSS3); 
  fOutput->Add( h_DeltaPhil1jj_MM_SRSS4); 
  fOutput->Add( h_DeltaPhil1jj_EM_SRSS1); 
  fOutput->Add( h_DeltaPhil1jj_EM_SRSS2); 
  fOutput->Add( h_DeltaPhil1jj_EE_SROS1); 
  fOutput->Add( h_DeltaPhil1jj_MM_SROS1); 
  fOutput->Add( h_DeltaPhil1jj_EM_SROS1); 

  /*--------------------------------------------------------------------------------*/ 
  fOutput->Add( h_DeltaRlljj_EE_SRSS1); 
  fOutput->Add( h_DeltaRlljj_EE_SRSS2); 
  fOutput->Add( h_DeltaRlljj_MM_SRSS1);   
  fOutput->Add( h_DeltaRlljj_MM_SRSS2); 
  fOutput->Add( h_DeltaRlljj_MM_SRSS3); 
  fOutput->Add( h_DeltaRlljj_MM_SRSS4); 
  fOutput->Add( h_DeltaRlljj_EM_SRSS1); 
  fOutput->Add( h_DeltaRlljj_EM_SRSS2); 
  fOutput->Add( h_DeltaRlljj_EE_SROS1); 
  fOutput->Add( h_DeltaRlljj_MM_SROS1); 
  fOutput->Add( h_DeltaRlljj_EM_SROS1); 

    /*--------------------------------------------------------------------------------*/   
  fOutput->Add( h_DeltaEtajj_EE_SRSS1); 
  fOutput->Add( h_DeltaEtajj_EE_SRSS2); 
  fOutput->Add( h_DeltaEtajj_MM_SRSS1);   
  fOutput->Add( h_DeltaEtajj_MM_SRSS2); 
  fOutput->Add( h_DeltaEtajj_MM_SRSS3); 
  fOutput->Add( h_DeltaEtajj_MM_SRSS4); 
  fOutput->Add( h_DeltaEtajj_EM_SRSS1); 
  fOutput->Add( h_DeltaEtajj_EM_SRSS2); 
  fOutput->Add( h_DeltaEtajj_EE_SROS1); 
  fOutput->Add( h_DeltaEtajj_MM_SROS1); 
  fOutput->Add( h_DeltaEtajj_EM_SROS1);   
  
      /*--------------------------------------------------------------------------------*/   
  fOutput->Add( h_DeltaEtall_EE_SRSS1); 
  fOutput->Add( h_DeltaEtall_EE_SRSS2); 
  fOutput->Add( h_DeltaEtall_MM_SRSS1);   
  fOutput->Add( h_DeltaEtall_MM_SRSS2); 
  fOutput->Add( h_DeltaEtall_MM_SRSS3); 
  fOutput->Add( h_DeltaEtall_MM_SRSS4); 
  fOutput->Add( h_DeltaEtall_EM_SRSS1); 
  fOutput->Add( h_DeltaEtall_EM_SRSS2); 
  fOutput->Add( h_DeltaEtall_EE_SROS1); 
  fOutput->Add( h_DeltaEtall_MM_SROS1); 
  fOutput->Add( h_DeltaEtall_EM_SROS1);   


  /*--------------------------------------------------------------------------------*/ 
  fOutput->Add( h_mTll_EE_SRSS1); 
  fOutput->Add( h_mTll_EE_SRSS2); 
  fOutput->Add( h_mTll_MM_SRSS1);   
  fOutput->Add( h_mTll_MM_SRSS2); 
  fOutput->Add( h_mTll_MM_SRSS3); 
  fOutput->Add( h_mTll_MM_SRSS4); 
  fOutput->Add( h_mTll_EM_SRSS1); 
  fOutput->Add( h_mTll_EM_SRSS2); 
  fOutput->Add( h_mTll_EE_SROS1); 
  fOutput->Add( h_mTll_MM_SROS1); 
  fOutput->Add( h_mTll_EM_SROS1); 


  /*--------------------------------------------------------------------------------*/ 
  fOutput->Add( h_mMETll_EE_SRSS1); 
  fOutput->Add( h_mMETll_EE_SRSS2); 
  fOutput->Add( h_mMETll_MM_SRSS1);   
  fOutput->Add( h_mMETll_MM_SRSS2); 
  fOutput->Add( h_mMETll_MM_SRSS3); 
  fOutput->Add( h_mMETll_MM_SRSS4); 
  fOutput->Add( h_mMETll_EM_SRSS1); 
  fOutput->Add( h_mMETll_EM_SRSS2); 
  fOutput->Add( h_mMETll_EE_SROS1); 
  fOutput->Add( h_mMETll_MM_SROS1); 
  fOutput->Add( h_mMETll_EM_SROS1); 

  /*--------------------------------------------------------------------------------*/ 
  fOutput->Add( h_DeltaYjj_EE_SRSS1); 
  fOutput->Add( h_DeltaYjj_EE_SRSS2); 
  fOutput->Add( h_DeltaYjj_MM_SRSS1);  
  fOutput->Add( h_DeltaYjj_MM_SRSS2); 
  fOutput->Add( h_DeltaYjj_MM_SRSS3); 
  fOutput->Add( h_DeltaYjj_MM_SRSS4); 
  fOutput->Add( h_DeltaYjj_EM_SRSS1); 
  fOutput->Add( h_DeltaYjj_EM_SRSS2); 
  fOutput->Add( h_DeltaYjj_EE_SROS1); 
  fOutput->Add( h_DeltaYjj_MM_SROS1); 
  fOutput->Add( h_DeltaYjj_EM_SROS1); 
  
  /*--------------------------------------------------------------------------------*/ 
  fOutput->Add( h_D0_recalc_l0_EE_SRSS1);
  fOutput->Add( h_D0_recalc_l0_EE_SRSS2);
  fOutput->Add( h_D0_recalc_l0_MM_SRSS1);  
  fOutput->Add( h_D0_recalc_l0_MM_SRSS2);
  fOutput->Add( h_D0_recalc_l0_MM_SRSS3);
  fOutput->Add( h_D0_recalc_l0_MM_SRSS4);
  fOutput->Add( h_D0_recalc_l0_EM_SRSS1);
  fOutput->Add( h_D0_recalc_l0_EM_SRSS2);
  fOutput->Add( h_D0_recalc_l0_EE_SROS1);
  fOutput->Add( h_D0_recalc_l0_MM_SROS1);
  fOutput->Add( h_D0_recalc_l0_EM_SROS1);

  /*--------------------------------------------------------------------------------*/ 
  fOutput->Add( h_D0_recalc_l1_EE_SRSS1);
  fOutput->Add( h_D0_recalc_l1_EE_SRSS2);
  fOutput->Add( h_D0_recalc_l1_MM_SRSS1);  
  fOutput->Add( h_D0_recalc_l1_MM_SRSS2);
  fOutput->Add( h_D0_recalc_l1_MM_SRSS3);
  fOutput->Add( h_D0_recalc_l1_MM_SRSS4);
  fOutput->Add( h_D0_recalc_l1_EM_SRSS1);
  fOutput->Add( h_D0_recalc_l1_EM_SRSS2);
  fOutput->Add( h_D0_recalc_l1_EE_SROS1);
  fOutput->Add( h_D0_recalc_l1_MM_SROS1);
  fOutput->Add( h_D0_recalc_l1_EM_SROS1);
  /*--------------------------------------------------------------------------------*/ 
  fOutput->Add( h_D0_branch_l0_EE_SRSS1);
  fOutput->Add( h_D0_branch_l0_EE_SRSS2);
  fOutput->Add( h_D0_branch_l0_MM_SRSS1);  
  fOutput->Add( h_D0_branch_l0_MM_SRSS2);
  fOutput->Add( h_D0_branch_l0_MM_SRSS3);
  fOutput->Add( h_D0_branch_l0_MM_SRSS4);
  fOutput->Add( h_D0_branch_l0_EM_SRSS1);
  fOutput->Add( h_D0_branch_l0_EM_SRSS2);
  fOutput->Add( h_D0_branch_l0_EE_SROS1);
  fOutput->Add( h_D0_branch_l0_MM_SROS1);
  fOutput->Add( h_D0_branch_l0_EM_SROS1);

  /*--------------------------------------------------------------------------------*/ 
  fOutput->Add( h_D0_branch_l1_EE_SRSS1);
  fOutput->Add( h_D0_branch_l1_EE_SRSS2);
  fOutput->Add( h_D0_branch_l1_MM_SRSS1);  
  fOutput->Add( h_D0_branch_l1_MM_SRSS2);
  fOutput->Add( h_D0_branch_l1_MM_SRSS3);
  fOutput->Add( h_D0_branch_l1_MM_SRSS4);
  fOutput->Add( h_D0_branch_l1_EM_SRSS1);
  fOutput->Add( h_D0_branch_l1_EM_SRSS2);
  fOutput->Add( h_D0_branch_l1_EE_SROS1);
  fOutput->Add( h_D0_branch_l1_MM_SROS1);
  fOutput->Add( h_D0_branch_l1_EM_SROS1);
  
  
  /*--------------------------------------------------------------------------------*/ 
  fOutput->Add( h_D0Signif_recalc_l0_EE_SRSS1);
  fOutput->Add( h_D0Signif_recalc_l0_EE_SRSS2);
  fOutput->Add( h_D0Signif_recalc_l0_MM_SRSS1);  
  fOutput->Add( h_D0Signif_recalc_l0_MM_SRSS2);
  fOutput->Add( h_D0Signif_recalc_l0_MM_SRSS3);
  fOutput->Add( h_D0Signif_recalc_l0_MM_SRSS4);
  fOutput->Add( h_D0Signif_recalc_l0_EM_SRSS1);
  fOutput->Add( h_D0Signif_recalc_l0_EM_SRSS2);
  fOutput->Add( h_D0Signif_recalc_l0_EE_SROS1);
  fOutput->Add( h_D0Signif_recalc_l0_MM_SROS1);
  fOutput->Add( h_D0Signif_recalc_l0_EM_SROS1);

  /*--------------------------------------------------------------------------------*/ 
  fOutput->Add( h_D0Signif_recalc_l1_EE_SRSS1);
  fOutput->Add( h_D0Signif_recalc_l1_EE_SRSS2);
  fOutput->Add( h_D0Signif_recalc_l1_MM_SRSS1);  
  fOutput->Add( h_D0Signif_recalc_l1_MM_SRSS2);
  fOutput->Add( h_D0Signif_recalc_l1_MM_SRSS3);
  fOutput->Add( h_D0Signif_recalc_l1_MM_SRSS4);
  fOutput->Add( h_D0Signif_recalc_l1_EM_SRSS1);
  fOutput->Add( h_D0Signif_recalc_l1_EM_SRSS2);
  fOutput->Add( h_D0Signif_recalc_l1_EE_SROS1);
  fOutput->Add( h_D0Signif_recalc_l1_MM_SROS1);
  fOutput->Add( h_D0Signif_recalc_l1_EM_SROS1);
  /*--------------------------------------------------------------------------------*/ 
  fOutput->Add( h_D0Signif_branch_l0_EE_SRSS1);
  fOutput->Add( h_D0Signif_branch_l0_EE_SRSS2);
  fOutput->Add( h_D0Signif_branch_l0_MM_SRSS1);  
  fOutput->Add( h_D0Signif_branch_l0_MM_SRSS2);
  fOutput->Add( h_D0Signif_branch_l0_MM_SRSS3);
  fOutput->Add( h_D0Signif_branch_l0_MM_SRSS4);
  fOutput->Add( h_D0Signif_branch_l0_EM_SRSS1);
  fOutput->Add( h_D0Signif_branch_l0_EM_SRSS2);
  fOutput->Add( h_D0Signif_branch_l0_EE_SROS1);
  fOutput->Add( h_D0Signif_branch_l0_MM_SROS1);
  fOutput->Add( h_D0Signif_branch_l0_EM_SROS1);

  /*--------------------------------------------------------------------------------*/ 
  fOutput->Add( h_D0Signif_branch_l1_EE_SRSS1);
  fOutput->Add( h_D0Signif_branch_l1_EE_SRSS2);
  fOutput->Add( h_D0Signif_branch_l1_MM_SRSS1);  
  fOutput->Add( h_D0Signif_branch_l1_MM_SRSS2);
  fOutput->Add( h_D0Signif_branch_l1_MM_SRSS3);
  fOutput->Add( h_D0Signif_branch_l1_MM_SRSS4);
  fOutput->Add( h_D0Signif_branch_l1_EM_SRSS1);
  fOutput->Add( h_D0Signif_branch_l1_EM_SRSS2);
  fOutput->Add( h_D0Signif_branch_l1_EE_SROS1);
  fOutput->Add( h_D0Signif_branch_l1_MM_SROS1);
  fOutput->Add( h_D0Signif_branch_l1_EM_SROS1);

  fOutput->Add( cutflow_EE);
  fOutput->Add( cutflow_EE_ALL);
  fOutput->Add( cutflow_MM);
  fOutput->Add( cutflow_MM_ALL);
  fOutput->Add( cutflow_EM);
  fOutput->Add( cutflow_EM_ALL);
  fOutput->Add( cutflow_ME);
  fOutput->Add( cutflow_ME_ALL);
  
  fOutput->Add( h_D0Signif_recalc_PR_EE);
  fOutput->Add( h_D0Signif_recalc_HF_EE);
  fOutput->Add( h_D0Signif_recalc_LF_EE);
  fOutput->Add( h_D0Signif_recalc_PR_MM);
  fOutput->Add( h_D0Signif_recalc_HF_MM);
  fOutput->Add( h_D0Signif_recalc_LF_MM);
  fOutput->Add( h_D0Signif_recalc_PR_EM);
  fOutput->Add( h_D0Signif_recalc_HF_EM);
  fOutput->Add( h_D0Signif_recalc_LF_EM);
  
  
  fOutput->Add( h_D0_recalc_PR_EE);
  fOutput->Add( h_D0_recalc_HF_EE);
  fOutput->Add( h_D0_recalc_LF_EE);
  fOutput->Add( h_D0_recalc_PR_MM);
  fOutput->Add( h_D0_recalc_HF_MM);
  fOutput->Add( h_D0_recalc_LF_MM);
  fOutput->Add( h_D0_recalc_PR_EM);
  fOutput->Add( h_D0_recalc_HF_EM);
  fOutput->Add( h_D0_recalc_LF_EM);
  
  return true;
    
}
void TSelector_SusyNtuple::calcJet_variables(TLorentzVector signalJet0_TLV, TLorentzVector signalJet1_TLV, TLorentzVector met_TLV){
  
  nSignalJets = numberOfCLJets(m_signalJets2Lep);
  TLorentzVector jet0_TLV, jet1_TLV;
  if(nSignalJets>0) jet0_TLV.SetPtEtaPhiE(m_signalJets2Lep.at(0)->pt, m_signalJets2Lep.at(0)->eta ,m_signalJets2Lep.at(0)->phi, m_signalJets2Lep.at(0)->pt*cosh(m_signalJets2Lep.at(0)->eta));
  if(nSignalJets>1) jet1_TLV.SetPtEtaPhiE(m_signalJets2Lep.at(1)->pt, m_signalJets2Lep.at(1)->eta ,m_signalJets2Lep.at(1)->phi, m_signalJets2Lep.at(1)->pt*cosh(m_signalJets2Lep.at(1)->eta));
  
  MET = met_TLV.Pt();
  
  pTj0 = (nSignalJets>0) ? jet0_TLV.Pt() : 0.;
  pTj1 = (nSignalJets>1) ? jet1_TLV.Pt() : 0.;
  eta_j0 = (nSignalJets>0) ? jet0_TLV.Eta() : 0.;
  eta_j1 = (nSignalJets>1) ? jet1_TLV.Eta() : 0.;
  mjj = (nSignalJets>1) ? (jet0_TLV + jet1_TLV).M() : 0.;
  DeltaPhijj = (nSignalJets>1) ? fabs(jet0_TLV.DeltaPhi(jet1_TLV)) : 0.;
  pTjj = (nSignalJets>1) ? (jet0_TLV + jet1_TLV).Pt() : 0.;
  DeltaPhiMETj0 = fabs(jet0_TLV.DeltaPhi(met_TLV));
  DeltaPhiMETj1 = (nSignalJets>1) ? fabs(jet1_TLV.DeltaPhi(met_TLV)) : 0.;
  DeltaRjj = (nSignalJets>1) ?  fabs(jet0_TLV.DeltaR(jet1_TLV)) : 0.;
  DeltaEtajj = (nSignalJets>1) ? fabs(jet0_TLV.Eta() - jet1_TLV.Eta()) : 0.;
  DeltaYjj = (nSignalJets>1) ? fabs(jet0_TLV.Rapidity() - jet1_TLV.Rapidity()) : 0.;
  DeltaPhiMETjj = (nSignalJets>1) ? fabs((jet0_TLV+ jet1_TLV).DeltaPhi(met_TLV)) : 0.;
  NBJets = numberOfCBJets(m_signalJets2Lep);
  NCJets = numberOfCLJets(m_signalJets2Lep);
  NFJets = numberOfFJets(m_signalJets2Lep);
  meff = calcMeff(met_TLV, m_signalJets2Lep);
    
}
void TSelector_SusyNtuple::calc_EE_variables(LeptonVector &leptons, Electron* el0, Electron* el1, TLorentzVector el0_TLV, TLorentzVector el1_TLV, TLorentzVector met_TLV, TLorentzVector signalJet0_TLV, TLorentzVector signalJet1_TLV, bool useForwardJets ){
  
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
  mTel0MET = calcMt(el0_TLV, met_TLV);
  mTel1MET = calcMt(el1_TLV, met_TLV);
  mMETee = (el0_TLV + el1_TLV + met_TLV).M();
  DeltaPhiEE = fabs(el0_TLV.DeltaPhi(el1_TLV));
  DeltaPhiMETel0 = fabs(el0_TLV.DeltaPhi(met_TLV));
  DeltaPhiMETel1 = fabs(el1_TLV.DeltaPhi(met_TLV));
  DeltaPhiMETee = fabs((el0_TLV + el1_TLV).DeltaPhi(met_TLV));
  DeltaPhieejj = (nSignalJets>1) ? fabs((el0_TLV + el1_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV)) : 0.;
  mt2_ee = calcMT2(met_TLV, el0_TLV, el1_TLV);
  
  DeltaPhieejj = (nSignalJets>1) ? (el0_TLV + el1_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV) : 0.;
  DeltaPhiel0jj = (nSignalJets>1) ? ((el0_TLV.Pt()> el1_TLV.Pt()) ? (el0_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV) : (el1_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV)) : 0.;
  DeltaPhiel1jj= (nSignalJets>1) ?  ((el0_TLV.Pt()< el1_TLV.Pt()) ? (el1_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV) : (el0_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV)) : 0.;
  DeltaReejj = (nSignalJets>1) ? (el0_TLV + el1_TLV).DeltaR(signalJet0_TLV + signalJet1_TLV) : 0.;
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
  
  if(nSignalJets>0){
    const Jet* closestJet_el0 = getClosestJet(leptons.at(0));	
    const Jet* closestJet_el1 = getClosestJet(leptons.at(1));
    D0_recalc_el0 = recalc_D0(unbiased, leptons.at(0), closestJet_el0);
    D0_recalc_el1 = recalc_D0(unbiased, leptons.at(1), closestJet_el1);
  }
  sD0Signif_branch_el0 = calc_D0(unbiased, leptons.at(0)) / D0err_branch_el0;
  sD0Signif_branch_el1 = calc_D0(unbiased, leptons.at(1)) / D0err_branch_el1;
//   cout << "sD0Signif_branch_el0= " << sD0Signif_branch_el0 << " sD0Signif_branch_el1= " << sD0Signif_branch_el1 << endl;
  sD0Signif_recalc_el0 = D0_recalc_el0 / D0err_branch_el0;
  sD0Signif_recalc_el1 = D0_recalc_el1 / D0err_branch_el1;
  
   mZTT_coll = calcMZTauTau_coll(el0_TLV, el1_TLV, met_TLV); 
}

void TSelector_SusyNtuple::calc_MM_variables(LeptonVector &leptons, Muon* mu0, Muon* mu1, TLorentzVector mu0_TLV, TLorentzVector mu1_TLV, TLorentzVector met_TLV, TLorentzVector signalJet0_TLV, TLorentzVector signalJet1_TLV, bool useForwardJets){
  
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
  mTmu0MET = calcMt(mu0_TLV, met_TLV);
  mTmu1MET = calcMt(mu1_TLV, met_TLV);
  mMETmm = (mu0_TLV + mu1_TLV + met_TLV).M();
  DeltaPhiMM = fabs(mu0_TLV.DeltaPhi(mu1_TLV));
  DeltaPhiMETmu0 = fabs(mu0_TLV.DeltaPhi(met_TLV));
  DeltaPhiMETmu1 = fabs(mu1_TLV.DeltaPhi(met_TLV));
  DeltaPhiMETmm = fabs((mu0_TLV + mu1_TLV).DeltaPhi(met_TLV));
  DeltaPhimmjj = (nSignalJets>1) ? fabs((mu0_TLV + mu1_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV)) : 0.;
  mt2_mm = calcMT2(met_TLV, mu0_TLV, mu1_TLV);
  
  DeltaPhimmjj = (nSignalJets>1) ?  (mu0_TLV + mu1_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV) : 0.;
  DeltaPhimu0jj = (nSignalJets>1) ?  ((mu0_TLV.Pt()> mu1_TLV.Pt()) ? (mu0_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV) : (mu1_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV)) : 0.;
  DeltaPhimu1jj= (nSignalJets>1) ?  ((mu0_TLV.Pt()< mu1_TLV.Pt()) ? (mu1_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV) : (mu0_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV)) : 0.;
  DeltaRmmjj = (nSignalJets>1) ?  (mu0_TLV + mu1_TLV).DeltaR(signalJet0_TLV + signalJet1_TLV) : 0.;
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
  
  if(nSignalJets>0){
    const Jet* closestJet_mu0 = getClosestJet(leptons.at(0));	
    const Jet* closestJet_mu1 = getClosestJet(leptons.at(1));
    D0_recalc_mu0 = recalc_D0(unbiased, leptons.at(0), closestJet_mu0);
    D0_recalc_mu1 = recalc_D0(unbiased, leptons.at(1), closestJet_mu1);
  }
  sD0Signif_branch_mu0 = calc_D0(unbiased, leptons.at(0)) / D0err_branch_mu0;
  sD0Signif_branch_mu1 = calc_D0(unbiased, leptons.at(1)) / D0err_branch_mu1;
  sD0Signif_recalc_mu0 = D0_recalc_mu0 / D0err_branch_mu0;
  sD0Signif_recalc_mu1 = D0_recalc_mu1 / D0err_branch_mu1;
  
  mZTT_coll = calcMZTauTau_coll(mu0_TLV, mu1_TLV, met_TLV); 
}

void TSelector_SusyNtuple::calc_EM_variables(LeptonVector &leptons, Electron* el, Muon* mu, TLorentzVector mu_TLV, TLorentzVector el_TLV, TLorentzVector met_TLV, TLorentzVector signalJet0_TLV, TLorentzVector signalJet1_TLV, bool useForwardJets){
  
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
  mTl0MET = (el_TLV.Pt() > mu_TLV.Pt()) ? calcMt(el_TLV, met_TLV) : calcMt(mu_TLV, met_TLV);
  mTl1MET = (el_TLV.Pt() > mu_TLV.Pt()) ? calcMt(mu_TLV, met_TLV) : calcMt(el_TLV, met_TLV);
  mMETem = (mu_TLV + el_TLV + met_TLV).M();
  DeltaPhiem = fabs(mu_TLV.DeltaPhi(el_TLV));
  DeltaPhiMETl0 = (el_TLV.Pt() > mu_TLV.Pt()) ? fabs(el_TLV.DeltaPhi(met_TLV)) : fabs(mu_TLV.DeltaPhi(met_TLV));
  DeltaPhiMETl1 = (el_TLV.Pt() > mu_TLV.Pt()) ? fabs(mu_TLV.DeltaPhi(met_TLV)) : fabs(el_TLV.DeltaPhi(met_TLV));
  DeltaPhiMETem = fabs((mu_TLV + el_TLV).DeltaPhi(met_TLV));
  DeltaPhiemjj = (nSignalJets>1) ? fabs((el_TLV + mu_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV)) : 0.;
  mt2_em = calcMT2(met_TLV, el_TLV, mu_TLV);
  
  DeltaPhiemjj = (nSignalJets>1) ? (mu_TLV + el_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV) : 0.;
  DeltaPhil0jj = (nSignalJets>1) ? ((mu_TLV.Pt()> el_TLV.Pt()) ? (mu_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV) : (el_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV)) : 0.;
  DeltaPhil1jj = (nSignalJets>1) ? ((mu_TLV.Pt()< el_TLV.Pt()) ? (el_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV) : (mu_TLV).DeltaPhi(signalJet0_TLV + signalJet1_TLV)) : 0.;
  DeltaRemjj = (nSignalJets>1) ? (mu_TLV + el_TLV).DeltaR(signalJet0_TLV + signalJet1_TLV) : 0.;
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
  
  if(nSignalJets>0){
    const Jet* closestJet_l0 = getClosestJet(leptons.at(0));	
    const Jet* closestJet_l1 = getClosestJet(leptons.at(1));
    D0_recalc_l0 = recalc_D0(unbiased, leptons.at(0), closestJet_l0);
    D0_recalc_l1 = recalc_D0(unbiased, leptons.at(1), closestJet_l1);
  }
  sD0Signif_branch_l0 = calc_D0(unbiased, leptons.at(0)) / D0err_branch_l0;
  sD0Signif_branch_l1 = calc_D0(unbiased, leptons.at(1)) / D0err_branch_l1;
  sD0Signif_recalc_l0 = D0_recalc_l0 / D0err_branch_l0;
  sD0Signif_recalc_l1 = D0_recalc_l1 / D0err_branch_l1;
  
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
  h_meff_EE_SRSS1->Fill(meff, cut_EE, weight_ALL_EE); 
  h_mt2_EE_SRSS1->Fill(mt2_ee, cut_EE, weight_ALL_EE); 
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
  
  h_D0_recalc_l0_EE_SRSS1->Fill(D0_recalc_el0, cut_EE, weight_ALL_EE);  
  h_D0_recalc_l1_EE_SRSS1->Fill(D0_recalc_el1, cut_EE, weight_ALL_EE);  
  h_D0_branch_l0_EE_SRSS1->Fill(D0_branch_el0, cut_EE, weight_ALL_EE);  
  h_D0_branch_l1_EE_SRSS1->Fill(D0_branch_el1, cut_EE, weight_ALL_EE);  
  h_D0Signif_recalc_l0_EE_SRSS1->Fill(sD0Signif_recalc_el0, cut_EE, weight_ALL_EE);  
  h_D0Signif_recalc_l1_EE_SRSS1->Fill(sD0Signif_recalc_el1, cut_EE, weight_ALL_EE);  
  h_D0Signif_branch_l0_EE_SRSS1->Fill(sD0Signif_branch_el0, cut_EE, weight_ALL_EE);  
  h_D0Signif_branch_l1_EE_SRSS1->Fill(sD0Signif_branch_el1, cut_EE, weight_ALL_EE);  



  
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
  h_meff_EE_SRSS2->Fill(meff, cut_EE, weight_ALL_EE); 
  h_mt2_EE_SRSS2->Fill(mt2_ee, cut_EE, weight_ALL_EE); 
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

  h_D0_recalc_l0_EE_SRSS2->Fill(D0_recalc_el0, cut_EE, weight_ALL_EE);  
  h_D0_recalc_l1_EE_SRSS2->Fill(D0_recalc_el1, cut_EE, weight_ALL_EE);  
  h_D0_branch_l0_EE_SRSS2->Fill(D0_branch_el0, cut_EE, weight_ALL_EE);  
  h_D0_branch_l1_EE_SRSS2->Fill(D0_branch_el1, cut_EE, weight_ALL_EE);  
  h_D0Signif_recalc_l0_EE_SRSS2->Fill(sD0Signif_recalc_el0, cut_EE, weight_ALL_EE);  
  h_D0Signif_recalc_l1_EE_SRSS2->Fill(sD0Signif_recalc_el1, cut_EE, weight_ALL_EE);  
  h_D0Signif_branch_l0_EE_SRSS2->Fill(sD0Signif_branch_el0, cut_EE, weight_ALL_EE);  
  h_D0Signif_branch_l1_EE_SRSS2->Fill(sD0Signif_branch_el1, cut_EE, weight_ALL_EE);  


  
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
  h_meff_EE_SROS1->Fill(meff, cut_EE, weight_ALL_EE); 
  h_mt2_EE_SROS1->Fill(mt2_ee, cut_EE, weight_ALL_EE); 
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

  h_D0_recalc_l0_EE_SROS1->Fill(D0_recalc_el0, cut_EE, weight_ALL_EE);  
  h_D0_recalc_l1_EE_SROS1->Fill(D0_recalc_el1, cut_EE, weight_ALL_EE);  
  h_D0_branch_l0_EE_SROS1->Fill(D0_branch_el0, cut_EE, weight_ALL_EE);  
  h_D0_branch_l1_EE_SROS1->Fill(D0_branch_el1, cut_EE, weight_ALL_EE);  
  h_D0Signif_recalc_l0_EE_SROS1->Fill(sD0Signif_recalc_el0, cut_EE, weight_ALL_EE);  
  h_D0Signif_recalc_l1_EE_SROS1->Fill(sD0Signif_recalc_el1, cut_EE, weight_ALL_EE);  
  h_D0Signif_branch_l0_EE_SROS1->Fill(sD0Signif_branch_el0, cut_EE, weight_ALL_EE);  
  h_D0Signif_branch_l1_EE_SROS1->Fill(sD0Signif_branch_el1, cut_EE, weight_ALL_EE);  
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
  h_meff_MM_SRSS1->Fill(meff, cut_MM, weight_ALL_MM); 
  h_mt2_MM_SRSS1->Fill(mt2_mm, cut_MM, weight_ALL_MM); 
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

  h_D0_recalc_l0_MM_SRSS1->Fill(D0_recalc_mu0, cut_MM, weight_ALL_MM);  
  h_D0_recalc_l1_MM_SRSS1->Fill(D0_recalc_mu1, cut_MM, weight_ALL_MM);  
  h_D0_branch_l0_MM_SRSS1->Fill(D0_branch_mu0, cut_MM, weight_ALL_MM);  
  h_D0_branch_l1_MM_SRSS1->Fill(D0_branch_mu1, cut_MM, weight_ALL_MM);  
  h_D0Signif_recalc_l0_MM_SRSS1->Fill(sD0Signif_recalc_mu0, cut_MM, weight_ALL_MM);  
  h_D0Signif_recalc_l1_MM_SRSS1->Fill(sD0Signif_recalc_mu1, cut_MM, weight_ALL_MM);  
  h_D0Signif_branch_l0_MM_SRSS1->Fill(sD0Signif_branch_mu0, cut_MM, weight_ALL_MM);  
  h_D0Signif_branch_l1_MM_SRSS1->Fill(sD0Signif_branch_mu1, cut_MM, weight_ALL_MM);  

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
  h_meff_MM_SRSS2->Fill(meff, cut_MM, weight_ALL_MM); 
  h_mt2_MM_SRSS2->Fill(mt2_mm, cut_MM, weight_ALL_MM); 
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

  h_D0_recalc_l0_MM_SRSS2->Fill(D0_recalc_mu0, cut_MM, weight_ALL_MM);  
  h_D0_recalc_l1_MM_SRSS2->Fill(D0_recalc_mu1, cut_MM, weight_ALL_MM);  
  h_D0_branch_l0_MM_SRSS2->Fill(D0_branch_mu0, cut_MM, weight_ALL_MM);  
  h_D0_branch_l1_MM_SRSS2->Fill(D0_branch_mu1, cut_MM, weight_ALL_MM);  
  h_D0Signif_recalc_l0_MM_SRSS2->Fill(sD0Signif_recalc_mu0, cut_MM, weight_ALL_MM);  
  h_D0Signif_recalc_l1_MM_SRSS2->Fill(sD0Signif_recalc_mu1, cut_MM, weight_ALL_MM);  
  h_D0Signif_branch_l0_MM_SRSS2->Fill(sD0Signif_branch_mu0, cut_MM, weight_ALL_MM);  
  h_D0Signif_branch_l1_MM_SRSS2->Fill(sD0Signif_branch_mu1, cut_MM, weight_ALL_MM);  

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
  h_meff_MM_SRSS3->Fill(meff, cut_MM, weight_ALL_MM); 
  h_mt2_MM_SRSS3->Fill(mt2_mm, cut_MM, weight_ALL_MM); 
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

  h_D0_recalc_l0_MM_SRSS3->Fill(D0_recalc_mu0, cut_MM, weight_ALL_MM);  
  h_D0_recalc_l1_MM_SRSS3->Fill(D0_recalc_mu1, cut_MM, weight_ALL_MM);  
  h_D0_branch_l0_MM_SRSS3->Fill(D0_branch_mu0, cut_MM, weight_ALL_MM);  
  h_D0_branch_l1_MM_SRSS3->Fill(D0_branch_mu1, cut_MM, weight_ALL_MM);  
  h_D0Signif_recalc_l0_MM_SRSS3->Fill(sD0Signif_recalc_mu0, cut_MM, weight_ALL_MM);  
  h_D0Signif_recalc_l1_MM_SRSS3->Fill(sD0Signif_recalc_mu1, cut_MM, weight_ALL_MM);  
  h_D0Signif_branch_l0_MM_SRSS3->Fill(sD0Signif_branch_mu0, cut_MM, weight_ALL_MM);  
  h_D0Signif_branch_l1_MM_SRSS3->Fill(sD0Signif_branch_mu1, cut_MM, weight_ALL_MM);  

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
  h_meff_MM_SRSS4->Fill(meff, cut_MM, weight_ALL_MM); 
  h_mt2_MM_SRSS4->Fill(mt2_mm, cut_MM, weight_ALL_MM); 
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

  h_D0_recalc_l0_MM_SRSS4->Fill(D0_recalc_mu0, cut_MM, weight_ALL_MM);  
  h_D0_recalc_l1_MM_SRSS4->Fill(D0_recalc_mu1, cut_MM, weight_ALL_MM);  
  h_D0_branch_l0_MM_SRSS4->Fill(D0_branch_mu0, cut_MM, weight_ALL_MM);  
  h_D0_branch_l1_MM_SRSS4->Fill(D0_branch_mu1, cut_MM, weight_ALL_MM);  
  h_D0Signif_recalc_l0_MM_SRSS4->Fill(sD0Signif_recalc_mu0, cut_MM, weight_ALL_MM);  
  h_D0Signif_recalc_l1_MM_SRSS4->Fill(sD0Signif_recalc_mu1, cut_MM, weight_ALL_MM);  
  h_D0Signif_branch_l0_MM_SRSS4->Fill(sD0Signif_branch_mu0, cut_MM, weight_ALL_MM);  
  h_D0Signif_branch_l1_MM_SRSS4->Fill(sD0Signif_branch_mu1, cut_MM, weight_ALL_MM);  
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
  h_meff_MM_SROS1->Fill(meff, cut_MM, weight_ALL_MM); 
  h_mt2_MM_SROS1->Fill(mt2_mm, cut_MM, weight_ALL_MM); 
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

  h_D0_recalc_l0_MM_SROS1->Fill(D0_recalc_mu0, cut_MM, weight_ALL_MM);  
  h_D0_recalc_l1_MM_SROS1->Fill(D0_recalc_mu1, cut_MM, weight_ALL_MM);  
  h_D0_branch_l0_MM_SROS1->Fill(D0_branch_mu0, cut_MM, weight_ALL_MM);  
  h_D0_branch_l1_MM_SROS1->Fill(D0_branch_mu1, cut_MM, weight_ALL_MM);  
  h_D0Signif_recalc_l0_MM_SROS1->Fill(sD0Signif_recalc_mu0, cut_MM, weight_ALL_MM);  
  h_D0Signif_recalc_l1_MM_SROS1->Fill(sD0Signif_recalc_mu1, cut_MM, weight_ALL_MM);  
  h_D0Signif_branch_l0_MM_SROS1->Fill(sD0Signif_branch_mu0, cut_MM, weight_ALL_MM);  
  h_D0Signif_branch_l1_MM_SROS1->Fill(sD0Signif_branch_mu1, cut_MM, weight_ALL_MM);  

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
  h_meff_EM_SRSS1->Fill(meff, cut_EM, weight_ALL_EM); 
  h_mt2_EM_SRSS1->Fill(mt2_em, cut_EM, weight_ALL_EM); 
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

  h_D0_recalc_l0_EM_SRSS1->Fill(D0_recalc_l0, cut_EM, weight_ALL_EM);  
  h_D0_recalc_l1_EM_SRSS1->Fill(D0_recalc_l1, cut_EM, weight_ALL_EM);  
  h_D0_branch_l0_EM_SRSS1->Fill(D0_branch_l0, cut_EM, weight_ALL_EM);  
  h_D0_branch_l1_EM_SRSS1->Fill(D0_branch_l1, cut_EM, weight_ALL_EM);  
  h_D0Signif_recalc_l0_EM_SRSS1->Fill(sD0Signif_recalc_l0, cut_EM, weight_ALL_EM);  
  h_D0Signif_recalc_l1_EM_SRSS1->Fill(sD0Signif_recalc_l1, cut_EM, weight_ALL_EM);  
  h_D0Signif_branch_l0_EM_SRSS1->Fill(sD0Signif_branch_l0, cut_EM, weight_ALL_EM);  
  h_D0Signif_branch_l1_EM_SRSS1->Fill(sD0Signif_branch_l1, cut_EM, weight_ALL_EM);  


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
  h_meff_EM_SRSS2->Fill(meff, cut_EM, weight_ALL_EM); 
  h_mt2_EM_SRSS2->Fill(mt2_em, cut_EM, weight_ALL_EM); 
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

  h_D0_recalc_l0_EM_SRSS2->Fill(D0_recalc_l0, cut_EM, weight_ALL_EM);  
  h_D0_recalc_l1_EM_SRSS2->Fill(D0_recalc_l1, cut_EM, weight_ALL_EM);  
  h_D0_branch_l0_EM_SRSS2->Fill(D0_branch_l0, cut_EM, weight_ALL_EM);  
  h_D0_branch_l1_EM_SRSS2->Fill(D0_branch_l1, cut_EM, weight_ALL_EM);  
  h_D0Signif_recalc_l0_EM_SRSS2->Fill(sD0Signif_recalc_l0, cut_EM, weight_ALL_EM);  
  h_D0Signif_recalc_l1_EM_SRSS2->Fill(sD0Signif_recalc_l1, cut_EM, weight_ALL_EM);  
  h_D0Signif_branch_l0_EM_SRSS2->Fill(sD0Signif_branch_l0, cut_EM, weight_ALL_EM);  
  h_D0Signif_branch_l1_EM_SRSS2->Fill(sD0Signif_branch_l1, cut_EM, weight_ALL_EM);  
  
  


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
  h_meff_EM_SROS1->Fill(meff, cut_EM, weight_ALL_EM); 
  h_mt2_EM_SROS1->Fill(mt2_em, cut_EM, weight_ALL_EM); 
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

  h_D0_recalc_l0_EM_SROS1->Fill(D0_recalc_l0, cut_EM, weight_ALL_EM);  
  h_D0_recalc_l1_EM_SROS1->Fill(D0_recalc_l1, cut_EM, weight_ALL_EM);  
  h_D0_branch_l0_EM_SROS1->Fill(D0_branch_l0, cut_EM, weight_ALL_EM);  
  h_D0_branch_l1_EM_SROS1->Fill(D0_branch_l1, cut_EM, weight_ALL_EM);  
  h_D0Signif_recalc_l0_EM_SROS1->Fill(sD0Signif_recalc_l0, cut_EM, weight_ALL_EM);  
  h_D0Signif_recalc_l1_EM_SROS1->Fill(sD0Signif_recalc_l1, cut_EM, weight_ALL_EM);  
  h_D0Signif_branch_l0_EM_SROS1->Fill(sD0Signif_branch_l0, cut_EM, weight_ALL_EM);  
  h_D0Signif_branch_l1_EM_SROS1->Fill(sD0Signif_branch_l1, cut_EM, weight_ALL_EM);  
}