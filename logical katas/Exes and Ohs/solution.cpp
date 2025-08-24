using namespace std;
#include<cctype> // as we used tolower() .
bool XO(const std::string& str) // since input has defined as const , we cant modify the input .
{
  int counto=0 , countx=0;
  for(int i=0 ; i<str.size() ;i++)
    {
    char lower = tolower(str[i]); 
    if(lower == 'x')
      {
      countx++;
    }
    else if(lower=='o')
      {
      counto++;
    }
  }
 
  return counto==countx;
}
