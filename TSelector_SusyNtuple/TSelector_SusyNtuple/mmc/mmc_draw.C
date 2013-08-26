
void mmc_draw(){

  const int NH=4;
  TString hnames[NH]={"peak","maxprob","mean","coll"};
  TString title[NH]={"Peak","Max Prob","W. Mean","Collinear"};
  const int col[NH]={kBlack,kRed,kBlue,kGray};
  const int marker[NH]={21,22,23,29};
  const float markersize[NH]={1.2,1.0,1.0,1.2};

  int REBIN=10;

  const int mode=1;

  if (mode){ 
    hnames[0]="my_mmc_peak"; hnames[1]="my_mmc_maxprob"; hnames[2]="my_mmc_weight"; hnames[3]="my_meff";
    title[3]="Visible";
  }
  if (mode) REBIN=1;

  gROOT->Reset();
  gROOT->SetStyle("Plain");
  gStyle->SetOptStat(0);

  TCanvas *c1=new TCanvas();

  // gStyle->SetOptStat(111111);
  //gStyle->SetOptFit(1111);

  TH1F *h[NH];

  //  TString file1="histo_2met.root";
  //  TString file1="histo_met_2sigma.root";
  //  TString file1="histo_3sigma.root";
  //  TString file1="histo_morecuts.root";
  TString file1="ggA_150.root";
  TFile* f1 = new TFile(file1);
  f1->cd();

  TF1 *myfit[4];

  TLegend* leg = new TLegend(0.6, 0.4, 0.85, 0.85, "" );
  leg->SetFillColor(10);
  leg->SetShadowColor(10);
  leg->SetLineColor(10);

  TString opt="E";
  for(int i=0; i<NH; i++){
    h[i] = (TH1F*)gROOT->FindObject(hnames[i]);
    if (i==0) h[i]->SetTitle("");
    h[i]->Sumw2();
    h[i]->Scale(1/h[i]->Integral(-1,-1));
    h[i]->Rebin(REBIN);
    h[i]->SetMarkerColor(col[i]);
    h[i]->SetMarkerSize(markersize[i]);
    h[i]->SetMarkerStyle(marker[i]);
    if (NH==3){
      opt="hsame";
      leg->AddEntry(h[i], title[i], "l");
    } else{
      leg->AddEntry(h[i], title[i], "p");
    }
    h[i]->Draw(opt);
    if (i==0){
      h[i]->SetMaximum(h[i]->GetMaximum()*1.3);
      h[i]->GetXaxis()->SetRangeUser(0,300);
    }
    //    h[i]->Fit("myfit","Q0");
    myfit[i] = new TF1("myfit_"+title[i],"gausn(0)",10,170);
    myfit[i]->SetParameters(1,90,30);
    if (mode) myfit[i]->SetParameters(1,120,30);
    h[i]->Fit("myfit_"+title[i],"0");
    myfit[i]->SetLineColor(col[i]);
    myfit[i]->SetLineStyle(3);
    TString lentry="  #mu="; lentry+=(int)myfit[i]->GetParameter(1); lentry+="  #sigma="; lentry+=(int)myfit[i]->GetParameter(2);
    if (i<3 || mode){
      leg->AddEntry("", lentry, "");
      myfit[i]->Draw("same");
    }
    cout << myfit[i]->GetParameter(1) << endl;
    opt="Esame";
  }
  h[0]->SetXTitle("m_{Z} / GeV");
  if (mode) h[0]->SetXTitle("m_{H} / GeV");
  TString ytitle="events / "; if (mode) ytitle+=10; else ytitle+=REBIN; ytitle+=" GeV";
  h[0]->GetYaxis()->SetTitleOffset(1.12);
  h[0]->SetYTitle(ytitle);
  leg->AddEntry("", "units: GeV", "");
  leg->Draw();
  gPad->SaveAs("mmc.gif");
}
