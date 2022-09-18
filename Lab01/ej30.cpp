#include <iostream>

using namespace std;

int main()
{
    float bmi;
    float w, h;

    cout<<"Indique su peso: "; cin>>w;
    cout<<"Indique su altura: "; cin>>h;

    bmi = w / (h * h);

    cout<<"\nSu BMI es: "<<bmi<<"\n\n";
    cout<<"BMI VALUES\n";
    cout<<"Underweight :\tless than 18.5\n";
    cout<<"Normal :\tbetween 18.5 and 24.9\n";
    cout<<"Overweight :\tbetween 25 and 29.9\n";
    cout<<"Obese :\t\t30 or greater";
   
    return 0;
}