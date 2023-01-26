#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <vector>
#include "functions_to_implement.cpp"

TEST_CASE("Getting vector sums gives correct values.", "[sum]") {
    SECTION("Checking with vector {1,2,3,4}.") {
        std::vector<int> v = {1,2,3,4};
        REQUIRE(Sum(v) == 10);
    }
    SECTION("Checking with vector {0,10}.") {
        std::vector<int> v = {0,10};
        REQUIRE(Sum(v) == 10);
    }
}

TEST_CASE("Getting vector products gives correct values.", "[product]") {
    SECTION("Checking with vector {1,2,3,4}.") {
        std::vector<int> v = {1,2,3,4};
        REQUIRE(Product(v) == 24);
    }
    SECTION("Checking with vector {0,10}.") {
        std::vector<int> v = {0,10};
        REQUIRE(Product(v) == 0);
    }
}

TEST_CASE("RemoveTwo function gives correct values.", "[removetwo]") {
    REQUIRE(RemoveTwos(7) == 7);
    REQUIRE(RemoveTwos(16) == 1);
    REQUIRE(RemoveTwos(52) == 13);
    REQUIRE(RemoveTwos(168) == 21);
}
