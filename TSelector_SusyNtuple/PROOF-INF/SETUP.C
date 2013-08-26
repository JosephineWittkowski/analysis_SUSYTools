Int_t SETUP() {

  //gROOT->ProcessLine(".L mmc/mmc.cpp++") ;
  gSystem->Load("mmc/libmmc_cpp.so") ;
  gSystem->Load("libTSelector_SusyNtuple_cpp.so") ;

}
