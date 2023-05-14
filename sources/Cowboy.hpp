#ifndef COWBOY_HPP
#define COWBOY_HPP
#include "Cowboy.hpp"
#include <string>
#include <iostream>
#include "Character.hpp"

namespace ariel {

    class Cowboy : public Character 
    {
        private:
            int numBalls;

        public:
            Cowboy(string name, Point location);
            void shoot(Character* team);
            bool hasboolets();
            void reload();
            string print() ;
    };
}
#endif 
