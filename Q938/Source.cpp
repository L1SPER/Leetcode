#include<iostream>
#include<stack>
using namespace std;
struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};
int sum = 0;
int rangeSumBST(TreeNode* root, int low, int high) {
#if 1
	if (!root)
		return NULL;
	if (root->val <= high && root->val >= low)
		sum += root->val;
	rangeSumBST(root->left, low, high);
	rangeSumBST(root->right, low, high);
	return sum;
#elif 0
	if (!root) return 0;
	return (root->val <= high && root->val >= low) ?( root->val + rangeSumBST(root->left, low, high) + rangeSumBST(root->right, low, high)) :
		((root->val<low)?rangeSumBST(root->right,low,high):rangeSumBST(root->left,low,high)) ;
#elif 0
	stack<TreeNode*>st;
	st.push(root);
	while (!st.empty())
	{
		TreeNode* tmp = st.top();
		st.pop();
		if (tmp->val <= high && tmp->val >= low) sum += tmp->val;
		if (tmp->val > low &&tmp->left) {
			st.push(tmp->left);
		}
		if (tmp->val < high && tmp->right)
		{
			st.push(tmp->right);
		}
	}
	return sum;
#endif 
}
void PrintNodes(TreeNode* root)
{
	if (!root)
		return;
	cout << endl;
	cout << root->val;
	PrintNodes(root->left);
	PrintNodes(root->right);
}
int main()
{
	TreeNode* tree = new TreeNode(10);
	tree->left= new TreeNode(5);
	tree->left->left= new TreeNode(3);
	tree->left->right= new TreeNode(7);
	tree->right= new TreeNode(15);
	tree->right->right= new TreeNode(18);

	cout << rangeSumBST(tree, 7, 15);
	PrintNodes(tree);
	return 0;
}