#include "Ninja.hpp"
#include <iostream>
#include <string>
using namespace std;

namespace ariel
{
    Ninja::Ninja(Point location, int hitPoints, string name,  int speed) : Character(location,hitPoints, name), _speed(speed) {

    }

    void Ninja::move(Character* enemy) {

    }

    void Ninja::slash(Character* enemy) {

    }

    string Ninja::print() {
       return "";
    }
}


