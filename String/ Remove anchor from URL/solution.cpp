using namespace std;
std::string replaceAll(std::string str) {
  string s="";
  for(int i=0 ; i<str.size() ;i++)
    {
    if(str[i] == '#')
      {
      break;
     }
     s += str[i];
  }
  
  return s;  
}
// time complexity : O(n) 
// space complexity : O(n)
