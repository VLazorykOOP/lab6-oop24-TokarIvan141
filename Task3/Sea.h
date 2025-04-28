#ifndef SEA_H
#define SEA_H

#include "WaterBody.h"

class Sea : public WaterBody {
private:
    string name;

public:
    Sea(string n);
    void describe() const override;
};

#endif
