#ifndef DERIVED1NV_H
#define DERIVED1NV_H

#include "base1nv.h"
#include "base2nv.h"

class Derived1NV : public Base1NV, public Base2NV {
public:
    float dataD1;
    Derived1NV();
    void print();
};

#endif 