#ifndef SusyAna_TSelector_SusyNtuple_h
#define SusyAna_TSelector_SusyNtuple_h

//////////////////////////////////////////////////////////
// General script to implement basic selection with all //
// signal region cut methods.                           //
//////////////////////////////////////////////////////////


// Root Packages
#include "TTree.h"
// #include "TProofOutputFile.h"
// #include "TSystem.h"
// Susy Common
#include "SusyNtuple/SusyNtAna.h"
#include "SusyNtuple/SusyNtTools.h"
#include "SusyNtuple/DilTrigLogic.h"
#include "SUSYTools/SUSYObjDef.h"
#include "LeptonTruthTools/RecoTruthMatch.h"
#include "MuonEfficiencyCorrections/AnalysisMuonConfigurableScaleFactors.h"
#include "SusyNtuple/SusyDefs.h"
#include "SusyNtuple/WhTruthExtractor.h"
#include "Mt2/mt2_bisect.h" 
#include "SusyMatrixMethod/DiLeptonMatrixMethod.h"
#include "TH1.h"
#include "TH2.h"
// #include "mmc/mmc.cpp"
#include "MultiLep/CutflowTools.h"

#include "MultiLep/MuonD3PDObject.h"
#include "MultiLep/ElectronD3PDObject.h"
#include "MultiLep/VertexD3PDObject.h"
#include "MultiLep/METD3PDObject.h"
#include "MultiLep/JetD3PDObject.h"
#include "MultiLep/TrackD3PDObject.h"
#include "MultiLep/JetTools.h"
#include "MultiLep/LeptonInfo.h"

#ifndef __CINT__
#include "ChargeFlip/chargeFlip.h"
#else
class chargeFlip ;
#endif

#include <fstream>

class TSelector_SusyNtuple : public SusyNtAna
{

  public:
    TH1F* h_storeSumwMcid;
    
    TH1F* cutflow_EE;
    TH1F* cutflow_EE_ALL;
    
    TH1F* cutflow_MM;
    TH1F* cutflow_MM_ALL;
    
    TH1F* cutflow_EM;
    TH1F* cutflow_EM_ALL;
    
    TH1F* cutflow_ME;
    TH1F* cutflow_ME_ALL;
    
    TH1F* h_DeltaR_l1jOR_EM;
    TH1F* h_DeltaR_ljOR_MM;
    TH1F* h_DeltaR_ljOR_EE;
    TH1F* h_DeltaR_l0jOR_EM;
    
    TH1F* h_mllCut_EE;
    TH1F* h_mllCut_MM;
    TH1F* h_mllCut_l0_EM;
    TH1F* h_mllCut_l1_EM;
    
    TH1F* h_DeltaR_em_EM;
    
    TH2F* h_failedSignalCriteria_l0_EE;
    TH2F* h_failedSignalCriteria_l1_EE;
    TH2F* h_failedSignalCriteria_l0_MM;
    TH2F* h_failedSignalCriteria_l1_MM;
    TH2F* h_failedSignalCriteria_l0_EM;
    TH2F* h_failedSignalCriteria_l1_EM;
        
    TH2F* h_etcone30l0lZcand_EE_SRSS1;
    TH2F* h_etcone30l0lZcandSoft_EE_SRSS1;
    TH2F* h_etcone30l0lZcandSimple_EE_SRSS1;
    TH2F* h_etcone30l0lZcandIso_EE_SRSS1;
    
    TH2F* h_etcone30l1lZcand_EE_SRSS1;
    TH2F* h_etcone30l1lZcandSoft_EE_SRSS1;
    TH2F* h_etcone30l1lZcandSimple_EE_SRSS1;
    TH2F* h_etcone30l1lZcandIso_EE_SRSS1;
    
    TH2F* h_etcone30l1lZcand_EM_SRSS1;
    TH2F* h_etcone30l1lZcandSoft_EM_SRSS1;
    TH2F* h_etcone30l1lZcandSimple_EM_SRSS1;
    TH2F* h_etcone30l1lZcandIso_EM_SRSS1;
    
   
    TH2F* h_Nleptons_Zcand_EE_SRSS1;
    TH2F* h_Nleptons_Zcand_MM_SRSS1;
    TH2F* h_Nleptons_Zcand_EM_SRSS1;
    
    TH2F* h_ml0lZcand_EE_SRSS1;
    TH2F* h_ml0lZcand_MM_SRSS1;
    TH2F* h_ml0lZcand_EM_SRSS1;
    
    TH2F* h_mTl0lZcand_EE_SRSS1;
    TH2F* h_mTl0lZcand_MM_SRSS1;
    TH2F* h_mTl0lZcand_EM_SRSS1;    
    
    TH2F* h_pTl0lZcand_EE_SRSS1;
    TH2F* h_pTl0lZcand_MM_SRSS1;
    TH2F* h_pTl0lZcand_EM_SRSS1;
    
    TH2F* h_ICl0lZcand_EE_SRSS1;
    TH2F* h_ICl0lZcand_MM_SRSS1;
    TH2F* h_ICl0lZcand_EM_SRSS1;   
    
    TH2F* h_etal0lZcand_EE_SRSS1;
    TH2F* h_etal0lZcand_MM_SRSS1;
    TH2F* h_etal0lZcand_EM_SRSS1;
    
    TH2F* h_ptcone30l0lZcand_EE_SRSS1;
    TH2F* h_ptcone30l0lZcand_MM_SRSS1;
    TH2F* h_ptcone30l0lZcand_EM_SRSS1;
    
    TH2F* h_d0Sigl0lZcand_EE_SRSS1;
    TH2F* h_d0Sigl0lZcand_MM_SRSS1;
    TH2F* h_d0Sigl0lZcand_EM_SRSS1;
    
    TH2F* h_z0SinThetal0lZcand_EE_SRSS1;
    TH2F* h_z0SinThetal0lZcand_MM_SRSS1;
    TH2F* h_z0SinThetal0lZcand_EM_SRSS1;
    
    TH2F* h_ml1lZcand_EE_SRSS1;
    TH2F* h_ml1lZcand_MM_SRSS1;
    TH2F* h_ml1lZcand_EM_SRSS1;
    
    TH2F* h_mTl1lZcand_EE_SRSS1;
    TH2F* h_mTl1lZcand_MM_SRSS1;
    TH2F* h_mTl1lZcand_EM_SRSS1;    
    
    TH2F* h_ICl1lZcand_EE_SRSS1;
    TH2F* h_ICl1lZcand_MM_SRSS1;
    TH2F* h_ICl1lZcand_EM_SRSS1;    
    
    TH2F* h_pTl1lZcand_EE_SRSS1;
    TH2F* h_pTl1lZcand_MM_SRSS1;
    TH2F* h_pTl1lZcand_EM_SRSS1;
    
    TH2F* h_etal1lZcand_EE_SRSS1;
    TH2F* h_etal1lZcand_MM_SRSS1;
    TH2F* h_etal1lZcand_EM_SRSS1;
    
    TH2F* h_ptcone30l1lZcand_EE_SRSS1;
    TH2F* h_ptcone30l1lZcand_MM_SRSS1;
    TH2F* h_ptcone30l1lZcand_EM_SRSS1;
    
    TH2F* h_d0Sigl1lZcand_EE_SRSS1;
    TH2F* h_d0Sigl1lZcand_MM_SRSS1;
    TH2F* h_d0Sigl1lZcand_EM_SRSS1;
    
    TH2F* h_z0SinThetal1lZcand_EE_SRSS1;
    TH2F* h_z0SinThetal1lZcand_MM_SRSS1;
    TH2F* h_z0SinThetal1lZcand_EM_SRSS1;
    
    TH2F* h_Nleptons_ZcandSoft_EE_SRSS1;
    TH2F* h_Nleptons_ZcandSoft_MM_SRSS1;
    TH2F* h_Nleptons_ZcandSoft_EM_SRSS1;
    
    TH2F* h_ml0lZcandSoft_EE_SRSS1;  
    TH2F* h_ml0lZcandSoft_MM_SRSS1;  
    TH2F* h_ml0lZcandSoft_EM_SRSS1;  
    
    TH2F* h_mTl0lZcandSoft_EE_SRSS1;
    TH2F* h_mTl0lZcandSoft_MM_SRSS1;
    TH2F* h_mTl0lZcandSoft_EM_SRSS1;
    
    TH2F* h_ICl0lZcandSoft_EE_SRSS1;  
    TH2F* h_ICl0lZcandSoft_MM_SRSS1;  
    TH2F* h_ICl0lZcandSoft_EM_SRSS1;  
    
    TH2F* h_pTl0lZcandSoft_EE_SRSS1;  
    TH2F* h_pTl0lZcandSoft_MM_SRSS1;  
    TH2F* h_pTl0lZcandSoft_EM_SRSS1;  
    
    TH2F* h_etal0lZcandSoft_EE_SRSS1;
    TH2F* h_etal0lZcandSoft_MM_SRSS1;
    TH2F* h_etal0lZcandSoft_EM_SRSS1;
    
    TH2F* h_ptcone30l0lZcandSoft_EE_SRSS1;
    TH2F* h_ptcone30l0lZcandSoft_MM_SRSS1;
    TH2F* h_ptcone30l0lZcandSoft_EM_SRSS1;
    
    TH2F* h_d0Sigl0lZcandSoft_EE_SRSS1;  
    TH2F* h_d0Sigl0lZcandSoft_MM_SRSS1;  
    TH2F* h_d0Sigl0lZcandSoft_EM_SRSS1;  
    
    TH2F* h_z0SinThetal0lZcandSoft_EE_SRSS1;
    TH2F* h_z0SinThetal0lZcandSoft_MM_SRSS1;
    TH2F* h_z0SinThetal0lZcandSoft_EM_SRSS1;
    
    TH2F* h_ml1lZcandSoft_EE_SRSS1; 
    TH2F* h_ml1lZcandSoft_MM_SRSS1; 
    TH2F* h_ml1lZcandSoft_EM_SRSS1; 
    
