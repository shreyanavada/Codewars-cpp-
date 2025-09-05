
#include <string>
using namespace std; 

bool tidyNumber (int number)
{
  string n =to_string(number);
  for(int i =0 ;i< n.size()-1 ;i++)
    {
    if(n[i]>n[i+1])
      {
      return false;
    }
    
  }
  
  return true ;
}

// time complexity : O(n)   space complexity : O(n) .
