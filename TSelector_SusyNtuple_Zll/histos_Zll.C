bool TSelector_SusyNtuple_Zll::defineHistos(){

    cutflow_EE = new TH1F("cutflow_EE", "cutflow_EE", 80, 0, 79);
    cutflow_EE_MCWeight = new TH1F("cutflow_EE_MCWeight", "cutflow_EE_MCWeight", 80, 0, 79);
    
    cutflow_MM = new TH1F("cutflow_MM", "cutflow_MM", 80, 0, 79);
    cutflow_MM_MCWeight = new TH1F("cutflow_MM_MCWeight", "cutflow_MM_MCWeight", 80, 0, 79);
    
    cutflow_EM = new TH1F("cutflow_EM", "cutflow_EM", 80, 0, 79);
    cutflow_EM_MCWeight = new TH1F("cutflow_EM_MCWeight", "cutflow_EM_MCWeight", 80, 0, 79);

    cutflow_ME = new TH1F("cutflow_ME", "cutflow_ME", 80, 0, 79);
    cutflow_ME_MCWeight = new TH1F("cutflow_ME_MCWeight", "cutflow_ME_MCWeight", 80, 0, 79);
    
    
    Double_t bins_sumet[] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1200, 1400, 1600, 1800, 2000};
    int binnum = 23;
    
    h_metxy_sumet_0j_EE = new TH2F("h_metxy_sumet_0j_EE", "h_metxy_sumet_0j_EE", binnum, bins_sumet, 200, -100, 100);
    h_metx_sumet_0j_EE = new TH2F("h_metx_sumet_0j_EE", "h_metx_sumet_0j_EE", binnum, bins_sumet, 200, -100, 100);
    h_mety_sumet_0j_EE = new TH2F("h_mety_sumet_0j_EE", "h_mety_sumet_0j_EE", binnum, bins_sumet, 200, -100, 100);
    h_ptel0_0j = new TH1F("h_ptel0_0j", "h_ptel0_0j", 500, 0, 500);
    h_ptel1_0j = new TH1F("h_ptel1_0j", "h_ptel1_0j", 500, 0, 500);
    h_mee_0j = new TH1F("h_mee_0j", "h_mee_0j", 500, 0, 500);
    

    h_metxy_sumet_1j_EE = new TH2F("h_metxy_sumet_1j_EE", "h_metxy_sumet_1j_EE", binnum, bins_sumet, 200, -100, 100);
    h_metx_sumet_1j_EE = new TH2F("h_metx_sumet_1j_EE", "h_metx_sumet_1j_EE", binnum, bins_sumet, 200, -100, 100);
    h_mety_sumet_1j_EE = new TH2F("h_mety_sumet_1j_EE", "h_mety_sumet_1j_EE", binnum, bins_sumet, 200, -100, 100);
    h_ptel0_1j = new TH1F("h_ptel0_1j", "h_ptel0_1j", 500, 0, 500);
    h_ptel1_1j = new TH1F("h_ptel1_1j", "h_ptel1_1j", 500, 0, 500);
    h_mee_1j = new TH1F("h_mee_1j", "h_mee_1j", 500, 0, 500);

    h_metxy_sumet_2j_EE = new TH2F("h_metxy_sumet_2j_EE", "h_metxy_sumet_2j_EE", binnum, bins_sumet, 200, -100, 100);
    h_metx_sumet_2j_EE = new TH2F("h_metx_sumet_2j_EE", "h_metx_sumet_2j_EE", binnum, bins_sumet, 200, -100, 100);
    h_mety_sumet_2j_EE = new TH2F("h_mety_sumet_2j_EE", "h_mety_sumet_2j_EE", binnum, bins_sumet, 200, -100, 100);
    h_ptel0_2j = new TH1F("h_ptel0_2j", "h_ptel0_2j", 500, 0, 500);
    h_ptel1_2j = new TH1F("h_ptel1_2j", "h_ptel1_2j", 500, 0, 500);
    h_mee_2j = new TH1F("h_mee_2j", "h_mee_2j", 500, 0, 500);

    h_metxy_sumet_3j_EE = new TH2F("h_metxy_sumet_3j_EE", "h_metxy_sumet_3j_EE", binnum, bins_sumet, 200, -100, 100);
    h_metx_sumet_3j_EE = new TH2F("h_metx_sumet_3j_EE", "h_metx_sumet_3j_EE", binnum, bins_sumet, 200, -100, 100);
    h_mety_sumet_3j_EE = new TH2F("h_mety_sumet_3j_EE", "h_mety_sumet_3j_EE", binnum, bins_sumet, 200, -100, 100);
    h_ptel0_3j = new TH1F("h_ptel0_3j", "h_ptel0_3j", 500, 0, 500);
    h_ptel1_3j = new TH1F("h_ptel1_3j", "h_ptel1_3j", 500, 0, 500);
    h_mee_3j = new TH1F("h_mee_3j", "h_mee_3j", 500, 0, 500);
    
    h_metxy_sumet_0j_MM = new TH2F("h_metxy_sumet_0j_MM", "h_metxy_sumet_0j_MM", binnum, bins_sumet, 200, -100, 100);
    h_metx_sumet_0j_MM = new TH2F("h_metx_sumet_0j_MM", "h_metx_sumet_0j_MM", binnum, bins_sumet, 200, -100, 100);
    h_mety_sumet_0j_MM = new TH2F("h_mety_sumet_0j_MM", "h_mety_sumet_0j_MM", binnum, bins_sumet, 200, -100, 100);
    h_ptmu0_0j = new TH1F("h_ptmu0_0j", "h_ptmu0_0j", 500, 0, 500);
    h_ptmu1_0j = new TH1F("h_ptmu1_0j", "h_ptmu1_0j", 500, 0, 500);
    h_mmm_0j = new TH1F("h_mmm_0j", "h_mmm_0j", 500, 0, 500);
    

    h_metxy_sumet_1j_MM = new TH2F("h_metxy_sumet_1j_MM", "h_metxy_sumet_1j_MM", binnum, bins_sumet, 200, -100, 100);
    h_metx_sumet_1j_MM = new TH2F("h_metx_sumet_1j_MM", "h_metx_sumet_1j_MM", binnum, bins_sumet, 200, -100, 100);
    h_mety_sumet_1j_MM = new TH2F("h_mety_sumet_1j_MM", "h_mety_sumet_1j_MM", binnum, bins_sumet, 200, -100, 100);
    h_ptmu0_1j = new TH1F("h_ptmu0_1j", "h_ptmu0_1j", 500, 0, 500);
    h_ptmu1_1j = new TH1F("h_ptmu1_1j", "h_ptmu1_1j", 500, 0, 500);
    h_mmm_1j = new TH1F("h_mmm_1j", "h_mmm_1j", 500, 0, 500);

    h_metxy_sumet_2j_MM = new TH2F("h_metxy_sumet_2j_MM", "h_metxy_sumet_2j_MM", binnum, bins_sumet, 200, -100, 100);
    h_metx_sumet_2j_MM = new TH2F("h_metx_sumet_2j_MM", "h_metx_sumet_2j_MM", binnum, bins_sumet, 200, -100, 100);
    h_mety_sumet_2j_MM = new TH2F("h_mety_sumet_2j_MM", "h_mety_sumet_2j_MM", binnum, bins_sumet, 200, -100, 100);
    h_ptmu0_2j = new TH1F("h_ptmu0_2j", "h_ptmu0_2j", 500, 0, 500);
    h_ptmu1_2j = new TH1F("h_ptmu1_2j", "h_ptmu1_2j", 500, 0, 500);
    h_mmm_2j = new TH1F("h_mmm_2j", "h_mmm_2j", 500, 0, 500);

    h_metxy_sumet_3j_MM = new TH2F("h_metxy_sumet_3j_MM", "h_metxy_sumet_3j_MM", binnum, bins_sumet, 200, -100, 100);
    h_metx_sumet_3j_MM = new TH2F("h_metx_sumet_3j_MM", "h_metx_sumet_3j_MM", binnum, bins_sumet, 200, -100, 100);
    h_mety_sumet_3j_MM = new TH2F("h_mety_sumet_3j_MM", "h_mety_sumet_3j_MM", binnum, bins_sumet, 200, -100, 100);
    h_ptmu0_3j = new TH1F("h_ptmu0_3j", "h_ptmu0_3j", 500, 0, 500);
    h_ptmu1_3j = new TH1F("h_ptmu1_3j", "h_ptmu1_3j", 500, 0, 500);
    h_mmm_3j = new TH1F("h_mmm_3j", "h_mmm_3j", 500, 0, 500);
    
    
    
  
  return true;

}


