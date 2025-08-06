#include <string>
using namespace std;

std::string removeExclamationMarks(std::string str){
  string s = ""; // empty string
  for(int i=0 ; i<str.size() ; i++)
    {
    if(str[i] != '!')
      {
      s = s + str[i];
      
    }
  }
  return s;
}
