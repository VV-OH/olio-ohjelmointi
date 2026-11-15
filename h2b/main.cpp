#include <iostream>
#include <vector>

#include "car.h"

using namespace std;

int main()
{
    vector<Car> carList;

    carList.push_back(Car("Toyota", "Corolla", 1998));
    carList.push_back(Car("Volvo", "V60", 2022));
    carList.push_back(Car("BMW", "320i", 2019));

    cout << "Second car:" << endl;
    carList[1].printData();

    cout << endl;
    cout << "All cars:" << endl;


    for (Car &car : carList)
    {
        car.printData();
        cout << endl;
    }

    /*
    for(size_t i = 0; i < carList.size(); i++)
    {
        carList[i].printData();
        cout << endl;
    }
*/
    return 0;
}
