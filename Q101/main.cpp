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
bool isSymetric2(TreeNode* root, TreeNode* tempRoot)
{
	if (!root && !tempRoot) return true;
	if (!root||!tempRoot) return false;
	return  (root->val== tempRoot->val)&&isSymetric2(root->left, tempRoot->right)&& isSymetric2(root->right, tempRoot->left);
}
bool isSymmetric(TreeNode* root)
{
	TreeNode* tempRoot = root;
	return isSymetric2(root, tempRoot);
}
int main()
{
	TreeNode* tree = new TreeNode(1);
	tree->left = new TreeNode(2);
	tree->right= new TreeNode(2);
	//tree->left->left = new TreeNode(3);
	tree->left->right = new TreeNode(3);
	//tree->right->left = new TreeNode(4);
	tree->right->right = new TreeNode(3);
	cout << isSymmetric(tree);
	return 0;
}

//      1
//    2   2
//   3 4 4 3
 

//      1
//    2   2
//     3   3