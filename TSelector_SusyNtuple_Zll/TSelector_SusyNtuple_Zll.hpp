#ifndef SusyAna_TSelector_SusyNtuple_Zll_h
#define SusyAna_TSelector_SusyNtuple_Zll_h

//////////////////////////////////////////////////////////
// General script to implement basic selection with all //
// signal region cut methods.                           //
//////////////////////////////////////////////////////////

#define  runWithRoot
// #define runWithProof

#ifdef runWithRoot
#include "SusyNtuple/SusyNtuple/SusyNtAna.h"
#include "SusyNtuple/SusyNtuple/SusyNtTools.h"
#include "SusyNtuple/SusyNtuple/DilTrigLogic.h"
#include "SUSYTools/SUSYTools/SUSYObjDef.h"
#include "LeptonTruthTools/RecoTruthMatch.h"
#include "MuonEfficiencyCorrections/AnalysisMuonConfigurableScaleFactors.h"
#include "SusyNtuple/SusyNtuple/SusyDefs.h"
#include "SusyNtuple/WhTruthExtractor.h"
#include "ChargeFlip/ChargeFlip/chargeFlip.h"
#endif

#ifdef runWithProof
#include "SusyNtuple/SusyNtAna.h"
#include "SusyNtuple/SusyNtTools.h"
#include "SusyNtuple/DilTrigLogic.h"
#include "SUSYTools/SUSYObjDef.h"
#include "LeptonTruthTools/RecoTruthMatch.h"
#include "MuonEfficiencyCorrections/AnalysisMuonConfigurableScaleFactors.h"
#include "SusyNtuple/SusyDefs.h"
#include "SusyNtuple/WhTruthExtractor.h"
#ifndef __CINT__
#include "ChargeFlip/chargeFlip.h"
#else
class chargeFlip ;
#endif


#endif

class TSelector_SusyNtuple_Zll : public SusyNtAna
{

  public:
    TH1F* cutflow_EE;
    TH1F* cutflow_EE_MCWeight;
    
    TH1F* cutflow_MM;
    TH1F* cutflow_MM_MCWeight;
    
    TH1F* cutflow_EM;
    TH1F* cutflow_EM_MCWeight;

    TH1F* cutflow_ME;
    TH1F* cutflow_ME_MCWeight;
    
    TH2F* h_metxy_sumet_0j_EE;
    TH2F* h_metx_sumet_0j_EE;
    TH2F* h_mety_sumet_0j_EE;
    TH1F* h_ptel0_0j;
    TH1F* h_ptel1_0j;
    TH1F* h_mee_0j;
    

    TH2F* h_metxy_sumet_1j_EE;
    TH2F* h_metx_sumet_1j_EE;
    TH2F* h_mety_sumet_1j_EE;
    TH1F* h_ptel0_1j;
    TH1F* h_ptel1_1j;
    TH1F* h_mee_1j;

    TH2F* h_metxy_sumet_2j_EE;
    TH2F* h_metx_sumet_2j_EE; 
    TH2F* h_mety_sumet_2j_EE;
    TH1F* h_ptel0_2j;
    TH1F* h_ptel1_2j;
    TH1F* h_mee_2j;

    TH2F* h_metxy_sumet_3j_EE;
    TH2F* h_metx_sumet_3j_EE; 
    TH2F* h_mety_sumet_3j_EE; 
    TH1F* h_ptel0_3j;
    TH1F* h_ptel1_3j;
    TH1F* h_mee_3j;
    
    TH2F* h_metxy_sumet_0j_MM;
    TH2F* h_metx_sumet_0j_MM;
    TH2F* h_mety_sumet_0j_MM;
    TH1F* h_ptmu0_0j;
    TH1F* h_ptmu1_0j;
    TH1F* h_mmm_0j;
    

    TH2F* h_metxy_sumet_1j_MM;
    TH2F* h_metx_sumet_1j_MM;
    TH2F* h_mety_sumet_1j_MM;
    TH1F* h_ptmu0_1j;
    TH1F* h_ptmu1_1j;
    TH1F* h_mmm_1j;

    TH2F* h_metxy_sumet_2j_MM;
    TH2F* h_metx_sumet_2j_MM; 
    TH2F* h_mety_sumet_2j_MM;
    TH1F* h_ptmu0_2j;
    TH1F* h_ptmu1_2j;
    TH1F* h_mmm_2j;

    TH2F* h_metxy_sumet_3j_MM;
    TH2F* h_metx_sumet_3j_MM; 
    TH2F* h_mety_sumet_3j_MM; 
    TH1F* h_ptmu0_3j;
    TH1F* h_ptmu1_3j;
    TH1F* h_mmm_3j;
    
    SUSYObjDef m_susyObj;      // SUSY object definitions
    
    TSelector_SusyNtuple_Zll();
    virtual ~TSelector_SusyNtuple_Zll(){};

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
    bool isNoZBoson(const LeptonVector& leptons);
    JetVector selectC20AndB20Jets(JetVector& m_baseJets);
    bool checkLeptonPt(const LeptonVector& leptons);
    float mTWW(TLorentzVector _ll, TLorentzVector _nu, bool MvvTrue);
    float calcHT(const LeptonVector &Leptons, const JetVector &signalJets);
    float calcMt(const TLorentzVector &lep, const TLorentzVector &met);
    bool defineHistos();
    bool writeHistos();
    bool addHistos();

    // Selection region
    void setSelection(std::string s) { m_sel = s; }

    // debug check
    bool debugEvent();
    Analysis::AnalysisMuonConfigurableScaleFactors* m_muon_scaleFactor;


    ClassDef(TSelector_SusyNtuple_Zll, 1);

  protected:
    int sample_identifier;
    std::string         m_sel;          // event selection string

    DilTrigLogic*      m_trigObj;      // My trigger logic class
    chargeFlip m_chargeFlip;
//     TGuiUtils* GuiUtils;

    // Cut variables
    
    bool                m_selectB;      // switch to select b-tagged jets
    bool                m_vetoB;        // switch to veto b-tagged jets
    bool                m_selectSFOS;   // switch to select SFOS pairs
    bool                m_vetoSFOS;     // switch to veto SFOS pairs

    bool                m_writeOut;     // switch to control output dump
    bool calcFakeContribution;

    
    RecoTruthMatch                m_recoTruthMatch;       // Lepton truth matching tool
    
  int mcid_of_first_entry;
  float sumw_from_histo;
  
  bool m_kIsData;
  bool runWithPoD;
  
};

#endif
