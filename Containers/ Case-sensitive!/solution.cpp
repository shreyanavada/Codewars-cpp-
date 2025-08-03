#include <utility>
#include <string>
#include <vector>
using namespace std;

std::pair<bool, std::vector<char>> caseSensitive(const std::string& str) {
// pair has been made of type bool and vector .  
  vector <char> c;
  bool brain = true; //creating a variable to return a bool .
  
  for(int i=0 ; str[i]!='\0' ; i++)
    {
    
    if(str[i] >= 65 && str[i] <= 90)
      {
      
      brain = false;
      c.push_back(str[i]);
      
      }
  }
  return {brain , {c}};
}
