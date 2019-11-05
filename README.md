# DataAnalysis

This repository contains code that is used to run over the centrally produced CMS nanoAOD files. 
# Download and compile

This package should be compiled with the CMS Offline Software (https://github.com/cms-sw/cmssw) since it designed to read the output of centrally produced CMS data files.

```
cmsrel CMSSW_10_6_0
cd CMSSW_10_6_0/src
cmsenv

#This package
git clone https://github.com/michael-pitt/DataAnalysis.git
cd DataAnalysis

scram b -j8
```

