#include <string>
using namespace std;

std::string neutralise(const std::string& s1, const std::string& s2)
{
  string str=""; //empty string to store the result . 
  for(int i=0 ;i<s1.size();i++)
    {
    if(s1[i]=='+' && s2[i]=='+')
      {
      str += s1[i];
    }
    else if(s1[i]=='-' && s2[i]=='-')
      {
      str += s1[i];
    }
    else
      {
      str += '0';
    }
  }
    return str;
}
