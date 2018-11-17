#include "baseclass.h"
#include <iostream>

using namespace std;

employeeBase::employeeBase(uint8_t p_age)
{
    e_age = new uint8_t;
    *e_age = p_age;
    cout<<"Normal constructor called"<<endl;
}

employeeBase::employeeBase(const employeeBase &obj)
{
    e_age = new uint8_t;
    *e_age = *obj.e_age;
    cout<<"Copy constructor called"<<endl;
}

employeeBase::~employeeBase()
{
    delete e_age;
    cout<<"destructor called"<<endl;
}

uint8_t employeeBase::getAge(void)
{
    return *e_age;
}

void displayAge(employeeBase Obj)
{
    cout<<"Age is "<<Obj.getAge()<<endl;
}
