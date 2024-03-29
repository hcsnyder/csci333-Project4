#ifndef __HTABLE_H__
#define __HTABLE_H__

#include "Entry.h"
#include <string>
#include <list>

template<typename V>
class HTable {
  private:
    std::list<Entry<V> > theTable[1000];

  public:
    HTable<V> ();
    ~HTable<V>();
    void insert(std::string k, V v);
    void remove(V v);
    void print();
};

#endif
