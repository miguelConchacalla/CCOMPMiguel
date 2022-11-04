#include <iostream>
#include <string>
#include "StaticPointArray.h"
#include "Point.h"

StaticPointArray::StaticPointArray(int size)
{
    data = new Point[size];
    this->size = size;
}

StaticPointArray::StaticPointArray(const StaticPointArray &o)
{
    size = o.size;
    data = new Point[o.size];
    for (int i = 0; i < size; i++)
    {
        data[i] = o.data[i];
    }
}

void StaticPointArray::setAt(int index, Point pt)
{
    if (index >= 0 && index < size)
    {
        data[index] = pt;
    }
}

Point StaticPointArray::getAt(int index) const
{
    if (index >= 0 && index < size)
    {
        return data[index];
    }
}

int StaticPointArray::getSize() const
{
    return size;
}

void StaticPointArray::print() const
{
    std::cout << "[ ";
    for (int i = 0; i < size; i++)
    {
        data[i].print();
    }
    std::cout << " ]" << std::endl;
}

StaticPointArray::~StaticPointArray()
{
    delete[] data;
}