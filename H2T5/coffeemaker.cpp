#include "coffeemaker.h"

CoffeeMaker::CoffeeMaker(float vt, float pk) {
    v_tilavuus=vt;
    papu_kapasiteetti=pk;
}

void CoffeeMaker::start()
{
    tila=true;
}

void CoffeeMaker::stop()
{
    tila=false;
}

void CoffeeMaker::lisaaVetta(float vm)
{
    if(v_tilavuus >=v_maara +vm){
        v_maara=v_maara + vm;
    }
    else {
        cout<<"Vesi ei mahdu "<<endl;
    }
}

void CoffeeMaker::lisaaPapuja(float pa)
{
    if(papu_kapasiteetti>=papu_maara+pa){
        papu_maara=papu_maara + pa;
    }
    else {
        cout<<"Pavut ei mahdu"<<endl;
    }
}

void CoffeeMaker::makeCoffee()
{
    if(tila==true && v_maara >=2 && papu_maara >=1)
    {
        cout<<"Kahvi valmistuu pian"<<endl;
        valmistetut++;
        v_maara=v_maara-2;
        papu_maara=papu_maara-1;
    }
    else
    {
        cout<<"Tarkista etta automaatti on paalla"<<endl;
    }
}

void CoffeeMaker::showStatus()
{
    cout<<"Automaatissa on vetta: "<<v_maara<<" dl"<<endl;
    cout<<"Automaatissa on papuja "<<papu_maara<<" dl"<<endl;
    if(tila==false) {
        cout<<"Automaatti on OFF tilassa"<<endl;
    }
    else {
        cout<<"Automaatti on ON tilassa"<<endl;
    }
}

void CoffeeMaker::showMade()
{
    cout<<"Automaatilla on valmistettu "<<valmistetut<<" annosta"<<endl;
}

