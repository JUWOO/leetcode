//https://leetcode.com/problems/top-k-frequent-elements/
//can't solve....
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        int count = 0 ;
        if(k == nums.size())
            return nums;
        unordered_map<int, int> nums_map;
        for(int n : nums)
        {
            count++;
            if(nums[n]!=nums[n+1])
            {
                nums_map[nums[n]] = count;
                count = 0;
            }   
        }
        ans.push_back
    }
};