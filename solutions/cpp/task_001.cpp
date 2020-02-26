#include <string>
#include <iostream>
#include <cassert>

std::string reverse_words(std::string str)
{
    std::string to_return = "";
    std::string tmp = "";

    for(auto begin=str.begin(); begin!=str.end(); begin++){
        if(*begin == ' '){
            to_return += tmp + " ";
            tmp = "";
        }else{
            tmp = *begin + tmp;
        }
    }

    to_return += tmp;
    return to_return;
}

int main(){
    assert(reverse_words("The quick brown fox jumps over the lazy dog.") == "ehT kciuq nworb xof spmuj revo eht yzal .god");
    assert(reverse_words("apple") == "elppa");
    assert(reverse_words("a b c d") == "a b c d");
    assert(reverse_words("double  spaced  words") == "elbuod  decaps  sdrow");
    assert(reverse_words("") == "");
    assert(reverse_words("ab   ba   cd") == "ba   ab   dc");
    std::cout << "Test pass." << std::endl;
}