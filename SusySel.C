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
  fChain->SetBranchAddress("lepts", &m_lepts, &m_lepts_b);

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

   m_chargeFlip.initialize("/data/etp3/jwittkow/analysis_SUSYTools_03_04/ChargeFlip/data/d0_chargeflip_map.root");
}

Bool_t SusySel::Process(Long64_t entry)
{

    GetEntry(entry);
    m_eventParameters_b->GetEntry(entry);
    m_l0_b->GetEntry(entry);
    m_l1_b->GetEntry(entry);
    m_met_b->GetEntry(entry);
    m_jets_b->GetEntry(entry);
    m_lepts_b->GetEntry(entry);
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
    if(entry== 0  && m_eventParameters->eventNumber == 7522517) sample_identifier = 108346; //ttbar    
    if(entry== 0  && m_eventParameters->eventNumber == 35015) sample_identifier = 110805; //ZPlusJets    
    if(entry== 0  && m_eventParameters->eventNumber == 10017) sample_identifier = 160155; //Higgs

    if(entry== 0  && m_eventParameters->eventNumber == 10006) sample_identifier = 177501; 
    if(entry== 0  && m_eventParameters->eventNumber == 5007) sample_identifier = 177502; 
    if(entry== 0  && m_eventParameters->eventNumber == 25013) sample_identifier = 177503; 
    if(entry== 0  && m_eventParameters->eventNumber == 10012) sample_identifier = 177504; 
    if(entry== 0  && m_eventParameters->eventNumber == 2) sample_identifier = 177505; 
    if(entry== 0  && m_eventParameters->eventNumber == 40006) sample_identifier = 177506; 
    if(entry== 0  && m_eventParameters->eventNumber == 10010) sample_identifier = 177507; 
    if(entry== 1  && m_eventParameters->eventNumber == 40003) sample_identifier = 177508; 
    if(entry== 0  && m_eventParameters->eventNumber == 5005) sample_identifier = 177509; 
    if(entry== 0  && m_eventParameters->eventNumber == 15015) sample_identifier = 177510; 
    if(entry== 0  && m_eventParameters->eventNumber == 10001) sample_identifier = 177511; 
    if(entry== 0  && m_eventParameters->eventNumber == 25004) sample_identifier = 177512; 
    if(entry== 1  && m_eventParameters->eventNumber == 10) sample_identifier = 177513; 
    if(entry== 0  && m_eventParameters->eventNumber == 20001) sample_identifier = 177514; 
    if(entry== 0  && m_eventParameters->eventNumber == 45017) sample_identifier = 177515; 
    if(entry== 0  && m_eventParameters->eventNumber == 40002) sample_identifier = 177516; //!40014
    if(entry== 0  && m_eventParameters->eventNumber == 15001) sample_identifier = 177517; 
    if(entry== 1  && m_eventParameters->eventNumber == 20002) sample_identifier = 177518; //!20002
    if(entry== 0  && m_eventParameters->eventNumber == 35016) sample_identifier = 177519; 
    if(entry== 0  && m_eventParameters->eventNumber == 25001) sample_identifier = 177520; 
    if(entry== 1  && m_eventParameters->eventNumber == 45004) sample_identifier = 177521; //!45004
    if(entry== 0  && m_eventParameters->eventNumber == 35001) sample_identifier = 177522; 
    if(entry== 0  && m_eventParameters->eventNumber == 9) sample_identifier = 177523; 
    if(entry== 0  && m_eventParameters->eventNumber == 6) sample_identifier = 177524; 
    if(entry== 0  && m_eventParameters->eventNumber == 5010) sample_identifier = 177525; 
    if(entry== 1  && m_eventParameters->eventNumber == 5025) sample_identifier = 177526; 
    if(entry== 0  && m_eventParameters->eventNumber == 20018) sample_identifier = 177527; 
    
    
    }
    
