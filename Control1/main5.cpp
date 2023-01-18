#include <iostream>
#include "p5.cpp"
using namespace std;

int main()
{

    Empleado e1;
    Empleado e2{12, "CA"};

    //cout << e2.getEdad();
    cout << e2;

    return 0;
}