    TH2F* h_mTl1lZcandSoft_EE_SRSS1;  
    TH2F* h_mTl1lZcandSoft_MM_SRSS1;  
    TH2F* h_mTl1lZcandSoft_EM_SRSS1;  
    
    TH2F* h_ICl1lZcandSoft_EE_SRSS1; 
    TH2F* h_ICl1lZcandSoft_MM_SRSS1; 
    TH2F* h_ICl1lZcandSoft_EM_SRSS1; 
    
    TH2F* h_pTl1lZcandSoft_EE_SRSS1;  
    TH2F* h_pTl1lZcandSoft_MM_SRSS1;  
    TH2F* h_pTl1lZcandSoft_EM_SRSS1;  
    
    TH2F* h_etal1lZcandSoft_EE_SRSS1;
    TH2F* h_etal1lZcandSoft_MM_SRSS1;
    TH2F* h_etal1lZcandSoft_EM_SRSS1;
    
    TH2F* h_ptcone30l1lZcandSoft_EE_SRSS1;
    TH2F* h_ptcone30l1lZcandSoft_MM_SRSS1;
    TH2F* h_ptcone30l1lZcandSoft_EM_SRSS1;
    
    TH2F* h_d0Sigl1lZcandSoft_EE_SRSS1;
    TH2F* h_d0Sigl1lZcandSoft_MM_SRSS1;
    TH2F* h_d0Sigl1lZcandSoft_EM_SRSS1;
    
    TH2F* h_z0SinThetal1lZcandSoft_EE_SRSS1;
    TH2F* h_z0SinThetal1lZcandSoft_MM_SRSS1;
    TH2F* h_z0SinThetal1lZcandSoft_EM_SRSS1;
    
    TH2F* h_Nleptons_ZcandSimple_EE_SRSS1;
    TH2F* h_Nleptons_ZcandSimple_MM_SRSS1;
    TH2F* h_Nleptons_ZcandSimple_EM_SRSS1;
    
    TH2F* h_ml0lZcandSimple_EE_SRSS1;  
    TH2F* h_ml0lZcandSimple_MM_SRSS1;  
    TH2F* h_ml0lZcandSimple_EM_SRSS1;  
    
    TH2F* h_mTl0lZcandSimple_EE_SRSS1;
    TH2F* h_mTl0lZcandSimple_MM_SRSS1;
    TH2F* h_mTl0lZcandSimple_EM_SRSS1;
    
    TH2F* h_ICl0lZcandSimple_EE_SRSS1;  
    TH2F* h_ICl0lZcandSimple_MM_SRSS1;  
    TH2F* h_ICl0lZcandSimple_EM_SRSS1;  
    
    TH2F* h_pTl0lZcandSimple_EE_SRSS1;  
    TH2F* h_pTl0lZcandSimple_MM_SRSS1;  
    TH2F* h_pTl0lZcandSimple_EM_SRSS1;  
    
    TH2F* h_etal0lZcandSimple_EE_SRSS1;
    TH2F* h_etal0lZcandSimple_MM_SRSS1;
    TH2F* h_etal0lZcandSimple_EM_SRSS1;
    
    TH2F* h_ptcone30l0lZcandSimple_EE_SRSS1;
    TH2F* h_ptcone30l0lZcandSimple_MM_SRSS1;
    TH2F* h_ptcone30l0lZcandSimple_EM_SRSS1;
    
    TH2F* h_d0Sigl0lZcandSimple_EE_SRSS1;  
    TH2F* h_d0Sigl0lZcandSimple_MM_SRSS1;  
    TH2F* h_d0Sigl0lZcandSimple_EM_SRSS1;  
    
    TH2F* h_z0SinThetal0lZcandSimple_EE_SRSS1;
    TH2F* h_z0SinThetal0lZcandSimple_MM_SRSS1;
    TH2F* h_z0SinThetal0lZcandSimple_EM_SRSS1;
    
    TH2F* h_ml1lZcandSimple_EE_SRSS1; 
    TH2F* h_ml1lZcandSimple_MM_SRSS1; 
    TH2F* h_ml1lZcandSimple_EM_SRSS1; 
    
    TH2F* h_mTl1lZcandSimple_EE_SRSS1;  
    TH2F* h_mTl1lZcandSimple_MM_SRSS1;  
    TH2F* h_mTl1lZcandSimple_EM_SRSS1;  
    
    TH2F* h_ICl1lZcandSimple_EE_SRSS1; 
    TH2F* h_ICl1lZcandSimple_MM_SRSS1; 
    TH2F* h_ICl1lZcandSimple_EM_SRSS1; 
    
    TH2F* h_pTl1lZcandSimple_EE_SRSS1;  
    TH2F* h_pTl1lZcandSimple_MM_SRSS1;  
    TH2F* h_pTl1lZcandSimple_EM_SRSS1;  
    
    TH2F* h_etal1lZcandSimple_EE_SRSS1;
    TH2F* h_etal1lZcandSimple_MM_SRSS1;
    TH2F* h_etal1lZcandSimple_EM_SRSS1;
    
    TH2F* h_ptcone30l1lZcandSimple_EE_SRSS1;
    TH2F* h_ptcone30l1lZcandSimple_MM_SRSS1;
    TH2F* h_ptcone30l1lZcandSimple_EM_SRSS1;
    
    TH2F* h_d0Sigl1lZcandSimple_EE_SRSS1;
    TH2F* h_d0Sigl1lZcandSimple_MM_SRSS1;
    TH2F* h_d0Sigl1lZcandSimple_EM_SRSS1;
    
    TH2F* h_z0SinThetal1lZcandSimple_EE_SRSS1;
    TH2F* h_z0SinThetal1lZcandSimple_MM_SRSS1;
    TH2F* h_z0SinThetal1lZcandSimple_EM_SRSS1;
    
    TH2F* h_Nleptons_ZcandIso_EE_SRSS1;
    TH2F* h_Nleptons_ZcandIso_MM_SRSS1;
    TH2F* h_Nleptons_ZcandIso_EM_SRSS1;
    
    TH2F* h_ml0lZcandIso_EE_SRSS1;  
    TH2F* h_ml0lZcandIso_MM_SRSS1;  
    TH2F* h_ml0lZcandIso_EM_SRSS1;  
    
    TH2F* h_mTl0lZcandIso_EE_SRSS1;
    TH2F* h_mTl0lZcandIso_MM_SRSS1;
    TH2F* h_mTl0lZcandIso_EM_SRSS1;
    
    TH2F* h_ICl0lZcandIso_EE_SRSS1;  
    TH2F* h_ICl0lZcandIso_MM_SRSS1;  
    TH2F* h_ICl0lZcandIso_EM_SRSS1;  
    
    TH2F* h_pTl0lZcandIso_EE_SRSS1;  
    TH2F* h_pTl0lZcandIso_MM_SRSS1;  
    TH2F* h_pTl0lZcandIso_EM_SRSS1;  
    
    TH2F* h_etal0lZcandIso_EE_SRSS1;
    TH2F* h_etal0lZcandIso_MM_SRSS1;
    TH2F* h_etal0lZcandIso_EM_SRSS1;
    
    TH2F* h_ptcone30l0lZcandIso_EE_SRSS1;
    TH2F* h_ptcone30l0lZcandIso_MM_SRSS1;
    TH2F* h_ptcone30l0lZcandIso_EM_SRSS1;
    
    TH2F* h_d0Sigl0lZcandIso_EE_SRSS1;  
    TH2F* h_d0Sigl0lZcandIso_MM_SRSS1;  
    TH2F* h_d0Sigl0lZcandIso_EM_SRSS1;  
    
    TH2F* h_z0SinThetal0lZcandIso_EE_SRSS1;
    TH2F* h_z0SinThetal0lZcandIso_MM_SRSS1;
    TH2F* h_z0SinThetal0lZcandIso_EM_SRSS1;
    
    TH2F* h_ml1lZcandIso_EE_SRSS1; 
    TH2F* h_ml1lZcandIso_MM_SRSS1; 
    TH2F* h_ml1lZcandIso_EM_SRSS1; 
    
    TH2F* h_mTl1lZcandIso_EE_SRSS1;  
    TH2F* h_mTl1lZcandIso_MM_SRSS1;  
    TH2F* h_mTl1lZcandIso_EM_SRSS1;  
    
    TH2F* h_ICl1lZcandIso_EE_SRSS1; 
    TH2F* h_ICl1lZcandIso_MM_SRSS1; 
    TH2F* h_ICl1lZcandIso_EM_SRSS1; 
    
    TH2F* h_pTl1lZcandIso_EE_SRSS1;  
    TH2F* h_pTl1lZcandIso_MM_SRSS1;  
    TH2F* h_pTl1lZcandIso_EM_SRSS1;  
    
    TH2F* h_etal1lZcandIso_EE_SRSS1;
    TH2F* h_etal1lZcandIso_MM_SRSS1;
    TH2F* h_etal1lZcandIso_EM_SRSS1;
    
    TH2F* h_ptcone30l1lZcandIso_EE_SRSS1;
    TH2F* h_ptcone30l1lZcandIso_MM_SRSS1;
    TH2F* h_ptcone30l1lZcandIso_EM_SRSS1;
    
    TH2F* h_d0Sigl1lZcandIso_EE_SRSS1;
    TH2F* h_d0Sigl1lZcandIso_MM_SRSS1;
    TH2F* h_d0Sigl1lZcandIso_EM_SRSS1;
    
    TH2F* h_z0SinThetal1lZcandIso_EE_SRSS1;
    TH2F* h_z0SinThetal1lZcandIso_MM_SRSS1;
    TH2F* h_z0SinThetal1lZcandIso_EM_SRSS1;
  
    
    TH2F* h_Mljj_EE_SRSS1;
    TH2F* h_Mljj_MM_SRSS1;
    TH2F* h_Mljj_EM_SRSS1;
    
