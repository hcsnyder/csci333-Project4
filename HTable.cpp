#include "HTable.h"
#include <iostream>
#include <string>

template <typename V>
HTable<V>::HTable(int s) {
  std::list<Entry<V> > newTable[s];
  delete[] theTable;
  theTable = newTable;
  size = s;
}

template <typename V>
HTable<V>::~HTable() {
  delete[] theTable();
}

template<typename V>
void insert(std::string k, V v) {
  int sum = 0;
  for(int i=0; i<k.length; i++) {
    sum += (int) k[i];
  }
  int key = sum % size;
  Entry<V>* newEntry = new Entry<V>(k, v);
  theTable[key].push_back(newEntry);
}
