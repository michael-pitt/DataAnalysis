#include "DataAnalysis/CMS/interface/Analysis.h"

//cpp include
#include <iostream>

int main()
{
	
  // input agruments:
  TString normTag("MC13TeV_2017_DY50toInf_mm_SD");
  
  TString in("/eos/cms/store/cmst3/user/mpitt/ttbar/TestSample/"+normTag+".root");
  TString out(normTag+".root");
  TString era("/afs/cern.ch/work/m/mpitt/PPS_ZX/production2/CMSSW_10_6_0/src/TopLJets2015/TopAnalysis/data/era2017");
  
  TFile *normF=TFile::Open("genweights.root"); 
  if(!normF){printf("Missing genweights.root file, exit w/o running the analysis script\n"); return 0;}
  TH1F *normH=(TH1F *)normF->Get(normTag); normH->SetDirectory(0);
  TH1F *puH=(TH1F *)normF->Get(normTag+"_pu"); puH->SetDirectory(0);
  normF->Close();
  int channel(0),charge(0); bool debug(false);
  std::cout << "Will run now RunExclusiveZX!!! " << std::endl;
  Analysis(in,out,channel,charge,normH,puH,era,debug);
  
  //all done
  return 0;
}  





