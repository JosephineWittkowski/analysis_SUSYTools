#define SusySel_cxx


#include "SusySel.h"
#include <TH2.h>
#include <TStyle.h>
#include "histos_WH_analysis_SusySel.C"

using namespace std;

void SusySel::Init(TTree *tree)
{

   // Set branch addresses and branch pointers
  if (!tree) return;
  fChain = tree;
// fChain->SetMakeClass(1);
// m_eventParameters = 0;
// fChain->SetBranchStatus("*",1); //all branches inactivated
// fChain->SetBranchStatus("weight",1);
  m_jets_b = 0;
  fChain->SetBranchAddress("pars", &m_eventParameters, &m_eventParameters_b);
  fChain->SetBranchAddress("l0", &m_l0, &m_l0_b);
  fChain->SetBranchAddress("l1", &m_l1, &m_l1_b);
  fChain->SetBranchAddress("met", &m_met, &m_met_b);
  fChain->SetBranchAddress("jets", &m_jets, &m_jets_b);

}

void SusySel::Begin(TTree * /*tree*/)
{

//   gROOT->ProcessLine("#include <vector>");
   TString option = GetOption();
// m_eventParameters = new EventParameters();
}

void SusySel::SlaveBegin(TTree * /*tree*/)
{
   TString option = GetOption();
   defineHistos();

}

Bool_t SusySel::Process(Long64_t entry)
{

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
    if(entry== 0 || entry==1){
      cout << "event= " << m_eventParameters->eventNumber << endl;
      
      
    if(entry== 0  && m_eventParameters->eventNumber == 83) sample_identifier = 126893; //cutflow comparison  
    if(entry== 0  && (m_eventParameters->eventNumber == 1149513 || m_eventParameters->eventNumber == 3276687)) sample_identifier = 30000; //fake  
    if(entry== 0  && m_eventParameters->eventNumber == 25009) sample_identifier = 169471; //WW
    if(entry== 0  && m_eventParameters->eventNumber == 111) sample_identifier = 126988;//WWPlusJets
    if(entry== 0  && m_eventParameters->eventNumber == 15004) sample_identifier = 157814; //WZ    
    if(entry== 0  && m_eventParameters->eventNumber == 5) sample_identifier = 116600; //ZZ
    if(entry== 0  && m_eventParameters->eventNumber == 5012) sample_identifier = 108346; //ttbar    
    if(entry== 0  && m_eventParameters->eventNumber == 35015) sample_identifier = 110805; //ZPlusJets    
    if(entry== 0  && m_eventParameters->eventNumber == 10017) sample_identifier = 160155; //Higgs

    if(entry== 0  && m_eventParameters->eventNumber == 10006) sample_identifier = 177501; 
    if(entry== 0  && m_eventParameters->eventNumber == 5007) sample_identifier = 177502; 
    if(entry== 0  && m_eventParameters->eventNumber == 25013) sample_identifier = 177503; 
    if(entry== 0  && m_eventParameters->eventNumber == 10012) sample_identifier = 177504; 
    if(entry== 0  && m_eventParameters->eventNumber == 2) sample_identifier = 177505; 
    if(entry== 0  && m_eventParameters->eventNumber == 40006) sample_identifier = 177506; 
    if(entry== 0  && m_eventParameters->eventNumber == 10010) sample_identifier = 177507; 
    if(entry== 0  && m_eventParameters->eventNumber == 40002) sample_identifier = 177508; 
    if(entry== 0  && m_eventParameters->eventNumber == 5005) sample_identifier = 177509; 
    if(entry== 0  && m_eventParameters->eventNumber == 15015) sample_identifier = 177510; 
    if(entry== 0  && m_eventParameters->eventNumber == 10001) sample_identifier = 177511; 
    if(entry== 0  && m_eventParameters->eventNumber == 25004) sample_identifier = 177512; 
    if(entry== 0  && m_eventParameters->eventNumber == 9) sample_identifier = 177513; 
    if(entry== 0  && m_eventParameters->eventNumber == 20001) sample_identifier = 177514; 
    if(entry== 0  && m_eventParameters->eventNumber == 45017) sample_identifier = 177515; 
    if(entry== 1  && m_eventParameters->eventNumber == 40014) sample_identifier = 177516; //!40014
    if(entry== 0  && m_eventParameters->eventNumber == 15001) sample_identifier = 177517; 
    if(entry== 1  && m_eventParameters->eventNumber == 20002) sample_identifier = 177518; //!20002
    if(entry== 0  && m_eventParameters->eventNumber == 35016) sample_identifier = 177519; 
    if(entry== 0  && m_eventParameters->eventNumber == 45001) sample_identifier = 177520; 
    if(entry== 1  && m_eventParameters->eventNumber == 45004) sample_identifier = 177521; //!45004
    if(entry== 0  && m_eventParameters->eventNumber == 35001) sample_identifier = 177522; 
    if(entry== 0  && m_eventParameters->eventNumber == 9) sample_identifier = 177523; 
    if(entry== 0  && m_eventParameters->eventNumber == 6) sample_identifier = 177524; 
    if(entry== 0  && m_eventParameters->eventNumber == 5010) sample_identifier = 177525; 
    if(entry== 0  && m_eventParameters->eventNumber == 25003) sample_identifier = 177526; 
    if(entry== 0  && m_eventParameters->eventNumber == 20018) sample_identifier = 177527; 
    
    
    }
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
	cutnumber_MM = 2.; fillHistos_MM(cutnumber_MM, m_eventParameters->weight);
	if(mu1_TLV.Pt()>20.){
	  cutnumber_MM = 3.; fillHistos_MM(cutnumber_MM, m_eventParameters->weight);
// 	  float HT_MM = calcHT(mu0_TLV, mu1_TLV, met_TLV, m_jets);
	  if(HT_MM> 170.){
	    cutnumber_MM = 4.; fillHistos_MM(cutnumber_MM, m_eventParameters->weight);	    
	  }
	}
      }
