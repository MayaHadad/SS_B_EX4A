#include <iostream>
#include "Ninja.hpp"

namespace ariel
{
    Ninja::Ninja(int speed, Point location, int attackPoints, std::string name)
        : Character(location, attackPoints, name), _speed(speed)
    {
    }

    void Ninja::move(Character *enemy)
    {
    }

    void Ninja::slash(Character *enemy)
    {
        if (this->isAlive() && this->distance(enemy) < 1)
            enemy->hit(13);
    }

    std::string Ninja::print()
    {
        std::cout << "N" << std::endl;
        this->Character::print();
        return "n";
    }
}