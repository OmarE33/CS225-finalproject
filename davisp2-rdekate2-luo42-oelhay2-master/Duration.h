/**
 * @file avltree.h
 * Declaraction of the AVLTree class. You will probably need to modify this
 * file to add helper functions.
 */

#pragma once

#include "Attribute.h"

class Duration : public Attribute{

  public:
    Duration() : Attribute("Duration", -1) {};
    Duration(int i) : Attribute("Duration", i) {};
    Duration(Attribute a) { idx = a.idx;  };
};
