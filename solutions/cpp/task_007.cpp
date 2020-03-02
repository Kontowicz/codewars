#include <iostream>
#include <string>
#include <cassert>

std::string spinWords(const std::string &str)
{
    std::string to_return = "";
    std::string word = "";
    std::string rev_word = "";
    std::string space = "";
    for (auto it = str.begin(); it != str.end(); it++)
    {
        if (*it == ' ')
        {
            to_return += space;
            to_return += word.size() >= 5 ? rev_word : word;
            rev_word = "";
            word = "";
            space = " ";
            continue;
        }
        word += *it;
        rev_word = *it + rev_word;
    }
    to_return += space;
    to_return += word.size() >= 5 ? rev_word : word;

    return to_return;
}

int main()
{
    assert(spinWords("Welcome") == "emocleW");
    assert(spinWords("to") == "to");
    assert(spinWords("CodeWars") == "sraWedoC");
    assert(spinWords("Hey fellow warriors") == "Hey wollef sroirraw");
    assert(spinWords("Burgers are my favorite fruit") == "sregruB are my etirovaf tiurf");
    assert(spinWords("Pizza is the best vegetable") == "azziP is the best elbategev");
    std::cout << "Test pass." << std::endl;
}