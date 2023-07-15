#include<iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};
ListNode* removeNthFromEnd(ListNode* head, int n) {
	
	int size = 0;
	ListNode* tmp = head;
	ListNode* answer = tmp;
	while (head)
	{
		size++;
		head = head->next;
	}
	if (n > size || !tmp) return nullptr;
	int counter = 0;
	while (tmp)
	{
		if (n == size)
		{
			answer = tmp->next;
			break;
		}
		if (counter == size - n - 1)
		{
			ListNode* deleted = tmp->next;
			tmp->next = tmp->next->next;
			delete deleted;
		}
		counter++;
		tmp = tmp->next;
	}
	return answer;
}
void PrintNodes(ListNode* head)
{
	while (head)
	{
		cout << head->val;
		head = head->next;
	}
	cout << endl;
}
int main()
{
	ListNode* node1 = new ListNode(1);
	ListNode* node2 = new ListNode(2);
	ListNode* node3 = new ListNode(3);
	ListNode* node4 = new ListNode(4);
	ListNode* node5 = new ListNode(5);

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = node5;

	cout << "Before deleting " << endl;
	PrintNodes(node1);
	node1=removeNthFromEnd(node1,2);
	cout << "After deleting " << endl;
	PrintNodes(node1);
	return 0;
}