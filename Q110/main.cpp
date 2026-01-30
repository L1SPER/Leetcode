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
int height(TreeNode* root)
{
	if (!root) return 0;

	return 1 + max(height(root->left), height(root->right));
}
bool isBalanced(TreeNode* root) 
{
	if (!root) return true;

	int left = height(root->left);
	int right = height(root->right);

	if(abs(left-right)>1)
		return false;

	return isBalanced(root->left)&&isBalanced(root->right);
}
int main()
{
	TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(2);
	root->left->left = new TreeNode(3);
	root->left->left->left = new TreeNode(4);
	root->right->right = new TreeNode(3);
	root->right->right->right = new TreeNode(4);
	//            1
	//          /   \
	//         2     2
	//        /       \
	//       3   3      3
	//		/           \
	//     4             4

	cout << isBalanced(root) << endl;
	return 0;
}