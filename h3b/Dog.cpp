#include "dog.h"

Dog::Dog()
{
    cout << "Dog konstruktori" << endl;
}

Dog::~Dog()
{
    cout << "Dog destruktori" << endl;
}

void Dog::callOut()
{
    cout << "Koira haukkuu!" << endl;
}
