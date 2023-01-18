#include "Polygon2.h"
using namespace std;


Polygon2::Polygon2(int a, int b){
    ancho = a;
    alto = b;
}
Polygon2::~Polygon2(){}

void Polygon2::printArea(){
    cout << this->area()<< endl;
}
void Polygon2::print() {
    cout << ancho << ", " << alto;
}

int Polygon2::getAncho() {return ancho;}
int Polygon2::getAlto() {return alto;}