#include "Parallelepiped.h"

Parallelepiped::Parallelepiped(double x, double y, double z) : x(x), y(y), z(z) {}

double Parallelepiped::surfaceArea() const {
    return 6 * x * y;
}
