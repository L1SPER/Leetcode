#include<iostream>
using namespace std;
string intToRoman(int num) 
{
	string final = "";
	
	while (num!=0)
	{
		if (num >= 1000)
		{
			final.append("M");
			num -= 1000;
		}
		else if (num >= 900)
		{
			final.append("CM");
			num -= 900;
		}
		else if (num >= 500)
		{
			final.append("D");
			num -= 500;
		}
		else if (num >= 400)
		{
			final.append("CD");
			num -= 400;
		}
		else if (num >= 100)
		{
			final.append("C");
			num -= 100;
		}
		else if (num >= 90)
		{
			final.append("XC");
			num -= 90;
		}
		else if (num >= 50)
		{
			final.append("L");
			num -= 50;
		}
		else if (num >= 40)
		{
			final.append("XL");
			num -= 40;
		}
		else if (num >= 10)
		{
			final.append("X");
			num -= 10;
		}
		else if (num >= 9)
		{
			final.append("IX");
			num -= 9;
		}
		else if (num >= 5)
		{
			final.append("V");
			num -= 5;
		}
		else if (num >= 4)
		{
			final.append("IV");
			num -= 4;
		}
		else if (num >= 1)
		{
			final.append("I");
			num -= 1;
		}
	}
	
	return final;
}
int main()
{
	int number = 1994;
	string answer;
	answer= intToRoman(number);
	cout << answer << endl;
	return 0;
}