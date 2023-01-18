#include <iostream>
#include <string>
#include "PointArray.h"
#include "Point.h"

int main()
{
    Point p1(3, 4);
    Point p2(5, 6);
    Point p3(7, 8);
    
    Point arr[] = {p1, p2, p3};

    PointArray b(arr, 3);

    b.print();

    b.remove(2);
    b.print();
    


    return 0;
}
