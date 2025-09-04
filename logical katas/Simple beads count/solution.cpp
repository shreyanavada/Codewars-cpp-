using namespace std;
unsigned int countRedBeads( unsigned int n ) {
  int random;
  if(n<2)
    {
    return 0;
  }
  else
    {
  
  random=n-2;
  return n+random;
    }
}
