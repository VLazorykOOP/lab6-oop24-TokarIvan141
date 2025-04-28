#ifndef GULF_H
#define GULF_H

#include "WaterBody.h"

class Gulf : public WaterBody {
private:
    string name;

public:
    Gulf(string n);
    void describe() const override;
};

#endif
