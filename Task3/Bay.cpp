#include "Bay.h"

Bay::Bay(string n) : name(n) {}

void Bay::describe() const {
    cout << "This is a bay named " << name << ". A bay is a body of water partially enclosed by land." << endl;
}
