#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int timeRequiredToBuy(vector<int>& tickets, int k) {
	int counter = 0,seconds=0;
	int tmp = tickets.size();
	queue<int>q;
	for (int i = 0; i < tickets.size(); i++)
	{
		q.push(tickets[i]);
	}
	while (!q.empty())
	{
		if (q.front() > 0)
		{
			q.push(q.front() - 1);
			q.pop();
		}
		else if (q.front() == 0)
		{
			q.pop();
		}
		if (counter - (k+1  - (tmp - q.size())) == 0)
			seconds+=q.size();
		if (counter >= q.size())
			counter = 0;
		counter++;
	}
	return seconds;
}
int main()
{
	vector<int>tickets = { 2,3,2 };
	cout<<timeRequiredToBuy(tickets, 2);
	//8
	return 0;
}