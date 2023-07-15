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
TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) 
{
#if 1
	if (!root1 && !root2)
		return NULL;
	if (!root1) return root2;
	if (!root2) return root1;

	root1->val += root2->val;
	root1->left = mergeTrees(root1->left, root2->left);
	root1->right = mergeTrees(root1->right, root2->right);

	return root1;
	
#elif 0
	if (!root1 && !root2)
		return NULL;

	TreeNode* final = new TreeNode((root1 ? root1->val : NULL) + (root2 ? root2->val : NULL));
	final->left = mergeTrees(root1 ? root1->left : NULL, root2 ? root2->left : NULL);
	final->right = mergeTrees(root1 ? root1->right : NULL, root2 ? root2->right : NULL);

	return final;
#endif // 0
}
void PrintNode(TreeNode* root)
{
	if (!root)
		return;
	cout << root->val;
	PrintNode(root->left);
	PrintNode(root->right);
}
int main()
{
	TreeNode *first = new TreeNode(1);
	first->left= new TreeNode(3);
	first->right= new TreeNode(2);
	first->left->left= new TreeNode(5);

	TreeNode * second= new TreeNode(2);
	second->left= new TreeNode(1);
	second->left->right= new TreeNode(4);
	second->right= new TreeNode(3);
	second->right->right= new TreeNode(7);

	TreeNode* printNode = mergeTrees(first, second);
	PrintNode(printNode);
	return 0;
}