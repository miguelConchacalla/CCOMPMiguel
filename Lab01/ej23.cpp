#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e, mayor, menor;

    cout<<"Ingrese numero: ";   cin>>a;
    cout<<"Ingrese numero: ";   cin>>b;
    cout<<"Ingrese numero: ";   cin>>c;
    cout<<"Ingrese numero: ";   cin>>d;
    cout<<"Ingrese numero: ";   cin>>e;

    mayor = a;

    if (mayor < b){
        mayor = b;
    }
    if (mayor < c){
        mayor = c;
    }
    if (mayor < d){
        mayor = d;
    }
    if (mayor < e){
        mayor = e;
    }

    cout<<"El mayor es: "<<mayor<<endl;


    menor = a;

    if (menor > b){
        menor = b;
    }
    if (menor > c){
        menor = c;
    }
    if (menor > d){
        menor = d;
    }
    if (menor > e){
        menor = e;
    }

    cout<<"El menor es: "<<menor<<endl;

    return 0;
}