#include <iostream>

using namespace std;

int main()
{

    int a;
    string temp = "  ";

    cout<<"Ingrese digito: ";   cin>>a;

    int m = a / 1000;
    int n = (a % 1000) / 100;
    int b = (a % 100) / 10;
    int v = (a % 10);

    cout<<v<<temp<<b<<temp<<n<<temp<<m;


    return 0;
}