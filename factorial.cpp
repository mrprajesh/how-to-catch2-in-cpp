#include "factorial.h"

unsigned int Factorial( unsigned int number ) {
  return number <= 1 ? number : Factorial( number - 1 ) * number;  // fail
  // return number <= 1 ? 1      : Factorial( number - 1 ) * number;  // pass
}

