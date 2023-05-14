#include <iostream>
#include "Point.hpp"

namespace ariel
{
    Point::Point(double _x_, double _y_) : __x(_x_), __y(_y_)
    {
    }

    double Point::distance(Point &point)
    {
        return 0;
    }

    void Point::print()
    {
    }

    Point Point::moveTowards(Point &src, Point &dst, double dist)
    {
        return *this;
    }

    double Point::getX()
    {
        return __x;
    }

    double Point::getY()
    {
        return __y;
    }
}