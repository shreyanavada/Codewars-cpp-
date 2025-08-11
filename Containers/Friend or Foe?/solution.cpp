#include <string>
#include <vector>
using namespace std;

std::vector<std::string> friendOrFoe(const std::vector<std::string>& input){
  
  vector<string> FriendStr; // creating an empty vector string to add the friend string.
  for(int i=0 ; i<input.size() ; i++)
    {
    int n = input[i].size();
    if(n == 4 )
      {
      FriendStr.push_back(input[i]);
      }
    }
  return str;
}
