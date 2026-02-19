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
int minDepth(TreeNode* root)
{
#if 0
	if (!root)
		return 0;

	if (!root->left ^ !root->right)
		return max(minDepth(root->left), minDepth(root->right)) + 1;

	return min(minDepth(root->left), minDepth(root->right)) + 1;

#else
	if (!root) return 0;

	if (!root->right) return 1 + minDepth(root->left);
	if (!root->left) return 1 + minDepth(root->right);
	return 1 + min(minDepth(root->left), minDepth(root->right));
#endif


}
int main()
{//En kisa left ve right nodeu olmayan nodeu bul.
#if 1
	TreeNode* root = new TreeNode(2);
	root->right = new TreeNode(3);
	root->right->right = new TreeNode(4);
	root->right->right->right = new TreeNode(5);
	root->right->right->right->right = new TreeNode(6);
#else
	TreeNode* root = new TreeNode(3);
	root->left = new TreeNode(9);
	root->right = new TreeNode(20);
	root->right->left = new TreeNode(15);
	root->right->right = new TreeNode(7);
#endif // 0

	cout << minDepth(root) << endl;

}