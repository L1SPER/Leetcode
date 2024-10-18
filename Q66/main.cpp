#include<iostream>
#include<vector>
using namespace std;
vector<int> plusOne(vector<int>& digits) 
{
	int carry = 1;
	int sum = 0;
	for (int i = digits.size()-1; i >=0; i--)
	{
		sum = digits[i] + carry;
		if (sum == 10)
		{
			digits[i] = 0;
			carry = 1;
		}
		else
		{
			digits[i] = sum;
			carry = 0;
			break;
		}
	}
	if (carry)
		digits.insert(digits.begin(), 1);
	return digits;
}
void PrintVector(vector<int>& digits)
{
	for (int i = 0; i < digits.size(); i++)
	{
		cout << digits[i] << endl;
	}
}
int main()
{
	vector<int> x = { 1,2,3 };
	vector<int> y = { 4,3,2,1 };
	vector<int> z = { 9 };

	vector<int> a;
	a=plusOne(x);
	PrintVector(a);

	return 0;
}