#include <string>
using namespace std;

bool isPalindrom (const std::string& str)
{
  
  int start=0;
  int end=str.size() - 1;
  while (start < end)
    {
    if (tolower(str[start]) != tolower(str[end])) // tolower() is used to convert a single char to lower_case char.
      {
      return false;
      }
    start++;
    end--;
    }
  return true;
  }
      