    TH2F* h_DeltaRLeptons_EE_SRSS1;
    TH2F* h_DeltaRLeptons_EE_SRSS2;
    TH2F* h_DeltaRLeptons_MM_SRSS1;
    TH2F* h_DeltaRLeptons_MM_SRSS2;
    TH2F* h_DeltaRLeptons_MM_SRSS3;
    TH2F* h_DeltaRLeptons_MM_SRSS4;
    TH2F* h_DeltaRLeptons_EM_SRSS1;
    TH2F* h_DeltaRLeptons_EM_SRSS2;
    TH2F* h_DeltaRLeptons_EE_SROS1;
    TH2F* h_DeltaRLeptons_MM_SROS1;
    TH2F* h_DeltaRLeptons_EM_SROS1;
    
    TH2F* h_mZTT_coll_EE_SRSS1;
    TH2F* h_mZTT_coll_EE_SRSS2;
    TH2F* h_mZTT_coll_MM_SRSS1;
    TH2F* h_mZTT_coll_MM_SRSS2;
    TH2F* h_mZTT_coll_MM_SRSS3;
    TH2F* h_mZTT_coll_MM_SRSS4;
    TH2F* h_mZTT_coll_EM_SRSS1;
    TH2F* h_mZTT_coll_EM_SRSS2;
    TH2F* h_mZTT_coll_EE_SROS1;
    TH2F* h_mZTT_coll_MM_SROS1;
    TH2F* h_mZTT_coll_EM_SROS1;
    
    TH2F* h_mZTT_mmc_EE_SRSS1;
    TH2F* h_mZTT_mmc_EE_SRSS2;
    TH2F* h_mZTT_mmc_MM_SRSS1;
    TH2F* h_mZTT_mmc_MM_SRSS2;
    TH2F* h_mZTT_mmc_MM_SRSS3;
    TH2F* h_mZTT_mmc_MM_SRSS4;
    TH2F* h_mZTT_mmc_EM_SRSS1;
    TH2F* h_mZTT_mmc_EM_SRSS2;
    TH2F* h_mZTT_mmc_EE_SROS1;
    TH2F* h_mZTT_mmc_MM_SROS1;
    TH2F* h_mZTT_mmc_EM_SROS1;
    
    TH2F* h_pTl0_EE_SRSS1;
    TH2F* h_pTl0_EE_SRSS2;
    TH2F* h_pTl0_MM_SRSS1;
    TH2F* h_pTl0_MM_SRSS2;
    TH2F* h_pTl0_MM_SRSS3;
    TH2F* h_pTl0_MM_SRSS4;
    TH2F* h_pTl0_EM_SRSS1;
    TH2F* h_pTl0_EM_SRSS2;
    TH2F* h_pTl0_EE_SROS1;
    TH2F* h_pTl0_MM_SROS1;
    TH2F* h_pTl0_EM_SROS1;
    
    TH2F* h_pTl1_EE_SRSS1;
    TH2F* h_pTl1_EE_SRSS2;
    TH2F* h_pTl1_MM_SRSS1;  
    TH2F* h_pTl1_MM_SRSS2;
    TH2F* h_pTl1_MM_SRSS3;
    TH2F* h_pTl1_MM_SRSS4;
    TH2F* h_pTl1_EM_SRSS1;
    TH2F* h_pTl1_EM_SRSS2;
    TH2F* h_pTl1_EE_SROS1;
    TH2F* h_pTl1_MM_SROS1;
    TH2F* h_pTl1_EM_SROS1;
    
    TH2F* h_pTj0_EE_SRSS1;
    TH2F* h_pTj0_EE_SRSS2;
    TH2F* h_pTj0_MM_SRSS1;
    TH2F* h_pTj0_MM_SRSS2;
    TH2F* h_pTj0_MM_SRSS3;
    TH2F* h_pTj0_MM_SRSS4;
    TH2F* h_pTj0_EM_SRSS1;
    TH2F* h_pTj0_EM_SRSS2;
    TH2F* h_pTj0_EE_SROS1;
    TH2F* h_pTj0_MM_SROS1;
    TH2F* h_pTj0_EM_SROS1;
    
    
    TH2F* h_pTj1_EE_SRSS1;
    TH2F* h_pTj1_EE_SRSS2;
    TH2F* h_pTj1_MM_SRSS1;  
    TH2F* h_pTj1_MM_SRSS2;
    TH2F* h_pTj1_MM_SRSS3;
    TH2F* h_pTj1_MM_SRSS4;
    TH2F* h_pTj1_EM_SRSS1;
    TH2F* h_pTj1_EM_SRSS2;
    TH2F* h_pTj1_EE_SROS1;
    TH2F* h_pTj1_MM_SROS1;
    TH2F* h_pTj1_EM_SROS1;
    
    TH2F* h_mll_EE_SRSS1;
    TH2F* h_mll_EE_SRSS2;
    TH2F* h_mll_MM_SRSS1; 
    TH2F* h_mll_MM_SRSS2;
    TH2F* h_mll_MM_SRSS3;
    TH2F* h_mll_MM_SRSS4;
    TH2F* h_mll_EM_SRSS1;
    TH2F* h_mll_EM_SRSS2;
    TH2F* h_mll_EE_SROS1;
    TH2F* h_mll_MM_SROS1;
    TH2F* h_mll_EM_SROS1;
    
    TH2F* h_METrel_EE_SRSS1;
    TH2F* h_METrel_EE_SRSS2;
    TH2F* h_METrel_MM_SRSS1;  
    TH2F* h_METrel_MM_SRSS2;  
    TH2F* h_METrel_MM_SRSS3;
    TH2F* h_METrel_MM_SRSS4;
    TH2F* h_METrel_EM_SRSS1;
    TH2F* h_METrel_EM_SRSS2;
    TH2F* h_METrel_EE_SROS1;
    TH2F* h_METrel_MM_SROS1;
    TH2F* h_METrel_EM_SROS1;
    
    TH2F* h_MET_EE_SRSS1;
    TH2F* h_MET_EE_SRSS2;
    TH2F* h_MET_MM_SRSS1;  
    TH2F* h_MET_MM_SRSS2;  
    TH2F* h_MET_MM_SRSS3;
    TH2F* h_MET_MM_SRSS4;
    TH2F* h_MET_EM_SRSS1;
    TH2F* h_MET_EM_SRSS2;
    TH2F* h_MET_EE_SROS1;
    TH2F* h_MET_MM_SROS1;
    TH2F* h_MET_EM_SROS1;
    
    TH2F* h_HT_EE_SRSS1;
    TH2F* h_HT_EE_SRSS2;
    TH2F* h_HT_MM_SRSS1;  
    TH2F* h_HT_MM_SRSS2;
    TH2F* h_HT_MM_SRSS3;
    TH2F* h_HT_MM_SRSS4;
    TH2F* h_HT_EM_SRSS1;
    TH2F* h_HT_EM_SRSS2;
    TH2F* h_HT_EE_SROS1;
    TH2F* h_HT_MM_SROS1;
    TH2F* h_HT_EM_SROS1;
    
    TH2F* h_mWWt_EE_SRSS1;
    TH2F* h_mWWt_EE_SRSS2;
    TH2F* h_mWWt_MM_SRSS1;  
    TH2F* h_mWWt_MM_SRSS2;
    TH2F* h_mWWt_MM_SRSS3;
    TH2F* h_mWWt_MM_SRSS4;
    TH2F* h_mWWt_EM_SRSS1;
    TH2F* h_mWWt_EM_SRSS2;
    TH2F* h_mWWt_EE_SROS1;
    TH2F* h_mWWt_MM_SROS1;
    TH2F* h_mWWt_EM_SROS1;
    
    TH2F* h_mTlmin_EE_SRSS1;
    TH2F* h_mTlmin_EE_SRSS2;
    TH2F* h_mTlmin_MM_SRSS1;  
    TH2F* h_mTlmin_MM_SRSS2;
    TH2F* h_mTlmin_MM_SRSS3;
    TH2F* h_mTlmin_MM_SRSS4;
    TH2F* h_mTlmin_EM_SRSS1;
    TH2F* h_mTlmin_EM_SRSS2;
    TH2F* h_mTlmin_EE_SROS1;
    TH2F* h_mTlmin_MM_SROS1;
    TH2F* h_mTlmin_EM_SROS1;
    
    TH2F* h_mTlmax_EE_SRSS1;
    TH2F* h_mTlmax_EE_SRSS2;
    TH2F* h_mTlmax_MM_SRSS1;  
    TH2F* h_mTlmax_MM_SRSS2;
    TH2F* h_mTlmax_MM_SRSS3;
    TH2F* h_mTlmax_MM_SRSS4;
    TH2F* h_mTlmax_EM_SRSS1;
    TH2F* h_mTlmax_EM_SRSS2;
    TH2F* h_mTlmax_EE_SROS1;
    TH2F* h_mTlmax_MM_SROS1;
    TH2F* h_mTlmax_EM_SROS1;

    TH2F* h_meff_EE_SRSS1;
    TH2F* h_meff_EE_SRSS2;
    TH2F* h_meff_MM_SRSS1;
    TH2F* h_meff_MM_SRSS2;
    TH2F* h_meff_MM_SRSS3;
    TH2F* h_meff_MM_SRSS4;
    TH2F* h_meff_EM_SRSS1;
    TH2F* h_meff_EM_SRSS2;
    TH2F* h_meff_EE_SROS1;
    TH2F* h_meff_MM_SROS1;
    TH2F* h_meff_EM_SROS1;
    
    
    TH2F* h_mT2_EE_SRSS1;
    TH2F* h_mT2_EE_SRSS2;
    TH2F* h_mT2_MM_SRSS1;
    TH2F* h_mT2_MM_SRSS2;  
    TH2F* h_mT2_MM_SRSS3;
    TH2F* h_mT2_MM_SRSS4;
    TH2F* h_mT2_EM_SRSS1;
    TH2F* h_mT2_EM_SRSS2;
    TH2F* h_mT2_EE_SROS1;
    TH2F* h_mT2_MM_SROS1;
    TH2F* h_mT2_EM_SROS1;
    
