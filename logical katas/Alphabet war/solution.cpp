#include <string>
using namespace std;

string alphabetWar(string fight)
{
  int sumL = 0 , sumR = 0;
  for(int i=0 ; i<fight.size() ; i++)
    {
    switch( fight[i] )
      {
        case 'w': sumL += 4;
        break;
        case 'p': sumL += 3;
        break;
        case 'b' : sumL += 2;
        break;
        case 's' : sumL += 1;
        break;
        case 'm' : sumR += 4;
        break;
        case 'q' : sumR += 3;
        break;
        case 'd' : sumR += 2;
        break;
        case 'z' : sumR += 1;
        break;
    }
    
  }
  if(sumR > sumL)
    {
    return "Right side wins!";
  }
  else if(sumR < sumL)
    {
    return "Left side wins!";
  }
  else
    return "Let's fight again!";
}
