#include <iostream>
#include <array>
using namespace std;

void ord(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void bs(int arr[], int tam)
{
    int temp;
    for (int i = 1; i <= tam; i++)
    {
        for (int j = 1; j <= tam; j++)
        {
            if (arr[j] > arr[j + 1])
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
        }
    }
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

void imprimir(int arreglo[], int tam)
{
    cout << "[ ";
    for (int i = 0; i < tam; i++)
    {
        cout << arreglo[i] << " ";
    }
    cout << "]";
}

int main()
{
    int arr[] = {3, 7, 11, 2, 9};
    bs(arr, 5);
    imprimir(arr, 5);
    return 0;
}
