#include <string>
using namespace std;
std::string womens_age(unsigned n) {
  if(n%2==0)
    {
    int base=n/2;
    string str= to_string(n)+"? That's just 20, in base "+ to_string(base)+"!";
    return str;
  }
  else if(n%2!=0)
    {
    int base=(n-1)/2;
    string str= to_string(n)+"? That's just 21, in base "+ to_string(base)+"!";
    return str;
    }
}
