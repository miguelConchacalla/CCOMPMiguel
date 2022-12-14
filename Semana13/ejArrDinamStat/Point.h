#ifndef __POINT_H__
#define __POINT_H__
#include <iostream>

template <typename T>
class Point
{

public:
    Point(T _x = 0, T _y = 0)
    {
        x = _x;
        y = _y;
    }

    ~Point()
    {
    }

    void setX(T _x)
    {
        x = _x;
    }

    int getX() const
    {
        return x;
    }

    void setY(T _y)
    {
        y = _y;
    }
    int getY() const
    {
        return y;
    }

    void print() const
    {
        std::cout << "(" << x << ", " << y << ") ";
    }

    friend std::ostream &operator<<(std::ostream &o, const Point<T> &p)
    {
        o << "(" << p.x << ", " << p.y << ") ";
        return o;
    }

private:
    T x, y;
};

#endif