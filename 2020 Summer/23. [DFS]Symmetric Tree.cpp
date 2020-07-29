//https://leetcode.com/problems/symmetric-tree/
//time complexity : O(N) Space Complexity : O(N)
class Solution {
public:
    bool solve(TreeNode *t, TreeNode*s){
        if(t==NULL && s==NULL) return 1;
        if(t==NULL || s==NULL) return 0;
        return (t->val == s->val) && solve(t->left, s->right) && solve(t->right, s->left);
    }
    
    bool isSymmetric(TreeNode* root) {
        return solve(root, root);
    }
    
};