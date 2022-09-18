#include <iostream>

using namespace std;

int main()
{
    double r, d, c, a;
    double pi = 3.14159;

    cout<<"Ingrese radio: ";    cin>>r;

    d = 2 * r;
    c = pi * d;
    a = pi * (r * r);

    cout<<"El diametro es: "<<d<<endl;
    cout<<"La circuferencia es: "<<c<<endl;
    cout<<"El area es: "<<a<<endl;

    return 0;
}
