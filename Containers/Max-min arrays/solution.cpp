// using two pointer method by using 2pointers "max" and "min" .
#include<vector>
using namespace std;
#include<algorithm>
std::vector<int> solve(std::vector<int>v) {
  vector<int>arr;
  int n=v.size();
  sort(v.begin() , v.end() , greater<int>()); 
  int max=0;
  int min=(n-1);
  while(v[max]>=v[min])
    {
    if(max==min) // if max and min are equal then it pushes only one element into the array . 
      {
      arr.push_back(v[max]);
      break;
    }
    arr.push_back(v[max]);
    arr.push_back(v[min]);
    max++;
    min--;
    }
  return arr;
}
  
