#include<iostream>
using namespace std;
struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
};
void deleteNode(ListNode* node) 
{
#if 0
	ListNode* copy = node->next;
	while (copy)
	{
		node->val = copy->val;
		node = node->next;
		copy = copy->next;
		if (!copy->next)
			node->next = nullptr;
	}
#endif // 0
	* node = *(node->next);
	
}
int main()
{
	ListNode* node1 = new ListNode(4);
	ListNode* node2 = new ListNode(5);
	ListNode* node3 = new ListNode(1);
	ListNode* node4 = new ListNode(9);

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	deleteNode(node2);

	return 0;
}