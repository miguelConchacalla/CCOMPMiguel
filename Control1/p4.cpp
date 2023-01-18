#include <iostream>
using namespace std;
int main()
{
    int n = 1232;
    int m = n; //12321
    int l = n; //12321
    int c = 1;
    int a = 1;

    for (int i = 0; i < c; i++) {
        if (n > 0) {
            n = n / 10;
            c++;
        }
        else { 
            c--;
            break;
        }
    }

    for (int i = 1; i < c; i++) {
        a *= 10;
    }

    for (int i = 0; i < c; i++) {
        int j = m / a;
        int k = l % 10;
        if (j == k) {
            m = m % a;
            a /= 10;
            l = l / 10;
        }
        else {
            cout << "No es palindromo";
            break;
        }
        cout << "Es palindromo";
    }
        
    return 0;
}
