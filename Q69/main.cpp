#include<iostream>
using  namespace std;
int mySqrt(int x) {
#if 0
	for (long i = 0; i < pow(2, 31) - 1; i++)
	{
		if (i * i == x)
		{
			return i;
		}
		else if (i * i > x)
		{
			return i - 1;
		}
	}
	return -1;
#elif 1
	if (x == 0 || x == 1)
		return x;
	int start = 1;
	int mid = 0;
	int end = x;
	while (start <= end)
	{
		mid = start + (end - start) / 2;

		if ((long)mid * mid > x)
			end = mid - 1;
		else if ((long)mid * mid == x)
			return mid;
		else
			start = mid + 1;
	}
	return end;
#endif // 0
}
int main()
{
	int x = 4, y = 8;
	cout << mySqrt(y);
}