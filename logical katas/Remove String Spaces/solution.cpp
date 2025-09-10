#include <string>
using namespace std ;
#include <vector>
std::string no_space(const std::string& x)
{
  string str="";
  for(int i=0 ;i <x.size() ;i++)
    {
    if(x[i] != ' ')
      {
      str +=x[i];
    }
  }
   return str;
}
