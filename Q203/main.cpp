#include<iostream>
using namespace std;
struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
	
};
//ListNode* prev = nullptr;
//ListNode* copy = head;
//while (head != nullptr)
//{
//	if (head->val == val && prev == nullptr)
//	{
//		head = head->next;
//	}
//	else if (head->val == val && prev != nullptr)
//	{
//		prev->next = head->next;
//		head = head->next;
//	}
//	else
//	{
//		prev = head;
//		head = head->next;
//	}
//}
//return copy;
ListNode* removeElements(ListNode* head, int val) 
{
	ListNode* prev = new ListNode(-1, head);
	ListNode* copy = prev;
	while (head != nullptr)
	{
		if (head->val == val)
		{
			copy->next = head->next;
		}
		else
		{
			copy = head;
		}
		head = head->next;
	}
	return prev->next;
}
void PrintListNode(ListNode* head)
{
	while (head != nullptr)
	{
		cout << head->val;
		head = head->next;
	}
	cout << endl;
}
int main()
{
	ListNode *newList1 = new ListNode(7);
	ListNode* newList2 = new ListNode(7);
	ListNode* newList3 = new ListNode(7);
	ListNode* newList4 = new ListNode(7);
	ListNode* newList5= nullptr;
	
	newList1->next = newList2;
	newList2->next = newList3;
	newList3->next = newList4;

	/*ListNode* newList1 = new ListNode(1);
	ListNode* newList2 = new ListNode(2);
	ListNode* newList3 = new ListNode(6);
	ListNode* newList4 = new ListNode(3);
	ListNode* newList5 = new ListNode(4);
	ListNode* newList6 = new ListNode(5);
	ListNode* newList7 = new ListNode(6);
	ListNode* newList8 = nullptr;


	newList1->next = newList2;
	newList2->next = newList3;
	newList3->next = newList4;
	newList4->next = newList5;
	newList5->next = newList6;
	newList6->next = newList7;*/

	cout << "Before delete values" << endl;
	PrintListNode(newList1);
	cout << "After delete values" << endl;
	newList5 =removeElements(newList1, 7);
	PrintListNode(newList5);

	return 0;
}