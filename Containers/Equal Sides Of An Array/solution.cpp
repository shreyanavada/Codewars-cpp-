#include <vector>
using namespace std;
// Brute force :
int find_even_index (const vector <int> numbers) {
  int sum1 = 0 , sum2 = 0;
  int n = numbers.size();
  for(int i = 0 ;i < n ;i++)
    {
    for(int k = 0 ; k < i ; k++)
      {
      sum1 += numbers[k];
    }
    for(int j = i+1 ; j<n ; j++)
      {
      sum2 += numbers[j];
    }
    if(sum1 == sum2)
      {
      return i;
      }
    else
      {
      sum1 = 0; sum2 = 0;
    }
  }
  return -1;
}
//timeComplexity : O(n^2)                                auxilary space complexity : O(1) .
//                                                       total spacce complexity : O(n).(including i/p + o/p + auxilary ).
