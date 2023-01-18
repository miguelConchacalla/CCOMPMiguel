#ifndef __POLYGON2_H__
#define __POLYGON2_H__
#include <iostream>
using namespace std;

class Polygon2 {

protected:
    int ancho, alto;

public:
    Polygon2();
    Polygon2(int, int);
    ~Polygon2();
    
    virtual int area() = 0;

    void printArea();
    void print();

    int getAncho();
    int getAlto();
};
#endif
