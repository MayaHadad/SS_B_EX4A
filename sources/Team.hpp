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
        Character _leader;
        std::vector<Character *> team;

    public:
        Team(Character *leader);
        Team(const Team &other);
        Team &operator=(const Team &other);
        Team(Team &&other) noexcept;
        Team &operator=(Team &&other) noexcept;
        virtual ~Team();
        virtual void add(Character *character);
        void attack(Team *enemy);
        int stillAlive();
        void print();
    };
}