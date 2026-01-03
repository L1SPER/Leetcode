#include<iostream>
#include<queue>
using namespace std;
struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};
#if 0
void levelOrderRec(TreeNode* root, int level, vector<vector<int>>& res)
{
	if (!root) return;

	if (level >= res.size())
		res.push_back({});

	res[level].push_back(root->val);

	levelOrderRec(root->left, level + 1, res);
	levelOrderRec(root->right, level + 1, res);
}

int SizeOfVector(TreeNode* root)
{
	vector<vector<int>> res;

	levelOrderRec(root, 0, res);
	
	return res.size();
}

int maxDepth(TreeNode* root)
{
	return SizeOfVector(root);
}
#else
int maxDepth(TreeNode* root) {
	if (!root) return 0;
	int maxLeft = maxDepth(root->left);
	int maxRight = maxDepth(root->right);
	return max(maxLeft, maxRight) + 1;
}
#endif 
int main()
{
	TreeNode* tree = new TreeNode(3);
	tree->left = new TreeNode(9);
	tree->right = new TreeNode(20);
	tree->right->left = new TreeNode(15);
	tree->right->right = new TreeNode(7);
	
	cout << maxDepth(tree);
	return 0;
}