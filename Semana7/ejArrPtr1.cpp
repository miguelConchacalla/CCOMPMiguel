#include <iostream>
#include "Point.h"

using namespace std;

int main()
{
    point p1;
    point p2(12, 5);
    point p3(2, 15);
    point p4(10, 0);
    point p5(1, 4);
    
    point arr[] = {p1, p2, p3, p4, p5};
    int tam = sizeof(arr) / sizeof(arr[0]);

    point *ptr = arr;

    
    for (int i = 0; i < tam; i++, ptr++) {
        ptr -> print();
    }    
    

    /*
    cout << ptr << endl;    //0x93955ffcd0
    cout << arr << endl;    //0x93955ffcd0

    ptr -> print(); //(0, 0)
    arr -> print(); //(0, 0)
    */

    return 0;
}