#ifndef DERIVED3V_H
#define DERIVED3V_H

#include "derived1v.h"
#include "derived2v.h"
#include <string>
using namespace std;

class Derived3V : public Derived1V, public Derived2V {
public:
    string dataD3;
    Derived3V();
    virtual void print() override;
};

#endif 