bool TSelector_SusyNtuple_Zll::writeHistos(){
  
    cutflow_EE->Write();
    cutflow_EE_MCWeight->Write();
    
    cutflow_MM->Write();
    cutflow_MM_MCWeight->Write();
    
    cutflow_EM->Write();
    cutflow_EM_MCWeight->Write();

    cutflow_ME->Write();
    cutflow_ME_MCWeight->Write();
    
    
    h_metxy_sumet_0j_EE->Write();
    h_metx_sumet_0j_EE->Write();
    h_mety_sumet_0j_EE->Write();
    h_ptel0_0j->Write();
    h_ptel1_0j->Write();
    h_mee_0j->Write();
    

    h_metxy_sumet_1j_EE->Write();
    h_metx_sumet_1j_EE->Write();
    h_mety_sumet_1j_EE->Write();
    h_ptel0_1j->Write();
    h_ptel1_1j->Write();
    h_mee_1j->Write();

    h_metxy_sumet_2j_EE->Write();
    h_metx_sumet_2j_EE->Write(); 
    h_mety_sumet_2j_EE->Write();
    h_ptel0_2j->Write();
    h_ptel1_2j->Write();
    h_mee_2j->Write();

    h_metxy_sumet_3j_EE->Write();
    h_metx_sumet_3j_EE->Write(); 
    h_mety_sumet_3j_EE->Write(); 
    h_ptel0_3j->Write();
    h_ptel1_3j->Write();
    h_mee_3j->Write();
    
    h_metxy_sumet_0j_MM->Write();
    h_metx_sumet_0j_MM->Write();
    h_mety_sumet_0j_MM->Write();
    h_ptmu0_0j->Write();
    h_ptmu1_0j->Write();
    h_mmm_0j->Write();
    

    h_metxy_sumet_1j_MM->Write();
    h_metx_sumet_1j_MM->Write();
    h_mety_sumet_1j_MM->Write();
    h_ptmu0_1j->Write();
    h_ptmu1_1j->Write();
    h_mmm_1j->Write();

    h_metxy_sumet_2j_MM->Write();
    h_metx_sumet_2j_MM->Write(); 
    h_mety_sumet_2j_MM->Write();
    h_ptmu0_2j->Write();
    h_ptmu1_2j->Write();
    h_mmm_2j->Write();

    h_metxy_sumet_3j_MM->Write();
    h_metx_sumet_3j_MM->Write(); 
    h_mety_sumet_3j_MM->Write(); 
    h_ptmu0_3j->Write();
    h_ptmu1_3j->Write();
    h_mmm_3j->Write();
    
    
    return true;
}

