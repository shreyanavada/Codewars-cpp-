// "optimal solution"----> where the time complex brought down from O(nlogn) to o(n) using hashing .
#include <vector>
#include<map>
using namespace std;

bool isAllPossibilities(std::vector<int> arr){
  unordered_map <int,bool> m;
  int n = arr.size();
  for(int i = 0 ;i <= n-1 ; i++)
    {
    m[i] = false;   // inserting every element from i=0 to i=(n-1) to map and value should be made equal to false . 
  }
  for(int i = 0 ; i<n ;i++) // iterating through  all the array elements .
    {
    if(m.count(arr[i]))
      {
      m[arr[i]] = true; // if the array element is present in map then value element in map is made true . 
    }
  }
  for(int i=0 ; i <= n-1 ; i++) 
    {
    if(m[i] == false) // if any key value in map has false then it returns false else true .
      {
      return false;
    }
  }
  return true;
  }

// therefore the time complexity = O(n)  and space complexity = O(n) .
