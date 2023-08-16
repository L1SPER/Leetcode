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
	TreeNode *head = new TreeNode(0);
	TreeNode* tree = head;
	void  inorder(TreeNode* root)
	{
		if (root==NULL)
			return;

		inorder(root->left);

		head->right = new TreeNode(root->val);
		head->left = NULL;
		cout << root->val << endl;
		head = head->right;

		inorder(root->right);
	}
	TreeNode * increasingBST(TreeNode * root) {
	#if 1 //recursive tree solution
		inorder(root);
		return tree->right;
#else //stack solution
		if (!root)
			return root;
		stack<TreeNode*> st;
		TreeNode head(-1);
		TreeNode* tree = &head;


		while (root || !st.empty())
		{
			while (root)
			{
				st.push(root);
				root = root->left;
			}
			root = st.top();
			st.pop();
			tree->right = root;
			tree = tree->right;
			tree->left = NULL;
			root = root->right;
		}
		return head.right;
#endif // 1
}
int main()
{
	TreeNode* tree1 = new TreeNode(2);
	tree1->left = new TreeNode(1);
	tree1->right = new TreeNode(4);
	tree1->left->left = nullptr;
	tree1->left->right = nullptr;
	tree1->right->left = new TreeNode(3);
	tree1 = increasingBST(tree1);
	return 0;
}