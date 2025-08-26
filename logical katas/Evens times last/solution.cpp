#include <vector>
using namespace std;

int even_last(std::vector<int> nums) {
  int n = nums.size();
  int sum = 0;
  if(nums.empty()) // checks whether the array is empty or not .
    {
    return 0 ;
  }
  for(int i=0 ; 2*i < n ; i++) // 2*i should not cross n , once it crosses the for loop ends .
    {
      sum += nums[2*i];
  }
  
  return (sum * nums[n-1]);
}
