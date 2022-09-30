#include "point.h"
#include <iostream>

using namespace std ;


int suma (int a,int b){
    return  a+b;
}


void imprimirnum(int a){

    cout << "El numero es: " << a<< endl;
}
void modificarPoint(int _x, int _y, point p){

    p.setX(_x);
    p.setY(_y);
        
    }


int main (){


    int result =suma(5,6); //correcto

    cout << suma (5,6)<< endl; //correcto


    //int var = imprimirnum(5); // ERROR

    //cout << imprimirnum(5)<< endl ; //ERROR

    imprimirnum(6); //CORRECTO


    point p1(5,6);

    //int var=imprimirPoint(p1); //ERROR
    //cout << imprimirPoint(p1)<< endl; //ERROR
    //imprimirPoint(p1);//


    







}