#include "doctest.h"
#include "sources/Team.hpp"
#include <string>
#include <iostream>
using namespace ariel;
using namespace std;

TEST_CASE("Creating points") {
    Point p1(1,0), p2(4,0), p3(7,0);
    CHECK((p1.distance(p2) == 3));
    CHECK((p3.distance(p1) == 6));
    CHECK_EQ(p2.distance(p2), 0);
}

TEST_CASE("moveTowards between two points") {
    Point p1(1,0), p2(4,0), p3(7,0), p4(10,0);
    CHECK((p1.moveTowards(p1,p4,6).distance(p3)== 0));
    CHECK((p2.moveTowards(p2,p4,3).distance(p3)== 0));
    CHECK((p3.moveTowards(p3,p4,0).distance(p3)== 0));
}

TEST_CASE("Creating characters") {
    Point p1(1,0), p2(4,0);
    Character c1(p1, 3,"Alice") , c2(p2, 2, "Bob");
    CHECK(c1.isAlive());
    CHECK(c2.isAlive());
    CHECK_EQ(c1.distance(&c2), 3);
    CHECK_EQ(c1.distance(&c2), c2.distance(&c1));
    CHECK_EQ(c1.getName(), "Alice");
    CHECK_EQ(c2.getName(), "Bob");
    CHECK_NOTHROW(c1.hit(3));
    c1.hit(3);
    CHECK_EQ(c1.isAlive(),false);
    c2.hit(1);
    CHECK_EQ(c2.isAlive(),true);
}

TEST_CASE("Creating cowboys") {
    Point p1(1,0), p2(4,0), p3(7,0), p4(10,0);
    Cowboy c1("Alice", p1) , c2("Bob", p2);
    CHECK_NOTHROW(c1.reload());
    CHECK_NOTHROW(c1.shoot(&c2));
    c1.shoot(&c2);
    CHECK_EQ(c2.isAlive(), false);
    CHECK_EQ(c1.isAlive(), true);
    CHECK_EQ(c1.hasboolets(), true);
    c1.shoot(&c2); c1.shoot(&c2); c1.shoot(&c2); c1.shoot(&c2); c1.shoot(&c2);
    CHECK_EQ(c1.hasboolets(), false);
}

TEST_CASE("Creating ninjas") {
    Point p1(1,0), p2(4,0), p3(7,0), p4(10,0);
    YoungNinja n1("young", p1);
    TrainedNinja n2("trained", p2);
    OldNinja n3("old", p3);
    CHECK_EQ(n1.isAlive(), true);
    n1.hit(100); n2.hit(120); n3.hit(100);
    CHECK_EQ(n1.isAlive(), false);
    CHECK_EQ(n2.isAlive(), false);
    CHECK_EQ(n3.isAlive(), true);
    CHECK_NOTHROW(n1.move(&n2));
    CHECK_NOTHROW(n1.slash(&n2));
}

TEST_CASE("Creating team") {
    Point p1(1,0), p2(4,0);
    OldNinja n1("old", p1);
    Team team1(&n1);
    Cowboy c1("Alice", p2);
    Team team2(&c1);
    CHECK_EQ(team1.stillAlive(), 1);
    CHECK_NOTHROW(team1.attack(&team2));
    TrainedNinja n2("trained", p2);
    CHECK_NOTHROW(team1.add(&n2));

}

