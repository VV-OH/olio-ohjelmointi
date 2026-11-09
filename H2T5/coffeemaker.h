#ifndef COFFEEMAKER_H
#define COFFEEMAKER_H
#include <iostream>
using namespace std;

class CoffeeMaker
{
private:
    float v_tilavuus;
    float v_maara=0;
    float papu_kapasiteetti;
    float papu_maara=0;
    int valmistetut=0;
    bool tila=false;

public:
    CoffeeMaker(float vt, float pk);
    void start();
    void stop();
    void lisaaVetta(float vm);
    void lisaaPapuja(float pa);
    void makeCoffee();
    void showStatus();
    void showMade();

};

#endif // COFFEEMAKER_H
