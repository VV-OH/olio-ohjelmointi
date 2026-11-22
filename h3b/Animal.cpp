#include "animal.h"

Animal::Animal()
{
    cout << "Animal konstruktori" << endl;
}

Animal::~Animal()
{
    cout << "Animal destruktori" << endl;
}

void Animal::callOut()
{
    cout << "Elain aantelee." << endl;
}
