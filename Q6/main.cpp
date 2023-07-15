#include<iostream>
using namespace std;
string convert(string s, int numRows) 
{
	if (numRows == 1)
		return s;
	int period = 2 * numRows - 2;
	string str;

	for (int i = 0; i < numRows; i++)
	{
		int inc1 = period - (i * 2);
		int inc2 = period - inc1;
		int j = i;
		while (j < s.length())
		{
			if (inc1 != 0 && j < s.length())
			{
				str += s[j];
				j += inc1;
			}
			if (inc2 != 0 && j < s.length())
			{
				str += s[j];
				j += inc2;
			}
		}
	}
	return str;
}
int main()
{
	string str = "PAYPALISHIRING";
	string answer = convert(str,3);
	cout << answer<<endl;
	return 0;
}