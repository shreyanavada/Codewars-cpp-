#include <string>
using namespace std;

std::string DNAStrand(const std::string& dna)
{
  string str=dna; // copy of dna string is made because it string dna is made as constant so operations can be performed on it .
  for(int i=0;str[i]!='\0';i++)
    {
    switch(str[i])
      {
        case 'A': str[i]='T';
        break;
        case 'T':str[i]='A';
        break;
        case 'C':str[i]='G';
        break;
        case 'G': str[i]='C';
        break;
      }
    }
  return str;
  }
