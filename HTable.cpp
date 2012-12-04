#include "HTable.h"
#include <iostream>
#include <string>

template <typename V>
HTable<V>::HTable() {
}

template <typename V>
HTable<V>::~HTable() {
  delete[] theTable();
}

template<typename V>
void HTable<V>::insert(std::string k, V v) {
  int sum = 0;
  for(int i=0; i<k.length(); i++) {
    sum += (int) k[i];
  }
  int key = sum % mxSize;
  Entry<V>* newEntry = new Entry<V>(k, v);
  theTable[key].push_back(newEntry);
}

template<typename V>
void HTable<V>::remove(V v) {
  for(int i=0; i<mxSize; i++) {
    if(theTable[i].empty != true) {
      Entry<V>* curr = theTable[i].front();
      Entry<V>* b = theTable[i].back();
      while(curr != b) {
        if(curr->getValue() == v) {
          theTable[i].pop_front();
          curr = theTable[i].front();
          if(curr == b) {
            break;
          }
        }
        theTable[i].pop_front();
        theTable[i].push_back(curr);
        curr = theTable[i].front());
      }
      theTable[i].pop_front();
      if(curr->getValue() != v) {
        theTable[i].push_back(curr);
      }
    }
  }
}
