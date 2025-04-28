#include "Gulf.h"

Gulf::Gulf(string n) : name(n) {}

void Gulf::describe() const {
    cout << "This is a gulf named " << name << ". A gulf is a large area of sea partially enclosed by land." << endl;
}
