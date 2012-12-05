#include "HTable.h"
#include <iostream>
#include <string>

template <typename V>
HTable<V>::HTable() {
}

template <typename V>
HTable<V>::~HTable() {
}

template <typename V>
bool HTable<V>::find(V v) {
  for(int i=0; i<1000; i++) {
    if(theTable[i].empty() != true) {
      for(unsigned int j=0; j<theTable[i].size(); j++) {
        Entry<V>* curr = &(theTable[i].front());
        if(curr->getValue() == v) {
          return true;
        }
        theTable[i].pop_front();
        theTable[i].push_back(*curr);
      }
    }
  }
  return false;
}

template<typename V>
void HTable<V>::insert(std::string k, V v) {
  int sum = 0;
  for(unsigned int i=0; i<k.length(); i++) {
    sum = sum + (int) k[i];
  }
  int key = sum % 1000;
  //Entry<V>* newEntry = new Entry<V>(k, v);
  theTable[key].push_back(Entry<V>(k, v));
}

template<typename V>
void HTable<V>::remove(V v) {
  for(int i=0; i<1000; i++) {
    if(theTable[i].empty() != true) {
      Entry<V>* curr = &(theTable[i].front());
      Entry<V>* b = &(theTable[i].back());
      while(curr != b) {
        if(curr->getValue() == v) {
          theTable[i].pop_front();
          curr = &(theTable[i].front());
          if(curr == b) {
            break;
          }
        }
        theTable[i].pop_front();
        theTable[i].push_back(*curr);
        curr = &(theTable[i].front());
      }
      theTable[i].pop_front();
      if(curr->getValue() != v) {
        theTable[i].push_back(*curr);
      }
    }
  }
}

template <typename V>
void HTable<V>::print() {
  std::string space = " ";
  for(int i=0; i<1000; i++) {
    if(theTable[i].empty() != true) {
      for(unsigned int j=0; j<theTable[i].size(); j++) {
        Entry<V>* curr = &(theTable[i].front());
        std::cout << curr->getValue() << space;
        theTable[i].pop_front();
        theTable[i].push_back(*curr);
      }
      std::cout << std::endl;
    }
  }
}

template class HTable<int>;
template class HTable<double>;
template class HTable<std::string>;
