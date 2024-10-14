#include<iostream>
#include<string>
using namespace std;
int lengthOfLastWord(string s) {
#if 0
	if (s.size() == 0)
		return 0;
	int counter = 0;
	bool startsspace = false;
	bool isCharacter = false;
	char c = s[s.size() - 1];

	if (c == ' ')
		startsspace = true;
	for (int i = s.size() - 1; i >= 0; i--)
	{
		c = s[i];
		isCharacter = false;
		if (c != ' ')
		{
			counter++;
			isCharacter = true;
			startsspace = false;
		}
		else if (c == ' ' && !startsspace && !isCharacter)
			return counter;

	}
	return counter;
#elif 0
	int len = 0, tail = s.size() - 1;
	while (tail >= 0 && s[tail] == ' ') tail--;
	while (tail >= 0 && s[tail] != ' ')
	{
		len++;
		tail--;
	}
	return len;
#elif 1
	int length = 0;
	bool counting = false;
	for (int i = s.size()-1; i >=0 ; i--)
	{
		if (s[i] != ' ')
		{
			counting = true;
			length++;
		}
		else if (counting)
			break;
	}
	return length;
#endif // 1
}
int main()
{
	string x = "Hello World";
	string y = "   fly me   to   the moon  ";
	string z = "a ";
	cout << lengthOfLastWord(y);
	return 0;
}