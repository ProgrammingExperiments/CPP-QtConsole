#ifndef BASECLASS_H
#define BASECLASS_H

#include <stdint.h>

class employeeBase
{
private:
    uint16_t* e_age;

public:
    employeeBase(uint16_t p_age);
    employeeBase(const employeeBase &obj);
    ~employeeBase();
    uint16_t getAge(void);

};

void displayAge(employeeBase Obj);

#endif // BASECLASS_H
