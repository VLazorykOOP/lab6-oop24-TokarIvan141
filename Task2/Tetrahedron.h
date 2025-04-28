#ifndef TETRAHEDRON_H
#define TETRAHEDRON_H

#include "Figure.h"

class Tetrahedron : public Figure {
private:
    double a;

public:
    Tetrahedron(double a);
    double surfaceArea() const override;
};

#endif
