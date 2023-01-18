#ifndef __P5_H__
#define __P5_H__
#include <iostream>
using namespace std;

class Empleado {
private:
    int edad;
    string nombre;
public:
    Empleado();
    Empleado(int, string);
    
    int getEdad() {return edad;}
    string getNombre() {return nombre;}

    void setEdad(int v) {edad = v;}
    void setNombre(int v) {nombre = v;}

    //sobrecarga operador de salida
    friend ostream& operator << (ostream& , const Empleado& );
    //

};

#endif