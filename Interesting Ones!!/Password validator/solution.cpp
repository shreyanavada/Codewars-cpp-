#include <string>
using namespace std;
#include<cctype>
// In this code , the question has been solved in brute force method ,
// where it checks every element in loop and increases its count .
bool password(const std::string &pwd)
{
int digitsCount=0,UppercaseCount=0,LowercaseCount=0;
string str=pwd; // copy of the actual string is made to do the operations.
bool IsPasswordValid;
int n=str.size();
for(int i=0 ;i<n;i++)
{
if(str[i] >= 65 && str[i] <= 90)
{
  UppercaseCount += 1;
}
else if(str[i] >= 97 && str[i] <= 122)
{
  LowercaseCount += 1;
}
else if( isdigit( str[i] ))
{
  digitsCount += 1 ;
}
}


if(digitsCount >= 1 && LowercaseCount >= 1 && UppercaseCount >=1 && n >= 8)
{
return true;
}
else
{
return false;
}
}
