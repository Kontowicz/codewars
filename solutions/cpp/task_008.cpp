#include <string>
#include <iostream>
#include <cassert>

std::string solution(int number){
  struct roman {int val; char const* code;};
  static roman roman_data [] = {
    1000, "M",
    900, "CM",
    500, "D",
    400, "CD",
    100, "C",
    90, "XC",
    50, "L",
    40, "XL",
    10, "X",
    9, "IX",
    5, "V",
    4, "IV",
    1, "I",
    0, NULL
  };
  
  std::string to_return = "";
  for(roman* i=roman_data; i->val > 0; i++){
    while(number >= i->val){
      to_return += i->code;
      number -= i->val;
    }
  }
  return to_return;
}
int main(){
    assert(solution(182) == "CLXXXII");
    assert(solution(1990) == "MCMXC");
    assert(solution(1875) == "MDCCCLXXV");
    std::cout << "Test pass." << std::endl;
}