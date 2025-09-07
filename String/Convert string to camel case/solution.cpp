#include <string>
using namespace std;
#include <cctype>

std::string to_camel_case(std::string text) {
  string str; // to store the output .
  for(int i=0 ; i<text.size() ; i++)
    {
    if(text[i]!='_' && text[i]!='-')
      {
        str += text[i];
    }
    else
      {
      i++;
      char c= toupper(text[i]);
      str+= c;
    }
  }
  return str;
}
// time complexity is O(n)  and auxilary space complexity is O(1) but overall space complexity is O(n) .
