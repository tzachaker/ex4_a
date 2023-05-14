#ifndef YOUNGNINJA_HPP
#define YOUNGNINJA_HPP
#include "YoungNinja.hpp"
#include <string>
#include <iostream>
#include "Ninja.hpp"

namespace ariel {

    class YoungNinja : public Ninja
    {
        private:

        public:
            YoungNinja(string name ,Point location) : Ninja(location,100, name, 14){}
    };
}
#endif 
