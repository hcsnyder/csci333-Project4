#ifndef __HTABLE_H__
#define __HTABLE_H__

#include "Entry.h"
#include <string>

template<typename V>
class HTable {
  private;
    Entry* front;

  public:
    HTable();
    ~HTable();
    bool find(V v);
    void insert(std::string k, V v);
    void remove(V v);
    void print();
};

#endif
