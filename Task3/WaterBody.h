#ifndef WATERBODY_H
#define WATERBODY_H

#include <iostream>
#include <string>
using namespace std;

class WaterBody {
public:
    virtual void describe() const = 0;
    virtual ~WaterBody() {}
};

#endif
