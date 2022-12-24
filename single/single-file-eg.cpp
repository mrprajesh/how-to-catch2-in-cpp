//g++ -std=c++11 -Wall single-file-eg.cpp -o single-file-eg.out -I ./lib/ && ./single-file-eg.out --success

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <catch.hpp>

unsigned int Factorial( unsigned int number ) {
  // return number <= 1 ? number : Factorial( number - 1 ) * number;  // will fail
  return number <= 1 ? 1      : Factorial( number - 1 ) * number;  // will pass
}

TEST_CASE( "Factorials are computed", "[factorial]" ) {
    REQUIRE( Factorial(0) == 1 );
    REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
    REQUIRE( Factorial(10) == 3628800 );
}
