#include<iostream>
using namespace std;

int romanToInt(string s) 
{
	int sum = 0;
	while (s != "")
	{
		if (s[0] == 'I')
		{
			if (s[1] == 'V')
			{
				sum += 4;
				s.erase(0, 2);
			}
			else if (s[1] == 'X')
			{
				sum += 9;
				s.erase(0, 2);
			}
			else
			{
				sum += 1;
				s.erase(0, 1);
			}
		}
		else if (s[0] == 'V')
		{
			sum += 5;
			s.erase(0, 1);
		}
		else if (s[0] == 'X')
		{
			if (s[1] == 'L')
			{
				sum += 40;
				s.erase(0, 2);
			}
			else if (s[1] == 'C')
			{
				sum += 90;
				s.erase(0, 2);
			}
			else
			{
				sum += 10;
				s.erase(0, 1);
			}
		}
		else if (s[0] == 'L')
		{
			sum += 50;
			s.erase(0, 1);
		}
		else if (s[0] == 'C')
		{
			if (s[1] == 'D')
			{
				sum += 400;
				s.erase(0, 2);
			}
			else if (s[1] == 'M')
			{
				sum += 900;
				s.erase(0, 2);
			}
			else
			{
				sum += 100;
				s.erase(0, 1);
			}
		}
		else if (s[0] == 'D')
		{
			sum += 500;
			s.erase(0, 1);
		}
		else if (s[0] == 'M')
		{
			sum += 1000;
			s.erase(0, 1);
		}
	}
	return sum;
}
int main()
{
	romanToInt("V");
	return 0;
}
