#include <iostream>
#include "Point.hpp"

namespace ariel
{
    Point::Point(double num1, double num2) : _x_(num1), _y_(num2)
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
        return _x_;
    }

    double Point::getY()
    {
        return _y_;
    }
}