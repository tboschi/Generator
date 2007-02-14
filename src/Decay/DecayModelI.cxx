//____________________________________________________________________________
/*
 Copyright (c) 2003-2007, GENIE Neutrino MC Generator Collaboration
 All rights reserved.
 For the licensing terms see $GENIE/USER_LICENSE.

 Author: Costas Andreopoulos <C.V.Andreopoulos@rl.ac.uk>
         CCLRC, Rutherford Appleton Laboratory - June 20, 2004

 For the class documentation see the corresponding header file.

 Important revisions after version 2.0.0 :

*/
//____________________________________________________________________________

#include "Decay/DecayModelI.h"

using namespace genie;

//____________________________________________________________________________
DecayModelI::DecayModelI() :
Algorithm()
{

}
//____________________________________________________________________________
DecayModelI::DecayModelI(string name) :
Algorithm(name)
{

}
//____________________________________________________________________________
DecayModelI::DecayModelI(string name, string config) :
Algorithm(name, config)
{

}
//____________________________________________________________________________
DecayModelI::~DecayModelI() 
{ 

}
//____________________________________________________________________________



