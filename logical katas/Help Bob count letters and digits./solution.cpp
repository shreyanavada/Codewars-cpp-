using namespace std;
int countLettersAndDigits(std::string input)
{
  int digitCount= 0 , alphaCount = 0 ;
  for(int i=0 ; i < input.size() ; i++)
    {
    if(input[i] >= 65 && input[i] <= 90 || input[i] >= 97 && input[i] <= 122) // if it lie in this range then alphabetic count will be increased .
      {
      alphaCount++;
    }
    else if(isdigit(input[i]))
      {
      digitCount++;
      }
  }
    return digitCount+ alphaCount;
}
