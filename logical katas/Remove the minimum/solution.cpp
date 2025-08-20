#include <vector>
using namespace std;

std::vector<unsigned int> removeSmallest(const std::vector<unsigned int>& n) {
    if (n.empty()) return {}; 

    unsigned int min = n[0];
    for (int i = 1; i < n.size(); i++) {
        if (n[i] < min) {
            min = n[i];
        }
    }

    vector<unsigned int> result;
    bool removed = false;

    for (unsigned int val : n) {
        if (val == min && !removed) {
            removed = true; 
            continue;
        }
        result.push_back(val);
    }

    return result;
}
