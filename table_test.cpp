#include "HTable.h"
#include <string>
#include <iostream>

int main() {
  HTable<int>* intTable = new HTable<int>();

  std::string s = "9";
  int sum = 0;
  for(unsigned int i=0; i<s.length(); i++) {
    sum = sum + (int) s[i];
  }
  sum = sum % 1000;
  std::cout << sum << std::endl;

  intTable->insert("47", 5);
  intTable->insert("fd", 100);
  intTable->insert("10", 500);
  intTable->insert("47", 1);
  intTable->insert("9", 30);

  intTable->print();

  intTable->find(30);

  intTable->remove(5);

  intTable->print();

  HTable<double>* dTable = new HTable<double>();

  dTable->insert("47", 5.9);
  dTable->insert("fd", 100.5);
  dTable->insert("10", 500.8);
  dTable->insert("47", 1.47);
  dTable->insert("9", 3.14);

  dTable->print();

  //dTable->find(500.8);

  dTable->remove(1.47);

  dTable->print();

  HTable<std::string>* sTable = new HTable<std::string>();

  sTable->insert("47", "hello");
  sTable->insert("fd", "world");
  sTable->insert("10", "CSCI");
  sTable->insert("47", "World");
  sTable->insert("9", "Yay");
  sTable->insert("9", "Christmas!");

  sTable->print();

  sTable->find("CSCI");

  sTable->remove("World");

  sTable->print();

}
