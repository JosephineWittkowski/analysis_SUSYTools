//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Jan 7 15:37:45 2014 by ROOT version 5.34/11
// from TTree SusySel/TupleMaker tree
// found on file: file.root
//////////////////////////////////////////////////////////

#ifndef SusySel_h
#define SusySel_h

// Root Packages
#include "TTree.h"
// #include "TProofOutputFile.h"
// #include "TSystem.h"
// Susy Common
#include "SusyNtuple/SusyNtTruthAna.h"
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
#include "TH3.h"
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
// #include "TupleMaker.h"

#ifndef __CINT__
#include "ChargeFlip/chargeFlip.h"
#else
class chargeFlip ;
#endif

#include <fstream>

using Susy::Lepton;
  using Susy::Jet;
  using Susy::Met;
struct FourMom {
    double px, py, pz, E;
    bool isMu, isEl, isJet;
    FourMom() : px(0), py(0), pz(0), E(0), isMu(false), isEl(false), isJet(false) {}
#ifndef __CINT__
// cint is not able to parse 'complex' code; see
// http://root.cern.ch/drupal/content/interacting-shared-libraries-rootcint
    FourMom& set4mom(const Lepton &l) { px=l.Px(); py=l.Py(); pz=l.Pz(); E=l.E(); return *this; }
    FourMom& set4mom(const Jet &j) { px=j.Px(); py=j.Py(); pz=j.Pz(); E=j.E(); return *this; }
    FourMom& setMu(const Lepton &l) { isMu=true; isEl = isJet = false; return set4mom(l); }
    FourMom& setEl(const Lepton &l) { isEl=true; isMu = isJet = false; return set4mom(l); }
    FourMom& setJet(const Jet &j) { isJet=true; isMu = isEl = false; return set4mom(j); }
    FourMom& setMet(const Met &m) { isJet=isMu=isEl=false; px=m.lv().Px(); py=m.lv().Py(); E=m.lv().E(); return *this; }
#endif
};

struct EventParameters {
    double weight;
    unsigned int eventNumber;
    unsigned int runNumber;
    EventParameters() : weight(0), eventNumber(0), runNumber(0) {}
#ifndef __CINT__
    EventParameters& setWeight(const double &w) { weight=w; return *this; }
    EventParameters& setEvent(const unsigned int &e) { eventNumber=e; return *this; }
    EventParameters& setRun(const unsigned int &r) { runNumber=r; return *this; }
#endif
};


class SusySel : public TSelector {
public :
  
  
    TH1F* cutflow_EE;
    TH1F* cutflow_EE_ALL;
    
    TH1F* cutflow_MM;
    TH1F* cutflow_MM_ALL;
    
    TH1F* cutflow_EM;
    TH1F* cutflow_EM_ALL;
    
    TH1F* cutflow_ME;
    TH1F* cutflow_ME_ALL;
    
   TTree *fChain; //!pointer to the analyzed TTree or TChain
   
    EventParameters* m_eventParameters;
    FourMom *m_l0, *m_l1, *m_met;
    TBranch* m_eventParameters_b;
    TBranch *m_l0_b, *m_l1_b, *m_met_b;


   SusySel(TTree * /*tree*/ =0) : fChain(0) { }
   virtual ~SusySel() { }
   virtual Int_t Version() const { return 2; }
   virtual void Begin(TTree *tree);
   virtual void SlaveBegin(TTree *tree);
   virtual void Init(TTree *tree);
   virtual Bool_t Notify();
   virtual Bool_t Process(Long64_t entry);
// virtual Int_t GetEntry(Long64_t entry, Int_t getall = 0) { return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0; }
   virtual void SetOption(const char *option) { fOption = option; }
   virtual void SetObject(TObject *obj) { fObject = obj; }
   virtual void SetInputList(TList *input) { fInput = input; }
   virtual TList *GetOutputList() const { return fOutput; }
   virtual void SlaveTerminate();
   virtual void Terminate();
   
   string fourMom2str(const FourMom* fm);
   bool defineHistos();
   
   void fillHistos_EE(int cutnumber, float weight);
   void fillHistos_MM(int cutnumber, float weight);
   void fillHistos_EM(int cutnumber, float weight);
   
   bool writeHistos();
   
   void fillHistos_EE_SRSS1(float cut_EE, float weight_ALL_EE);
   void fillHistos_MM_SRSS1(float cut_MM, float weight_ALL_MM);
   void fillHistos_EM_SRSS1(float cut_EM, float weight_ALL_EM);
   
   

   ClassDef(SusySel,0);
};

#endif

Bool_t SusySel::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}