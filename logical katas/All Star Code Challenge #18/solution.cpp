#include <string>
using namespace std;

unsigned int strCount(const std::string& word, char letter){
  int LetterCount = 0;
  for(int i=0 ; i<word.size() ; i++)
    {
    if(word[i] == (letter) ) 
       LetterCount ++ ;
  }
  
  return  LetterCount ; 
}
