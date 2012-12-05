#include "Entry.h"
#include <string>
#include <iostream>

int main() {

Entry<int>* intE = new Entry<int>("47", 5);

std::cout << intE->getKey() << std::endl;
std::cout << intE->getValue() << std::endl;
}
