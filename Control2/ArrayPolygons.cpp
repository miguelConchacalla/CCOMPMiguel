#include <iostream>
#include <iomanip>
#include "Polygon.h"
#include "ArrayPolygons.h"
using namespace std;
ArrayPoylgons::ArrayPoylgons() {
    this->tam = 0;
    arr = new Polygon[0];
}

ArrayPoylgons::ArrayPoylgons(const Polygon arr2[], int tam) {
    this->tam = 0;
    arr = new Polygon[tam];
    for (int i = 0; i < tam; i++) {
        arr[i] = arr2[i];
    }
}

ArrayPoylgons::ArrayPoylgons(const ArrayPoylgons& c){
    this->tam = c.tam;
    this->arr = new Polygon[c.tam];
    for (int i = 0; i < tam; i++) {
        arr[i] = c.arr[i];
    }
}

ArrayPoylgons::~ArrayPoylgons(){
    delete [] arr;
}

void ArrayPoylgons::push_back(Polygon v) {
    Polygon* tmp = new Polygon[tam + 1];
    for (int i = 0; i < tam; i++) {
        tmp[i] = arr[i];
    }
    tmp[tam] = v;

    tam += 1;

    delete [] arr;

    arr = tmp;
}


void ArrayPoylgons::insert(Polygon v, int pos) {
    Polygon *tmp = new Polygon[tam + 1];
    for (int i = 0, j = 0; i < tam ; i++, j++) {
        if (i == pos) {
            tmp[pos] = v;
            --j;
        } else {
            tmp[i] = arr[j];
        }
    }

    tam += 1;
    delete [] arr;
    arr = tmp;
}

void ArrayPoylgons::remove(int pos) {
    Polygon *tmp = new Polygon[tam - 1];
    for (int i = 0, j = 0; i < tam; i++, j++) {
        if(i == pos) {
            tmp[i] = arr[++j];
        } else {
            tmp[i] = arr[j];
        }
    }
    tam -= 1;
    delete [] arr;
    arr = tmp;
}

int ArrayPoylgons::getTam() const {
    return tam;
}

void ArrayPoylgons::display() const{
    cout << "[ ";
    for (int i = 0; i < tam; i++) {
        arr[i].print();
    }
    cout << " ]";
}
/*

ostream& operator <<(ostream& os, ArrayPoylgons& ar) {
    os << "[ ";
    for (int i = 0; i < ar.getTam(); i++) {
        cout << << ", ";
    }
}
*/
