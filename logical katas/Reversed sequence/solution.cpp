#include <vector>
using namespace std ;
std::vector<int> reverseSeq(int n) {  
  vector<int>arr;
  for(int i=n ; i>=1 ;i--)
    {
    arr.push_back(i);
  }
    return arr;
}
