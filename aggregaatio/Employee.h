#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>

using namespace std;

class Employee
{
private:
    string fname;
    string lname;
public:
    Employee();
    Employee(const string &f, const string &l);
    ~Employee();
    void printEmployee();
};

#endif // EMPLOYEE_H
