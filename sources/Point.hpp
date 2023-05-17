#pragma once

#include <iostream>

namespace ariel
{
    class Point
    {
        double _x_;
        double _y_;

    public:
        Point(double num1, double num2);
        //~Point();
        double distance(Point &point);
        void print();
        Point moveTowards(Point &src, Point &dst, double dist);
        double getX();
        double getY();
    };
}