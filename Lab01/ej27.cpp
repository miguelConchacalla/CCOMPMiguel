#include <iostream>

using namespace std;

int main()
{
    
    //cout<<'A'<<endl;
    //cout<<static_cast<int>('A');

    char a;
    char b;
    char c;
    char d;
    char e;

    cout<<"Escriba caracter: "; cin>>a;
    cout<<"Escriba caracter: "; cin>>b;
    cout<<"Escriba caracter: "; cin>>c;
    cout<<"Escriba caracter: "; cin>>d;
    cout<<"Escriba caracter: "; cin>>e;

    cout<<static_cast<int>(a)<<endl;
    cout<<static_cast<int>(b)<<endl;
    cout<<static_cast<int>(c)<<endl;
    cout<<static_cast<int>(d)<<endl;
    cout<<static_cast<int>(e)<<endl;
    
    return 0;
}