#include <iostream>

using namespace std;

int main()
{
    char mychar;

    cout<<"ingrese caracter: ";     cin>>mychar;

    int codigoChar{static_cast<int>(mychar)};

    if (97 >= codigoChar <= 122){
        cout<<"Letra minuscula";
    } else{
        cout<<codigoChar;
    }


    return 0;
}
