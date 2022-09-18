#include <iostream>

using namespace std;

int main()
{

    int a, b, s;

    cout<<"Digite numero: ";    cin>>a;
    cout<<"Digite numero: ";    cin>>b;

    if (a % 2 != 0 && b % 2 != 0){
        s = a + b;
        if (s % 2 == 0){
            cout<<"Son impares y su suma es par";
        }
    } else {
        cout<<"No son impares";
    }

    return 0;
}

/*
#include <iostream>

using namespace std;

int main() {
    int number1;
    int number2;

    cout << "Ingrese primer numero: ";
    cin >> number1;
    cout << "Ingrese segundo numero: ";
    cin >> number2;

    if( !(number1 % 2) ) {
        cout << number1 << ", el primer numero, ES PAR" << endl;
    } else {
        cout << number1 << ", el primer numero, ES IMPAR" << endl;
    }

    if( !(number2 % 2)) {
        cout << number2 << ", el 2do numero, ES PAR" << endl;
    } else {
        cout << number2 << ", el 2do numero, ES IMPAR" << endl;
    }

    if( !(number1 + number2) % 2) {
        cout << (number1 + number2) << ", la suma de los dos, ES PAR" << endl;
    } else {
        cout << (number1 + number2) << ", la suma de los dos, ES IMPAR" << endl;
    }






    return 0;
} 
*/

