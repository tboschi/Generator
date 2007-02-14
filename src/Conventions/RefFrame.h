//____________________________________________________________________________
/*!

\class    genie::RefFrame

\brief    An enumeration of reference frames.

\author   Costas Andreopoulos <C.V.Andreopoulos@rl.ac.uk>
          CCLRC, Rutherford Appleton Laboratory

\created  May 04, 2004
 
\cpright  Copyright (c) 2003-2007, GENIE Neutrino MC Generator Collaboration
          All rights reserved.
          For the licensing terms see $GENIE/USER_LICENSE.
*/
//____________________________________________________________________________

#ifndef _REF_FRAME_H_
#define _REF_FRAME_H_

namespace genie {

typedef enum ERefFrame {

  kRfUndefined = 0,
  kRfLab,  
  kRfCM,
  kRfHCM,
  kRfTgtRest,
  kRfHitNucRest,
  kRfHitElRest

} RefFrame_t;

class RefFrame {

public:

  static char * AsString(RefFrame_t rf) 
  {
    switch (rf) {
       case (kRfLab)        : return "[LAB]";                     break;       
       case (kRfCM)         : return "[Center of mass]";          break;
       case (kRfHCM)        : return "[Hadronic center of mass]"; break;
       case (kRfTgtRest)    : return "[Nuclear target @ rest]";   break;
       case (kRfHitNucRest) : return "[Hit nucleon @ rest]";      break;
       case (kRfHitElRest)  : return "[Hit electron@ rest]";      break;
       case (kRfUndefined)  :
       default :              return "** Undefined reference frame ** ";
    }
  }
};

}        // genie namespace

#endif   // _REF_FRAME_H_
