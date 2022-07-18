#include<iostream>
#include<stack>
using namespace std;
bool isValid(string s) {
	stack<char> S;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '(' || s[i] == '[' || s[i] == '{')
			S.push(s[i]);
		else
		{
			if (S.empty()) return false;
			char top = S.top();
			S.pop();
			if (s[i] == ')' && top != '(')return false;
			if (s[i] == ']' && top != '[')return false;
			if (s[i] == '}' && top != '{')return false;

		}
	}
	return (S.empty() ? true : false);
}
int main()
{
	string str1 = "()";
	string str2= "()[]{}";
	string str3 = "]";

	cout << "String 1 is " << isValid(str1)<<endl;
	cout << "String 2 is " << isValid(str2)<<endl;
	cout << "String 3 is " << isValid(str3) << endl;

	return 0;
}