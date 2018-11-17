#include <QCoreApplication>
#include "baseclass.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /* Custom Code */
    employeeBase empBase1(10);

    employeeBase empBase2 = empBase1;

    displayAge(empBase1);
    displayAge(empBase2);

    return a.exec();
}
