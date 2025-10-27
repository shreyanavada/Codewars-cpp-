#include <string>
#include <vector>
#include <utility>
using namespace std;
std::vector<std::string> openOrSenior(std::vector<std::pair<int, int>>& data)
{
  vector<string>str;
  for(int i=0 ;i<data.size() ;i++)
    {
    if(data[i].first >=55 && data[i].second>7)
      {
      str.push_back("Senior");
    }
    else
      {
      str.push_back("Open");
    }
  }
   return str; 
}
