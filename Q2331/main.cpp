#include<iostream>
using namespace std;
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };


class Solution {
public:
    bool evaluateTree(TreeNode* root) {
         // Handle null root case
        if (root->val <2) return root->val; // Leaf node with value 0

        if(root->val == 2) 
            return evaluateTree(root->left) || evaluateTree(root->right); // OR operation
        else  
            return evaluateTree(root->left) && evaluateTree(root->right);
        return false; // Should not reach here if the tree is valid
    }         
};
int main()
{
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(1);

    Solution sol;
    bool result = sol.evaluateTree(root);
    cout << (result ? "true" : "false") << endl;
    return 0;
}
