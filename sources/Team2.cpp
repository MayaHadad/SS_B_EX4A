#include "Team2.hpp"

namespace ariel
{
    Team2::Team2(Character *leader) : Team(leader)
    {
    }

    void Team2::add(Character *character)
    {
        if(team.size()>10 || character==NULL)
            return;
        // for(int i=0; i<team.size(); i++){
        //     if(team[i]==character)
        //         return;
        // }
        team.push_back(character);
    }
}