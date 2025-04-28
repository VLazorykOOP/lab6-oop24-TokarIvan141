#ifndef DERIVED2V_H
#define DERIVED2V_H

#include "base1v.h"

class Derived2V : public virtual Base1V {
public:
    double dataD2;
    Derived2V();
    virtual void print() override;
};

#endif 