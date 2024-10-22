#include<iostream>
using namespace std;
int Memoize(int n, int* table)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return 1;
	if (table[n - 1] < 0) table[n - 1] = Memoize(n - 1, table);
	if (table[n - 2] < 0) table[n - 2] = Memoize(n - 2, table);

	return table[n - 1] + table[n - 2];
}
int climbStairs(int n) {

	int* table = new int[n + 1];
	for (int i = 0; i <= n; i++) table[i] = -1;

	int result = Memoize(n, table);
	delete[] table;
	return result;
}

int main()
{
	int x = 5;
	cout << climbStairs(x) << endl;
	return 0;
}