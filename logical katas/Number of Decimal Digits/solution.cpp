#include <stdint.h>
#include<algorithm>
using namespace std;
int digits(uint64_t n) {
  int count = 0;
  string s = to_string(n); //Since n is not an array or vector or pointer , i have converted it into string so that i can easily access.
  for(int i=0 ; i<s.size() ; i++)
    {
    if( isdigit(s[i]) )
      {
      count ++;
    }
  }
  return count ;
}
