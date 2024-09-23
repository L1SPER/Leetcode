#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
using namespace std;
void PrintValues(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}
void PrintValues(vector<int>&v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
}
int removeDuplicates(vector<int>& nums) {
#if 1
	if (nums.empty()) {
		return 0;
	}
	int j = 1;
	for (int i = 1; i < nums.size(); i++)
	{
		if (nums[i] != nums[i - 1] )
		{
			nums[j] = nums[i];
			j++;
			/*nums.erase(nums.begin() + i);
			i -= 1;
		*/
		}
	}
	return j;
#elif 0
	if (nums.empty()) {
		return 0;
	}
	map<int, int> m;
	m.insert(make_pair(nums[0],0));
	for (int i = 1; i < nums.size(); i++)
	{
		auto iter = m.find(nums[i]);
		if (iter != m.end())
		{
			nums.erase(nums.begin()+i);
			i -= 1;
		}
		m.insert(make_pair(nums[i], 0));
	}
	return m.size();
#endif // 0

	
}
int main()
{
	vector<int> v = { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 };
	//PrintValues(a,size);
	PrintValues(v);
	cout << endl;
	cout<<removeDuplicates(v)<<endl<<endl;
	PrintValues(v);
	return 0;
}
