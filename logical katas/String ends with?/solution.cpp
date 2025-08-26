#include <string>
using namespace std;
bool solution(std::string const &str, std::string const &ending) {
  string IsSame="";
  for(int i=(str.size()-ending.size()) ; i< str.size() ;i++) // i should start from str's length - ending's length .
    {
    IsSame +=str[i];
  }
  
    return IsSame==ending;
}
