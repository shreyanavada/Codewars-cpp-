using namespace std;
#include<string>
std::string to_alternating_case(const std::string& str)
{
string StrCopy=str ;// creating a copy string as the const string cant be altered. 
for(int i = 0;i < str.size() ; i ++)
{
if(StrCopy[i] >= 65 && StrCopy[i] <= 90)
{
StrCopy[i] += 32 ;
}
else if(StCopyr[i] >= 97 && StrCopy[i] <= 166)
{
StrCopy[i] -= 32;
}
}
	return StrCopy ;
}
