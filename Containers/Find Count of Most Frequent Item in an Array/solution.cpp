#include <vector>
#include<map>
using namespace std;
#include <algorithm>

unsigned int most_frequent_item_count(const std::vector<int>& collection) {
int freq=0; // at star frequency of ele is set to zero.
map<int,int>m;
for(int x : collection)
{
m[x]++;
freq = max(freq , m[x]);
}
return freq;
}
