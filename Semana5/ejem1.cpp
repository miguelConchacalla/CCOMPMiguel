#include <iostream>
#include "point.h"
using namespace std;

void imprimirPoints(const point arr[], const int tam) {
    for (int i = 0; i < tam; i++) {
        arr[i].print();
    }
}

void ord(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void burbuja(point arr[], int tam) {
    for (int i = 0; i < tam; i++) {
        for (int j = i + 1; j < tam; j++) {
            if (arr[i].getX() > arr[i + 1].getX()) {
                ord(arr[i], arr[j]);
            }
        }
    }
}

void Isort(point array[], int n) {
    point key;
    int j;
    for (int i = 1; i < n; i++) {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j].getX() > key.getX()) {
            array[j + i] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    } 
}

int main()
{
    point p1;
    point p2(12, 5);
    point p3(2, 15);
    point p4(10, 0);
    point p5(1, 4);


    point arr[] = {p1, p2, p3, p4, p5};
    int tam = sizeof(arr) / sizeof(arr[0]);
    imprimirPoints(arr, tam);
    burbuja(arr, tam);
    imprimirPoints(arr, tam);
    return 0;
}
