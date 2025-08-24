bool is_square(int n)
{
  for(int i=0 ; i <= n ; i++)  // the loop will run upto n because the perfect square number shoulld be within the range of n only.
    {
    if(n < 0)
      {
      return false;
    }
    else if(n == i*i)
      {
      return true;
    }
  }
  return false;
}
