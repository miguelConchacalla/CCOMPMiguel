#include <iostream>
#include <string>
#include "ej12.h"

using namespace std;

int main()
{
    int m, d, y;
    cout<<"Ingrese mes: ";  cin>>m;
    cout<<"Ingrese dia: ";  cin>>d;
    cout<<"Ingrese anho: ";  cin>>y;

    Date date1{m, d, y};

    cout<<date1.displayDate();

    return 0;
}
