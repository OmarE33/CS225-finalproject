/**
 * @file avltree.h
 * Declaraction of the AVLTree class. You will probably need to modify this
 * file to add helper functions.
 */

#pragma once

#include "Attribute.h"

class Genre : public Attribute{

  public:
    Genre() : Attribute("Genre", -1)  {};
    Genre(int i) : Attribute("Genre", i)  {};

    Genre(const Genre& other)     { type = other.type;
                                    idx = other.idx;  };
    
};
