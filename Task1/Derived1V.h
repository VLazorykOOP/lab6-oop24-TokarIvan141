#ifndef DERIVED1V_H
#define DERIVED1V_H

#include "base1v.h"
#include "base2v.h"

class Derived1V : public virtual Base1V, public virtual Base2V {
public:
    float dataD1;
    Derived1V();
    virtual void print() override;
};

#endif