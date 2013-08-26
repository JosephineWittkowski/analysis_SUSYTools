#include <iostream>
#include <stdio.h>
#include "mmc.hpp"
using namespace std;

void test_macro(){
  mmc *my_mmc;
  my_mmc = new mmc();
 
  TLorentzVector _lep1, _lep2, m_MET_pseudo_vector;
  double  met_ex, met_ey, MET_sumet, mmc_outcome, sigma_MET;
  
  _lep1.SetPxPyPzE(20.3079, 0.0953125, 10.9779 , 23.0853 );
  _lep2.SetPxPyPzE(-27.0974, -17.2345, -29.5523, 43.6423 );
  m_MET_pseudo_vector.SetPxPyPzE( -7.48693, 12.5305, 0 , 14.5968 );
  MET_sumet = 445.49;
  my_mmc->Clear();
  sigma_MET = 5.+0.5*TMath::Sqrt(MET_sumet);
  my_mmc->Scan6dAnal(_lep1, _lep2, m_MET_pseudo_vector.Px(),m_MET_pseudo_vector.Py(),sigma_MET);
  met_ex = my_mmc->GetCorrMEX();
  met_ey = my_mmc->GetCorrMEY();
  my_mmc->Scan4dAnal(_lep1, _lep2, met_ex, met_ey);
  
  mmc_outcome = my_mmc->GetMZ_peak();
  
  cout << "Corr ex, ey = " << met_ex << " , " << met_ey << " solution = " << mmc_outcome << endl;
}

