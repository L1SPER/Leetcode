#include<iostream>
using namespace std;
struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};
ListNode* swapPairs(ListNode* head) {
	if (!head||!head->next) return head;
	ListNode* tmp = head->next;
	head->next = swapPairs(head->next->next);
	tmp->next = head;
	return tmp;
}
void PrintNodes(ListNode* head)
{
	while (head)
	{
		cout << head->val << " ";
		head = head->next;
	}
	cout << endl;
}
int main()
{
	ListNode* node4 = new ListNode(4);
	ListNode* node3 = new ListNode(3, node4);
	ListNode* node2 = new ListNode(2, node3);
	ListNode* node1 = new ListNode(1, node2);

	cout << "Before the swap" << endl;
	PrintNodes(node1);
	node1 = swapPairs(node1);
	cout << "After the swap" << endl;
	PrintNodes(node1);

	return 0;
}