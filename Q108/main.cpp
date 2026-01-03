#include<iostream>
#include<vector>
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
TreeNode* BuildBST(vector<int>& nums, int left, int right)
{
	if (left >= right) return nullptr;
	int mid = left + (right - left) / 2;
	TreeNode* node = new TreeNode(nums[mid]);
	node->left = BuildBST(nums, left, mid);
	node->right = BuildBST(nums, mid + 1, right);
	return node;
}
TreeNode* sortedArrayToBST(vector<int>& nums) 
{
	if (nums.empty()) return nullptr;
	return BuildBST(nums, 0, nums.size());

}
void ReadTree(TreeNode* root)
{
	if (!root) return;
	ReadTree(root->left);
	cout << root->val << " ";
	ReadTree(root->right);
}
int main()
{
	vector<int> nums = { -10,-3,0,5,9 };
	TreeNode* root = sortedArrayToBST(nums);
	ReadTree(root);
	return 0;
}