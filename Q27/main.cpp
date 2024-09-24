#include<iostream>
#include<vector>
using namespace std;
void PrintValues(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}
void PrintValues(vector<int>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
}
int removeElement(vector<int>& nums, int val) 
{
	if (nums.empty())
		return 0;
	int counter = 0;
	int j = nums.size() - 1;
	for (int i = nums.size() - 1; i>=0;i--)
	{
		if (nums[i] == val)
			counter++;
		if (nums[j]== val || nums[i] == val)
		{
			swap(nums[j], nums[i]);
			j--;
		}
	}
	return nums.size()-counter;
}
int main()
{
	vector<int> v = { 3,2,2,3 };
	PrintValues(v);
	cout<<endl<<endl<<removeElement(v, 3)<<endl<<endl;
	PrintValues(v);
	return 0;
}