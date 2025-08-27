#include <string>

std::string cat_mouse(std::string x) {
  int count = 0; // counts the number of '.' character 
  for(int i=0 ; i < x.size() ; i++)
    {
    if(x[i] == '.')
      {
      count ++ ;
    }
  }
  if(count <= 3)
    {
    return "Caught!" ;
  }
  else{
    return "Escaped!" ;
}
   
}
