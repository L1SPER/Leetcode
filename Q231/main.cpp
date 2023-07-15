#include<iostream>
#include<vector>
using namespace std;
bool isPowerOfTwo(int n) 
{
	#if 0
		int number = 2;
		for (size_t i = 0; i < 32; i++)
		{
			if (n == pow(2, i))
				return true;
			if (n < pow(2, i))
				break;
		}

		return false;
	#endif // 0

	if (n <= 0) return false;
	return ((n & n - 1) == 0);
}
int main()
{
	int number =4;
	cout << isPowerOfTwo(number)<<endl;
	return 0;
}