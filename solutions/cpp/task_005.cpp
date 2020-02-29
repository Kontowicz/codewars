#include <cassert>
#include <iostream>

int solution(int number) {
    int sum = 0;
    for(int i = 1; i<number; i++){
        if(i%3==0 || i%5==0){
            sum += i;
        }
    }
    return sum;
}

int main() {
    assert(solution(10) == 23);
    std::cout << "Test pass." << std::endl;
    std::cout << "Input: 10 Output:" << solution(10) << std::endl;
}