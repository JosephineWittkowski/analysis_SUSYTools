#define SusySel_cxx
// The class definition in SusySel.h has been generated automatically
// by the ROOT utility TTree::MakeSelector(). This class is derived
// from the ROOT class TSelector. For more information on the TSelector
// framework see $ROOTSYS/README/README.SELECTOR or the ROOT User Manual.

// The following methods are defined in this file:
// Begin(): called every time a loop on the tree starts,
// a convenient place to create your histograms.
// SlaveBegin(): called after Begin(), when on PROOF called only on the
// slave servers.
// Process(): called for each event, in this function you decide what
// to read and fill your histograms.
// SlaveTerminate: called at the end of the loop on the tree, when on PROOF
// called only on the slave servers.
// Terminate(): called at the end of the loop on the tree,
// a convenient place to draw/fit your histograms.
//
// To use this file, try the following session on your Tree T:
//
// Root > T->Process("SusySel.C")
// Root > T->Process("SusySel.C","some options")
// Root > T->Process("SusySel.C+")
//

#include "SusySel.h"
#include <TH2.h>
#include <TStyle.h>
#include "histos_WH_analysis_SusySel.C"

using namespace std;

void SusySel::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
  if (!tree) return;
  fChain = tree;
// fChain->SetMakeClass(1);
// m_eventParameters = 0;
// fChain->SetBranchStatus("*",1); //all branches inactivated
// fChain->SetBranchStatus("weight",1);

  fChain->SetBranchAddress("pars", &m_eventParameters, &m_eventParameters_b);
  fChain->SetBranchAddress("l0", &m_l0, &m_l0_b);
  fChain->SetBranchAddress("l1", &m_l1, &m_l1_b);
  fChain->SetBranchAddress("met", &m_met, &m_met_b);
  fChain->SetBranchAddress("jets", &m_jets, &m_jets_b);

}

void SusySel::Begin(TTree * /*tree*/)
{
   // The Begin() function is called at the start of the query.
   // When running with PROOF Begin() is only called on the client.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();
// m_eventParameters = new EventParameters();
}

void SusySel::SlaveBegin(TTree * /*tree*/)
{
   // The SlaveBegin() function is called after the Begin() function.
   // When running with PROOF SlaveBegin() is called on each slave server.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();
   defineHistos();

}

Bool_t SusySel::Process(Long64_t entry)
{
   // The Process() function is called for each entry in the tree (or possibly
   // keyed object in the case of PROOF) to be processed. The entry argument
   // specifies which entry in the currently loaded tree is to be processed.
   // It can be passed to either SusySel::GetEntry() or TBranch::GetEntry()
   // to read either all or the required parts of the data. When processing
   // keyed objects with PROOF, the object is already loaded and is available
   // via the fObject pointer.
   //
   // This function should contain the "body" of the analysis. It can contain
   // simple or elaborate selection criteria, run algorithms on the data
   // of the event and typically fill histograms.
   //
   // The processing can be stopped by calling Abort().
   //
   // Use fStatus to set the return value of TTree::Process().
   //
   // The return value is currently not used.
  
    GetEntry(entry);
    m_eventParameters_b->GetEntry(entry);
    m_l0_b->GetEntry(entry);
    m_l1_b->GetEntry(entry);
    m_met_b->GetEntry(entry);
    m_jets_b->GetEntry(entry);
// cout << "m_eventParameters.weight= " << m_eventParameters->weight << endl;
// cout << "m_eventParameters.eventNumber= " << m_eventParameters->eventNumber << endl;
//
// cout<<"l0 : "<<fourMom2str(m_l0 )<<endl;
// cout<<"l1 : "<<fourMom2str(m_l1 )<<endl;
// cout<<"met : "<<fourMom2str(m_met )<<endl;
    
    
    TLorentzVector met_TLV;
    met_TLV.SetPxPyPzE(m_met->px, m_met->py, m_met->pz, m_met->E);
    
    if(m_l0->isMu && m_l1->isMu){
      //   FourMom jet0 =     (*m_jets).at(0);
//       cout << "jet0->px= " << jet0.px << endl;
      float cutnumber_MM;
      cutnumber_MM = 1.; fillHistos_MM(cutnumber_MM, m_eventParameters->weight);
      
      TLorentzVector mu0_TLV, mu1_TLV;
      mu0_TLV.SetPxPyPzE(m_l0->px, m_l0->py, m_l0->pz, m_l0->E);
      mu1_TLV.SetPxPyPzE(m_l1->px, m_l1->py, m_l1->pz, m_l1->E);
      calc_MM_variables(mu0_TLV, mu1_TLV, met_TLV, m_jets);
      
      if(mu0_TLV.Pt()>30.){
	cutnumber_MM = 1.; fillHistos_MM(cutnumber_MM, m_eventParameters->weight);
	if(mu1_TLV.Pt()>20.){
	  cutnumber_MM = 2.; fillHistos_MM(cutnumber_MM, m_eventParameters->weight);
// 	  float HT_MM = calcHT(mu0_TLV, mu1_TLV, met_TLV, m_jets);
	  cout << "HT_MM= " << HT_MM << endl;
// 	  if(HT_MM> 170.){
// 	    cutnumber_MM = 3.; fillHistos_MM(cutnumber_MM, m_eventParameters->weight);	    
// 	  }
	}
      }
//        	l0_pT>30
//  l1_pT>20
//  HT>170
//  metRel>40
//  Min(mT(l0), mT(l1)) >80
//  	mlj < 120
    }

   return kTRUE;
}

//-----------------------------------------
string SusySel::fourMom2str(const FourMom* fm)
{
    std::ostringstream oss;
    string lt(fm->isMu ? "mu" :
              fm->isEl ? "el" :
              fm->isJet ? "jet" : "??");
    if(fm) oss<<lt<<" px "<<fm->px<<" py "<<fm->py<<" pz "<<fm->pz<<" E "<<fm->E;
    return oss.str();
}


/*--------------------------------------------------------------------------------*/
float SusySel::calcHT(TLorentzVector l1, TLorentzVector l2, TLorentzVector met, vector<FourMom> *signalJets){
  //Anyes: https://svnweb.cern.ch/trac/atlasinst/browser/Institutes/UCIrvine/ataffard/SusyWeakProdAna/trunk/Root/ToyNt.cxx#L404
  
  float HT = 0;
  HT += l1.Pt();
  HT += l2.Pt();
  
//   FourMom jet0 =     (*m_jets).at(0);
//       cout << "jet0->px= " << jet0.px << endl;
      
  for(uint i=0; i<(*signalJets).size(); i++){
    FourMom signalJet =     (*signalJets).at(0);
    TLorentzVector jet_TLV;
    jet_TLV.SetPxPyPzE(m_met->px, m_met->py, m_met->pz, m_met->E);
    if(jet_TLV.Pt() > 20) HT += jet_TLV.Pt();
  }
  
  HT += met.E();
  return HT;

}

void SusySel::SlaveTerminate()
{
  TString outputfile="output_SusySel.root";
    cout << " " << endl;
    cout << "ouputfile: " << outputfile << endl;
    cout << " " << endl;
   TFile* output_file = new TFile(outputfile, "recreate") ;//update or recreate?

   output_file->cd();

   writeHistos();

   output_file->Write() ;
   output_file->Close();

}

void SusySel::Terminate()
{
  cout << "finished" << endl;
   // The Terminate() function is the last function to be called during
   // a query. It always runs on the client, it can be used to present
   // the results graphically or save the results to file.

}