//===========================================================================================
//===========================================================================================
    l0IsMu = m_l0->isMu; //muon
    l1IsMu = m_l1->isMu; //electron
    if(m_l0->isEl && m_l1->isEl){
      TLorentzVector el0_TLV, el1_TLV;
      el0_TLV.SetPxPyPzE(m_l0->px, m_l0->py, m_l0->pz, m_l0->E);
      el1_TLV.SetPxPyPzE(m_l1->px, m_l1->py, m_l1->pz, m_l1->E);
      TLorentzVector met_SS_TLV = met_TLV;
      if((m_l0->q * m_l1->q)<0 && m_eventParameters->ismc){
	//weight already included but electron pT and MET not smeared
	m_chargeFlip.setSeed(m_eventParameters->eventNumber);
	TVector2 met_SS_TVector2;
	met_SS_TVector2.Set(met_TLV.Px(), met_TLV.Py());
// 	if(m_eventParameters->eventNumber == 2150756)cout << el0_TLV.Pt() << " " << el1_TLV.Pt() << " EE " << m_eventParameters->eventNumber << endl;
	m_chargeFlip.OS2SS(11* (-1) * m_l0->q, &el0_TLV, 11* (-1) * m_l1->q, &el1_TLV, &met_SS_TVector2, 0);
	
	met_SS_TLV.SetPx(met_SS_TVector2.Px());
	met_SS_TLV.SetPy(met_SS_TVector2.Py());	
	met_SS_TLV.SetE(sqrt(pow(met_SS_TVector2.Px(),2) + pow(met_SS_TVector2.Py(),2)));
      }
      
      calc_EE_variables(el0_TLV, el1_TLV, met_SS_TLV, m_jets, m_lepts);
      
      float cutnumber_EE;
      cutnumber_EE = 1.;  fillHistos_1j_EE(cutnumber_EE, m_eventParameters->weight);
      
      if((*m_jets).size() ==1){
	cutnumber_EE = 2.;  fillHistos_1j_EE(cutnumber_EE, m_eventParameters->weight);
	if(el0_TLV.Pt()>=20. && el1_TLV.Pt()>=20. && ((el0_TLV.Pt()>el1_TLV.Pt() && el0_TLV.Pt() >= 30.) || (el0_TLV.Pt()<el1_TLV.Pt() && el1_TLV.Pt() >= 30.))){
	  cutnumber_EE = 3.;  fillHistos_1j_EE(cutnumber_EE, m_eventParameters->weight);
	  if((el0_TLV + el1_TLV).M() > MZ+10. || (el0_TLV + el1_TLV).M() < MZ-10.){
	    cutnumber_EE = 4.;  fillHistos_1j_EE(cutnumber_EE, m_eventParameters->weight); //ZVeto
	    //SRSS1
	    if(mTWW_EE >= 150.){	
	      cutnumber_EE = 5.;  fillHistos_1j_EE(cutnumber_EE, m_eventParameters->weight);
	      if(HT_EE >= 200.){
		cutnumber_EE = 6.;  fillHistos_1j_EE(cutnumber_EE, m_eventParameters->weight);
		if(METrel_EE>=50.){			    
		  cutnumber_EE = 7.;  fillHistos_1j_EE(cutnumber_EE, m_eventParameters->weight);		  
		  if(mass_3rdlepZ_EE > MZ+20. || mass_3rdlepZ_EE < MZ-20.){
		    cutnumber_EE = 8.;  fillHistos_1j_EE(cutnumber_EE, m_eventParameters->weight);
		  }
		}
	      }
	    }
	  }
	}
      }
//==================
  if((*m_jets).size() >=2){
      cutnumber_EE = 22.;  fillHistos_2j_EE(cutnumber_EE, m_eventParameters->weight);	

      if(el0_TLV.Pt()>=20. && el1_TLV.Pt()>=20. && ((el0_TLV.Pt()>el1_TLV.Pt() && el0_TLV.Pt() >= 30.) || (el0_TLV.Pt()<el1_TLV.Pt() && el1_TLV.Pt() >= 30.))){

	cutnumber_EE = 23.;  fillHistos_2j_EE(cutnumber_EE, m_eventParameters->weight);
	if((el0_TLV + el1_TLV).M() > MZ+10. || (el0_TLV + el1_TLV).M() < MZ-10.){
	cutnumber_EE = 24.;  fillHistos_2j_EE(cutnumber_EE, m_eventParameters->weight); //ZVeto
	//SRSS1
	if(mTWW_EE >= 150.){	
	  cutnumber_EE = 25.;  fillHistos_2j_EE(cutnumber_EE, m_eventParameters->weight);
	  if(HT_EE >= 200.){
	    cutnumber_EE = 26.;  fillHistos_2j_EE(cutnumber_EE, m_eventParameters->weight);
	      if(METrel_EE>=50.){			    
		cutnumber_EE = 27.;  fillHistos_2j_EE(cutnumber_EE, m_eventParameters->weight);		  
		if(mass_3rdlepZ_EE > MZ+20. || mass_3rdlepZ_EE < MZ-20.){
		  cutnumber_EE = 28.;  fillHistos_2j_EE(cutnumber_EE, m_eventParameters->weight);
		}
	      }
	    }
	  }
	}
      }
    }
  }
  
