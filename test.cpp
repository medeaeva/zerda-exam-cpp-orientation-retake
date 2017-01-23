#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "counters.h"


TEST_CASE("it should count the line endings" ) {
  REQUIRE(lineCounter("First line. \n") == 1);
}

TEST_CASE("it should count the words" ) {
  REQUIRE(wordCounter("apple and pear") == 3);
}

TEST_CASE("it should count the number of characters" ) {
  REQUIRE(charCounter("apple") == 5);
}
