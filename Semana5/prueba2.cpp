#include "point.h"
#include <iostream>

using namespace std ;


void intercambio(int &a,int &b){
    int tmp=a;
    a=b;
    b=tmp;

}


void intercambiopuntos(point &a,point &b){

    point tmp=a;
    a=b;
    b=tmp;
}


int main () {


    int a = 20;

    int b= 40;

    intercambio(a,b);

    cout << a<< endl; //40
    cout << b<< endl; //20


    point p1 (4,5);
    point p2 (9,2);
    intercambiopuntos(p1,p2);
    return 0;
}