#include <QCoreApplication>
#include "baseclass.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /* Custom Code */
    employeeBase empBase1(12);

    employeeBase empBase2 =empBase1;

    displayAge(empBase1);
    displayAge(empBase2);

    cout<<"Before exit";
    return a.exec();
}
