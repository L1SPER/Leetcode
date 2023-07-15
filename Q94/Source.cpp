#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

void helpFunction(TreeNode*a);
	vector<int>a;
	vector<int> inorderTraversal(TreeNode* root) {

		helpFunction(root);
		return a;
	}
	void helpFunction(TreeNode* root)
	{
		if (root == nullptr) return;
		inorderTraversal(root->left);
		a.push_back(root->val);
		cout << root->val << endl;
		inorderTraversal(root->right);
	}
int main()
{
	vector<int>b;
	TreeNode* Tree = new TreeNode(1);
	Tree->right= new TreeNode(2);
	Tree->right->left = new TreeNode(3);
	b=inorderTraversal(Tree);
	return 0;
}