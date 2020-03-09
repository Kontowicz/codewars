#include <iostream>
#include <string>


std::string to_camel_case(std::string text) {
  std::string to_return = "";
  to_return += text[0];
  
  for(int i = 1; i < text.size();i++){
    while(i && i < text.size()){
      if(text[i]=='-' || text[i]=='_'){
        break;
      }
      to_return += text[i];
      i++;
    }
    i+=1;
    to_return += toupper(text[i]);
  }
  return to_return;
}

int main() {
    std::cout << to_camel_case("the-stealth-warrior") << std::endl;
    std::cout << "theStealthWarrior" << std::endl;
    std::cout << to_camel_case("The_Stealth_Warrior") << std::endl;
    std::cout << "TheStealthWarrior" << std::endl;
}