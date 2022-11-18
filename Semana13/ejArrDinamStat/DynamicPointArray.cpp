#include <iostream>
#include <iomanip>
#include "DynamicPointArray.h"
#include "Point.h"

DynamicPointArray::DynamicPointArray()
{
    this->size = 0;
    data = new Point[0];
}

DynamicPointArray::DynamicPointArray(const Point arr[], int size)
{
    this->size = size;
    data = new Point[size];
    for (int i = 0; i < size; i++)
        data[i] = arr[i];
}

int DynamicPointArray::getSize() const
{
    return size;
}

DynamicPointArray::DynamicPointArray(const DynamicPointArray &o) {
    this->size = o.size;
    this->data = new Point[o.size];
    for(int i = 0; i < size; i++)
        data[i] = o.data[i];
}

void DynamicPointArray::print() const
{
    std::cout << "[ ";
    for(int i = 0; i < size; i++)
    {
        data[i].print();
    }
    std::cout << " ]" << std::endl;
}

void DynamicPointArray::push_back(Point elem)
{
    Point *tmp = new Point[size + 1];

    for (int i = 0; i < size; i++)
    {
        tmp[i] = data[i];
    }

    tmp[size] = elem;

    size += 1;

    delete[] data;

    data = tmp;
}

void DynamicPointArray::insert(Point elem, int pos) {
    
    Point *tmp = new Point[size + 1];
    
    for(int i = 0, j = 0; i < size; i++, j++) {
        if(j == pos) {
            tmp[pos] = elem;
            i--;
        } else {
            tmp[j] = data[i];
        }        
    }
    
    size += 1;
    
    delete [] data;
    
    data = tmp;
} 

void DynamicPointArray::remove(int pos) {
    Point *tmp = new Point[size - 1];

    for (int i = 0, j = 0; i < size; i++, j++) {
        if (j == pos) {
            tmp[j] = data[++i];
        } else {
            tmp[j] = data[i];
        }
    }
    size -= 1;
    
    delete [] data;
    
    data = tmp;
} 

//std::ostream& operator << (std::ostream& output, const DynamicPointArray& n) {
 //   output << "Size: " << n.getSize() << "Data: "n.print() << std::endl;
   // return output;
//}

DynamicPointArray::~DynamicPointArray() {
    delete[] data;
}