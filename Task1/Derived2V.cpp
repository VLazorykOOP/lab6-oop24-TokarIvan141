#include "derived2v.h"
#include <iostream>

using namespace std;

Derived2V::Derived2V() : dataD2(4.4) {}

void Derived2V::print(){
Base1V::print();
cout << "Derived2V: " << dataD2 << endl;
}