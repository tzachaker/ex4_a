#ifndef NINJA_HPP
#define NINJA_HPP
#include "Ninja.hpp"
#include <string>
#include <iostream>
#include "Character.hpp"

namespace ariel {

    class Ninja : public Character 
    {
        private:
            int _speed;
            
        public:
            Ninja(Point location, int hitPoints, string name,  int speed);
            void move(Character* enemy);
            void slash(Character* enemy);
            string print();
    };
}
#endif 