    TH2F* h_mT2J_EE_SRSS1;
    TH2F* h_mT2J_EE_SRSS2;
    TH2F* h_mT2J_MM_SRSS1;
    TH2F* h_mT2J_MM_SRSS2;  
    TH2F* h_mT2J_MM_SRSS3;
    TH2F* h_mT2J_MM_SRSS4;
    TH2F* h_mT2J_EM_SRSS1;
    TH2F* h_mT2J_EM_SRSS2;
    TH2F* h_mT2J_EE_SROS1;
    TH2F* h_mT2J_MM_SROS1;
    TH2F* h_mT2J_EM_SROS1;    
    
    TH2F* h_mjj_EE_SRSS1;
    TH2F* h_mjj_EE_SRSS2;
    TH2F* h_mjj_MM_SRSS1;  
    TH2F* h_mjj_MM_SRSS2;
    TH2F* h_mjj_MM_SRSS3;
    TH2F* h_mjj_MM_SRSS4;
    TH2F* h_mjj_EM_SRSS1;
    TH2F* h_mjj_EM_SRSS2;
    TH2F* h_mjj_EE_SROS1;
    TH2F* h_mjj_MM_SROS1;
    TH2F* h_mjj_EM_SROS1;
    
    TH2F* h_DeltaPhiMETll_EE_SRSS1;
    TH2F* h_DeltaPhiMETll_EE_SRSS2;
    TH2F* h_DeltaPhiMETll_MM_SRSS1;  
    TH2F* h_DeltaPhiMETll_MM_SRSS2;
    TH2F* h_DeltaPhiMETll_MM_SRSS3;
    TH2F* h_DeltaPhiMETll_MM_SRSS4;
    TH2F* h_DeltaPhiMETll_EM_SRSS1;
    TH2F* h_DeltaPhiMETll_EM_SRSS2;
    TH2F* h_DeltaPhiMETll_EE_SROS1;
    TH2F* h_DeltaPhiMETll_MM_SROS1;
    TH2F* h_DeltaPhiMETll_EM_SROS1;
    
    TH2F* h_DeltaPhill_EE_SRSS1;
    TH2F* h_DeltaPhill_EE_SRSS2;
    TH2F* h_DeltaPhill_MM_SRSS1;  
    TH2F* h_DeltaPhill_MM_SRSS2;
    TH2F* h_DeltaPhill_MM_SRSS3;
    TH2F* h_DeltaPhill_MM_SRSS4;
    TH2F* h_DeltaPhill_EM_SRSS1;
    TH2F* h_DeltaPhill_EM_SRSS2;
    TH2F* h_DeltaPhill_EE_SROS1;
    TH2F* h_DeltaPhill_MM_SROS1;
    TH2F* h_DeltaPhill_EM_SROS1;

    TH2F* h_NBJets_EE_SRSS1;
    TH2F* h_NBJets_EE_SRSS2;
    TH2F* h_NBJets_MM_SRSS1;  
    TH2F* h_NBJets_MM_SRSS2;
    TH2F* h_NBJets_MM_SRSS3;
    TH2F* h_NBJets_MM_SRSS4;
    TH2F* h_NBJets_EM_SRSS1;
    TH2F* h_NBJets_EM_SRSS2;
    TH2F* h_NBJets_EE_SROS1;
    TH2F* h_NBJets_MM_SROS1;
    TH2F* h_NBJets_EM_SROS1;

    TH2F* h_NCJets_EE_SRSS1;
    TH2F* h_NCJets_EE_SRSS2;
    TH2F* h_NCJets_MM_SRSS1;  
    TH2F* h_NCJets_MM_SRSS2;
    TH2F* h_NCJets_MM_SRSS3;
    TH2F* h_NCJets_MM_SRSS4;
    TH2F* h_NCJets_EM_SRSS1;
    TH2F* h_NCJets_EM_SRSS2;
    TH2F* h_NCJets_EE_SROS1;
    TH2F* h_NCJets_MM_SROS1;
    TH2F* h_NCJets_EM_SROS1;

    TH2F* h_NFJets_EE_SRSS1;
    TH2F* h_NFJets_EE_SRSS2;
    TH2F* h_NFJets_MM_SRSS1;  
    TH2F* h_NFJets_MM_SRSS2;
    TH2F* h_NFJets_MM_SRSS3;
    TH2F* h_NFJets_MM_SRSS4;
    TH2F* h_NFJets_EM_SRSS1;
    TH2F* h_NFJets_EM_SRSS2;
    TH2F* h_NFJets_EE_SROS1;
    TH2F* h_NFJets_MM_SROS1;
    TH2F* h_NFJets_EM_SROS1;
    
      /*--------------------------------------------------------------------------------*/ 
  TH2F* h_DeltaPhijj_EE_SRSS1; 
  TH2F* h_DeltaPhijj_EE_SRSS2; 
  TH2F* h_DeltaPhijj_MM_SRSS1;   
  TH2F* h_DeltaPhijj_MM_SRSS2; 
  TH2F* h_DeltaPhijj_MM_SRSS3; 
  TH2F* h_DeltaPhijj_MM_SRSS4; 
  TH2F* h_DeltaPhijj_EM_SRSS1; 
  TH2F* h_DeltaPhijj_EM_SRSS2; 
  TH2F* h_DeltaPhijj_EE_SROS1; 
  TH2F* h_DeltaPhijj_MM_SROS1; 
  TH2F* h_DeltaPhijj_EM_SROS1; 
  
  /*--------------------------------------------------------------------------------*/ 
  TH2F* h_pTjj_EE_SRSS1; 
  TH2F* h_pTjj_EE_SRSS2; 
  TH2F* h_pTjj_MM_SRSS1; 
  TH2F* h_pTjj_MM_SRSS2; 
  TH2F* h_pTjj_MM_SRSS3; 
  TH2F* h_pTjj_MM_SRSS4; 
  TH2F* h_pTjj_EM_SRSS1; 
  TH2F* h_pTjj_EM_SRSS2; 
  TH2F* h_pTjj_EE_SROS1; 
  TH2F* h_pTjj_MM_SROS1; 
  TH2F* h_pTjj_EM_SROS1; 

  /*----------------------------------------------------------------------------*/ 
  TH2F* h_pTll_EE_SRSS1; 
  TH2F* h_pTll_EE_SRSS2; 
  TH2F* h_pTll_MM_SRSS1;   
  TH2F* h_pTll_MM_SRSS2; 
  TH2F* h_pTll_MM_SRSS3; 
  TH2F* h_pTll_MM_SRSS4; 
  TH2F* h_pTll_EM_SRSS1; 
  TH2F* h_pTll_EM_SRSS2; 
  TH2F* h_pTll_EE_SROS1; 
  TH2F* h_pTll_MM_SROS1; 
  TH2F* h_pTll_EM_SROS1; 
  
  /*--------------------------------------------------------------------------------*/ 
  TH2F* h_DeltaPhiMETl0_EE_SRSS1; 
  TH2F* h_DeltaPhiMETl0_EE_SRSS2; 
  TH2F* h_DeltaPhiMETl0_MM_SRSS1;   
  TH2F* h_DeltaPhiMETl0_MM_SRSS2; 
  TH2F* h_DeltaPhiMETl0_MM_SRSS3; 
  TH2F* h_DeltaPhiMETl0_MM_SRSS4; 
  TH2F* h_DeltaPhiMETl0_EM_SRSS1; 
  TH2F* h_DeltaPhiMETl0_EM_SRSS2; 
  TH2F* h_DeltaPhiMETl0_EE_SROS1; 
  TH2F* h_DeltaPhiMETl0_MM_SROS1; 
  TH2F* h_DeltaPhiMETl0_EM_SROS1; 

  /*-------------------------------------------------------------------------------------*/ 
  TH2F* h_DeltaPhiMETl1_EE_SRSS1; 
  TH2F* h_DeltaPhiMETl1_EE_SRSS2; 
  TH2F* h_DeltaPhiMETl1_MM_SRSS1;   
  TH2F* h_DeltaPhiMETl1_MM_SRSS2; 
  TH2F* h_DeltaPhiMETl1_MM_SRSS3; 
  TH2F* h_DeltaPhiMETl1_MM_SRSS4; 
  TH2F* h_DeltaPhiMETl1_EM_SRSS1; 
  TH2F* h_DeltaPhiMETl1_EM_SRSS2; 
  TH2F* h_DeltaPhiMETl1_EE_SROS1; 
  TH2F* h_DeltaPhiMETl1_MM_SROS1; 
  TH2F* h_DeltaPhiMETl1_EM_SROS1; 
  
    /*-----------------------------------------------------------------------------------*/ 
  TH2F* h_DeltaPhiMETj0_EE_SRSS1; 
  TH2F* h_DeltaPhiMETj0_EE_SRSS2; 
  TH2F* h_DeltaPhiMETj0_MM_SRSS1;   
  TH2F* h_DeltaPhiMETj0_MM_SRSS2; 
  TH2F* h_DeltaPhiMETj0_MM_SRSS3; 
  TH2F* h_DeltaPhiMETj0_MM_SRSS4; 
  TH2F* h_DeltaPhiMETj0_EM_SRSS1; 
  TH2F* h_DeltaPhiMETj0_EM_SRSS2; 
  TH2F* h_DeltaPhiMETj0_EE_SROS1; 
  TH2F* h_DeltaPhiMETj0_MM_SROS1; 
  TH2F* h_DeltaPhiMETj0_EM_SROS1; 
  /*-------------------------------------------------------------------------------------*/ 
  TH2F* h_DeltaPhiMETj1_EE_SRSS1; 
  TH2F* h_DeltaPhiMETj1_EE_SRSS2; 
  TH2F* h_DeltaPhiMETj1_MM_SRSS1;   
  TH2F* h_DeltaPhiMETj1_MM_SRSS2; 
  TH2F* h_DeltaPhiMETj1_MM_SRSS3; 
  TH2F* h_DeltaPhiMETj1_MM_SRSS4; 
  TH2F* h_DeltaPhiMETj1_EM_SRSS1; 
  TH2F* h_DeltaPhiMETj1_EM_SRSS2; 
  TH2F* h_DeltaPhiMETj1_EE_SROS1; 
  TH2F* h_DeltaPhiMETj1_MM_SROS1; 
  TH2F* h_DeltaPhiMETj1_EM_SROS1; 

