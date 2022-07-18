#include<iostream>
using namespace std;
string intToRoman(int num)
{
	string ones[] = { "","I","II","III","IV","V","VI","VII","VIII","IX" };
	string tens[] = { "","X","XX","XXX","XL","L","LX","LXX","LXXX","XC" };
	string hundreds[] = { "","C","CC","CCC","CD","D","DC","DCC","DCCC","CM" };
	string tousands[] = { "","M","MM","MMM" };

	return (tousands[num / 1000] + hundreds[(num % 1000) / 100] + tens[(num % 100) / 10] + ones[num % 10]);
}
int main()
{
	int number = 1994;
	string answer;
	answer = intToRoman(number);
	cout << answer << endl;
	return 0;
}