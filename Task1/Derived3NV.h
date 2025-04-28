#ifndef DERIVED3NV_H
#define DERIVED3NV_H

#include "derived1nv.h"
#include "derived2nv.h"
#include <string>
using namespace std;

class Derived3NV : public Derived1NV, public Derived2NV {
public:
    string dataD3;
    Derived3NV();
    void print();
};

#endif