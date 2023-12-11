#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int numIdenticalPairs(vector<int>& nums) {
#if 1
	unordered_map<int, int> map;
	int counter = 0;
	for (auto n : nums)
	{
		if (map.find(n) != (map.begin(), map.end()))
		{
			counter += map[n];
			map[n]++;
		}
		else
			map[n] = 1;
	}
	return counter;

#else
	int counter = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		for (int j = i + 1; j < nums.size(); j++)
		{
			if (i != j && nums[i] == nums[j])
				counter++;	
		}
	}
	return counter;
#endif // 1

}
int main()
{
	vector<int>v = { 1,2,3,1,1,3 };
	cout << numIdenticalPairs(v);

	return 0;
}