bool TSelector_SusyNtuple_Zll::addHistos(){
  
    fOutput->Add( cutflow_EE);
    fOutput->Add( cutflow_EE_MCWeight);
    
    fOutput->Add( cutflow_MM);
    fOutput->Add( cutflow_MM_MCWeight);
    
    fOutput->Add( cutflow_EM);
    fOutput->Add( cutflow_EM_MCWeight);

    fOutput->Add( cutflow_ME);
    fOutput->Add( cutflow_ME_MCWeight);
  
    fOutput->Add( h_metxy_sumet_0j_EE);
    fOutput->Add( h_metx_sumet_0j_EE);
    fOutput->Add( h_mety_sumet_0j_EE);
    fOutput->Add( h_ptel0_0j);
    fOutput->Add( h_ptel1_0j);
    fOutput->Add( h_mee_0j);
    

    fOutput->Add( h_metxy_sumet_1j_EE);
    fOutput->Add( h_metx_sumet_1j_EE);
    fOutput->Add( h_mety_sumet_1j_EE);
    fOutput->Add( h_ptel0_1j);
    fOutput->Add( h_ptel1_1j);
    fOutput->Add( h_mee_1j);

    fOutput->Add( h_metxy_sumet_2j_EE);
    fOutput->Add( h_metx_sumet_2j_EE); 
    fOutput->Add( h_mety_sumet_2j_EE);
    fOutput->Add( h_ptel0_2j);
    fOutput->Add( h_ptel1_2j);
    fOutput->Add( h_mee_2j);

    fOutput->Add( h_metxy_sumet_3j_EE);
    fOutput->Add( h_metx_sumet_3j_EE); 
    fOutput->Add( h_mety_sumet_3j_EE); 
    fOutput->Add( h_ptel0_3j);
    fOutput->Add( h_ptel1_3j);
    fOutput->Add( h_mee_3j);
    
    fOutput->Add( h_metxy_sumet_0j_MM);
    fOutput->Add( h_metx_sumet_0j_MM);
    fOutput->Add( h_mety_sumet_0j_MM);
    fOutput->Add( h_ptmu0_0j);
    fOutput->Add( h_ptmu1_0j);
    fOutput->Add( h_mmm_0j);
    

    fOutput->Add( h_metxy_sumet_1j_MM);
    fOutput->Add( h_metx_sumet_1j_MM);
    fOutput->Add( h_mety_sumet_1j_MM);
    fOutput->Add( h_ptmu0_1j);
    fOutput->Add( h_ptmu1_1j);
    fOutput->Add( h_mmm_1j);

    fOutput->Add( h_metxy_sumet_2j_MM);
    fOutput->Add( h_metx_sumet_2j_MM); 
    fOutput->Add( h_mety_sumet_2j_MM);
    fOutput->Add( h_ptmu0_2j);
    fOutput->Add( h_ptmu1_2j);
    fOutput->Add( h_mmm_2j);

    fOutput->Add( h_metxy_sumet_3j_MM);
    fOutput->Add( h_metx_sumet_3j_MM); 
    fOutput->Add( h_mety_sumet_3j_MM); 
    fOutput->Add( h_ptmu0_3j);
    fOutput->Add( h_ptmu1_3j);
    fOutput->Add( h_mmm_3j);
    
    return true;
    
}

