//brute force: where time complexity is O(n^2) and space complexity is O(n) .
using namespace std;
std::vector<int> digits(int n){
  vector<int> arr; // to store the seperate characters of n in array .
  int sum=0;
  while(n>0)
    {
     int v = n %10 ;
    arr.push_back(v);
    n=n/10;
  }
  reverse(arr.begin() , arr.end());
  vector<int>res; // to store the final sum of each element .
  for(int i=0 ; i<arr.size() ;i++)
    {
    for(int j=i+1 ;j<arr.size() ;j++)
      {
      sum += arr[i]+arr[j];
      res.push_back(sum);
      sum=0;
      
    }
  }
  
  return res;
 }
  
 
