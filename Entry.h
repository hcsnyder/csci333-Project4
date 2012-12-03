#ifndef __ENTRY_H__
#define __ENTRY_H__
#include <string>

template <typename V>
class Entry {
  private:
    std::string key; 
    V value;
  public:
    Entry(std::string k, V v);
    ~Entry();
    std::string getKey();
    V getValue();
    void setValue(V v);
};
#endif
