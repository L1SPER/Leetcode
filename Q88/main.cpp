#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
	for (int i = 0; i < nums1.size(); i++)
	{
		cout << nums1[i] << endl;
	}
	cout << endl << endl;

	int size = nums1.size() - 1;
	int tmpsize = m;
	int counter = 0;


	while (counter<n)
	{
		
		nums1[m++] = nums2[counter++];
		while ( tmpsize > 0 && nums1[tmpsize] <= nums1[tmpsize - 1])
		{
			int temp = nums1[tmpsize - 1];
			nums1[tmpsize - 1] = nums1[tmpsize];
			nums1[tmpsize] = temp;
			tmpsize--;
		}
		tmpsize = m;
	}



	for (int i = 0; i < nums1.size(); i++)
	{
		cout << nums1[i] << endl;
	}
}
int main()
{
	vector<int>nums1 = { 1,2,3,0,0,0 };
	vector<int>nums2 = { 2,5,6 };
	int m = 3;
	int n = 3;
	//[1,2]
	merge(nums1, m, nums2, n);
	return 0;
}
//1 2 3 0 0 0
//1 2 3 0 0 2
//1 2 3 0 2 0
//1 2 3 2 0 0
//1 2 2 3 0 0
// 
// 
//1 2 3 0 0 0
//1 2 3 2 0 0
//1 2 2 3 0 0
//1 2 2 3 5 0
//1 2 2 3 5 6
// 
// 
// 
// 
// 
//1 2 2 3 0 0
//1 2 2 3 5 0
//1 2 2 3 5 6
//vector<int>nums1 = { 0};
//vector<int>nums2 = { 1};




