#include "Character.hpp"
#include <iostream>
#include <string>
using namespace std;

namespace ariel
{
    Character::Character(Point location, int hitPoints, string name):_location(location), _hitPoints(hitPoints), _name(name){

    }

    bool Character::isAlive() {
        return false;
    }

    double Character::distance(Character* otherCharacter) {
        return 0;
    }

    void Character::hit(int hitNum) {

    }    

    string Character::getName() {
        return _name;
    }

    Point Character::getLocation() {
        return _location;
    }

    string Character::print() {
        return "";
    }
}



