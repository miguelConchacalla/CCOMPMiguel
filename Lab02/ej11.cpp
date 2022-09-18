#include <iostream>
#include <string>
#include "ej11.h"

using namespace std;

int main()
{
    MotorVehicle motorVehicle1{"Toyota", "Premium", 2005, "Azul", 2};

    cout<<motorVehicle1.displayCarDetail();

    return 0;
}
