#ifndef TEAM2_HPP
#define TEAM2_HPP
#include <string>
#include <iostream>
#include "Team.hpp"

namespace ariel {

    class Team2
    {
        private:
            Character *_leader;
            vector<Character> _team2;

        public:
            Team2(Character* leader);
            void add(Character* character);
            void attack(Team *otherTeam);
            int stillAlive();
            void print();
            ~Team2();
        };
    }
#endif