  /*-------------------------------------------------------------------------------------*/ 
  TH2F* h_DeltaPhiMETjj_EE_SRSS1; 
  TH2F* h_DeltaPhiMETjj_EE_SRSS2; 
  TH2F* h_DeltaPhiMETjj_MM_SRSS1;   
  TH2F* h_DeltaPhiMETjj_MM_SRSS2; 
  TH2F* h_DeltaPhiMETjj_MM_SRSS3; 
  TH2F* h_DeltaPhiMETjj_MM_SRSS4; 
  TH2F* h_DeltaPhiMETjj_EM_SRSS1; 
  TH2F* h_DeltaPhiMETjj_EM_SRSS2; 
  TH2F* h_DeltaPhiMETjj_EE_SROS1; 
  TH2F* h_DeltaPhiMETjj_MM_SROS1; 
  TH2F* h_DeltaPhiMETjj_EM_SROS1; 

    /*--------------------------------------------------------------------------------*/ 
  TH2F* h_DeltaRjj_EE_SRSS1; 
  TH2F* h_DeltaRjj_EE_SRSS2; 
  TH2F* h_DeltaRjj_MM_SRSS1;   
  TH2F* h_DeltaRjj_MM_SRSS2; 
  TH2F* h_DeltaRjj_MM_SRSS3; 
  TH2F* h_DeltaRjj_MM_SRSS4; 
  TH2F* h_DeltaRjj_EM_SRSS1; 
  TH2F* h_DeltaRjj_EM_SRSS2; 
  TH2F* h_DeltaRjj_EE_SROS1; 
  TH2F* h_DeltaRjj_MM_SROS1; 
  TH2F* h_DeltaRjj_EM_SROS1; 

  /*--------------------------------------------------------------------------------*/ 
  TH2F* h_etal0_EE_SRSS1; 
  TH2F* h_etal0_EE_SRSS2; 
  TH2F* h_etal0_MM_SRSS1;   
  TH2F* h_etal0_MM_SRSS2; 
  TH2F* h_etal0_MM_SRSS3; 
  TH2F* h_etal0_MM_SRSS4; 
  TH2F* h_etal0_EM_SRSS1; 
  TH2F* h_etal0_EM_SRSS2; 
  TH2F* h_etal0_EE_SROS1; 
  TH2F* h_etal0_MM_SROS1; 
  TH2F* h_etal0_EM_SROS1; 
    /*---------------------------------------------------------------------------*/ 
  TH2F* h_etal1_EE_SRSS1; 
  TH2F* h_etal1_EE_SRSS2; 
  TH2F* h_etal1_MM_SRSS1;   
  TH2F* h_etal1_MM_SRSS2; 
  TH2F* h_etal1_MM_SRSS3; 
  TH2F* h_etal1_MM_SRSS4; 
  TH2F* h_etal1_EM_SRSS1; 
  TH2F* h_etal1_EM_SRSS2; 
  TH2F* h_etal1_EE_SROS1; 
  TH2F* h_etal1_MM_SROS1; 
  TH2F* h_etal1_EM_SROS1; 
    /*---------------------------------------------------------------------------*/ 
  TH2F* h_etaj0_EE_SRSS1; 
  TH2F* h_etaj0_EE_SRSS2; 
  TH2F* h_etaj0_MM_SRSS1;   
  TH2F* h_etaj0_MM_SRSS2; 
  TH2F* h_etaj0_MM_SRSS3; 
  TH2F* h_etaj0_MM_SRSS4; 
  TH2F* h_etaj0_EM_SRSS1; 
  TH2F* h_etaj0_EM_SRSS2; 
  TH2F* h_etaj0_EE_SROS1; 
  TH2F* h_etaj0_MM_SROS1; 
  TH2F* h_etaj0_EM_SROS1; 
    /*---------------------------------------------------------------------------*/ 
  TH2F* h_etaj1_EE_SRSS1; 
  TH2F* h_etaj1_EE_SRSS2; 
  TH2F* h_etaj1_MM_SRSS1;   
  TH2F* h_etaj1_MM_SRSS2; 
  TH2F* h_etaj1_MM_SRSS3; 
  TH2F* h_etaj1_MM_SRSS4; 
  TH2F* h_etaj1_EM_SRSS1; 
  TH2F* h_etaj1_EM_SRSS2; 
  TH2F* h_etaj1_EE_SROS1; 
  TH2F* h_etaj1_MM_SROS1; 
  TH2F* h_etaj1_EM_SROS1; 

  /*--------------------------------------------------------------------------------*/ 
  TH2F* h_mTl0MET_EE_SRSS1; 
  TH2F* h_mTl0MET_EE_SRSS2; 
  TH2F* h_mTl0MET_MM_SRSS1;   
  TH2F* h_mTl0MET_MM_SRSS2; 
  TH2F* h_mTl0MET_MM_SRSS3; 
  TH2F* h_mTl0MET_MM_SRSS4; 
  TH2F* h_mTl0MET_EM_SRSS1; 
  TH2F* h_mTl0MET_EM_SRSS2; 
  TH2F* h_mTl0MET_EE_SROS1; 
  TH2F* h_mTl0MET_MM_SROS1; 
  TH2F* h_mTl0MET_EM_SROS1; 
  /*-------------------------------------------------------------------------------*/ 
  TH2F* h_mTl1MET_EE_SRSS1; 
  TH2F* h_mTl1MET_EE_SRSS2; 
  TH2F* h_mTl1MET_MM_SRSS1;   
  TH2F* h_mTl1MET_MM_SRSS2; 
  TH2F* h_mTl1MET_MM_SRSS3; 
  TH2F* h_mTl1MET_MM_SRSS4; 
  TH2F* h_mTl1MET_EM_SRSS1; 
  TH2F* h_mTl1MET_EM_SRSS2; 
  TH2F* h_mTl1MET_EE_SROS1; 
  TH2F* h_mTl1MET_MM_SROS1; 
  TH2F* h_mTl1MET_EM_SROS1; 

      /*--------------------------------------------------------------------------------*/ 
  TH2F* h_DeltaPhilljj_EE_SRSS1; 
  TH2F* h_DeltaPhilljj_EE_SRSS2; 
  TH2F* h_DeltaPhilljj_MM_SRSS1;   
  TH2F* h_DeltaPhilljj_MM_SRSS2; 
  TH2F* h_DeltaPhilljj_MM_SRSS3; 
  TH2F* h_DeltaPhilljj_MM_SRSS4; 
  TH2F* h_DeltaPhilljj_EM_SRSS1; 
  TH2F* h_DeltaPhilljj_EM_SRSS2; 
  TH2F* h_DeltaPhilljj_EE_SROS1; 
  TH2F* h_DeltaPhilljj_MM_SROS1; 
  TH2F* h_DeltaPhilljj_EM_SROS1; 
  /*------------------------------------------------------------------------------------*/ 
  TH2F* h_DeltaPhil0jj_EE_SRSS1; 
  TH2F* h_DeltaPhil0jj_EE_SRSS2; 
  TH2F* h_DeltaPhil0jj_MM_SRSS1;   
  TH2F* h_DeltaPhil0jj_MM_SRSS2; 
  TH2F* h_DeltaPhil0jj_MM_SRSS3; 
  TH2F* h_DeltaPhil0jj_MM_SRSS4; 
  TH2F* h_DeltaPhil0jj_EM_SRSS1; 
  TH2F* h_DeltaPhil0jj_EM_SRSS2; 
  TH2F* h_DeltaPhil0jj_EE_SROS1; 
  TH2F* h_DeltaPhil0jj_MM_SROS1; 
  TH2F* h_DeltaPhil0jj_EM_SROS1; 
  /*------------------------------------------------------------------------------------*/ 
  TH2F* h_DeltaPhil1jj_EE_SRSS1; 
  TH2F* h_DeltaPhil1jj_EE_SRSS2; 
  TH2F* h_DeltaPhil1jj_MM_SRSS1;   
  TH2F* h_DeltaPhil1jj_MM_SRSS2; 
  TH2F* h_DeltaPhil1jj_MM_SRSS3; 
  TH2F* h_DeltaPhil1jj_MM_SRSS4; 
  TH2F* h_DeltaPhil1jj_EM_SRSS1; 
  TH2F* h_DeltaPhil1jj_EM_SRSS2; 
  TH2F* h_DeltaPhil1jj_EE_SROS1; 
  TH2F* h_DeltaPhil1jj_MM_SROS1; 
  TH2F* h_DeltaPhil1jj_EM_SROS1; 

  /*--------------------------------------------------------------------------------*/ 
  TH2F* h_DeltaRlljj_EE_SRSS1; 
  TH2F* h_DeltaRlljj_EE_SRSS2; 
  TH2F* h_DeltaRlljj_MM_SRSS1;   
  TH2F* h_DeltaRlljj_MM_SRSS2; 
  TH2F* h_DeltaRlljj_MM_SRSS3; 
  TH2F* h_DeltaRlljj_MM_SRSS4; 
  TH2F* h_DeltaRlljj_EM_SRSS1; 
  TH2F* h_DeltaRlljj_EM_SRSS2; 
  TH2F* h_DeltaRlljj_EE_SROS1; 
  TH2F* h_DeltaRlljj_MM_SROS1; 
  TH2F* h_DeltaRlljj_EM_SROS1; 

    /*--------------------------------------------------------------------------------*/   
  TH2F* h_DeltaEtajj_EE_SRSS1; 
  TH2F* h_DeltaEtajj_EE_SRSS2; 
  TH2F* h_DeltaEtajj_MM_SRSS1;   
  TH2F* h_DeltaEtajj_MM_SRSS2; 
  TH2F* h_DeltaEtajj_MM_SRSS3; 
  TH2F* h_DeltaEtajj_MM_SRSS4; 
  TH2F* h_DeltaEtajj_EM_SRSS1; 
  TH2F* h_DeltaEtajj_EM_SRSS2; 
  TH2F* h_DeltaEtajj_EE_SROS1; 
  TH2F* h_DeltaEtajj_MM_SROS1; 
  TH2F* h_DeltaEtajj_EM_SROS1;   
  
