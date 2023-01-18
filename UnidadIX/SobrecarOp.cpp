#include <string>
#include <iostream>
using namespace std;

class String {
    public:
        friend bool operator <<(ostream& os, const String&);
        friend ostream& operator<<(ostream&, const String&);
        friend istream& operator>>(istream&, String&) ;
        
        Date temp{*this}; // mantener el estado actual del objeto
        Date& operator++(); // prefix increment operator
        Date operator++(int); // postfix increment operator
        Date& operator+=(unsigned int); // add days, modify object
        Pareja& operator +(const Pareja& p);
        Pareja& operator -(const Pareja& p);
        Pareja& operator *(const Pareja& p);
        Pareja& operator /(const Pareja& p);
        Pareja& operator =(const Pareja& p);
        Pareja& operator ++();
        bool operator ==(const Pareja& p) const;
};

Pareja& Pareja::operator + (const Pareja &p)
{
    this->a += p.a;
    this->b += p.b;
    return *this;
}
//....................................
Pareja& Pareja::operator - (const Pareja &p)
{
    this->a -= p.a;
    this->b -= p.b;
    return *this;
}
//....................................
Pareja& Pareja::operator * (const Pareja &p)
{
    this->a *= p.a;
    this->b *= p.b;
    return *this;
}
//....................................
Pareja& Pareja::operator / (const Pareja &p)
{
    if (p.a != 0) this->a /= p.a;
    if (p.b != 0) this->b /= p.b;
    return *this;
}
//....................................
Pareja& Pareja::operator = (const Pareja &p)
{
    if(this!=&p){ //Comprueba que no se esté intentanod igualar un objeto a sí mismo
        if (p.a != 0) this->a = p.a;
        if (p.b != 0) this->b = p.b;
    }
    return *this;
}

//....................................
Pareja& Pareja::operator ++ ()
{
    this->a ++;
    this->b ++;
    return *this;
}

//....................................
bool Pareja::operator == (const Pareja &p) const
{
    return this->a == p.a && this->b == p.b;
}

// implemetaci¢n de operadores no miembros
ostream& operator << (ostream &o,const Pareja &p)
{
    o << "(" << p.a << ", " << p.b << ")";
    return o;
}

istream& operator >> (istream &i, Pareja &p)
{
    cout << "Introducir valores para ( a, b) :";
    i >> p.a >> p.b;
    i.ignore();
    return i;
}