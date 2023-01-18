#ifndef __ARRAYPOLYGONS_H__
#define __ARRAYPOLYGONS_H__
#include "Polygon.h"

class ArrayPoylgons {

    Polygon *arr;
    int tam;
public:
    ArrayPoylgons();
    ~ArrayPoylgons();
    ArrayPoylgons(const Polygon arr[], int tam);
    ArrayPoylgons(const ArrayPoylgons& c);
    void push_back(Polygon v);
    void insert(Polygon v, int pos);
    void remove(int pos);
    int getTam() const;
    void display() const;
};


#endif