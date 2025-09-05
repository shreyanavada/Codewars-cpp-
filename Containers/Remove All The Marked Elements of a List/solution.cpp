// brute force method where time complexity is O(n^2) and space complexity isO(n) 
#include <vector>
using namespace std;
#include <algorithm>
std::vector<int> remove_values(std::vector<int> integers, std::vector<int> values) {
  vector<int> arr;
  
  for(int i=0 ;i<integers.size() ;i++)
    {
    
        auto it = find(values.begin() , values.end() ,integers[i]);
        if(it == values.end())
          {
          arr.push_back(integers[i]);
        }
    }
  return arr;
  }
  

       
