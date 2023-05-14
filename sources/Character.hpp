#pragma once

#include <iostream>
#include "Point.hpp"

namespace ariel
{
    class Character
    {
        Point _location;
        int _attackPoints;
        std::string _name;

    public:
        Character(Point location, int attackPoints, std::string name);
        //~Chatacter();
        bool isAlive();
        double distance(Character *other);
        void hit(int harmPoints);
        std::string getName();
        Point getLocation();
        virtual std::string print();
        int getAttackPoints();
    };
}