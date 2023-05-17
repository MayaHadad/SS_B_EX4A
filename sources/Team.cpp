#include "Team.hpp"

using namespace std;

namespace ariel
{
    Team::Team(Character *leader) : _leader(leader->getLocation(), leader->getAttackPoints(), leader->getName())
    {
    }

    Team::~Team()
    {
        // for(size_t i=0; i<team.size(); i++)
        //     delete team[i];
    }

    void Team::add(Character *character)
    {
    }

    void Team::attack(Team *enemy)
    {
    }

    int Team::stillAlive()
    {
        return 0;
    }

    void Team::print()
    {
    }
}