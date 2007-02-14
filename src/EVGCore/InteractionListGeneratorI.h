//____________________________________________________________________________
/*!

\class   genie::InteractionListGeneratorI

\brief   Defines the InteractionListGeneratorI interface.
         Concrete implementations of this interface generate a list of all
         Interaction (= event summary) objects that can be generated by
         EventGeneratorI subclasses.

\author  Costas Andreopoulos <C.V.Andreopoulos@rl.ac.uk>
         CCLRC, Rutherford Appleton Laboratory

\created May 13, 2005

\cpright Copyright (c) 2003-2007, GENIE Neutrino MC Generator Collaboration
         All rights reserved.
         For the licensing terms see $GENIE/USER_LICENSE.
*/
//____________________________________________________________________________

#ifndef _INTERACTION_LIST_GENERATOR_I_H_
#define _INTERACTION_LIST_GENERATOR_I_H_

#include "Algorithm/Algorithm.h"

namespace genie {

class InteractionList;
class InitialState;

class InteractionListGeneratorI : public Algorithm {

public :

  //-- define the InteractionListGeneratorI interface

  virtual InteractionList *
                 CreateInteractionList(const InitialState & init) const = 0;

protected :

  InteractionListGeneratorI();
  InteractionListGeneratorI(string name);
  InteractionListGeneratorI(string name, string config);
  ~InteractionListGeneratorI();
};

}      // genie namespace

#endif // _INTERACTION_LIST_GENERATOR_I_H_
