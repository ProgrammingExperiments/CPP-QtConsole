#include "baseclass.h"
#include <iostream>

using namespace std;

employeeBase::employeeBase(uint16_t p_age)
{
    e_age = new uint16_t;
    *e_age = p_age;
    cout<<"Normal constructor called.Value is "<<*e_age<<endl;
}

employeeBase::employeeBase(const employeeBase &obj)
{
    e_age = new uint16_t;
    *e_age = *obj.e_age;
    cout<<"Copy constructor called"<<endl;
}

employeeBase::~employeeBase()
{
    delete e_age;
    cout<<"destructor called"<<endl;
}

uint16_t employeeBase::getAge(void)
{
    return *e_age;
}

void displayAge(employeeBase Obj)
{
    cout<<"Age is "<<Obj.getAge()<<endl;
}