      /*--------------------------------------------------------------------------------*/   
  TH2F* h_DeltaEtall_EE_SRSS1; 
  TH2F* h_DeltaEtall_EE_SRSS2; 
  TH2F* h_DeltaEtall_MM_SRSS1;   
  TH2F* h_DeltaEtall_MM_SRSS2; 
  TH2F* h_DeltaEtall_MM_SRSS3; 
  TH2F* h_DeltaEtall_MM_SRSS4; 
  TH2F* h_DeltaEtall_EM_SRSS1; 
  TH2F* h_DeltaEtall_EM_SRSS2; 
  TH2F* h_DeltaEtall_EE_SROS1; 
  TH2F* h_DeltaEtall_MM_SROS1; 
  TH2F* h_DeltaEtall_EM_SROS1;   


  /*--------------------------------------------------------------------------------*/ 
  TH2F* h_mTll_EE_SRSS1; 
  TH2F* h_mTll_EE_SRSS2; 
  TH2F* h_mTll_MM_SRSS1;   
  TH2F* h_mTll_MM_SRSS2; 
  TH2F* h_mTll_MM_SRSS3; 
  TH2F* h_mTll_MM_SRSS4; 
  TH2F* h_mTll_EM_SRSS1; 
  TH2F* h_mTll_EM_SRSS2; 
  TH2F* h_mTll_EE_SROS1; 
  TH2F* h_mTll_MM_SROS1; 
  TH2F* h_mTll_EM_SROS1; 


  /*--------------------------------------------------------------------------------*/ 
  TH2F* h_mMETll_EE_SRSS1; 
  TH2F* h_mMETll_EE_SRSS2; 
  TH2F* h_mMETll_MM_SRSS1;   
  TH2F* h_mMETll_MM_SRSS2; 
  TH2F* h_mMETll_MM_SRSS3; 
  TH2F* h_mMETll_MM_SRSS4; 
  TH2F* h_mMETll_EM_SRSS1; 
  TH2F* h_mMETll_EM_SRSS2; 
  TH2F* h_mMETll_EE_SROS1; 
  TH2F* h_mMETll_MM_SROS1; 
  TH2F* h_mMETll_EM_SROS1; 

  /*--------------------------------------------------------------------------------*/ 
  TH2F* h_DeltaYjj_EE_SRSS1; 
  TH2F* h_DeltaYjj_EE_SRSS2; 
  TH2F* h_DeltaYjj_MM_SRSS1;  
  TH2F* h_DeltaYjj_MM_SRSS2; 
  TH2F* h_DeltaYjj_MM_SRSS3; 
  TH2F* h_DeltaYjj_MM_SRSS4; 
  TH2F* h_DeltaYjj_EM_SRSS1; 
  TH2F* h_DeltaYjj_EM_SRSS2; 
  TH2F* h_DeltaYjj_EE_SROS1; 
  TH2F* h_DeltaYjj_MM_SROS1; 
  TH2F* h_DeltaYjj_EM_SROS1; 
  
  /*--------------------------------------------------------------------------------*/ 
  TH2F* h_D0_branch_l0_EE_SRSS1;
  TH2F* h_D0_branch_l0_EE_SRSS2;
  TH2F* h_D0_branch_l0_MM_SRSS1;  
  TH2F* h_D0_branch_l0_MM_SRSS2;
  TH2F* h_D0_branch_l0_MM_SRSS3;
  TH2F* h_D0_branch_l0_MM_SRSS4;
  TH2F* h_D0_branch_l0_EM_SRSS1;
  TH2F* h_D0_branch_l0_EM_SRSS2;
  TH2F* h_D0_branch_l0_EE_SROS1;
  TH2F* h_D0_branch_l0_MM_SROS1;
  TH2F* h_D0_branch_l0_EM_SROS1;
  
  /*--------------------------------------------------------------------------------*/ 
  TH2F* h_D0_branch_l1_EE_SRSS1;
  TH2F* h_D0_branch_l1_EE_SRSS2;
  TH2F* h_D0_branch_l1_MM_SRSS1;  
  TH2F* h_D0_branch_l1_MM_SRSS2;
  TH2F* h_D0_branch_l1_MM_SRSS3;
  TH2F* h_D0_branch_l1_MM_SRSS4;
  TH2F* h_D0_branch_l1_EM_SRSS1;
  TH2F* h_D0_branch_l1_EM_SRSS2;
  TH2F* h_D0_branch_l1_EE_SROS1;
  TH2F* h_D0_branch_l1_MM_SROS1;
  TH2F* h_D0_branch_l1_EM_SROS1;
  
  /*--------------------------------------------------------------------------------*/ 
  TH2F* h_D0Signif_branch_l0_EE_SRSS1;
  TH2F* h_D0Signif_branch_l0_EE_SRSS2;
  TH2F* h_D0Signif_branch_l0_MM_SRSS1;  
  TH2F* h_D0Signif_branch_l0_MM_SRSS2;
  TH2F* h_D0Signif_branch_l0_MM_SRSS3;
  TH2F* h_D0Signif_branch_l0_MM_SRSS4;
  TH2F* h_D0Signif_branch_l0_EM_SRSS1;
  TH2F* h_D0Signif_branch_l0_EM_SRSS2;
  TH2F* h_D0Signif_branch_l0_EE_SROS1;
  TH2F* h_D0Signif_branch_l0_MM_SROS1;
  TH2F* h_D0Signif_branch_l0_EM_SROS1;
  
  /*--------------------------------------------------------------------------------*/ 
  TH2F* h_D0Signif_branch_l1_EE_SRSS1;
  TH2F* h_D0Signif_branch_l1_EE_SRSS2;
  TH2F* h_D0Signif_branch_l1_MM_SRSS1;  
  TH2F* h_D0Signif_branch_l1_MM_SRSS2;
  TH2F* h_D0Signif_branch_l1_MM_SRSS3;
  TH2F* h_D0Signif_branch_l1_MM_SRSS4;
  TH2F* h_D0Signif_branch_l1_EM_SRSS1;
  TH2F* h_D0Signif_branch_l1_EM_SRSS2;
  TH2F* h_D0Signif_branch_l1_EE_SROS1;
  TH2F* h_D0Signif_branch_l1_MM_SROS1;
  TH2F* h_D0Signif_branch_l1_EM_SROS1;
  
    
    SUSYObjDef m_susyObj;      // SUSY object definitions
    
    TSelector_SusyNtuple();
    virtual ~TSelector_SusyNtuple(){};

    // Output Text File
    ofstream out;

    // Begin is called before looping on entries
    virtual void    Begin(TTree *tree);
    virtual void    SlaveBegin(TTree *tree);
    // Terminate is called after looping is finished
    virtual void    Terminate();
    virtual void    SlaveTerminate();

    // Main event loop function
    virtual Bool_t  Process(Long64_t entry);
		     
    // Cut methods
    bool CheckRealLeptons(const ElectronVector& signal_electrons, MuonVector& signal_muons);
    bool CheckChargeFlipElectrons(const ElectronVector& signal_electrons);
    float getBTagWeight(const Event* evt);
    float recalcMetRel(TLorentzVector metLV, TLorentzVector l1, TLorentzVector l2, const JetVector& jets, bool useForward);
    float calcMT2(TLorentzVector metlv, TLorentzVector l0, TLorentzVector l1);
    float calcMT2J(TLorentzVector metlv, TLorentzVector l0, TLorentzVector l1, TLorentzVector j0, TLorentzVector j1);
    bool checkLeptonPt(const LeptonVector& leptons);
    float mTWW(TLorentzVector _ll, TLorentzVector _nu, bool MvvTrue);
    float calcHT(TLorentzVector l1, TLorentzVector l2, TLorentzVector met, const JetVector &signalJets);
    float calcMeff(TLorentzVector met, const JetVector &signalJets);
    float calcMZTauTau_coll(const TLorentzVector &signal_lep_0, const TLorentzVector &signal_lep_1, const TLorentzVector &met);
    float calcMZTauTau_mmc(TLorentzVector lep1, TLorentzVector lep2, int tau0_decay_type, int tau1_decay_type);
    float calcMt(TLorentzVector _l, TLorentzVector _nu);
    float calcSumMv1(const JetVector &signalJets);
    
    bool defineHistos();
    bool writeHistos();
    bool addHistos();
    void fillHistos_EE(int cutnumber, float weight);
    void fillHistos_MM(int cutnumber, float weight);
    void fillHistos_EM(int cutnumber, float weight);
    
    void calcJet_variables(TLorentzVector met_TLV);
    void calc_EE_variables(LeptonVector &leptons, Electron* el0, Electron* el1, TLorentzVector el0_TLV, TLorentzVector el1_TLV, TLorentzVector met_TLV, TLorentzVector signalJet0_TLV, TLorentzVector signalJet1_TLV, bool useForwardJets, SusyNtObject* susyNt, float weight_EE);
    void calc_MM_variables(LeptonVector &leptons, Muon* mu0, Muon* mu1, TLorentzVector mu0_TLV, TLorentzVector mu1_TLV, TLorentzVector met_TLV, TLorentzVector signalJet0_TLV, TLorentzVector signalJet1_TLV, bool useForwardJets, SusyNtObject* susyNt, float weight_MM);
    void calc_EM_variables(LeptonVector &leptons, Electron* el, Muon* mu, TLorentzVector mu_TLV, TLorentzVector el_TLV, TLorentzVector met_TLV, TLorentzVector signalJet0_TLV, TLorentzVector signalJet1_TLV, bool useForwardJets, SusyNtObject* susyNt, float weight_EM);
    
    void fillHistos_EE_SRSS1(float cut_EE, float weight_ALL_EE);    
    void fillHistos_MM_SRSS1(float cut_MM, float weight_ALL_MM);    
    void fillHistos_EM_SRSS1(float cut_EM, float weight_ALL_EM);
    
    float getFakeWeight(const LeptonVector &baseLeps, SusyMatrixMethod::FAKE_REGION region, float metRel, SusyMatrixMethod::SYSTEMATIC sys);
    