//       if((*m_jets).size()==1){
// 	cutnumber_EE = 1.; fillHistos_1j_EE(cutnumber_EE, m_eventParameters->weight);
// 	if(Mll_EE > MZ+10. || Mll_EE < MZ-10.){
// 	  cutnumber_EE = 2.; fillHistos_1j_EE(cutnumber_EE, m_eventParameters->weight);
// 	  if(mTWW_EE > 150.){ //="mtllmet"	          
// 	      cutnumber_EE = 3.; fillHistos_1j_EE(cutnumber_EE, m_eventParameters->weight);
// 	      if(METrel_EE>80){
// 		cutnumber_EE = 4.; fillHistos_1j_EE(cutnumber_EE, m_eventParameters->weight);
// 		if(HT_EE > 160.){
// 		  cutnumber_EE = 5.; fillHistos_1j_EE(cutnumber_EE, m_eventParameters->weight);
// 		  if(mTmin_EE>65.){
// 		    cutnumber_EE = 6.; fillHistos_1j_EE(cutnumber_EE, m_eventParameters->weight);
// // 		    cout << "Mll= " << calc_Ml_3rdl(el0_TLV, el1_TLV, m_lepts) << endl;
// 		    }
// 		  }
// 		}
// 	      }
// 	    }
// 	  }
// 	  
// 	  
// 	  
// 	  
//       if((*m_jets).size()>=2){
// 	cutnumber_EE = 1.; fillHistos_2j_EE(cutnumber_EE, m_eventParameters->weight);
// 	if(Mll_EE > MZ+10. || Mll_EE < MZ-10.){
// 	  cutnumber_EE = 2.; fillHistos_2j_EE(cutnumber_EE, m_eventParameters->weight);
// 	  if(mTWW_EE > 130.){ //="mtllmet"	          
// 	      cutnumber_EE = 3.; fillHistos_2j_EE(cutnumber_EE, m_eventParameters->weight);
// 	      if(METrel_EE>70){
// 		cutnumber_EE = 4.; fillHistos_2j_EE(cutnumber_EE, m_eventParameters->weight);
// 		if(mTmin_EE>50.){
// 		  cutnumber_EE = 5.; fillHistos_2j_EE(cutnumber_EE, m_eventParameters->weight);
// 		  }
// 		}
// 	      }
// 	    }
// 	  }
// 	  
// 	}
//     --- BDT                      :    1 : ht        : 3.501e-01
// --- BDT                      :    2 : mll       : 2.133e-01
// --- BDT                      :    3 : metrel    : 1.965e-01
// --- BDT                      :    4 : mtllmet   : 1.722e-01
// --- BDT                      :    5 : mt2j      : 4.559e-02
// --- BDT                      :    6 : mljj      : 2.229e-02

// elif ll=='ee' and nj=='eq1j':
//         return ( l0pt > 30.0
//                 and l1pt > 30.0
//                 and fabs(mll-91.2) > 10.0
//                 and mtllmet > 100.0
//                 and detall < 1.5
//                 and mtmax > 100.0
//                 and ht > 200.0
//                 and mlj < 90.0
//                 and l3Veto
//                     )

