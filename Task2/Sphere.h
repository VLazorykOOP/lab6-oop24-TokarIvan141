#ifndef SPHERE_H
#define SPHERE_H

#include "Figure.h"

class Sphere : public Figure {
private:
    double r;

public:
    Sphere(double r);
    double surfaceArea() const override;
};

#endif
