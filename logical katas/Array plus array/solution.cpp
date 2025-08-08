#include <vector>
using namespace std;
int arrayPlusArray(std::vector<int> a, std::vector<int> b) {
  int sum1=0;
  int sum2=0;
  int n = a.size() ;
  int p=b.size() ;
  for(int i=0;i<n ;i++)
    {
    sum1 += a[i] ;
    
  }
  for(int i=0;i<p;i++)
    {
    sum2 +=b[i];
  }
  return sum1+sum2; // something went wrong
}
