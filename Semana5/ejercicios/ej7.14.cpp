#include <iostream>
#include <array>

using namespace std;

void imp(int array[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << array[i] << " ";
    }
}

//int ej() {
//}

int main()
{
    int array[3];
    int n{1}, c{0};
    int tam;
    while (n) {
        cout <<"num: ";     cin >> n;
        if (n >= 10 && n <= 100) {
            for (c; c < 3; ++c) {
                array[c] = n;
            }
        }
        if (c == 4) {
            break;
        }
    }
    
    imp(array, 3);
    return 0;
}
