//https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
//Time Complexity : O(n)
class Solution {
public:
    TreeNode* solve(vector<int>& nums, int s, int e) {
        if(s>e)
            return NULL;
        int mid = (s+e+1)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = solve(nums, s, mid-1);
        root->right = solve(nums, mid+1, e);
        return root;
    }
    
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int h = nums.size();
        TreeNode* start = solve(nums, 0, h-1);
        return start;
    }
};