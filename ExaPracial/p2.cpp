#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    int y = 3;
    int &ref = y;
    ref ++;

    cout << x++ << " ";
    cout << ++y << " ";
    cout << ++ref << endl;

    int arr[] = {10, 0, 1, 4, 9, 10};

    while (arr[x]) {
        if (--ref) {
            arr[ref] = 10;
        } else {
            --x;
        }
        cout << arr[x] << endl;
    }
    cout << arr[x]<< endl;

    cout << "[ ";
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << " ]";
    
    return 0;
}
