#include "Character.hpp"

namespace ariel
{
    Character::Character(Point location, int attackPoints, std::string name)
        : _location(location.getX(), location.getY()), _attackPoints(attackPoints), _name(name)
    {
    }

    bool Character::isAlive()
    {
        return false;
    }

    double Character::distance(Character *other)
    {
        return 0;
    }

    void Character::hit(int harmPoints)
    {
    }

    std::string Character::getName()
    {
        return _name;
    }

    Point Character::getLocation()
    {
        return _location;
    }

    std::string Character::print()
    {
        // std::string str = "name: " + _name +
        //                   " attack points: " + _attackPoints +
        //                   " location: (" + _location.getX() + "," + _location.getY() + ")";
        std::cout << "str" << std::endl;
        return "str";
    }

    int Character::getAttackPoints()
    {
        return _attackPoints;
    }

}