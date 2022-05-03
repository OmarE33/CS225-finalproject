/**
 * @file avltree.h
 * Declaraction of the AVLTree class. You will probably need to modify this
 * file to add helper functions.
 */

#pragma once

#include "Attribute.h"
#include <vector>
#include <unordered_map>

using std::vector;
using std::unordered_map;

class AttributeMap {
  
  class AttributeIdx {
    public:
      AttributeIdx() : idx(-1)          {   };
      AttributeIdx(int i) : idx(i)      {   };
      int idx;
  };

  public:
    AttributeMap(Attribute a) : type(a) {   };
    vector<string> attributes;
    void add(string a);
    string get(int i);
    int getIndex(string a);
    int findIndex(string a);
    Attribute getAttributeAtIndex(int i);
    Attribute getAttributeAtValue(string a);
    Attribute type;

  private:
    unordered_map<string, AttributeIdx> attribute_map;

};

#include "AttributeMap.cpp"
