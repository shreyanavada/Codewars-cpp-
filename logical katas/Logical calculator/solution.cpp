#include <string>
#include <vector>
using namespace std;
bool logicalCalc(const std::vector<bool>& items, const std::string& op) {
  int count = 0;
  if(op=="AND")
  {
    for(int i=0;i<items.size();i++)
    {
      if(items[i]==false)
      {
        return false;
      }
    }
      return true;
    }
    
  else if(op=="OR")
  {
    for(int i=0;i<items.size();i++)
      {
        if(items[i]==true)
        {
          return true;
        }
      }
    return false;
  }
else if(op=="XOR")
      {
      for(int i=0;i<items.size();i++)
      {
        if(items[i]==true)
          {
          count++;
        }
        }
        if(count%2!=0)
          {
          return true;
          return 0;
        }
      }
  return false;
}
  
  
   
      
      
    

  
