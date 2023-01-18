#include <iostream>

using namespace std;

bool md(int n) {
    if(n % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

bool mpd(int a, int b) {
    if (a % b == 0) {
        return true;
    } else 
        return false;
}

int main()
{
    cout << mpd(10, 5);
    return 0;
}
