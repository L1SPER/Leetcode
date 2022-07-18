#include<iostream>
#include <string>
using namespace std;
int myAtoi(string s) 
{
	const int len = s.length();
	if (len == 0)
		return 0;

	int index = 0;

	while (index < len && s[index] == ' ')
		++index;

	bool isNegative = false;

	if (index < len)
	{
		if (s[index] == '-')
		{
			isNegative = true;
			++index;
		}
		else if (s[index] == '+')
		{
			++index;
		}
	}
	int result = 0;
	while (index < len && isdigit(s[index]))
	{
		int digit = s[index] - '0';
		if (result >= (INT_MAX / 10) && digit > 7)
		{
			return isNegative ? INT_MIN : INT_MAX;
		}
		result = result * 10 + digit;
		++index;
	}

	return isNegative ? -result : result;
}
int main()
{
	string str= "    2147483648  ";
	cout << myAtoi(str);
	return 0;
}