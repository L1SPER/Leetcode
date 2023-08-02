#include<iostream>
using namespace std;
struct TreeNode 
{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

TreeNode* invertTree(TreeNode* root) 
{
	if (!root) return NULL;
	
	if (root->left || root->right)
	{
		TreeNode* tmp = NULL;
		tmp = root->left;
		root->left = root->right;
		root->right = tmp;
	}
	
	root->left = invertTree(root->left);
	root->right = invertTree(root->right);
	return root;
}
void PrintTree(TreeNode* root)
{
	if (!root) return;
	cout << root->val<<endl;
	PrintTree(root->left);
	PrintTree(root->right);
}
int main()
{
	TreeNode* tree = new TreeNode(4);
	tree->left= new TreeNode(2);
	tree->left->left= new TreeNode(1);
	tree->left->right = new TreeNode(3);
	tree->right = new TreeNode(7);
	tree->right->left = new TreeNode(6);
	tree->right->right== new TreeNode(9);

	invertTree(tree);
	PrintTree(tree);
	return 0;
}