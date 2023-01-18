#include "Polygon2.cpp"
using namespace std;

class Triangle : public Polygon2 {
    
    public:
        Triangle(){}
        Triangle(int a, int b){
            ancho = a;
            alto = b;
        }
        ~Triangle(){}

        int area() {
            Polygon2::area();
            return (ancho * alto) / 2;
        }
        void printAreaT() {
            cout << area();
        }
        friend ostream& operator<<(ostream& os, Triangle& t);
};

ostream& operator<<(ostream& os, Triangle& t) {
    os << t.getAncho() << " " << t.getAlto();
    return os;
}

