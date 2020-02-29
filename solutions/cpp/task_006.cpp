#include <iostream>
#include <cassert>

unsigned int countBits(unsigned long long n){
  unsigned int counter = 0;
  while(n){
    counter += n & 1;
    n >>= 1; 
  }
  return counter;
}

int main(){
    assert(countBits(0) == 0);
    assert(countBits(4) == 1);
    assert(countBits(7) == 3);
    assert(countBits(9) == 2);
    assert(countBits(10) == 2);
    assert(countBits(26) == 3);
    assert(countBits(77231418) == 14);
    assert(countBits(12525589) == 11);
    assert(countBits(3811) == 8);
    assert(countBits(392902058) == 17);
    std::cout << "All tests pass." << std::endl;
}