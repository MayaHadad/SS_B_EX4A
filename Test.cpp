#include "doctest.h"
#include "sources/Team.hpp"

using namespace ariel;

TEST_CASE("Point Tests")
{
    Point p1(2.5, 4.7);
    Point p2(5.1, 7.9);

    CHECK(p1.distance(p2) == doctest::Approx(3.19374));

    Point src(1.0, 2.0);
    Point des(5.0, 6.0);
    double dist = 5.0;
    Point result = p1.moveTowards(src, des, dist);
    CHECK(result.getX() == doctest::Approx(3.53553));
    CHECK(result.getY() == doctest::Approx(5.53553));
}

TEST_CASE("player Tests")
{
    YoungNinja youngNinja("yninja", Point(2.5, 4.7));
    Cowboy cowboy("cowboy", Point(5.1, 7.9));

    CHECK(youngNinja.isAlive());
    CHECK(cowboy.isAlive());

    CHECK(youngNinja.distance(&cowboy) == doctest::Approx(4.35089));

    CHECK_NOTHROW(youngNinja.hit(20));
    CHECK_NOTHROW(cowboy.hit(30));
    CHECK_EQ(youngNinja.getAttackPoints(), cowboy.getAttackPoints());

    CHECK(youngNinja.getName() == "yninja");
    CHECK(cowboy.getName() == "cowboy");

    CHECK(youngNinja.getLocation().getX() == doctest::Approx(2.5));
    CHECK(cowboy.getLocation().getY() == doctest::Approx(4.7));

    TrainedNinja trainedNinja("tninja", Point(5.1, 7.9));
    OldNinja oldNinja("oninja", Point(1.0, 2.0));

    CHECK(trainedNinja.isAlive());
    CHECK(oldNinja.isAlive());
    CHECK_NOTHROW(oldNinja.move(&trainedNinja));

    CHECK_NOTHROW(cowboy.shoot(&youngNinja));
    youngNinja.hit(70);
    CHECK_EQ(youngNinja.getAttackPoints(), 0);
    CHECK_FALSE(youngNinja.isAlive());
}

TEST_CASE("Team Class Tests")
{
    YoungNinja youngNinja("yninja", Point(2.5, 4.7));
    TrainedNinja trainedNinja("tninja", Point(5.1, 7.9));

    Cowboy cowboy1("cowboy1", Point(5.1, 7.9));
    Cowboy cowboy2("cowboy2", Point(4.6, 5.3));

    Team team1(&cowboy1);
    Team team2(&youngNinja);

    CHECK_NOTHROW(team1.add(&trainedNinja));
    CHECK_NOTHROW(team1.add(&cowboy2));

    CHECK_EQ(team1.stillAlive(), 3);
    CHECK_EQ(team2.stillAlive(), 1);

    CHECK_NOTHROW(team1.attack(&team2));

}
