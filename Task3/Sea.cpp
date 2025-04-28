#include "Sea.h"

Sea::Sea(string n) : name(n) {}

void Sea::describe() const {
    cout << "This is a sea named " << name << ". A sea is a large body of saltwater that is connected to an ocean." << endl;
}
