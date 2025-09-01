#include <unordered_set>
using namespace std;
int solve (std::vector<int> v){
  unordered_set<int> s(v.begin() , v.end()); // using unordered set to reduce the time complexity .
  for(int x :s)
    {
    if(s.find(-x)==s.end()) // find() takes O(1) in unordered set .
      {
      return x ;
    }
  }
  }
// therefore time complexity is O(2n) ---> O(n)          space complexity is O(n) .