// --- BDT                      :    1 : mtllmet   : 2.224e-01
// --- BDT                      :    2 : mljj      : 2.172e-01
// --- BDT                      :    3 : mll       : 2.115e-01
// --- BDT                      :    4 : mt2j      : 1.296e-01
// --- BDT                      :    5 : metrel    : 1.144e-01
// --- BDT                      :    6 : ht        : 1.050e-01

//     elif ll=='ee' and nj=='ge2j':
//         return ( l0pt > 30.0
//                 and l1pt > 30.0
//                 and fabs(mll-91.2) > 10.0
//                 and detall < 1.5
//                 and mtllmet > 150.0
//                 and mljj < 120.0
//                 and ht > 200.0
//                 and l3Veto
//===========================================================================================
//===========================================================================================
    if(m_l0->isMu && m_l1->isMu){
      float cutnumber_MM;
      cutnumber_MM = 1.; fillHistos_1j_MM(cutnumber_MM, m_eventParameters->weight);
      
      TLorentzVector mu0_TLV, mu1_TLV;
      mu0_TLV.SetPxPyPzE(m_l0->px, m_l0->py, m_l0->pz, m_l0->E);
      mu1_TLV.SetPxPyPzE(m_l1->px, m_l1->py, m_l1->pz, m_l1->E);
      calc_MM_variables(mu0_TLV, mu1_TLV, met_TLV, m_jets, m_lepts);
      
//       if(mu0_TLV.Pt()>30.){
// 	cutnumber_MM = 2.; fillHistos_1j_MM(cutnumber_MM, m_eventParameters->weight);
// 	if(mu1_TLV.Pt()>20.){
// 	  cutnumber_MM = 3.; fillHistos_1j_MM(cutnumber_MM, m_eventParameters->weight);
// 	  if(HT_MM> 170.){
// 	    cutnumber_MM = 4.; fillHistos_1j_MM(cutnumber_MM, m_eventParameters->weight);	    
// 	  }
// 	}
//       }
      if((*m_jets).size()==1){
	cutnumber_MM = 2.;  fillHistos_1j_MM(cutnumber_MM, m_eventParameters->weight);
	if(mu0_TLV.Pt() >= 30.){
	  cutnumber_MM = 3.;  fillHistos_1j_MM(cutnumber_MM, m_eventParameters->weight);
	  cutnumber_MM = 4.;  fillHistos_1j_MM(cutnumber_MM, m_eventParameters->weight); //ZVeto
	//SRSS1
	  if(mTWW_MM >= 100.){ //100, 150, 200
	    cutnumber_MM = 5.;  fillHistos_1j_MM(cutnumber_MM, m_eventParameters->weight);
	    if(HT_MM >= 200.){
	      cutnumber_MM = 6.;  fillHistos_1j_MM(cutnumber_MM, m_eventParameters->weight);				
	      if(/*METrel_MM >= 50.*/1){
		cutnumber_MM = 7.;  fillHistos_1j_MM(cutnumber_MM, m_eventParameters->weight);
// 		
		if(mass_3rdlepZ_MM > MZ+20. || mass_3rdlepZ_MM < MZ-20.){
		  cutnumber_MM = 8.;  fillHistos_1j_MM(cutnumber_MM, m_eventParameters->weight);
		}
	      }
	    }
	  }
	}
      }
//     ===============================================================================================================================		  
      if((*m_jets).size()>=2){
	cutnumber_MM = 22.;  fillHistos_2j_MM(cutnumber_MM, m_eventParameters->weight);
	if(mu0_TLV.Pt() >= 30.){
	  cutnumber_MM = 23.;  fillHistos_2j_MM(cutnumber_MM, m_eventParameters->weight);
	  cutnumber_MM = 24.;  fillHistos_2j_MM(cutnumber_MM, m_eventParameters->weight); //ZVeto
	//SRSS1
	  if(mTWW_MM >= 100.){ //100, 150, 200
	    cutnumber_MM = 25.;  fillHistos_2j_MM(cutnumber_MM, m_eventParameters->weight);
	    if(HT_MM >= 200.){
	      cutnumber_MM = 26.;  fillHistos_2j_MM(cutnumber_MM, m_eventParameters->weight);				
	      if(/*METrel_MM >= 50.*/1){
		cutnumber_MM = 27.;  fillHistos_2j_MM(cutnumber_MM, m_eventParameters->weight);
		if(mass_3rdlepZ_MM > MZ+20. || mass_3rdlepZ_MM < MZ-20.){
		  cutnumber_MM = 28.;  fillHistos_2j_MM(cutnumber_MM, m_eventParameters->weight);
		}
	      }	    
	    }
	  }
	}
      }
    }
