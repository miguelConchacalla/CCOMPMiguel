#include <iostream>
#include "Point.h"

using namespace std;

int main()
{
    point p1(1, 2);
    
    point *ptr = new point(8, 9);

    point *ptr2;
    ptr2 = &p1;

    if (true) {
        point p2(5, 6);
        p2.print();
    }

    p1.print();
    ptr2->print();

    ptr->print();

    delete ptr;
    
    return 0;
}
