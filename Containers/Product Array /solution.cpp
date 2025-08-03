#include <vector>
using namespace std;
std::vector<int> productArray(const std::vector<int> &numbers)
{
    
  int mul = 1;
  vector<int> v;
  for(int i=0 ;i<numbers.size() ; i++)
    {
    for(int j=0 ; j<numbers.size() ; j++)
      {
      if(i != j)
        {
        mul *= numbers[j];
        }
      }
      v.push_back(mul);  
      mul = 1;
    }
    return v;
   
}
