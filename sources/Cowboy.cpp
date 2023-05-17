#include <iostream>
#include "Cowboy.hpp"

namespace ariel
{
    Cowboy::Cowboy(std::string name, Point location) : Character(location, 110, name), bullets(6)
    {
    }

    void Cowboy::shoot(Character *enemy)
    {
        if (this->isAlive() && this->hasboolets())
        {
            enemy->hit(10);
            bullets -= 1;
        }
    }

    bool Cowboy::hasboolets()
    {
        if (bullets > 0)
            return true;
        return false;
    }

    void Cowboy::reload()
    {
        bullets = 6;
    }

    std::string Cowboy::print()
    {
        std::cout << "C" << std::endl;
        this->Character::print();
        return "c";
    }
}