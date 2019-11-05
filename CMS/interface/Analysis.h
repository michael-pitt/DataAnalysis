#ifndef _Analysis_h_
#define _Analysis_h_

// ROOT includes
#include "TString.h"
#include "TH1F.h"
#include "TFile.h"

// cpp includes


void Analysis(const TString filename,
                    TString outname,
                    Int_t channelSelection, 
                    Int_t chargeSelection, 
                    TH1F *normH, 
                    TH1F *genPU,
                    TString era,
                    Bool_t debug=false);

#endif
