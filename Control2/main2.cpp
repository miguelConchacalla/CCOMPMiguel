#include <iostream>
#include "Polygon2.h"
#include "Rectangle.cpp"
#include "Triangle.cpp"
using namespace std;
int main()
{
    Rectangle *r1 = new Rectangle();
    r1->printArea();
    Polygon2 **ptr = new Polygon2*[3];
    /*
    ptr[0] = new r1(2, 3);
    ptr[0] = new r2(2, 3);
    ptr[0] = new r1(2, 3);
*/

    return 0;
}
