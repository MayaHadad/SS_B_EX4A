#pragma once

#include <iostream>
#include "Ninja.hpp"

namespace ariel
{
    class TrainedNinja : public Ninja
    {
        public:
            TrainedNinja(std::string name, Point location);
    };
}