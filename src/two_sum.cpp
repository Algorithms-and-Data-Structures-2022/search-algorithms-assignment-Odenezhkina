#include "assignment/two_sum.hpp"  // find_elements

namespace assignment {

  std::optional<std::pair<int, int>> two_sum(const std::vector<int>& arr, int sum) {
    // Tips: для создания пары (pair) используйте функцию std::make_pair
    int left = 0;
    int right = static_cast<int>(arr.size()) - 1;
    for(int i = 0; i < arr.size(); i++){
      while(left < right && right < arr.size()){
        if(arr[left] + arr[right] == sum){
          return std::make_pair(left, right);
        }
        if(arr[left] + arr[right] > sum){
          right--;
        }else{
          left++;
        }
      }
    }
    return std::nullopt;
  }

}  // namespace assignment