#ifndef TEAM_HPP
#define TEAM_HPP
#include "Team.hpp"
#include <string>
#include <iostream>
#include <vector>
#include "Cowboy.hpp"
#include "Ninja.hpp"
#include "YoungNinja.hpp"
#include "TrainedNinja.hpp"
#include "OldNinja.hpp"

namespace ariel {
    
    class Team 
    {
        private:
            Character* _leader;
            vector<Character> _team;

        public:
            Team(Character* leader);
            void add(Character* character);
            void attack(Team *otherTeam);
            int stillAlive();
            void print();
            ~Team();
        };
    }
#endif 
