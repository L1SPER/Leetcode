#include<iostream>
using namespace std;
struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};
ListNode* deleteDuplicates(ListNode* head) {
	ListNode *copy = head;
	while (copy && copy->next)
	{
		if (copy->val == copy->next->val)
		{
			ListNode* deleted = copy->next;
			copy->next = copy->next->next;
			delete deleted;
		}
		else
			copy = copy->next;
	}
	return head;
}
void PrintNodes(ListNode* head)
{
	while(head)
	{
		cout << head->val;
		head = head->next;
	}
	cout << endl;
}
int main()
{
	ListNode* node1 = new ListNode(1);
	ListNode* node2 = new ListNode(1);
	ListNode* node3 = new ListNode(2);
	node1->next = node2;
	node2->next = node3;
	cout << "Before deleting " << endl;
	PrintNodes(node1);
	deleteDuplicates(node1);
	cout << "After deleting " << endl;
	PrintNodes(node1);

	return 0;
}