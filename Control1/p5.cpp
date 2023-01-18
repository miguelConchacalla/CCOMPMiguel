#include <iostream>
#include <iomanip>
#include "p5.h"
using namespace std;

Empleado::Empleado(){
    edad = 0;
    nombre = "";
}
Empleado::Empleado(int e, string n){
    edad = e;
    nombre = n;
}

ostream& operator<< (ostream& os, const Empleado& e) {
    os << e.edad << ", " << e.nombre;
    return os;
}


