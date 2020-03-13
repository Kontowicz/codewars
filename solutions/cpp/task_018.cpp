#include <string>
#include <map>
#include <iostream>
#include <cassert>

std::string duplicate_encoder(const std::string& word){
  
  std::map<char, int> tmp;
  for(auto it=word.begin(); it!=word.end(); it++){
    if(tmp.find(tolower(*it))==tmp.end()){
      tmp[tolower(*it)] = 1;
    }
    else{
      tmp[tolower(*it)] = tmp[tolower(*it)] + 1;
    }
  }
  std::string to_return = "";
  for(auto it=word.begin(); it!=word.end(); it++){
    if(tmp[tolower(*it)]==1){
      to_return += '(';
    }else{
      to_return += ')';
    }
  }
  return to_return;
}

int main(){
    assert(duplicate_encoder("din") == "(((");
    assert(duplicate_encoder("recede") == "()()()");
    assert(duplicate_encoder("Success") == ")())())");
    assert(duplicate_encoder("CodeWarrior") == "()(((())())");
    assert(duplicate_encoder("Supralapsarian") == ")()))()))))()(");
    assert(duplicate_encoder("(( @") == "))((");
    assert(duplicate_encoder(" ( ( )") == ")))))(");
    std::cout << "Test pass." << std::endl;
}