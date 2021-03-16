  
  
#include "doctest.h"
#include "snowman.hpp"
#include <string>
#include <algorithm>
using namespace ariel;
using namespace std;



TEST_CASE("check if the snowman is good or not"){

//too many digits
    CHECK_THROWS(snowman(123412341));
    CHECK_THROWS(snowman(343421213));
    CHECK_THROWS(snowman(421332142));
    CHECK_THROWS(snowman(314213412));
    CHECK_THROWS(snowman(123412121));
//digits that are bigger than 4
    CHECK_THROWS(snowman(121212125));
    CHECK_THROWS(snowman(343456713));
    CHECK_THROWS(snowman(451332142));
    CHECK_THROWS(snowman(314246412));
CHECK_THROWS(snowman(31424892));

//less than 8 digits
    CHECK_THROWS(snowman(1121));
    CHECK_THROWS(snowman(12));
    CHECK_THROWS(snowman(123));
    CHECK_THROWS(snowman(1234));
    CHECK_THROWS(snowman(12341));
    CHECK_THROWS(snowman(123412));
    CHECK_THROWS(snowman(111));
    CHECK_THROWS(snowman(3333));
    CHECK_THROWS(snowman(43321));
    CHECK_THROWS(snowman(31));
    CHECK_THROWS(snowman(121));
//digits that smaller than 1
    CHECK_THROWS(snowman(00000000));
    CHECK_THROWS(snowman(212-23011));
CHECK_THROWS(snowman(-62114411));
    CHECK_THROWS(snowman(120-41211));
    CHECK_THROWS(snowman(22134830));
//signs instead of digits
    CHECK_THROWS(snowman(-222222));
    CHECK_THROWS(snowman(123-4321));
    CHECK_THROWS(snowman(1/234%13));
    CHECK_THROWS(snowman(432123*4));  
    CHECK_THROWS(snowman(1234^411));
}

