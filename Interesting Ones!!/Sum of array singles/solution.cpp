#include<map>
using namespace std;
int repeats(std::vector<int>v){
  unordered_map<int,int>m;
  int sum=0;
  for(int i=0 ;i<v.size() ;i++)
    {
    m[v[i]]++;
  }
  for(auto it : m) // to iterate through the map .
    {
    if(it.second==1)
      {
      sum += it.first;
    }
  }
  return sum;
}
