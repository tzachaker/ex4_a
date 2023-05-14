#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "Character.hpp"
#include <string>
#include <iostream>
#include "Point.hpp"

namespace ariel {

    class Character
    {
        private:
            Point _location;
            int _hitPoints;
            string _name;
    
        public:
            Character(Point location, int hitPoints, string name);
            bool isAlive();
            double distance(Character* otherCharacter);
            void hit(int hitNum);
            string getName();
            Point getLocation();
            string print();
        };
    }
#endif 
