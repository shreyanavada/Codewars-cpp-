#include <algorithm>
#include<vector>
using namespace std;
int solve (std::vector<int> v){
  for(int i=0 ;i<v.size() ;i++)
    {
    auto pos=find(v.begin() , v.end() , -v[i]);
    if(pos==v.end())
      {
      return v[i];
      }
    }
}

// time complexity is O(n^2)    space complexity is O(1) .
//  note:---> things to know about find() .

// * It is a function in C++ that helps you to search for something inside a string or container .
// * string::find() ---> it is a member function of string ,
// It returns the index of the substring/character in the string.
// * If not found → returns string::npos.

// *std:: find() from <algorithm> ----> Works on any container with iterators 
// * it always returns an iterator , not an index .
// * if the thing that we are searching is not found then it returns end iterator (v.end) . 
