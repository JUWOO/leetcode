//https://leetcode.com/problems/subsets/
//Time Complexity : O(n*2^n)
//Space Complexity : O(n*2^n)
class Solution {
public:
    vector<int> subsets_find(int n, vector<int>& nums) {
        int i = 0;
        vector<int> tmp;
        while(n)
        {
            if(n&1)
                tmp.push_back(nums[i]);
            i++;
            n = n>>1;
        }
        return tmp;
    }
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        int size = nums.size();
        vector<int> s;
        vector<vector<int>> ans;
        int total = 1<<size; //number of subsets
        for(int i=0 ;i<total ;i++)
        {
            s = subsets_find(i, nums);
            ans.push_back(s);
        }
        return ans;
    }
};