//===========================================================================================
//===========================================================================================
    if((m_l0->isEl && m_l1->isMu) || (m_l0->isMu && m_l1->isEl)){
      
      TLorentzVector el_TLV, mu_TLV;
      if(m_l0->isEl){
	el_TLV.SetPxPyPzE(m_l0->px, m_l0->py, m_l0->pz, m_l0->E);
	mu_TLV.SetPxPyPzE(m_l1->px, m_l1->py, m_l1->pz, m_l1->E);
	l0IsMu = m_l1->isMu; // will indicate a muon
	l1IsMu = m_l0->isMu; // will indicate an electron
      }
      else{
	mu_TLV.SetPxPyPzE(m_l0->px, m_l0->py, m_l0->pz, m_l0->E);
	el_TLV.SetPxPyPzE(m_l1->px, m_l1->py, m_l1->pz, m_l1->E);
	l0IsMu = m_l0->isMu; // will indicate a muon
	l1IsMu = m_l1->isMu; // will indicate an electron
      }
      TLorentzVector met_SS_TLV = met_TLV;
      if((m_l0->q * m_l1->q)<0 && m_eventParameters->ismc){
	//weight already included but electron pT and MET not smeared
	m_chargeFlip.setSeed(m_eventParameters->eventNumber);
	TVector2 met_SS_TVector2;
	met_SS_TVector2.Set(met_TLV.Px(), met_TLV.Py());
	TLorentzVector empty_TLV;
	m_chargeFlip.OS2SS(11* (-1) * m_l0->q, &el_TLV, 13, &empty_TLV, &met_SS_TVector2, 0);
	met_SS_TLV.SetPx(met_SS_TVector2.Px());
	met_SS_TLV.SetPy(met_SS_TVector2.Py());	
	met_SS_TLV.SetE(sqrt(pow(met_SS_TVector2.Px(),2) + pow(met_SS_TVector2.Py(),2)));
      }
      
      calc_EM_variables(mu_TLV, el_TLV, met_SS_TLV, m_jets, m_lepts);
      float cutnumber_EM;
      cutnumber_EM = 1.; fillHistos_1j_EM(cutnumber_EM, m_eventParameters->weight);
      //------------------------------------------------------------------------------------
      if((*m_jets).size() ==1){
	cutnumber_EM = 2.; fillHistos_1j_EM(cutnumber_EM, m_eventParameters->weight);
	if(el_TLV.Pt()>=20. && mu_TLV.Pt()>=20. && ((el_TLV.Pt()>mu_TLV.Pt() && el_TLV.Pt() >= 30.) || (el_TLV.Pt()<mu_TLV.Pt() && mu_TLV.Pt() >= 30.))){
	  cutnumber_EM = 3.; fillHistos_1j_EM(cutnumber_EM, m_eventParameters->weight);
	  cutnumber_EM = 4.; fillHistos_1j_EM(cutnumber_EM, m_eventParameters->weight); //ZVeto
	  //SRSS1
	  if(mTWW_EM >= 140.){
	    cutnumber_EM = 5.; fillHistos_1j_EM(cutnumber_EM, m_eventParameters->weight);				
	    if(HT_EM >= 200.){
	      cutnumber_EM = 6.; fillHistos_1j_EM(cutnumber_EM, m_eventParameters->weight);
	      if(METrel_EM>=50.){
		cutnumber_EM = 7.; fillHistos_1j_EM(cutnumber_EM, m_eventParameters->weight);
		if(mass_3rdlepZ_EM > MZ+20. || mass_3rdlepZ_EM < MZ-20.){
		  
		  cutnumber_EM = 8.; fillHistos_1j_EM(cutnumber_EM, m_eventParameters->weight);
		}				 
	      }
	    }
	  }
	}
      }
//------------------------------------------------------------------------------------
      if((*m_jets).size() >=2){
	cutnumber_EM = 22.; fillHistos_2j_EM(cutnumber_EM, m_eventParameters->weight);
	if(el_TLV.Pt()>=20. && mu_TLV.Pt()>=20. && ((el_TLV.Pt()>mu_TLV.Pt() && el_TLV.Pt() >= 30.) || (el_TLV.Pt()<mu_TLV.Pt() && mu_TLV.Pt() >= 30.))){
	  cutnumber_EM = 23.; fillHistos_2j_EM(cutnumber_EM, m_eventParameters->weight);
	  cutnumber_EM = 24.; fillHistos_2j_EM(cutnumber_EM, m_eventParameters->weight); //ZVeto
	  //SRSS1
	  if(mTWW_EM >= 140.){
	    cutnumber_EM = 25.; fillHistos_2j_EM(cutnumber_EM, m_eventParameters->weight);				
	    if(HT_EM >= 200.){
	      cutnumber_EM = 26.; fillHistos_2j_EM(cutnumber_EM, m_eventParameters->weight);
	      if(METrel_EM>=50.){
		cutnumber_EM = 27.; fillHistos_2j_EM(cutnumber_EM, m_eventParameters->weight);
		if(mass_3rdlepZ_EM > MZ+20. || mass_3rdlepZ_EM < MZ-20.){
		  cutnumber_EM = 28.; fillHistos_2j_EM(cutnumber_EM, m_eventParameters->weight);
		}
	      }
	    }
	  }
	}
      }
    }
