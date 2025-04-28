#ifndef BAY_H
#define BAY_H

#include "WaterBody.h"

class Bay : public WaterBody {
private:
    string name;

public:
    Bay(string n);
    void describe() const override;
};

#endif
