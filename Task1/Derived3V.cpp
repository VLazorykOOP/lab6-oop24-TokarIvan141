#include "derived3v.h"
#include <iostream>

using namespace std;

Derived3V::Derived3V() : dataD3("xyz") {}

void Derived3V::print(){
Base1V::print();
Base2V::print();
cout << "Derived3V (from Derived1V): "; Derived1V::print();
cout << "Derived3V (from Derived2V): "; Derived2V::print();
cout << "Derived3V: " << dataD3 << endl;
}