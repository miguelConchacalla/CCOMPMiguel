#ifndef POINT_H
#define POINT_H

#include <iostream>
using namespace std;

class Point
{
    public:
        Point();
        Point(int, int);
        Point(Point &o);
        
        void offset(int, int);
        void print();
        double getX();
        double getY();
        void setX(double x);
        void setY(double y);

    private:
        double x, y;
};

Point::Point(int xh, int yh){
    x = xh;
    y = yh;
}

Point::Point(){
    x = 0;
    y = 0;
}

Point::Point(Point &o){
    x = o.x;
    y = o.y;
}

void Point::print(){
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}

void Point::offset(int nx, int ny){
    x += nx;
    y += ny;
}

double Point::getX(){
    return x;
}

double Point::getY(){
    return y;
}

void Point::setX(double x){
    this->x = x;
}

void Point::setY(double y){
    this->y = y;
}

#endif // POINT_H