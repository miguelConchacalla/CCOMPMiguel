#include <iostream>
using namespace std;

void ord(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void burbuja(int arr[], int tam) {
    for (int j = 0; j < tam; j++) {
        for (int i = 0; i < (tam - 1); i++) {
            if (arr[i] > arr[i + 1]) {
                ord(arr[j], arr[j + 1]);
                
            }
        }
    }
}

void imprimir(int arreglo[], int tam) {
    cout <<"[ ";
    for (int i = 0; i < tam; i++) {
        cout << arreglo[i] << " ";
    }
    cout <<"]";
}

int main()
{
    int arr[] = {21, 65, 58, 15};
    burbuja(arr, 4);
    imprimir(arr, 4);

    return 0;
}
