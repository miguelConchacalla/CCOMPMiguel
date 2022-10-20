#include <iostream>

using namespace std;

void interc(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;

}

int main()
{
    int c = 20;
    int d = 30;

    interc(&c, &d);

    cout << c << endl;
    cout << d << endl;
    return 0;
}
