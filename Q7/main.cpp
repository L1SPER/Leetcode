#include<iostream>
#include<string>
using namespace std;
int reverse(int x) 
{
	long value = 0;
	while (x != 0)
	{
		value = value * 10 + x % 10;
		x /= 10;
	}
	if (value > INT_MAX || value < INT_MIN) return 0;
	return value;
}
int main()
{
	int number = -123;
	int answer = reverse(number);
	cout << answer << endl;
	return 0;
}