#include <iostream>

using namespace std;

int main()
{
    float combustibleKM;
    float lubricante;
    float neumaticos;
    float reparacion;

    cout<<"Digite el combustible por galon (km): ";  cin>>combustibleKM;
    cout<<"Digite el lubricante (km): ";   cin>>lubricante;
    cout<<"Digite el recorrido (km) de neumaticos: ";   cin>>neumaticos;
    cout<<"Digite los km de recorrido: ";   cin>>reparacion;
    
    combustibleKM = combustibleKM * 0.05;
    lubricante = lubricante * 0.008;
    neumaticos = neumaticos * 0.01;
    reparacion = reparacion * 0.002;

    cout<<"\nEl costo de manejo anualmente es de 0.07 centavos de dolar por cada km recorrido";
    cout<<"\n---------------------------------------";
    cout<<"\nCombustible/galon: "<<combustibleKM;
    cout<<"\nAceite lubricante: "<<lubricante;
    cout<<"\nNeumaticos: "<<neumaticos;
    cout<<"\nReparacion: "<<reparacion;
    cout<<"\n---------------------------------------";
    cout<<"\n\nCosto de manejo diario es de 0.062 centavos de dolar por cada km recorrido";
    cout<<"\n---------------------------------------";
    cout<<"\nCombustible/galon: "<<combustibleKM;
    cout<<"\nNeumaticos: "<<neumaticos/360;
    cout<<"\nReparacion: "<<reparacion/360;
    cout<<"\n---------------------------------------";
    return 0;
}
