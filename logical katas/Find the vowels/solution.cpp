#include <vector>
#include <string>
#include <cctype>

using namespace std;
std::vector<int> vowelIndices(const std::string& word)
{
    std::vector<int> res;
  for(int i=0 ;i<word.size() ;i++)
    {
    char c=tolower(word[i]);
    if(c=='a'|| c=='e' ||c=='i'||c=='o'||c=='u' || c=='y')
      {
      res.push_back(i+1);
    }
    
    }
    return res;
}
