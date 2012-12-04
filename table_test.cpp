#include "HTable.h"
#include <string>

int main() {
  HTable<int>* intTable = new HTable<int>();

  intTable->insert("47", 5);
  intTable->insert("fd", 100);
  intTable->insert("10", 500);
  intTable->insert("47", 1);
  intTable->insert("9", 30);

  intTable->print();

  intTable->remove(1);

  intTable->print();

  delete[] intTable;

  HTable<double>* dTable = new HTable<double>();

  dTable->insert("47", 5.9);
  dTable->insert("fd", 100.5);
  dTable->insert("10", 500.8);
  dTable->insert("47", 1.47);
  dTable->insert("9", 3.14);

  dTable->print();

  dTable->remove(1.47);

  dTable->print();

  delete[] dTable;

  HTable<std::string>* sTable = new HTable<std::string>();

  sTable->insert("47", "hello");
  sTable->insert("fd", "world");
  sTable->insert("10", "CSCI");
  sTable->insert("47", "World");
  sTable->insert("9", "Yay");
  sTable->insert("9", "Christmas!");

  sTable->print();

  sTable->remove("World");

  sTable->print();

  delete[] sTable;

}
