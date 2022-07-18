#include<iostream>
#include<vector>
using namespace std;
void reverseString(vector<char>& s) {

#if 0
	char* array = new char[s.size()];
	for (int i = 0; i < s.size(); i++)
	{
		array[i] = s[i];
	}

	for (int i = 0; i < s.size(); i++)
	{
		s[s.size() - i - 1] = array[i];
	}

#endif // 0
	int i = 0, size = s.size() - 1;
	while (i < size)
	{
		swap(s[i++], s[size--]);
	}
	
}
int main()
{
	vector<char> chars;
	chars.push_back('h');
	chars.push_back('e');
	chars.push_back('l');
	chars.push_back('l');
	chars.push_back('o');

	reverseString(chars);
	return 0;
}