#include <vector>
#include<iostream>

using namespace std;

vector<int> arrayLeaders(const vector<int>& numbers)
{
	vector<int>arr;
	int n = numbers.size();
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		if (i == (n - 1) && numbers[i] > 0)
		{
			arr.push_back(numbers[i]);
			break;
		}
		for (int j = i + 1; j < n; j++)
		{
			sum += numbers[j];
		}
		if (sum < numbers[i])
		{
			arr.push_back(numbers[i]);
		}
	}
	return arr;
}
