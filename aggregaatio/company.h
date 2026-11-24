#ifndef COMPANY_H
#define COMPANY_H
#include <iostream>
#include "Employee.h"
#include <vector>
#include <memory>

using namespace std;
class Company
{
private:
    string companyName;
    vector<shared_ptr<Employee>> employeesList;

public:
    Company();
    Company(const string &c);
    ~Company();
    void addEmployee(shared_ptr<Employee> objE);
    void printEmployees();
};

#endif // COMPANY_H
