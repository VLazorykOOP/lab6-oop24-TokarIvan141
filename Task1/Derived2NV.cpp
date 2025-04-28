#include "derived2nv.h"
#include <iostream>

using namespace std;

Derived2NV::Derived2NV() : dataD2(2.2) {}

void Derived2NV::print() {
    Base1NV::print();
    cout << "Derived2NV: " << dataD2 << endl;
}