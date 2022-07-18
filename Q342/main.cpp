#include<iostream>
using namespace std;
bool isPowerOfFour(int n) {
	#if 0
		for (int i = 0; i < 32; i++)
		{
			if (pow(4, i) == n)
				return true;
			if (pow(4, i) > n)
				return false;
		}
		return false;
	#endif
	
	return n > 0 && ((n & n - 1) == 0) && ((n - 1) % 3) == 0;

	/*(4^n - 1) % 3 == 0
	another proof :
	(1) 4 ^ n - 1 = (2 ^ n + 1) * (2 ^ n - 1)
	(2) among any 3 consecutive numbers, there must be one that is a multiple of 3
	among(2 ^ n - 1), (2 ^ n), (2 ^ n + 1), one of them must be a multiple of 3, and (2 ^ n) cannot be the one,
	therefore either(2 ^ n - 1) or (2 ^ n + 1) must be a multiple of 3, and 4 ^ n - 1 must be a multiple of 3 as well.*/
}
int main()
{
	int number = 16;
	cout << isPowerOfFour(number);
	return 0;
}