// This is kinda brute force method , where time complexity has increased .
#include <vector>
#include<set>
using namespace std;

bool isAllPossibilities(std::vector<int> arr){
  set<int>s;
  for(int x:arr) // pushing all elements to the set , where each insert() takes log(n) time since the loop is running for n times so nlog(n) .  
    {
    s.insert(x);
  }
  int n=arr.size();
  for(int i=0 ; i<=n-1 ; i++)
    {
    if(!(s.count(i))) // here also count in set takes logn time because of the for loop so it becomes nlogn .
      {
       return false;
    }
  }
    return true;
}
// therefore time complexity becomes : O(nlogn) + O(nlogn) = O(nlogn) .
// Space complexity= O(n) .
