#include "company.h"

Company::Company() {}

Company::Company(const string &c):companyName(c)
{

}

Company::~Company()
{
    cout<<companyName<<" tuhottiin"<<endl;
}

void Company::addEmployee(shared_ptr<Employee> objE)
{
    employeesList.push_back(objE);
}

void Company::printEmployees()
{
    int n=1;
    cout<<"----------------------"<<endl;
    cout<<"Yritys="<<companyName<<endl;
    for(shared_ptr<Employee> obj: employeesList) {
        cout<<" "<<n<<".";
        obj->printEmployee();
        n++;
    }
    cout<<"----------------------"<<endl;
}
