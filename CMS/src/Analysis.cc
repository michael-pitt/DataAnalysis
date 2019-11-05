// This code, run over nanoAOD CMS files and creates miniNtuple with relevant variables.
// This ntuple can be used for quick analysis and integrated with the statistical machinery.
// 
// Inspired by Pedro's da-Silva TopLJets2015 analysis package code:
// https://github.com/pfs/TopLJets2015/blob/master/TopAnalysis/src/ExclusiveZX.cc
//
// author michael.pitt@cern.ch

#include <TFile.h>
#include <TROOT.h>
#include <TH1.h>
#include <TH2.h>
#include <TSystem.h>
#include <TGraph.h>
#include <TLorentzVector.h>
#include <TGraphAsymmErrors.h>

#include "DataAnalysis/CMS/interface/Analysis.h"
//#include "TopLJets2015/TopAnalysis/interface/CommonTools.h"
//#include "TopQuarkAnalysis/TopTools/interface/MEzCalculator.h"
//#include "TopLJets2015/TopAnalysis/interface/L1PrefireEfficiencyWrapper.h"

// cpp includes
#include <iostream>

#include "TMath.h"


using namespace std;


//
void Analysis(const TString in_fname,
                    TString outname,
                    Int_t channelSelection, 
                    Int_t chargeSelection, 
                    TH1F *normH, 
                    TH1F *genPU, 
                    TString era,
                    Bool_t debug)
{
  /////////////////////
  // INITIALIZATION //
  ///////////////////
  // const char* CMSSW_BASE = getenv("CMSSW_BASE");
  cout << "Running the analysis package GOOD LUCK!!!!" << endl;
  const TString filename(in_fname);
  bool vetoPromptPhotons = filename.Contains("_QCDEM_") || filename.Contains("_TTJets");
  cout << "filename = " << filename << endl;
  cout << "vetoPromptPhotons = " << vetoPromptPhotons << endl;
  
  //MiniEvent_t ev;

  //PREPARE OUTPUT
  
}
