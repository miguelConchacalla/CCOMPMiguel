#include <iostream>
#include "point.h"
using namespace std;

void imprimirPoints(const point arr[], const int tam) {
    for (int i = 0; i < tam; i++) {
        arr[i].print();
    }
}

int main()
{
    point p1;
    point p2(4, 3);
    point p3(5, 6);

    point arr[] = {p1, p2, p3};

    imprimirPoints(arr, 3);
    return 0;
}
