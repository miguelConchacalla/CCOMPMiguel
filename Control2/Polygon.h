#ifndef __POLYGON_H__
#define __POLYGON_H__

#include <iostream>
using namespace std;

class Polygon {

protected:
    int ancho, alto;

public:
    Polygon(){}
    Polygon(int a, int b){
        ancho = a;
        alto = b;
    }
    ~Polygon(){}
    int area() {return 0;}

    void printArea(){
        cout << this->area()<< endl;
    }
    void print() {
        cout << ancho << ", " << alto;
    }
};

#endif