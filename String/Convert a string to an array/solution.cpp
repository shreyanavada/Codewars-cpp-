#include <vector>
#include <string>
using namespace std;
std::vector<std::string> string_to_array(const std::string& s) {
  string str="" ;
  vector<string>v;
  if(s.empty())
    {
    return {""};
  }
  for(int i =0 ;i<s.size() ;i++)
    {
    if(s[i] != ' ')
      {
      str += s[i];
    }
    if(s[i]==' ' || i==(s.size()-1))
      {
      v.push_back(str);
      str="";
    }
     
  }
    return v; // your code here
}
