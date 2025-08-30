#include<string>
using namespace std;
std::vector<int> digits(int n){
  string s =to_string(n); //since n is in int data type , have to store the characters in an arrays so convert it into string .
  vector<int>v;            // "12345"----> '1' '2' '3' '4' '5' .
  for(int i=0 ;i<s.size() ;i++)
    {
    for(int j=i+1 ;j<s.size() ;j++)
      {
      v.push_back((s[i]-'0') + (s[j]-'0')); // to convert char to int just subtract '0'(48) . 
    }
  }
  return v;
    
}
// time : O(n^2)  space : O(n^2) .
