#pragma once

#include <iostream>

namespace ariel
{
    class Point
    {
        double __x;
        double __y;

    public:
        Point(double _x_, double _y_);
        //~Point();
        double distance(Point &point);
        void print();
        Point moveTowards(Point &src, Point &dst, double dist);
        double getX();
        double getY();
    };
}