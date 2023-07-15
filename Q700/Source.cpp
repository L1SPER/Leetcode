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
TreeNode* searchBST(TreeNode* root, int val) {
	if (!root) return NULL;
	while (root)
	{
		if (root->val > val) root = root->left;
		else if (root->val < val) root = root->right;
		else return root;
	}
	return NULL;
}
void PrintTree(TreeNode* root)
{
	if (!root) return;
	cout << root->val;
	PrintTree(root->left);
	PrintTree(root->right);
}
int main()
{
	TreeNode* tree = new TreeNode(4);
	tree->left = new TreeNode(2);
	tree->right = new TreeNode(7);
	tree->left->left = new TreeNode(1);
	tree->left->right = new TreeNode(3);
	TreeNode* final = searchBST(tree, 2);
	PrintTree(final);
	return 0;
}