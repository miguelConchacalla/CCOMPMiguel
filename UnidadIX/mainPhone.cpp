#include <iostream>
#include "PhoneNumber.h"
using namespace std;

int main() {
    PhoneNumber phone;

    cout << "Enter phone number in the form (555) 555-5555:" << endl;
    cin >> phone;

    cout << "\nThe phone number entered was:\n";

    cout << phone << endl;

    return 0;
}