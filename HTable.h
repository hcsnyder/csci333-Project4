#ifndef __HTABLE_H__
#define __HTABLE_H__

#include "Entry.h"
#include <string>
#include <list>

template<typename V>
class HTable {
  private:
    std::list<Entry<V> > theTable[100];
    int mxSize = 100;

  public:
    HTable<V> ();
    ~HTable<V>();
    bool find(V v);
    void insert(std::string k, V v);
    void remove(V v);
    void print();
};

#endif
