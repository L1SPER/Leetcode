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
bool checkTree(TreeNode* root) {
    return root->val == root->left->val + root->right->val;
}
int main()
{
	TreeNode* tree = new TreeNode(10);
	tree->left= new TreeNode(4);
	tree->right= new TreeNode(6);
	cout << checkTree(tree);
	return 0;
}