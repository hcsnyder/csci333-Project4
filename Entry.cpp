#include <string>
#include "Entry.h"

template <typename V>
Entry<V>::Entry(std::string k, V v) {
  key = k;
  value = v;
}

template <typename V>
Entry<V>::~Entry() {

}

template <typename V>
std::string Entry<V>::getKey() {
  return key;
}

template <typename V>
V Entry<V>::getValue() {
  return value;
}

template <typename V>
void Entry<V>::setValue(V v) {
value = v;
}

template class Entry<int>;
template class Entry<double>;
template class Entry<std::string>;
