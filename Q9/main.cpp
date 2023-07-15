#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;


bool isPalindrome(int x) //string ile çözümü
{
	if (x < 0)
		return false;
	string str = to_string(x);
	int size = str.length();
	for (int i = 0; i < size; i++)
	{
		if (i > size / 2)
			break;
		if (str[i] != str[size - i - 1])
			return false;
	}
	return true;
}

bool isPalindrome1(int x)// stringsiz çözümü
{
	if (x < 0) return false;
	int copy = x;
	int sum = 0;
	unsigned int reverse;
	while (x != 0)
	{
		reverse = x % 10;
		sum = sum * 10 + reverse;
		x /= 10;
	}
	return sum == copy;
}
int main()
{
#if 1
	cout << isPalindrome(121);
#endif // 0
#if 0
	cout << isPalindrome1(121);
#endif // 0
	return 0;
}