#include <iostream>

using namespace std;

int main()
{
    int age, mayor, menor;

    cout<<"Ingrese su edad: ";  cin>>age;
    
    int fcMHR = 220 - age;
    int tnkMHR = 208 - age;
    int gelMHR = 207 - age;
    int nesMHR = 211 - age;

    mayor = fcMHR;

    if (mayor < tnkMHR){
        mayor = tnkMHR;
    }
    if (mayor < gelMHR){
        mayor = gelMHR;
    }
    if (mayor < nesMHR){
        mayor = nesMHR;
    }

    menor = fcMHR;

    if (menor > tnkMHR){
        menor = tnkMHR;
    }
    if (menor > gelMHR){
        menor = gelMHR;
    }
    if (menor > nesMHR){
        menor = nesMHR;
    }

    cout<<"Su rango de valores demostrados por MHR es entre: "<<menor<<" - "<<mayor;
    

    return 0;
}
