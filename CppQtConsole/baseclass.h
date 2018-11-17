#ifndef BASECLASS_H
#define BASECLASS_H

#include <stdint.h>

class employeeBase
{
private:
    uint8_t* e_age;

public:
    employeeBase(uint8_t p_age);
    employeeBase(const employeeBase &obj);
    ~employeeBase();
    uint8_t getAge(void);

};

void displayAge(const employeeBase Obj);

#endif // BASECLASS_H
