#ifndef SusyAna_TSelector_SusyNtuple_cutflow_h
#define SusyAna_TSelector_SusyNtuple_cutflow_h

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

#ifndef __CINT__
#include "ChargeFlip/ChargeFlip.h"
#else
class chargeFlip ;
#endif

#include <fstream>

class TSelector_SusyNtuple_cutflow : public SusyNtAna
{

  public:
    TH1F* cutflow_EE;
    TH1F* cutflow_EE_ALL;
    
    TH1F* cutflow_MM;
    TH1F* cutflow_MM_ALL;
    
    TH1F* cutflow_EM;
    TH1F* cutflow_EM_ALL;
    
    TH1F* cutflow_ME;
    TH1F* cutflow_ME_ALL;
    
    SUSYObjDef m_susyObj;      // SUSY object definitions
    
    TSelector_SusyNtuple_cutflow();
    virtual ~TSelector_SusyNtuple_cutflow(){};

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
    bool checkLeptonPt(const LeptonVector& leptons);
    float mTWW(TLorentzVector _ll, TLorentzVector _nu, bool MvvTrue);
    float calcHT(TLorentzVector l1, TLorentzVector l2, TLorentzVector met, const JetVector &signalJets);
    float calcMt(TLorentzVector _l, TLorentzVector _nu);

    void calcJet_variables(TLorentzVector signalJet0_TLV, TLorentzVector signalJet1_TLV, TLorentzVector met_TLV);
    void calc_EE_variables(LeptonVector &leptons, Electron* el0, Electron* el1, TLorentzVector el0_TLV, TLorentzVector el1_TLV, TLorentzVector met_TLV, TLorentzVector signalJet0_TLV, TLorentzVector signalJet1_TLV, bool useForwardJets );
    void calc_MM_variables(LeptonVector &leptons, Muon* mu0, Muon* mu1, TLorentzVector mu0_TLV, TLorentzVector mu1_TLV, TLorentzVector met_TLV, TLorentzVector signalJet0_TLV, TLorentzVector signalJet1_TLV, bool useForwardJets);
    void calc_EM_variables(LeptonVector &leptons, Electron* el, Muon* mu, TLorentzVector mu_TLV, TLorentzVector el_TLV, TLorentzVector met_TLV, TLorentzVector signalJet0_TLV, TLorentzVector signalJet1_TLV, bool useForwardJets);
    
    void fillHistos_EE_SRSS1(int cutnumber, int mcid, float weight);
    void fillHistos_EE_SRSS2(int cutnumber, int mcid, float weight);
    void fillHistos_EE_SROS1(int cutnumber, int mcid, float weight);
    void fillHistos_MM_SRSS1(int cutnumber, int mcid, float weight);
    void fillHistos_MM_SRSS2(int cutnumber, int mcid, float weight);
    void fillHistos_MM_SRSS3(int cutnumber, int mcid, float weight);
    void fillHistos_MM_SRSS4(int cutnumber, int mcid, float weight);
    void fillHistos_MM_SROS1(int cutnumber, int mcid, float weight);
    void fillHistos_EM_SRSS1(int cutnumber, int mcid, float weight);
    void fillHistos_EM_SRSS2(int cutnumber, int mcid, float weight);
    void fillHistos_EM_SROS1(int cutnumber, int mcid, float weight);
    float getFakeWeight(const LeptonVector &baseLeps, SusyMatrixMethod::FAKE_REGION region, float metRel, SusyMatrixMethod::SYSTEMATIC sys);
    // Selection region
    const Jet* getClosestJet(const Lepton* lep);
    float recalc_sD0(bool unbiased, const Lepton* lep, const Jet* closestJet_lep);
    void setSelection(std::string s) { m_sel = s; }

    // debug check
    bool debugEvent();
    Analysis::AnalysisMuonConfigurableScaleFactors* m_muon_scaleFactor;


    ClassDef(TSelector_SusyNtuple_cutflow, 1);

  protected:
    int sample_identifier;
    std::string         m_sel;          // event selection string

    DilTrigLogic*      m_trigObjWithoutRU;      // My trigger logic class
    chargeFlip m_chargeFlip;
    SusyMatrixMethod::DiLeptonMatrixMethod* m_matrix;
//     TGuiUtils* GuiUtils;

    // Cut variables
    
    bool                m_selectB;      // switch to select b-tagged jets
    bool                m_vetoB;        // switch to veto b-tagged jets
    bool                m_selectSFOS;   // switch to select SFOS pairs
    bool                m_vetoSFOS;     // switch to veto SFOS pairs

    bool                m_writeOut;     // switch to control output dump

    
    RecoTruthMatch                m_recoTruthMatch;       // Lepton truth matching tool
    
  int mcid_of_first_entry;
  float sumw_from_histo;
  
  bool m_kIsData;
  bool runWithPoD;
  bool calcFakeContribution; 
  
};

#endif
