#include "derived1v.h"
#include <iostream>

using namespace std;

Derived1V::Derived1V() : dataD1(3.3f) {}

void Derived1V::print()  {
Base1V::print();
Base2V::print();
cout << "Derived1V: " << dataD1 << endl;
}