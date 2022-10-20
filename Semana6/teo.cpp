#include <iostream>

using namespace std;

int main()
{
    //int* ptr,* c;
    //Declaracion de punteros que apunta a los enteros


    int y{5};
    int *yptr;

    cout << &y << endl;
    //Imprime la direccion de memoria de y
    cout << yptr << endl;
    //imprime la direccion de y asignada a yptr
    

    yptr = &y;
    //amperson obtiene la direccion de memoria, operador de direecion, apunta a y

    cout << yptr <<endl;
    

    cout << "**********************************" << endl;

    int x{100};
    int *xptr;

    cout << xptr << endl;
    cout << &x << endl;

    xptr = &x;
    //amperson obtiene la direccion de memoria, operador de direecion

    cout << xptr <<endl;
    cout << &x << endl;
    cout << *xptr << endl;
    //apunta la indireccion 


    cout << "**********************************" << endl;


    int z{20};
    int &ref = z;
    int *ptr = &z;

    cout << ref << endl;    //20
    ++ref;
    cout << z << endl;      //21
    *ptr = 100;

    cout << ptr << endl;    //direccion de y
    cout << *ptr << endl;   //100
    cout << ref << endl;    //100  


    cout << "**********************************" << endl;


    

    return 0;
}
