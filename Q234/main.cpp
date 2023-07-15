#include<iostream>
using namespace std;
struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};
void PrintNodes(ListNode* head)
{
	while (head)
	{
		cout << head->val<<" ";
		head = head->next;
	}
	cout << endl;
}
ListNode* reverseListNode(ListNode* head)
{
	if (!head) return nullptr;
	ListNode* p = nullptr;
	ListNode* q = head;
	ListNode* r = head->next;
	while (q)
	{
		q->next = p;
		p = q;
		q = r;
		if (r) r = r->next;
	}
	return p;
}
bool isPalindrome(ListNode* head) 
{
	if (!head) return true;
	ListNode* slow = head;
	ListNode* fast= head;
	while (fast->next && fast->next->next)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	//PrintNodes(slow);
	//PrintNodes(head);
	slow->next = reverseListNode(slow->next);
	slow = slow->next;
	
	while (slow)
	{
		if (slow->val != head->val) return false;
		slow = slow->next;
		head = head->next;
	}
	return true;
}
int main()
{
	ListNode *node1 = new ListNode(1);
	ListNode* node2= new ListNode(2);
	ListNode* node3 = new ListNode(3);
	ListNode* node4 = new ListNode(1);

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;

	/*ListNode* node1 = new ListNode(1);
	ListNode* node2 = new ListNode(2);
	node1->next = node2;*/

	cout << isPalindrome(node1);

	
	
	return 0;
}