// look forward to space complexity . 
#include <string>
#include <unordered_set>
#include <cctype>
using namespace std;
bool is_pangram(const std::string& s) {
  unordered_set<int>m;
  for(int i=0 ; i<s.size() ;i++)
    {
      if( isalpha(s[i]) )
      {
      char c = tolower(s[i]);
      m.insert( c );      // insertion into the unordered set takes O(1) time .
      }
  }
  if( m.size() == 26 ) // here also m.size() takes O(1) time .
    {
    return true ;
  }
  else
    {
    return false ;
    }
}
// time complexity is O(n) 
// auxilary space complexity : O(1) because though we are taking extra space interms of set but it only stores <= 26 elemens
// O(<=26) which is constant therefore it becomes O(1) .
// but total space complexity (input+output+auxilary) : O(n) .
