#include <vector>
#include <iostream>
#include <cassert>
#include <algorithm>

int FindOutlier(std::vector<int> arr)
{
  std::vector<int> even;
  std::vector<int> odd;
  int even_cnt = 0;
  int odd_cnt = 0;
  for(auto it = arr.begin(); it != arr.end(); it++){
    if(abs(*it)%2==1){
      odd_cnt++;
      odd.push_back(*it);
    }else{
      even_cnt++;
      even.push_back(*it);
    }
  }
  if(even_cnt > odd_cnt)
    return odd[0];
  return even[0];
}

int main(){
    assert(FindOutlier({2, 3, 4}) == 3);
    assert(FindOutlier({1, 2, 3}) == 2);
    assert(FindOutlier({4, 1, 3, 5, 9}) == 4);

    std::cout << "All tests pass." << std::endl;

    std::vector<int> t{2, 3, 4};
    std::cout << "Outliner for numbers: ";
    std::for_each(t.begin(), t.end(), [](const auto &e){std::cout<< e << " ";});
    std::cout << "is: " << FindOutlier(t) << std::endl;

    t = std::vector<int>{1, 2, 3};
    std::cout << "Outliner for numbers: ";
    std::for_each(t.begin(), t.end(), [](const auto &e){std::cout<< e << " ";});
    std::cout << "is: " << FindOutlier(t) << std::endl;

    t = std::vector<int>{4, 1, 3, 5, 9};
    std::cout << "Outliner for numbers: ";
    std::for_each(t.begin(), t.end(), [](const auto &e){std::cout<< e << " ";});
    std::cout << "is: " << FindOutlier(t) << std::endl;
}