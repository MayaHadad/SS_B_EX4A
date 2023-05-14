#pragma once

#include <iostream>
#include <vector>
#include "Cowboy.hpp"
#include "OldNinja.hpp"
#include "TrainedNinja.hpp"
#include "YoungNinja.hpp"

namespace ariel
{
    class Team
    {
    public:
        Character _leader;
        std::vector<Character *> team;

        Team(Character *leader);
        ~Team();
        virtual void add(Character *character);
        void attack(Team *enemy);
        int stillAlive();
        void print();
    };
}