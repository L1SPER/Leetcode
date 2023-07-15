#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int countStudents(vector<int>& students, vector<int>& sandwiches) {
#if 1
	int counter = 0;
	queue<int> q;
	for (int i = 0; i < students.size(); i++)
	{
		q.push(students[i]);
	}
	int i = 0;
	while (counter < q.size()||q.size())
	{
		if (q.front() == sandwiches[i])
		{
			q.pop();
			counter = 0;
			i++;
		}
		else
		{
			counter++;
			int tmp = q.front();
			q.pop();
			q.push(tmp);
		}
	}
	return q.size();
#else
	int counter = 0;
	while (counter < sandwiches.size())
	{
		if (students.front() == sandwiches.front())
		{
			students.erase(students.begin());
			sandwiches.erase(sandwiches.begin());
			counter = 0;
		}
		else
		{
			counter++;
			students.push_back(students.at(0));
			students.erase(students.begin());
		}
	}
	return students.size();
#endif // 0

}
int main()
{
	vector<int>student = { 1,1,0,0 };
	vector<int>sandwiches = { 0,1,0,1 };
	cout << countStudents(student, sandwiches);
	return 0;
}