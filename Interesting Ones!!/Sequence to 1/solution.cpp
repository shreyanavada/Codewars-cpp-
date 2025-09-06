// Method 1 of solving this problem .
using namespace std;
std::vector<int> seqToOne(int n) {
  vector<int>arr;
  if(n>0)
    {
    for(int i=1 ;i <=n ;i++)
      {
      arr.push_back(i);
    }
    reverse(arr.begin() , arr.end());
    return arr ;
  }
  else
    {
    for(int i=1 ;i >=n ;i--)
      {
      arr.push_back(i) ; 
    }
    reverse(arr.begin() , arr.end());
    return arr ;
    }
}
// time complexity of method 1 is greater than method 2 as it uses 2 for loops and reverse() .
