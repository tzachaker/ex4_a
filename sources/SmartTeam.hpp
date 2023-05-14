#ifndef SMARTTEAM_HPP
#define SMARTTEAM_HPP
#include <string>
#include <iostream>
#include "Team.hpp"

namespace ariel {

    class SmartTeam
    {
        private:
            Character* _leader;
            vector<Character> _smartTeam;
            
        public:
            SmartTeam(Character* leader);
            void add( Character* character);
            void attack(Team *otherTeam);
            int stillAlive();
            void print();
            ~SmartTeam();
        };
    }
#endif 
