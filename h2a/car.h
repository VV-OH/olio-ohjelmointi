#ifndef CAR_H
#define CAR_H

#include <string>

using namespace std;

class Car
{
public:
    void printData();
    void setBrand(string b);
    void setModel(string m);
    void setYearModel(int y);

private:
    string brand;
    string model;
    int yearModel;
};

#endif // CAR_H
