//https://leetcode.com/problems/maximum-depth-of-binary-tree
//Time Complexity : 
class Solution {
public:
    int solve(TreeNode* root)
    {
        if(root==nullptr) return 0;
        return 1 + max(solve(root->left), solve(root->right));
    }
    
    int maxDepth(TreeNode* root) {
        return solve(root);
    }
    
};