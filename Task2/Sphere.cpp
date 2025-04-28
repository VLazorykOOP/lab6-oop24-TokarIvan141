#include "Sphere.h"

Sphere::Sphere(double r) : r(r) {}

double Sphere::surfaceArea() const {
    return 4 * M_PI * pow(r, 2);
}
