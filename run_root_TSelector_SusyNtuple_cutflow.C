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


void run_root_TSelector_SusyNtuple_cutflow() {

//     try{
    
      cout<<"Have you set up RootCore via  \"source RootCore/scripts/setup.sh\" ?"<<endl;  

      gSystem->Setenv("ROOTCOREDIR", "/data/etp/jwittkowski/analysis_SUSYTools_03_04/RootCore");
      gSystem->SetIncludePath("-I$ROOTCOREDIR/include/");

      gROOT->ProcessLine(".x $ROOTCOREDIR/scripts/load_packages.C+"); 

      TString selectorName = "TSelector_SusyNtuple_cutflow"; // !!! enter the name of your Selector (without _C.so)

      TChain *ch;

      ch = new TChain("susyNt");


      TString processLine = ".L " + selectorName + ".cpp++g";
      TString execLine;

      gROOT->ProcessLine(processLine); // need to add this, or PoD at LRZ will not be able to load the .so
      gROOT->ProcessLine(".x $ROOTCOREDIR/scripts/load_packages.C+");

//     ch->Add("/data/etp/jwittkowski/SusyNtuples_testdir/105200.McAtNloJimmy_CT10_ttbar/*");
//       ch->Add("/data/etp6/jwittkow/SusyNtuples_n0145_signal_samples/user.gerbaudo.mc12_8TeV.177503.Herwigpp_sM_wA_noslep_notauhad_WH_2Lep_3.SusyNt.e2149_s1581_s1586_r3658_r3549_p1512_n0145.130806161345/user.gerbaudo.023459._00001.susyNt.root");
//       ch->Add("/data/etp6/jwittkow/SusyNtuples_n0145_signal_samples_lowStat/user.zgecse.mc12_8TeV.176576.Herwigpp_simplifiedModel_wA_noslep_WH_2Lep_3.SusyNt.e1702_s1581_s1586_r3658_r3549_p1512_n0145.130710012534/user.zgecse.035431._00001.susyNt.root");

      ch->Add("/data/etp6/jwittkow/SusyNtuple_testdir/126893_n0145/*");
      
//       ch->Add("/nobackup/etp2/Josephine.Wittkowski/SusyNtuples_n0145_data/Egamma/user.sfarrell.group.phys-susy.data12_8TeV.periodA.physics_Egamma.PhysCont.SusyNt.repro14_v01_p1542_n0145.130708161315/*");
//       ch->Add("/nobackup/etp2/Josephine.Wittkowski/SusyNtuples_n0145_data/Egamma/user.sfarrell.group.phys-susy.data12_8TeV.periodA.physics_Egamma.PhysCont.SusyNt.repro14_v01_p1542_n0145.130708161341/*");
//       ch->Add("/nobackup/etp2/Josephine.Wittkowski/SusyNtuples_n0145_data/Egamma/user.sfarrell.group.phys-susy.data12_8TeV.periodA.physics_Egamma.PhysCont.SusyNt.repro14_v01_p1542_n0145.130708161402/*");
//       ch->Add("/nobackup/etp2/Josephine.Wittkowski/SusyNtuples_n0145_data/Egamma/user.sfarrell.group.phys-susy.data12_8TeV.periodA.physics_Egamma.PhysCont.SusyNt.repro14_v01_p1542_n0145.130708161438/*");

//       ch->Add("/nobackup/etp2/Josephine.Wittkowski/SusyNtuples_n0145_data/Muons/user.sfarrell.group.phys-susy.data12_8TeV.periodA.physics_Muons.PhysCont.SusyNt.repro14_v01_p1542_n0145.130708165423/*");
//       ch->Add("/data/etp6/jwittkow/SusyNtuples_n0145_signal_samples_lowStat/user.zgecse.mc12_8TeV.176576.Herwigpp_simplifiedModel_wA_noslep_WH_2Lep_3.SusyNt.e1702_s1581_s1586_r3658_r3549_p1512_n0145.130710012534/user.zgecse.035431._00001.susyNt.root");
      
//        ch->Add("/nobackup/etp2/Josephine.Wittkowski/SusyNtuples_n0145_data/Egamma/user.sfarrell.group.phys-susy.data12_8TeV.periodA.physics_Egamma.PhysCont.SusyNt.repro14_v01_p1542_n0145.130708161315/*");
      
//       ch->Add("/nobackup/etp2/Josephine.Wittkowski/SusyNtuples_n0145_data/Muons/user.sfarrell.group.phys-susy.data12_8TeV.periodA.physics_Muons.PhysCont.SusyNt.repro14_v01_p1542_n0145.130708165507/*");
      
      
//       ch->Add("/nobackup/etp2/Josephine.Wittkowski/SusyNtuples_n0145_data/Egamma/user.sfarrell.group.phys-susy.data12_8TeV.periodA.physics_Egamma.PhysCont.SusyNt.repro14_v01_p1542_n0145.130708161315/user.sfarrell.116519._00003.susyNt.root");
//       ch->Add("/data/etp6/jwittkow/SusyNtuples_n0145_signal_samples/user.gerbaudo.mc12_8TeV.177503.Herwigpp_sM_wA_noslep_notauhad_WH_2Lep_3.SusyNt.e2149_s1581_s1586_r3658_r3549_p1512_n0145.130806161345/*");
//     ch->Add("/nobackup/etp2/Josephine.Wittkowski/SusyNtuples_n0145_bg/WW/*");
//     ch->Add("/nobackup/etp2/Josephine.Wittkowski/SusyNtuples_n0145_bg/ttbarWtop/*");
//     ch->Add("/nobackup/etp2/Josephine.Wittkowski/SusyNtuples_n0145_bg/ZPlusJets/*");
//     ch->Add("/nobackup/etp2/Josephine.Wittkowski/SusyNtuples_n0145_bg/ZV/*");
//     ch->Add("/data/etp/jwittkowski/SusyNtuples_testdir/testdir/*");
//        ch->Add(InputPath);

      Long64_t nEntries = ch->GetEntries();
      ch->ls();

      cout << "all entries: " << nEntries << endl;


      TSelector_SusyNtuple_cutflow* susyAna = new TSelector_SusyNtuple_cutflow();
      susyAna->buildSumwMap(ch);
      ch->Process(susyAna);
      delete susyAna;
      
      if (ch) {delete ch; ch=0;}

  abort();
  }

