// interlocking binary pair
bool interlockable(unsigned long long a, unsigned long long b) {
unsigned long long d= a & b; // Bitwise operators directly convert the given numbers to binary form .
  if(d==0){
    return true;
    }
  else
    {
    return false;
  }
    
}
