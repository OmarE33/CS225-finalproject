/**
 * @file avltree.h
 * Declaraction of the AVLTree class. You will probably need to modify this
 * file to add helper functions.
 */

#pragma once

class Attribute {
  public:
    //type of this attribute
    std::string type;
    //Index of this specific attribute in names
    int idx;
    Attribute() : type(""), idx(-1)               {   };
    Attribute(string t) : type(t)                 {   };
    Attribute(string t, int i) : type(t), idx(i)  {   };
    ~Attribute()                                  {   };
    Attribute(Attribute& other)         { type = other.type;
                                          idx = other.idx;            };
    Attribute& operator=(Attribute& other)
                                        { type = other.type;
                                          idx = other.idx;  
                                          return *this;               };
    bool operator==(Attribute& other)
                                        { return idx == other.idx
                                              && type == other.type;  };
    

  private: 
    
};

#include "Genre.h"
#include "Language.h"
#include "Duration.h"
#include "Country.h"
#include "Years.h"
