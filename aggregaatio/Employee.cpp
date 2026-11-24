#include "Employee.h"

Employee::Employee() {}

Employee::Employee(const string &f, const string &l): fname(f), lname(l)
{

}

Employee::~Employee()
{
    cout<<fname<<lname<<" tuhottiin"<<endl;
}

void Employee::printEmployee()
{
    cout<<fname<< " "<<lname<<endl;
}
