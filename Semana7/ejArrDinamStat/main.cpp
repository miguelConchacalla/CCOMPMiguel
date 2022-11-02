#include <iostream>
#include <string>
#include "DynamicPointArray.h"
#include "StaticPointArray.h"
#include "Point.h"

using namespace std;

int main()
{
    StaticPointArray a(3);

    a.setAt(0, (14, 13));
    a.setAt(1, (20, 21));
    a.setAt(2, (25, 26));

    cout << a.getAt(0);

    Point arr[] = {(1, 2), (3, 7), (10, 11)};
    DynamicPointArray b(arr, 3);
    b.print();

    b.push_back((20, 3));
    b.print();
    b.insert((7, 9), 2);
    b.print();
    b.remove(3);
    b.print();

    return 0;
}
