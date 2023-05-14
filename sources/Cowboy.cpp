#include "Cowboy.hpp"
#include <iostream>
#include <string>
using namespace std;

namespace ariel
{
    Cowboy::Cowboy(string name, Point location) : Character(location,110, name), numBalls(6) {

    }

    void Cowboy::shoot(Character* team) {

    }

    bool Cowboy::hasboolets() {
        return false;
    }

    void Cowboy::reload() {

    }

    string Cowboy::print() {
        return"";
    }
}