//===========================================================================================
//===========================================================================================
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
    FourMom signalJet =     (*signalJets).at(i);
    TLorentzVector jet_TLV;
    jet_TLV.SetPxPyPzE(signalJet.px, signalJet.py, signalJet.pz, signalJet.E);
    if(jet_TLV.Pt() > 20) HT += jet_TLV.Pt();
  }
  
  HT += met.E();
  return HT;

}

/*--------------------------------------------------------------------------------*/
float SusySel::recalcMetRel(TLorentzVector metLV, TLorentzVector l1, TLorentzVector l2, vector<FourMom> *signalJets)
{
  //copied from SusyNtTools.cxx and modified to work with TLorenzVector
  float dPhi = TMath::Pi()/2.;
  
  if( fabs(metLV.DeltaPhi(l1)) < dPhi ) dPhi = fabs(metLV.DeltaPhi(l1));
  if( fabs(metLV.DeltaPhi(l2)) < dPhi ) dPhi = fabs(metLV.DeltaPhi(l2));
  
  for(uint i=0; i<(*signalJets).size(); i++){
    FourMom signalJet =     (*signalJets).at(i);
    TLorentzVector jet_TLV;
    jet_TLV.SetPxPyPzE(signalJet.px, signalJet.py, signalJet.pz, signalJet.E);
    //there should only be central jets left:
//     if( !useForward && isForwardJet(jet) ) continue; // Use only central jets
    if( fabs(metLV.DeltaPhi(jet_TLV)) < dPhi ) dPhi = fabs(metLV.DeltaPhi(jet_TLV));
  }// end loop over jets
  
  return metLV.Et() * sin(dPhi);
}
/*--------------------------------------------------------------------------------*/
float SusySel::calc_Ml_3rdl(TLorentzVector l0_TLV, TLorentzVector l1_TLV, vector<FourMom> *m_leptons){
  float DeltaMZ_lZcandImpact = 999.;
  float mll_Zcand = -1.;
  for(uint i=0; i<(*m_lepts).size(); i++){
    FourMom lowptlep =     (*m_lepts).at(i);
    TLorentzVector lowptlep_TLV;
    lowptlep_TLV.SetPxPyPzE(lowptlep.px, lowptlep.py, lowptlep.pz, lowptlep.E);
    
    if((l0_TLV.DeltaR(lowptlep_TLV) < 0.05) || (l1_TLV.DeltaR(lowptlep_TLV) < 0.05)) continue; //no overlap w/ signal lepton

    
    if((l0IsMu == lowptlep.isMu) && (fabs(MZ - (l0_TLV + lowptlep_TLV).M()) < DeltaMZ_lZcandImpact)){      
      DeltaMZ_lZcandImpact = fabs(MZ - (l0_TLV + lowptlep_TLV).M());
      mll_Zcand = (l0_TLV + lowptlep_TLV).M();
    }
    if((l1IsMu == lowptlep.isMu) && (fabs(MZ - (l1_TLV + lowptlep_TLV).M()) < DeltaMZ_lZcandImpact)){
      DeltaMZ_lZcandImpact = fabs(MZ - (l1_TLV + lowptlep_TLV).M());
      mll_Zcand = (l1_TLV + lowptlep_TLV).M();
    }
  }
    return mll_Zcand;
  }

