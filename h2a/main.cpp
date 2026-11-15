#include <iostream>
#include <memory>

#include "car.h"
#include "rectangle.h"
#include "student.h"

using namespace std;

int main()
{
    //Car pinomuisti
    Car myCar;

    myCar.setBrand("Toyota");
    myCar.setModel("Corolla");
    myCar.setYearModel(2022);

    cout << "CAR" << endl;
    myCar.printData();

    cout << endl;

    //Rectangle kekomuisti
    Rectangle *rect = new Rectangle;

    rect->setWidth(5.0);
    rect->setHeight(3.0);

    cout << "RECTANGLE" << endl;
    cout << "Area: " << rect->getArea() << endl;
    cout << "Circumference: " << rect->getCircum() << endl;

    delete rect;

    cout << endl;


    //Student smart pointer
    unique_ptr<Student> student = make_unique<Student>();

    student->setName("Matti");
    student->setStudentNumber(12345);
    student->setAverage(4.2);

    cout << "STUDENT" << endl;
    cout << "Name: " << student->getName() << endl;
    cout << "Student number: " << student->getStudentNumber() << endl;
    cout << "Average: " << student->getAverage() << endl;

    return 0;
}