//        	l0_pT>30
//  l1_pT>20
//  HT>170
//  metRel>40
//  Min(mT(l0), mT(l1)) >80
//  	mlj < 120
    }
    if(m_l0->isEl && m_l1->isEl){
      float cutnumber_EE;
      cutnumber_EE = 1.; fillHistos_EE(cutnumber_EE, m_eventParameters->weight);
    }
    if((m_l0->isEl && m_l1->isMu) || (m_l0->isMu && m_l1->isEl)){
      float cutnumber_EM;
      cutnumber_EM = 1.; fillHistos_EM(cutnumber_EM, m_eventParameters->weight);
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
  cout << "sample_identifier= " << sample_identifier << endl;
  TString outputfile;
  
  if(sample_identifier == 126893)  outputfile = "output_126893_SusySel.root"; //cutflow  
  if(sample_identifier == 30000)  outputfile = "output_fake_SusySel.root"; //fake  
  if(sample_identifier == 169471)  outputfile = "output_WW_SusySel.root"; //WW
  if(sample_identifier == 126988)  outputfile = "output_WWPlusJets_SusySel.root";//WWPlusJets
  if(sample_identifier == 157814)  outputfile = "output_WZ_SusySel.root"; //WZ    
  if(sample_identifier == 116600)  outputfile = "output_ZZ_SusySel.root"; //ZZ
  if(sample_identifier == 108346)  outputfile = "output_ttbar_SusySel.root"; //ttbar    
  if(sample_identifier == 110805)  outputfile = "output_ZPlusJets_SusySel.root"; //ZPlusJets    
  if(sample_identifier == 160155)  outputfile = "output_Higgs_SusySel.root"; //Higgs

  if(sample_identifier == 177501)  outputfile = "output_WH_177501_SusySel.root";  
  if(sample_identifier == 177502)  outputfile = "output_WH_177502_SusySel.root";  
  if(sample_identifier == 177503)  outputfile = "output_WH_177503_SusySel.root";  
  if(sample_identifier == 177504)  outputfile = "output_WH_177504_SusySel.root";  
  if(sample_identifier == 177505)  outputfile = "output_WH_177505_SusySel.root";  
  if(sample_identifier == 177506)  outputfile = "output_WH_177506_SusySel.root";  
  if(sample_identifier == 177507)  outputfile = "output_WH_177507_SusySel.root";  
  if(sample_identifier == 177508)  outputfile = "output_WH_177508_SusySel.root";  
  if(sample_identifier == 177509)  outputfile = "output_WH_177509_SusySel.root";  
  if(sample_identifier == 177510)  outputfile = "output_WH_177510_SusySel.root";  
  if(sample_identifier == 177511)  outputfile = "output_WH_177511_SusySel.root";  
  if(sample_identifier == 177512)  outputfile = "output_WH_177512_SusySel.root";  
  if(sample_identifier == 177513)  outputfile = "output_WH_177513_SusySel.root";  
  if(sample_identifier == 177514)  outputfile = "output_WH_177514_SusySel.root";  
  if(sample_identifier == 177515)  outputfile = "output_WH_177515_SusySel.root";  
  if(sample_identifier == 177516)  outputfile = "output_WH_177516_SusySel.root";  //!40014
  if(sample_identifier == 177517)  outputfile = "output_WH_177517_SusySel.root";  
  if(sample_identifier == 177518)  outputfile = "output_WH_177518_SusySel.root";  //!20002
  if(sample_identifier == 177519)  outputfile = "output_WH_177519_SusySel.root";  
  if(sample_identifier == 177520)  outputfile = "output_WH_177520_SusySel.root";  
  if(sample_identifier == 177521)  outputfile = "output_WH_177521_SusySel.root";  //!45004
  if(sample_identifier == 177522)  outputfile = "output_WH_177522_SusySel.root";  
  if(sample_identifier == 177523)  outputfile = "output_WH_177523_SusySel.root";  
  if(sample_identifier == 177524)  outputfile = "output_WH_177524_SusySel.root";  
  if(sample_identifier == 177525)  outputfile = "output_WH_177525_SusySel.root";  
  if(sample_identifier == 177526)  outputfile = "output_WH_177526_SusySel.root";  
  if(sample_identifier == 177527)  outputfile = "output_WH_177527_SusySel.root";  

  
  
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


}