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

void iSort(int array[], int n) {
    int key, j;
    for (int i = 1; i < n; i++) {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + i] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}

int main()
{
    int arreglo1[] = {5, 7, 10, 3, 9};
    int tam = sizeof(arreglo1) / sizeof(arreglo1[0]);
    imprimir(arreglo1, tam);
    iSort(arreglo1, tam);
    imprimir(arreglo1, tam);

    int arr[] = {21, 65, 58, 15};
    burbuja(arr, 4);
    imprimir(arr, 4);

    return 0;
}
