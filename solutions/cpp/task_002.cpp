#include <iostream>
#include <cassert>
#include <vector>
#include <algorithm>
#include <cmath>

int descending_order(int n)
{
    if(n==0)
        return 0;
    std::vector<int> digits;
    while(n>0){
        digits.push_back(n%10);
        n = n / 10;
    }

    std::sort(digits.rbegin(), digits.rend());
    int to_return = 0;
    int m = pow(10, digits.size()-1);
    for(auto it = digits.begin(); it != digits.end(); it++){
        to_return += (*it*m);
        m = m / 10;
    }

    return to_return;
    
}

int main(){
    std::cout << "Testing number: " << 0 << "\t result: " << descending_order(0) << "\n";
    std::cout << "Testing number: " << 15 << "\t result: " << descending_order(15) << "\n";
    std::cout << "Testing number: " << 123456789 << "\t result: " << descending_order(123456789) << "\n";

    assert(descending_order(0) == 0);
    assert(descending_order(15) == 51);
    assert(descending_order(123456789) == 987654321);
    
    std::cout << "Test pass." << std::endl;
}