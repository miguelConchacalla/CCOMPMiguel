#ifndef __STATICPOINTARRAY_H__
#define __STATICPOINTARRAY_H__
#include "Point.h"
#include <iostream>
#include <string>

class StaticPointArray
{
    int size;
    Point *data;

public:
    StaticPointArray(int);
    StaticPointArray(const StaticPointArray&);
    void setAt(int , Point);
    Point getAt(int) const;
    int getSize() const;
    void print() const;

    //std::ostream& operator << (std::ostream&, const StaticPointArray&);

    ~StaticPointArray();
};
#endif