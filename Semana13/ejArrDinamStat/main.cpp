#include <iostream>
#include <string>
#include "DynamicPointArray.h"
#include "StaticPointArray.h"
#include "Point.h"

using namespace std;

int main()
{
    StaticPointArray a(3);
    Point pt1(13, 14);
    Point pt2(20, 21);
    Point pt3(25, 26);

    a.setAt(0, pt1);
    a.setAt(1, pt2);
    a.setAt(2, pt3);

    //a.getAt(0);
    a.print();
    cout << a.getSize();

    /*
    Point arr[] = {(1, 2), (3, 7), (10, 11)};
    DynamicPointArray b(arr, 3);
    b.print();

    b.push_back((20, 3));
    b.print();
    b.insert((7, 9), 2);
    b.print();
    b.remove(3);
    b.print();
    */

    return 0;
}
