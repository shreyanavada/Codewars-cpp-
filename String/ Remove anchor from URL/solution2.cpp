using namespace std;
#include<string>
std::string replaceAll(std::string str) {
  int pos = str.find('#');
  return str.substr(0,pos);
  }
 // find() -- returns the index of the character written in the () .
// substring prints from 0 to pos which also consumes memory . 
// therefore time complexity - O(n)   space complexity - O(n) .
