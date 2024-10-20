#include<iostream>
#include<string>
using namespace std;
string addBinary(string a, string b)
{
	int aSize = a.size() ;
	int bSize = b.size() ;
	int size = 0;
	if (aSize > bSize)
	{
		size = aSize-1;
		b.insert(b.begin(), aSize - bSize, '0');
	}
	else if (bSize > aSize)
	{
		size = bSize-1;
		a.insert(a.begin(), bSize - aSize, '0');
	}
	else
		size = aSize-1;

	int carry = 0;
	int sum;
	string c;
	c.resize(size+1);

	for (int i = size; i >=0 ; i--)
	{
		sum = (a[i] - '0') + (b[i] - '0') + carry;
		if (sum > 2)
		{
			c[i] = '1';
			carry = 1;
		}
		else if (sum == 2)
		{
			c[i] = '0';
			carry = 1;
		}
		else
		{
			c[i] = sum+'0';
			carry = 0;
		}
	}
	if (carry)
		c.insert(c.begin(), '1');

	return c;
}
int main()
{
	string a = "1010", b = "1011", c;//10101
	c = addBinary(a, b);
	cout << c << endl;
	return 0;
}