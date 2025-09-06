// method 2 :
using namespace std;
std::vector<int> seqToOne(int n) {
  vector<int> arr; // to store ans . 
  int op = 0;
  if(n >= 0)
    op = 1;
  else
    op = -1;
  
  while(n != 1) {
    arr.push_back(n);
    n = n - op;
  }
  arr.push_back(1);
  return arr;
}
// here only one loop is used , so time complexity is reduced . though both the methods take same O(n) time complex .