/*--------------------------------------------------------------------------------*/

float SusySel::calcMt(TLorentzVector _l, TLorentzVector _nu)
{
  float dphi = acos(cos(_l.Phi()-_nu.Phi()));
  return sqrt(2*_l.Pt()*_nu.Pt() * (1- cos(dphi)) );
}
/*--------------------------------------------------------------------------------*/
float SusySel::calcMT2J(TLorentzVector metlv, TLorentzVector l0, TLorentzVector l1, vector<FourMom> *signalJets)
{
//   l0 -> l0 + jet_i
//   l1 -> l1 + jet_j
//   minimize for jet

  //copied from SusyNtTools.cxx and modified to work with TLorentzVector
  if((*signalJets).size()<2) return -1.;
  else{
    FourMom signalJet0 =     (*signalJets).at(0);
    TLorentzVector jet0_TLV;
    jet0_TLV.SetPxPyPzE(signalJet0.px, signalJet0.py, signalJet0.pz, signalJet0.E);
    FourMom signalJet1 =     (*signalJets).at(1);
    TLorentzVector jet1_TLV;
    jet1_TLV.SetPxPyPzE(signalJet1.px, signalJet1.py, signalJet1.pz, signalJet1.E);
    
    TLorentzVector alpha_a, alpha_b;
    //case 1:
    alpha_a = l0 + jet0_TLV;
    alpha_b = l1 + jet1_TLV;

    double pTMiss1[3] = {0.0, metlv.Px(), metlv.Py()};
    double pA1[3] = {alpha_a.M(), alpha_a.Px(), alpha_a.Py()};
    double pB1[3] = {alpha_b.M(), alpha_b.Px(), alpha_b.Py()};
    
    // Create Mt2 object
    mt2_bisect::mt2 mt2_event1;
    mt2_event1.set_momenta(pA1,pB1,pTMiss1);
    mt2_event1.set_mn(0); // LSP mass = 0 is Generic
    
    //case 2:
    alpha_a = l0 + jet1_TLV;
    alpha_b = l1 + jet0_TLV;

    double pTMiss2[3] = {0.0, metlv.Px(), metlv.Py()};
    double pA2[3] = {alpha_a.M(), alpha_a.Px(), alpha_a.Py()};
    double pB2[3] = {alpha_b.M(), alpha_b.Px(), alpha_b.Py()};
    
    // Create Mt2 object
    mt2_bisect::mt2 mt2_event2;
    mt2_event2.set_momenta(pA2,pB2,pTMiss2);
    mt2_event2.set_mn(0); // LSP mass = 0 is Generic
    double min_mt2 = min(mt2_event1.get_mt2(), mt2_event2.get_mt2());
    double return_value = (min_mt2 > 0.) ? min_mt2 : -1.;
    return return_value;
  }
  
}
/*--------------------------------------------------------------------------------*/
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
//   outputfile = "output_ZplusJets_2_test.root";  

  
  
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