#include "Polygon2.cpp"
using namespace std;

class Rectangle : public Polygon2 {
    
    public:
        Rectangle(){}
        Rectangle(int a, int b) : Polygon2(a, b){
        }
        ~Rectangle(){}

        int area() {
            area();
            return (2 * ancho + 2 * alto);
        }
        void printAreaR() {
            cout << area();
        }
        friend ostream& operator<<(ostream& os, Rectangle& r);
};

ostream& operator<<(ostream& os, Rectangle& r) {
    os << r.getAncho() << " " << r.getAlto();
    return os;
}

