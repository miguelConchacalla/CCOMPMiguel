#include <iostream>

using namespace std;

int main()
{

    int a, b, c;
    cout<<"Digite numero: ";    cin>>a;
    cout<<"Digite numero: ";    cin>>b;
    cout<<"Digite numero: ";    cin>>c;
    
    if (a % c == 0 && b % c == 0){
        cout<<a<<" y "<<b<<" son factores de "<<c<<endl;
    } else{
        cout<<a<<" y "<<b<<" uno de ellos o ninguno no son factores de "<<c<<endl;
    }

    return 0;
}
