//____________________________________________________________________________
/*!

\class    genie::Simpson2DFixN

\brief    A simple version of the 2-D extended Simpson rule (an open integration 
          formula) with configurable but fixed number of integration steps. 

\author   Costas Andreopoulos <C.V.Andreopoulos@rl.ac.uk>
          CCLRC, Rutherford Appleton Laboratory

\created  May 03, 2004

\cpright  Copyright (c) 2003-2007, GENIE Neutrino MC Generator Collaboration
          All rights reserved.
          For the licensing terms see $GENIE/USER_LICENSE.
*/
//____________________________________________________________________________

#ifndef _SIMPSON_2D_FIXN_H_
#define _SIMPSON_2D_FIXN_H_

#include "Numerical/IntegratorI.h"
#include "Numerical/GridSpacing.h"

namespace genie {

class GSFunc;
class FunctionMap;

class Simpson2DFixN: public IntegratorI
{
public:
  Simpson2DFixN();
  Simpson2DFixN(string config);
  virtual ~Simpson2DFixN();

  //! implement the IntegratorI interface
  double Integrate(GSFunc & gsfunc) const;

  //! override the Algorithm::Configure methods to load configuration
  //!  data to private data members
  void Configure (const Registry & config);
  void Configure (string param_set);

private:

  //! load config data to private data members
  void LoadConfigData (void);

  //! Jacobian 
  double J(const vector<double> & r) const;

  //! actual config data
  GridSpacing_t fSpacingD0;    
  GridSpacing_t fSpacingD1;    
  unsigned int  fNBinsD0;
  unsigned int  fNBinsD1;
};

}        // genie namespace
#endif   // _SIMPSON_2D_FIXN_H_

