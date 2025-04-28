#include "Tetrahedron.h"

Tetrahedron::Tetrahedron(double a) : a(a) {}

double Tetrahedron::surfaceArea() const {
    return pow(a, 2) * pow(M_PI, 3);
}
