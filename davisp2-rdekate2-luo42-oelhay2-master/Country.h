/**
 * @file avltree.h
 * Declaraction of the AVLTree class. You will probably need to modify this
 * file to add helper functions.
 */

#pragma once

#include "Attribute.h"

class Country : public Attribute{

  public:
    Country() : Attribute("Country", -1) {};
    Country(int i) : Attribute("Country", i) {};
    Country(Attribute a)    { idx = a.idx;  };
};
