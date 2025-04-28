#ifndef PARALLELEPIPED_H
#define PARALLELEPIPED_H

#include "Figure.h"

class Parallelepiped : public Figure {
private:
    double x, y, z;

public:
    Parallelepiped(double x, double y, double z);
    double surfaceArea() const override;
};

#endif
