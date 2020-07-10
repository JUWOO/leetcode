//https://leetcode.com/problems/3sum/
//Time complexity : O(n^2)
//Space complexity : O(n^2)
//discuss의 도움을 받음
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i, j, k;
        int check;
        int n = nums.size();
        set<vector<int>>s;
        vector<vector<int>> ary;

        sort(nums.begin(), nums.end());
        
        for(i=0; i<n-2;i++)
        {
            int val = nums[i];
            j = i+1;
            k = n-1;
            
            while(j<k)
            {
                check = val+nums[j]+nums[k];
                if(check==0)
                {
                    s.insert({val,nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(check<0)
                    j++;
                else
                    k--;
            }
        }
        for(auto x : s)
            ary.push_back(x);
        return ary;
    }
};