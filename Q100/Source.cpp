#include<iostream>
using namespace std;
struct TreeNode {
int val;
TreeNode* left;
TreeNode* right;
TreeNode() : val(0), left(nullptr), right(nullptr) {}
TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};
int i = 0;
bool isSameTree(TreeNode* p, TreeNode* q) 
{
	if (!p && !q)
		return true;
	if (!p || !q || p->val != q->val)
		return false;

	return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}
int main()
{
	
	TreeNode* first = new TreeNode(1);
	first->left = new TreeNode(2);
	first->right = new TreeNode(3);
	TreeNode* second = new TreeNode(1);
	second->left = new TreeNode(2);
	second->right = new TreeNode(3);
	

	cout<<isSameTree(first, second);
	return 0;
}