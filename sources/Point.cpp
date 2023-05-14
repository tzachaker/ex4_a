#include "Point.hpp"
#include <iostream>
#include <string>
using namespace std;

namespace ariel
{
    
Point::Point(double x , double y): _x(x) , _y(y){

}

double Point::distance(Point distance) {
    return 0.0;
}

void Point::print() {

}

Point Point::moveTowards(Point src, Point dest, double distance) {
    return Point(0,0);
}
}





