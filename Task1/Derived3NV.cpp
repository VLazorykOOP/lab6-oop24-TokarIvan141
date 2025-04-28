#include "derived3nv.h"
#include <iostream>

using namespace std;

Derived3NV::Derived3NV() : dataD3("abc") {}

void Derived3NV::print() {
    Derived1NV::print();
    Derived2NV::print();
    cout << "Derived3NV: " << dataD3 << endl;
}