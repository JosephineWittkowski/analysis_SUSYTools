#include <iostream>
#include <string>

#include "TFile.h"
#include "TF1.h"
#include "TH1F.h"
#include "TH2F.h"
#include "TLorentzVector.h"
#include "TMath.h"

#include <time.h>
#include <iostream>

#define nDRWEIGHT 16
#define nDTHETAWEIGHT 18
#define M_tau 1.777
#define MaxCorrMET 40	// Limiting the Correction of MET in GeV (Have to be integer)

using namespace std;
using namespace TMath;

class mmc {

public:
  mmc(int wchoice=3);
  void Clear(){m_mz_peak=-1; m_mz_mean=-1; m_mz_maxprob=-1; m_mz_coll=-1; }
  float Scan6d(const TLorentzVector _lep1, const TLorentzVector _lep2, const float _metx, const float _mety, const float _sumet);
  float Scan6dTheta(const TLorentzVector _lep1, const TLorentzVector _lep2, const float _metx, const float _mety, const float _sumet);
  float Scan4dTheta(const TLorentzVector _lep1, const TLorentzVector _lep2, const float _metx, const float _mety);
  float Scan6dAnal(const TLorentzVector _lep1, const TLorentzVector _lep2, const float _metx, const float _mety, const float sigma);
  float Scan4dAnal(const TLorentzVector _lep1, const TLorentzVector _lep2, const float _metx, const float _mety);
  float GetCollMass(const TLorentzVector _lep1, const TLorentzVector _lep2, const float _metx, const float _mety);

  void SetAngleWeight(int choice=0);
  void SetMassWeight(int choice=1){ m_mm_weight=choice; };
  float GetMZ_peak(){ return m_mz_peak; };
  float GetMZ_mean(){ return m_mz_mean; };
  float GetMZ_maxprob(){ return m_mz_maxprob; };
  float GetMZ_coll(){ return m_mz_coll; };
  float GetExecTime(){ return m_exectime; };
  float GetCorrMEX(){ return Corr_met_ex; };
  float GetCorrMEY(){ return Corr_met_ey; };

  void SetPhi_N(float arg1){ m_phi_n=arg1; }
  void SetTheta_N(float arg1){ m_theta_n=arg1; }
  void SetMet_N(float arg1){ m_met_n=arg1; }
  void SetMMa_N(float arg1){ m_mma_n=arg1; }

  void SetPhi_Lim(float arg1){ m_phi_lim=arg1; }
  void SetTheta_Lim(float arg1){ m_theta_lim=arg1; }
  void SetMet_Lim(float arg1){ m_met_lim=arg1; }
  void SetMMa_LimLow(float arg1){ m_mma_limlow=arg1; }
  void SetMMa_LimHigh(float arg1){ m_mma_limhigh=arg1; }

  void SetMet_S(float arg1){ m_met_s=arg1; }
  void SetMet_LimSigma(float arg1){ m_met_limsigma=arg1; }
  void SetMet_ScanMode(int arg1){ m_met_scanmode=arg1; }

  void Set_Alpha(float arg1){ m_alpha=arg1; }
  void Set_METNoise(float arg1){ m_noise=arg1; }

private:
  
  TF1*  ReadFunc( TFile* _file, TString histName, TString taumu);
  
  void  GetDeltaRDistribution();
  void  GetDeltaThetaDistribution();
  void  GetMDistribution();
  float GetMETValue( float met, float sigma);
  float GetDeltaRValue(float dR1, float pt1);
  float GetDeltaThetaValue(float dTheta1, float pt1);
  float GetMValue(float m1);
  float GetAnaWeight_TauMiss(const TLorentzVector tau, const TLorentzVector miss, float &ntheta3d);
  float GetJacobian(const TLorentzVector vis_pos, const TLorentzVector vis_neg, const TLorentzVector miss_pos, const TLorentzVector miss_neg, const float _Ex_miss, const float _Ey_miss);

  void SetMZ_peak(float mz){ m_mz_peak=mz; };
  void SetMZ_mean(float mz){ m_mz_mean=mz; };
  void SetMZ_maxprob(float mz){ m_mz_maxprob=mz; };
  void SetMZ_coll(float mz){ m_mz_coll=mz; };

  //float GetZmass_Max(vector<float> *v_wkeit, vector<float> *v_zm); 
  //float GetZmass_Weighted(vector<float> *v_wkeit, vector<float> *v_zm);

  int _debug;
  float m_mz_peak;
  float m_mz_mean;
  float m_mz_maxprob;
  float m_mz_coll;
  float Corr_met_ex;
  float Corr_met_ey;

  int m_weight;
  int m_mm_weight;
  TF1* f_dR_weight[nDRWEIGHT];
  TF1* f_dTheta_weight[nDTHETAWEIGHT];
  TF1* f_m_weight;

  float m_phi_n;
  float m_theta_n;
  float m_met_n;
  float m_mma_n;
  float m_costheta;
  float theta_star_max;
  float f_cut;		// define f_cut = lep_ptCUT / tauPT
  float m_mma_n_4D;
  float m_mma_n_6D;
  float m_costheta_4D;
  float m_costheta_6D;
  
  float m_phi_lim;
  float m_theta_lim;
  float m_met_lim;
  float m_mma_limlow;
  float m_mma_limhigh;

  float m_met_scanmode;
  float m_met_limsigma;
  float m_met_s;
  float MET_scan_points_Phi;
  float MET_scan_points_Z;
  
  float m_exectime;
  float m_alpha;
  float m_noise;

};

