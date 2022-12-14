#include <iostream>

using namespace std;

int main () {

    int arreglo [5];

    arreglo[0] =10;
    arreglo[1] =5;
    arreglo[2] =4;
    arreglo[3] =8;
    arreglo[4] = 6;


    /*
    int x=0;
    while (x<=3){
        cout << arreglo [x] << endl;
        x=x+1;
    }
    */

   
   int arr[4];
   cout << "Por favor ingrese 4 valores enteros:"<< endl;

   for (int i = 0; i<4; i++){

        cin>> arr[i];
        cout<< "Los valores en el arreglo son:";

    for (int i= 0; i<4;i++){

        cout << ""<< arr[i];
    }
    cout << endl;
    }

    return 0;
}