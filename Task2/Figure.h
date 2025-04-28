#ifndef FIGURE_H
#define FIGURE_H

#include <cmath>
using namespace std;

class Figure {
public:
    virtual double surfaceArea() const = 0;
    virtual ~Figure() {}
};

#endif
