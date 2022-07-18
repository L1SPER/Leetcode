#include<iostream>
using namespace std;
bool isPowerOfThree(int n) {
	#if 0
		if (n < 0) return false;
		for (int i = 0; i < 32; i++)
		{
			if (n == pow(3, i)) return true;
			if (n < pow(3, i)) return false;
		}
	#endif // 0

	

	if (n <= 0) return false;
	return 1162261467 % n == 0;
}
int main()
{
	int number = 3;
	cout << isPowerOfThree(number);
	return 0;
}