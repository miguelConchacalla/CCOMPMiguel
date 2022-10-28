#include <iostream>
#include "DynPtrArr.h"

DynPtrArr::DynPtrArr() {
    this->size = 0;
    data = new arr[0];
}

DynPtrArr::DynPtrArr(const point arr[], int size){
    this->size = size;
    data = new point[size];
    for(int i = 0; i < size; i++)
        data[i] = arr[i];
}

int DynPtrArr::getSize() const {
    return size;
}

void DynPtrArr::print() const {

}