#include<vector>
using namespace std;
unsigned int oddNotPrime(unsigned int n){
vector<int>arr; // empty array is created to push the prime numbers from 1 to n .
int count = 1 ;
for(unsigned int i = 1 ; i<=n ; i++){
if(i % 2 != 0){
arr.push_back(i) ;
}
}
for( unsigned int i = 0; i < arr.size() ; i++){
for( unsigned int j = 2; j<arr[i] ; j++){ 
if(arr[i] % j == 0) 
{
count ++ ;
break ;
}
}
}
return count ;
}
