#include <vector>
using namespace std;

template <typename T>
std::vector<T> find_array(const std::vector<T> &arr1,
                          const std::vector<int> &arr2)
{
    vector<T> v;
    size_t n = arr1.size();
    
    for (size_t i = 0; i < arr2.size(); i++) {
        if (arr2[i] >= n) {
            continue;
        }
        v.push_back(arr1[arr2[i]]);
    }
    return v;
}
