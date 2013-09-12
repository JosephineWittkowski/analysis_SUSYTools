// Ask me if you have questions/problems. Thomas M.
// Version 0.1.5
// Start with root runSelector.C
// please read all comments with // !!! up to line 115
// You have to make some changes at various places
#include <string>
#include <vector>
#include <iostream>
#include <stdlib.h>

#include "TROOT.h"
#include "TFile.h"
#include "TTree.h"
#include "TChain.h"
#include "TBranch.h"
#include "TFileCollection.h"


#include <TH2.h>
#include <map>
#include <TColor.h>
#include <TH1.h>
#include <TTree.h>
#include <TNtuple.h>
#include <TCanvas.h>
#include <TStyle.h>
#include <sstream>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <sys/stat.h> 
#include <iostream>
#include <math.h>
#include "string.h"
#include "TSystem.h"
#include "TProof.h"
#include "TDSet.h"
#include "TError.h" // for debugging with ddd

void throwException(string str){
	// necessary because cint does not handle thrown errors correctly
	cout <<"Exception raised "<< str<<endl;
	throw(str);
	abort();
}; 


void run_root_TSelector_SusyNtuple(TString InputPath) {

//  TString options = TString(""); //TString(tag.c_str()) ;
// //     TString outputfile = "test.root";
//     string richtigerString = InputPath;
// //     int Position = richtigerString.find("mc12_8TeV.");
// //     outputfile = "histos_ZTauTau_" +  richtigerString.substr(Position+10,6)  + "_proof.root";
//     
//     int Position = -1;
//     Position = richtigerString.find("45_bg");
//     if (Position>0){
//       outputfile = "histos_test_" +  richtigerString.substr(Position+6,2)  + ".root";
//     }
//     else{
//       Position = richtigerString.find("45_signal");
//       if (Position>0){
//       outputfile = "histos_test_" +  richtigerString.substr(Position+3,2)  + ".root";
//       }
//     }
//     if(outputfile == ""){
//       cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
//       cout << "EMPTY OUPTPUTFILE STRING" << endl;
//       cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
//       abort();
//     }
//     cout << "outputfile= " << outputfile << endl;
    
      cout<<"Have you set up RootCore via  \"source RootCore/scripts/setup.sh\" ?"<<endl;  

      gSystem->Setenv("ROOTCOREDIR", "/data/etp/jwittkowski/analysis_SUSYTools_03_04/RootCore");
      gSystem->SetIncludePath("-I$ROOTCOREDIR/include/");

      gROOT->ProcessLine(".x $ROOTCOREDIR/scripts/load_packages.C+"); 

      TString selectorName = "TSelector_SusyNtuple"; // !!! enter the name of your Selector (without _C.so)

      TChain *ch;

      ch = new TChain("susyNt");


      TString processLine = ".L " + selectorName + ".cpp++g";
      TString execLine;

      gROOT->ProcessLine(processLine); // need to add this, or PoD at LRZ will not be able to load the .so
      gROOT->ProcessLine(".x $ROOTCOREDIR/scripts/load_packages.C+");
      ch->Add(InputPath);
      
//       ch->Add("/data/etp6/jwittkow/SusyNtuples_n0145_bg/ttbarWtop/user.sfarrell.117206._00006.susyNt.root");
//       ch->Add("/data/etp6/jwittkow/SusyNtuples_n0145_bg/ttbarWtop/user.sfarrell.117206._00040.susyNt.root");
//       ch->Add("/data/etp6/jwittkow/SusyNtuples_n0145_bg/ttbarWtop/user.sfarrell.117206._00109.susyNt.root");
//       ch->Add("/data/etp6/jwittkow/SusyNtuples_n0145_bg/ttbarWtop/user.sfarrell.117206._00144.susyNt.root");
//       ch->Add("/data/etp6/jwittkow/SusyNtuples_n0145_bg/ttbarWtop/user.sfarrell.117206._00177.susyNt.root");
//       ch->Add("/data/etp6/jwittkow/SusyNtuples_n0145_bg/ttbarWtop/user.sfarrell.116630._00002.susyNt.root.1");
//       ch->Add("/data/etp6/jwittkow/SusyNtuples_n0145_bg/ttbarWtop/user.sfarrell.117206._00007.susyNt.root");
//       ch->Add("/data/etp6/jwittkow/SusyNtuples_n0145_bg/ttbarWtop/user.sfarrell.117206._00041.susyNt.root");



//       ch->Add("/nobackup/etp2/Josephine.Wittkowski/SusyNtuples_n0145_data/Egamma/user.sfarrell.group.phys-susy.data12_8TeV.periodA.physics_Egamma.PhysCont.SusyNt.repro14_v01_p1542_n0145.130708161315/user.sfarrell.116519._00003.susyNt.root");
//       ch->Add("/data/etp6/jwittkow/SusyNtuple_testdir/126893_n0145/*");
	    

//        ch->Add(InputPath);

      Long64_t nEntries = ch->GetEntries();
      ch->ls();

      cout << "all entries: " << nEntries << endl;


      TSelector_SusyNtuple* susyAna = new TSelector_SusyNtuple();
      susyAna->buildSumwMap(ch);
      ch->Process(susyAna);
      delete susyAna;
      
      if (ch) {delete ch; ch=0;}

  abort();
  }

