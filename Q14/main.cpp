#include<iostream>
#include<vector>
using namespace std;
string longestCommonPrefix(vector<string>& strs)
{
	#define Letters 'z'-'a'+1
	int arr[Letters]={0};
	string temp;
	string common;
	for (int i = 0; i < strs.size(); i++)
	{
		cout << strs[i] << "\n";
		temp = strs[i];
		for (int j = 0; j < temp.length(); j++)
		{
			if(arr['z' - temp[j]]==i)
				arr['z' - temp[j]] += 1;
			if (arr['z' - temp[j]] == strs.size())
			{
				common += temp[j];
			}
		}
	}
	return common;
}
int main()
{
	vector<string> A = { "flower","flow","flight" };
	cout<<longestCommonPrefix(A);
}