    float calc_D0(bool unbiased, const Lepton* lep);
    static bool compareElecMomentum (Electron* e0, Electron* e1);
    static bool compareMuonMomentum (Muon* mu0, Muon* mu1);
    ElectronVector getSoftElectrons(SusyNtObject* susyNt, SusyNtSys sys);
    ElectronVector getOverlapElectrons(SusyNtObject* susyNt, SusyNtSys sys);
    MuonVector getSoftMuons(SusyNtObject* susyNt, SusyNtSys sys);
    MuonVector getOverlapMuons(SusyNtObject* susyNt, SusyNtSys sys);
    bool isCMSJet(const Susy::Jet* jet);
    int numberOfCMSJets(const JetVector& jets);    
    vector<TLorentzVector> overlapRemoval(vector<TLorentzVector> objects_type1, vector<TLorentzVector> indices_2, double dr, bool sameType, bool removeSoft) ;
    bool doEventCleaning_andFillHistos(int flag, float weight_ALL_EE, float weight_ALL_MM, float weight_ALL_EM);

    // Selection region
    void setSelection(std::string s) { m_sel = s; }

    // debug check
    bool debugEvent();
    Analysis::AnalysisMuonConfigurableScaleFactors* m_muon_scaleFactor;

    int nSignalJets;
    float MET;
    float pTj0;
    float pTj1;
    float eta_j0;
    float eta_j1;
    float mjj;
    float DeltaPhijj;
    float pTjj;
    float DeltaPhiMETj0;
    float DeltaPhiMETj1;
    float DeltaRjj;
    float DeltaEtajj;
    float DeltaYjj;
    float DeltaPhiMETjj;
    int NBJets;
    int NCJets;
    int NFJets;
    float meff;
    
    float mZTT_coll;
    float mZTT_mmc; 
    
    //#####################################
    float pTl0_EE;
    float pTl1_EE;
    float etal0_EE;
    float etal1_EE;
    float DeltaR_EE;
    float pTll_EE;
    float Mll_EE;
    float METrel_EE;
    float MET_EE;
    float HT_EE;
    float mTWW_EE;
    float mT_EE;
    float mTmin_EE;
    float mTmax_EE;
    float mTl0MET_EE;
    float mTl1MET_EE;
    float mMET_EE;
    float DeltaPhi_EE;
    float DeltaPhiMETl0_EE;
    float DeltaPhiMETl1_EE;
    float DeltaPhiMET_EE;
    float mT2_EE;  
    float mT2J_EE;       
    float DeltaPhilljj_EE;
    float DeltaPhil0jj_EE;
    float DeltaPhil1jj_EE;
    float DeltaRlljj_EE;
    float Mljj_EE;
    float DeltaEtall_EE;
    
    float D0_branch_l0_EE;
    float D0_branch_l1_EE;
    float D0err_branch_l0_EE;
    float D0err_branch_l1_EE;
    
    float sD0Signif_branch_l0_EE;
    float sD0Signif_branch_l1_EE;
    
    int Nleptons_Zcand_EE;
    float ml0lZcand_EE;      
    float mTl0lZcand_EE;
    int ICl0lZcand_EE;
    float pTl0lZcand_EE;
    float etal0lZcand_EE;
    float ptcone30l0lZcand_EE;
    float d0Sigl0lZcand_EE;
    float z0SinThetal0lZcand_EE;    
    float ml1lZcand_EE;
    float mTl1lZcand_EE;
    int ICl1lZcand_EE;
    float pTl1lZcand_EE;
    float etal1lZcand_EE;
    float ptcone30l1lZcand_EE;
    float d0Sigl1lZcand_EE;
    float z0SinThetal1lZcand_EE;
    
    int Nleptons_ZcandSoft_EE;
    float ml0lZcandSoft_EE;      
    float mTl0lZcandSoft_EE;
    int ICl0lZcandSoft_EE;
    float pTl0lZcandSoft_EE;
    float etal0lZcandSoft_EE;
    float ptcone30l0lZcandSoft_EE;
    float d0Sigl0lZcandSoft_EE;
    float z0SinThetal0lZcandSoft_EE;    
    float ml1lZcandSoft_EE;
    float mTl1lZcandSoft_EE;
    int ICl1lZcandSoft_EE;
    float pTl1lZcandSoft_EE;
    float etal1lZcandSoft_EE;
    float ptcone30l1lZcandSoft_EE;
    float d0Sigl1lZcandSoft_EE;
    float z0SinThetal1lZcandSoft_EE;
    
    int Nleptons_ZcandSimple_EE;
    float ml0lZcandSimple_EE;      
    float mTl0lZcandSimple_EE;
    int ICl0lZcandSimple_EE;
    float pTl0lZcandSimple_EE;
    float etal0lZcandSimple_EE;
    float ptcone30l0lZcandSimple_EE;
    float d0Sigl0lZcandSimple_EE;
    float z0SinThetal0lZcandSimple_EE;    
    float ml1lZcandSimple_EE;
    float mTl1lZcandSimple_EE;
    int ICl1lZcandSimple_EE;
    float pTl1lZcandSimple_EE;
    float etal1lZcandSimple_EE;
    float ptcone30l1lZcandSimple_EE;
    float d0Sigl1lZcandSimple_EE;
    float z0SinThetal1lZcandSimple_EE;    
    
    int Nleptons_ZcandIso_EE;
    float ml0lZcandIso_EE;      
    float mTl0lZcandIso_EE;
    int ICl0lZcandIso_EE;
    float pTl0lZcandIso_EE;
    float etal0lZcandIso_EE;
    float ptcone30l0lZcandIso_EE;
    float d0Sigl0lZcandIso_EE;
    float z0SinThetal0lZcandIso_EE;    
    float ml1lZcandIso_EE;
    float mTl1lZcandIso_EE;
    int ICl1lZcandIso_EE;
    float pTl1lZcandIso_EE;
    float etal1lZcandIso_EE;
    float ptcone30l1lZcandIso_EE;
    float d0Sigl1lZcandIso_EE;
    float z0SinThetal1lZcandIso_EE;      
    
    float etcone30l0lZcand_EE;
    float etcone30l0lZcandSoft_EE;
    float etcone30l0lZcandSimple_EE;
    float etcone30l0lZcandIso_EE;
    
    float etcone30l1lZcand_EE;
    float etcone30l1lZcandSoft_EE;
    float etcone30l1lZcandSimple_EE;
    float etcone30l1lZcandIso_EE;
    
    bool ZcandLep_l0PassesOR_EE;
    bool ZcandLep_l0passesMllCut_EE;
    bool ZcandLep_l0passesPT_EE;
    bool ZcandLep_l0passesEta_EE;
    bool ZcandLep_l0passesPTcone_EE;
    bool ZcandLep_l0passesETcone_EE;
    bool ZcandLep_l0passesD0_EE; 
    bool ZcandLep_l0passesZ0_EE; 
    bool ZcandLep_l0PassesMedium_EE;
    bool ZcandLep_l0PassesTight_EE; 
    bool ZcandLep_l0PassesORAndMllCut_EE;

    bool ZcandLep_l1PassesOR_EE;
    bool ZcandLep_l1passesMllCut_EE;
    bool ZcandLep_l1passesPT_EE;
    bool ZcandLep_l1passesEta_EE;
    bool ZcandLep_l1passesPTcone_EE;
    bool ZcandLep_l1passesETcone_EE;
    bool ZcandLep_l1passesD0_EE; 
    bool ZcandLep_l1passesZ0_EE; 
    bool ZcandLep_l1PassesMedium_EE;
    bool ZcandLep_l1PassesTight_EE;
    bool ZcandLep_l1PassesORAndMllCut_EE;

    
    //#####################################
    
    float pTl0_MM;
    float pTl1_MM;
    float etal0_MM;
    float etal1_MM;
    float DeltaR_MM;
    float pTll_MM;
    float Mll_MM;
    float METrel_MM;
    float MET_MM;
    float HT_MM;
    float mTWW_MM;
    float mT_MM;
    float mTmin_MM;
    float mTmax_MM;
    float mTl0MET_MM;
    float mTl1MET_MM;
    float mMET_MM;
    float DeltaPhi_MM;
    float DeltaPhiMETl0_MM;
    float DeltaPhiMETl1_MM;
    float DeltaPhiMET_MM;
    float mT2_MM;  
    float mT2J_MM;       
    float DeltaPhilljj_MM;
    float DeltaPhil0jj_MM;
    float DeltaPhil1jj_MM;
    float DeltaRlljj_MM;
    float Mljj_MM;
    float DeltaEtall_MM;
    
    float D0_branch_l0_MM;
    float D0_branch_l1_MM;
    float D0err_branch_l0_MM;
    float D0err_branch_l1_MM;
    
    float sD0Signif_branch_l0_MM;
    float sD0Signif_branch_l1_MM;
    
    int Nleptons_Zcand_MM;
    float ml0lZcand_MM;      
    float mTl0lZcand_MM;
    int ICl0lZcand_MM;
    float pTl0lZcand_MM;
    float etal0lZcand_MM;
    float ptcone30l0lZcand_MM;
    float d0Sigl0lZcand_MM;
    float z0SinThetal0lZcand_MM;    
    float ml1lZcand_MM;
    float mTl1lZcand_MM;
    int ICl1lZcand_MM;
    float pTl1lZcand_MM;
    float etal1lZcand_MM;
    float ptcone30l1lZcand_MM;
    float d0Sigl1lZcand_MM;
    float z0SinThetal1lZcand_MM;
    
    int Nleptons_ZcandSoft_MM;
    float ml0lZcandSoft_MM;      
    float mTl0lZcandSoft_MM;
    int ICl0lZcandSoft_MM;
    float pTl0lZcandSoft_MM;
    float etal0lZcandSoft_MM;
    float ptcone30l0lZcandSoft_MM;
    float d0Sigl0lZcandSoft_MM;
    float z0SinThetal0lZcandSoft_MM;    
    float ml1lZcandSoft_MM;
    float mTl1lZcandSoft_MM;
    int ICl1lZcandSoft_MM;
    float pTl1lZcandSoft_MM;
    float etal1lZcandSoft_MM;
    float ptcone30l1lZcandSoft_MM;
    float d0Sigl1lZcandSoft_MM;
    float z0SinThetal1lZcandSoft_MM;
    
