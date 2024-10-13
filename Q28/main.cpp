#include<iostream>
#include<string>
#include<vector>

using namespace std;
void PrintStr(string s)
{
	for (int i = 0; i < s.size(); i++)
	{
		char c = s[i];
		cout << c;
	}
	cout << endl << endl;
}
void ProcessKmp(string& needle, vector<int>& v, int nsize)
{
	// Length of the previous longest prefix suffix
	int len = 0;
	int i = 1;

	// v[0] is always 0
	v[0] = 0;

	while (i < nsize)
	{
		if (needle[i] == needle[len])
		{
			len++;
			v[i] = len;
			i++;
		}
		else
		{
			if (len != 0)
			{
				len = v[len - 1];
				}
			else
			{
				v[i] = 0;
				i++;
			}
			}
		}
	}
void PrintV(vector<int>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
}
int strStr(string haystack, string needle) {
#if 0
	bool tmp = false;
	int counter = 0;
	for (int i = 0; i < haystack.size(); i++)
	{
		for (int j = i; j < needle.size() + i; j++)
		{
			if (haystack[j] == needle[counter++])
			{
				tmp = true;
			}
			else
			{
				counter = 0;
				break;
			}
			if (tmp && counter == needle.size())
				return i;
		}
	}
	return -1;
#elif 1 //KMP SOLUTION

	// Sizes of needle and haystack

	int nsize = needle.size();
	int hsize = haystack.size();

	vector<int> v(nsize);
	vector<int>result;
	ProcessKmp(	needle,v, nsize);
	PrintV(v);

	int i = 0; //haystack index 
	int j = 0; //needle index

	while ((hsize - i) >= (nsize - j))
	{
		if (haystack[i] == needle[j])
		{
			i++;
			j++;
		}
		if (j == nsize)
		{
			return i - j;
		}
		else if(i<hsize&&haystack[i]!=needle[j])
		{
			if (j != 0)
				j = v[j - 1];
			else
				i++;
		}
	}
	return -1;
	
	
#endif // 0
}

int main()
{
	string haystack = "AABAACAABAAC", needle = "AAC";
	PrintStr(haystack);
	PrintStr(needle);
	cout << endl << endl << strStr(haystack, needle) << endl << endl;

	return 0;
}
