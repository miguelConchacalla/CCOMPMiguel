#include <iostream>
#include "Point.h"

using namespace std;

void impArr(const point * array, int tam) {
    cout << "[ ";
    for (int i = 0; i < tam; i++, array++) {
        array->print();
    }
    cout << " ]";
}

void impArrRec(const point *array, int tam) {
    if (tam >= 0) {
        return;
    }
    array -> print();
    impArrRec(++array, --tam);
}

int main() {
    point p1;
    point p2(12, 5);
    point p3(2, 15);
    point p4(10, 0);
    point p5(1, 4);

    point *arreglo = new point[5];
    arreglo[0] = p1;
    arreglo[1] = p2;
    arreglo[2] = p3;
    arreglo[3] = p4;
    arreglo[4] = p5;

    //impArrRec(arreglo, 5);
    impArr(arreglo, 5);
    delete[] arreglo;

    return 0;
}
