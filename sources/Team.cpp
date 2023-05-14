#include "Team.hpp"

using namespace std;

namespace ariel
{
    Team::Team(Character *leader) : _leader(leader->getLocation(), leader->getAttackPoints(), leader->getName())
    {
    }

    Team::~Team()
    {
        //for(int i=0; i<team.size(); i++)
            //delete team[i];
    }

    void Team::add(Character *character)
    {
    }

    void Team::attack(Team *enemy)
    {
    }

    int Team::stillAlive()
    {
        int alive = 0;
        for (int i = 0; i < team.size(); i++)
        {
            //if (team[i]->isAlive())
                alive++;
        }
        return alive;
    }

    void Team::print()
    {
        //for (int i = 0; i < team.size(); i++)
            //team[i]->print();
    }
}