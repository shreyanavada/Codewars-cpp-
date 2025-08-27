#include <vector>

int elevator_distance(std::vector<int> array) {
  int result = 0;
  for(int i=0 ; i < array.size()-1 ; i++)
    {
    if(array[i] > array[i+1])
      {
       result += array[i] - array[i+1];
    }
    else
      {
       result += array[i+1] - array[i];
    }
    
  }
  return  result;
}