    int Nleptons_ZcandSimple_MM;
    float ml0lZcandSimple_MM;      
    float mTl0lZcandSimple_MM;
    int ICl0lZcandSimple_MM;
    float pTl0lZcandSimple_MM;
    float etal0lZcandSimple_MM;
    float ptcone30l0lZcandSimple_MM;
    float d0Sigl0lZcandSimple_MM;
    float z0SinThetal0lZcandSimple_MM;    
    float ml1lZcandSimple_MM;
    float mTl1lZcandSimple_MM;
    int ICl1lZcandSimple_MM;
    float pTl1lZcandSimple_MM;
    float etal1lZcandSimple_MM;
    float ptcone30l1lZcandSimple_MM;
    float d0Sigl1lZcandSimple_MM;
    float z0SinThetal1lZcandSimple_MM;    
    
    int Nleptons_ZcandIso_MM;
    float ml0lZcandIso_MM;      
    float mTl0lZcandIso_MM;
    int ICl0lZcandIso_MM;
    float pTl0lZcandIso_MM;
    float etal0lZcandIso_MM;
    float ptcone30l0lZcandIso_MM;
    float d0Sigl0lZcandIso_MM;
    float z0SinThetal0lZcandIso_MM;    
    float ml1lZcandIso_MM;
    float mTl1lZcandIso_MM;
    int ICl1lZcandIso_MM;
    float pTl1lZcandIso_MM;
    float etal1lZcandIso_MM;
    float ptcone30l1lZcandIso_MM;
    float d0Sigl1lZcandIso_MM;
    float z0SinThetal1lZcandIso_MM;      
    
    bool ZcandLep_l0PassesOR_MM;
    bool ZcandLep_l0passesMllCut_MM;
    bool ZcandLep_l0passesPT_MM;
    bool ZcandLep_l0passesEta_MM;
    bool ZcandLep_l0passesPTcone_MM;
    bool ZcandLep_l0passesETcone_MM;
    bool ZcandLep_l0passesD0_MM; 
    bool ZcandLep_l0passesZ0_MM; 
    bool ZcandLep_l0PassesMedium_MM;
    bool ZcandLep_l0PassesTight_MM; 
    bool ZcandLep_l0PassesORAndMllCut_MM;

    bool ZcandLep_l1PassesOR_MM;
    bool ZcandLep_l1passesMllCut_MM;
    bool ZcandLep_l1passesPT_MM;
    bool ZcandLep_l1passesEta_MM;
    bool ZcandLep_l1passesPTcone_MM;
    bool ZcandLep_l1passesETcone_MM;
    bool ZcandLep_l1passesD0_MM; 
    bool ZcandLep_l1passesZ0_MM; 
    bool ZcandLep_l1PassesMedium_MM;
    bool ZcandLep_l1PassesTight_MM;
    bool ZcandLep_l1PassesORAndMllCut_MM;

    
    //#####################################
    
    float pTl0_EM;
    float pTl1_EM;
    float etal0_EM;
    float etal1_EM;
    float DeltaR_EM;
    float pTll_EM;
    float Mll_EM;
    float METrel_EM;
    float MET_EM;
    float HT_EM;
    float mTWW_EM;
    float mT_EM;
    float mTmin_EM;
    float mTmax_EM;
    float mTl0MET_EM;
    float mTl1MET_EM;
    float mMET_EM;
    float DeltaPhi_EM;
    float DeltaPhiMETl0_EM;
    float DeltaPhiMETl1_EM;
    float DeltaPhiMET_EM;
    float mT2_EM;  
    float mT2J_EM;       
    float DeltaPhilljj_EM;
    float DeltaPhil0jj_EM;
    float DeltaPhil1jj_EM;
    float DeltaRlljj_EM;
    float Mljj_EM;
    float DeltaEtall_EM;
    
    float D0_branch_l0_EM;
    float D0_branch_l1_EM;
    float D0err_branch_l0_EM;
    float D0err_branch_l1_EM;
    
    float sD0Signif_branch_l0_EM;
    float sD0Signif_branch_l1_EM;
    
    int Nleptons_Zcand_EM;
    float ml0lZcand_EM;      
    float mTl0lZcand_EM;
    int ICl0lZcand_EM;
    float pTl0lZcand_EM;
    float etal0lZcand_EM;
    float ptcone30l0lZcand_EM;
    float d0Sigl0lZcand_EM;
    float z0SinThetal0lZcand_EM;    
    float ml1lZcand_EM;
    float mTl1lZcand_EM;
    int ICl1lZcand_EM;
    float pTl1lZcand_EM;
    float etal1lZcand_EM;
    float ptcone30l1lZcand_EM;
    float d0Sigl1lZcand_EM;
    float z0SinThetal1lZcand_EM;
    
    int Nleptons_ZcandSoft_EM;
    float ml0lZcandSoft_EM;      
    float mTl0lZcandSoft_EM;
    int ICl0lZcandSoft_EM;
    float pTl0lZcandSoft_EM;
    float etal0lZcandSoft_EM;
    float ptcone30l0lZcandSoft_EM;
    float d0Sigl0lZcandSoft_EM;
    float z0SinThetal0lZcandSoft_EM;    
    float ml1lZcandSoft_EM;
    float mTl1lZcandSoft_EM;
    int ICl1lZcandSoft_EM;
    float pTl1lZcandSoft_EM;
    float etal1lZcandSoft_EM;
    float ptcone30l1lZcandSoft_EM;
    float d0Sigl1lZcandSoft_EM;
    float z0SinThetal1lZcandSoft_EM;
    
    int Nleptons_ZcandSimple_EM;
    float ml0lZcandSimple_EM;      
    float mTl0lZcandSimple_EM;
    int ICl0lZcandSimple_EM;
    float pTl0lZcandSimple_EM;
    float etal0lZcandSimple_EM;
    float ptcone30l0lZcandSimple_EM;
    float d0Sigl0lZcandSimple_EM;
    float z0SinThetal0lZcandSimple_EM;    
    float ml1lZcandSimple_EM;
    float mTl1lZcandSimple_EM;
    int ICl1lZcandSimple_EM;
    float pTl1lZcandSimple_EM;
    float etal1lZcandSimple_EM;
    float ptcone30l1lZcandSimple_EM;
    float d0Sigl1lZcandSimple_EM;
    float z0SinThetal1lZcandSimple_EM;  
    
    int Nleptons_ZcandIso_EM;
    float ml0lZcandIso_EM;      
    float mTl0lZcandIso_EM;
    int ICl0lZcandIso_EM;
    float pTl0lZcandIso_EM;
    float etal0lZcandIso_EM;
    float ptcone30l0lZcandIso_EM;
    float d0Sigl0lZcandIso_EM;
    float z0SinThetal0lZcandIso_EM;    
    float ml1lZcandIso_EM;
    float mTl1lZcandIso_EM;
    int ICl1lZcandIso_EM;
    float pTl1lZcandIso_EM;
    float etal1lZcandIso_EM;
    float ptcone30l1lZcandIso_EM;
    float d0Sigl1lZcandIso_EM;
    float z0SinThetal1lZcandIso_EM; 

    float etcone30l1lZcand_EM;
    float etcone30l1lZcandSoft_EM;
    float etcone30l1lZcandSimple_EM;
    float etcone30l1lZcandIso_EM;

    bool ZcandLep_l0PassesOR_EM;
    bool ZcandLep_l0passesMllCut_EM;
    bool ZcandLep_l0passesPT_EM;
    bool ZcandLep_l0passesEta_EM;
    bool ZcandLep_l0passesPTcone_EM;
    bool ZcandLep_l0passesETcone_EM;
    bool ZcandLep_l0passesD0_EM; 
    bool ZcandLep_l0passesZ0_EM; 
    bool ZcandLep_l0PassesMedium_EM;
    bool ZcandLep_l0PassesTight_EM;
    bool ZcandLep_l0PassesORAndMllCut_EM;

    bool ZcandLep_l1PassesOR_EM;
    bool ZcandLep_l1passesMllCut_EM;
    bool ZcandLep_l1passesPT_EM;
    bool ZcandLep_l1passesEta_EM;
    bool ZcandLep_l1passesPTcone_EM;
    bool ZcandLep_l1passesETcone_EM;
    bool ZcandLep_l1passesD0_EM; 
    bool ZcandLep_l1passesZ0_EM; 
    bool ZcandLep_l1PassesMedium_EM;
    bool ZcandLep_l1PassesTight_EM;
    bool ZcandLep_l1PassesORAndMllCut_EM;
   
    
    //#####################################
    
    ClassDef(TSelector_SusyNtuple, 1);

  protected:
    int sample_identifier;
    std::string         m_sel;          // event selection string

    DilTrigLogic*      m_trigObjWithoutRU;      // My trigger logic class
    chargeFlip m_chargeFlip;
    SusyMatrixMethod::DiLeptonMatrixMethod* m_matrix;
    //initialize missing mass calculator MMC for identification of Z->tau tau events
//     mmc MMC_sumet;
//     TGuiUtils* GuiUtils;

    // Cut variables
    
    bool                m_selectB;      // switch to select b-tagged jets
    bool                m_vetoB;        // switch to veto b-tagged jets
    bool                m_selectSFOS;   // switch to select SFOS pairs
    bool                m_vetoSFOS;     // switch to veto SFOS pairs

    bool                m_writeOut;     // switch to control output dump

    
    RecoTruthMatch                m_recoTruthMatch;       // Lepton truth matching tool
    
  unsigned int mcid_of_first_entry;
  float sumw_from_histo;
  
  bool m_kIsData;
  bool runWithPoD;
  bool calcFakeContribution; 
  
  enum LEP_TYPE{PR=0, CONV, HF, LF, TYPE_Undef};
  
};

#endif
