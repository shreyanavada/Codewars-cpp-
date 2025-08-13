#include <string>
using namespace std;

std::string solution(int n) {
  string str = "00000" ;
  string nTOstring = to_string(n) ; // ctypecasting the given int number into string.
  int j = str.size() - 1 ; // putting a pointer j to the str string.
  int size = nTOstring.size() ;
  for(int i=  size -1 ; i >= 0 ; i --)
    {
    str[j] = nTOstring[i] ;
    j-- ; 
  }
  string finalString ="Value is "+ str ;
  return finalString;
}
