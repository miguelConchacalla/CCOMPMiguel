#include "ArrayPolygons.cpp"
#include <iostream>
#include <array>
using namespace std;

int main()
{
    Polygon p1(12, 13);
    Polygon p2(14, 15);
    Polygon p3(16, 17);

    
    Polygon arr[] = {p1, p2, p3};

    ArrayPoylgons a1(arr, 3);

    Polygon p4(20, 21);
    a1.push_back(p4);

    a1.display();

    return 0;
}
