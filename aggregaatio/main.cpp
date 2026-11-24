#include <iostream>
#include <memory>
#include "Employee.h"
#include "company.h"

using namespace std;

int main()
{
    shared_ptr<Employee> objE1=make_shared<Employee>("Teuvo", "Taneli");
    shared_ptr<Employee> objE2=make_shared<Employee>("Esa", "Esteri");
    shared_ptr<Employee> objE3=make_shared<Employee>("Kullervo", "Kalevinpoika");

    Company *objC1=new Company ("Gigantti");
    Company *objC2=new Company ("Power");

    objC1->addEmployee(objE1);
    objC1->addEmployee(objE2);

    objC2->addEmployee(objE1);
    objC2->addEmployee(objE3);

    objC1->printEmployees();
    objC2->printEmployees();

    delete objC1;
    objC1=nullptr;

/* Tehtävässä ei suoriteta näitä mutta oikeassa ohjelmassa ne on hyvä olla
    delete objC2;
    objC2=nullptr;
*/
    return 0;
}
