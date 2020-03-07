#include <iostream>
#include <cassert>

long zeros(long n) {
  long zeros = 0;
  for (int i = 5; n / i >= 1; i *= 5) 
      zeros += n / i; 

  return zeros; 
}

int main(){
    assert(zeros(0) == 0);
    assert(zeros(6) == 1);
    assert(zeros(30) == 7);
    assert(zeros(100) == 24);
    assert(zeros(1000) == 249);
    assert(zeros(100000) == 24999);
    assert(zeros(1000000000) == 249999998);
    std::cout << "Test pass." << std::endl;
}