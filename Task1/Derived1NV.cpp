#include "derived1nv.h"
#include <iostream>

using namespace std;

Derived1NV::Derived1NV() : dataD1(1.1f) {}

void Derived1NV::print() {
    Base1NV::print();
    Base2NV::print();
    cout << "Derived1NV: " << dataD1 << endl;
}