#include<iostream>
using namespace std;
struct ListNode
{
	int val;
	ListNode* next;
	ListNode() :val(0), next(nullptr){}
	ListNode(int x):val(x),next(nullptr){}
	ListNode(int x,ListNode*next):val(x),next(next){}
};
ListNode* reverseList(ListNode *head)
{
	if (head == nullptr||head->next==nullptr) return head;
	ListNode* p = NULL;
	ListNode* q = head;
	ListNode* r = head->next;
	while (q)
	{
		q->next = p;
		p = q;
		q = r;
		if (r != nullptr)
			r= r->next;
	}
	return p;
}
void PrintListNode(ListNode* head)
{
	while (head)
	{
		cout << head->val;
		head = head->next;
		
	}
}
int main()
{
	ListNode* newNode1 = new ListNode(1);
	ListNode* newNode2 = new ListNode(2);
	ListNode* newNode3 = new ListNode(3);
	ListNode* newNode4 = new ListNode(4);
	ListNode* newNode5 = new ListNode(5);
	ListNode* newNode6 = nullptr;

	newNode1->next = newNode2;
	newNode2->next = newNode3;
	newNode3->next = newNode4;
	newNode4->next = newNode5;

	cout << "Before the reversse" << endl;
	PrintListNode(newNode1);
	newNode6=reverseList(newNode1);
	cout << "After the reverse" << endl;
	PrintListNode(newNode6);
	return 0;
}