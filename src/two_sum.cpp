#include "assignment/two_sum.hpp"  // find_elements

namespace assignment {

  std::optional<std::pair<int, int>> two_sum(const std::vector<int>& arr, int sum) {
    // Tips: для создания пары (pair) используйте функцию std::make_pair
    for(int i = 0; i < arr.size(); i++){
      int left = i;
      int right = (left + arr.size())/2;
      while(left < right && right < arr.size()){
        if(arr[left] + arr[right] == sum){
          return std::make_pair(left, right);
        }
        if(arr[left] + arr[right] > sum){
          right--;
        }else{
          right++;
        }
      }
    }
    return std::nullopt;
  }

}  // namespace assignment