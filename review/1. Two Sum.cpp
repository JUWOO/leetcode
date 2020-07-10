//https://leetcode.com/articles/arranging-coins/
//Hash Map / C++
//T=O(n), S=O(1)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m; //hash map
               
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            if(m.count(complement)) //check complement in map
                return { m[complement], i };
            m[nums[i]] = i; //if their is no complement in map, put 'nums' and index 'i' in map
        }
        return {};
    }
};

//Brute Force / C code
/*
//T=O(n^2), S=O(1)
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int *arr = (int*) malloc((*returnSize)*sizeof(int));
    for(int i=0 ; i<(numsSize-1) ; i++){
        for(int j=i+1 ; j<numsSize ; j++){
            if(nums[i] + nums[j] == target){
                arr[0] = i;
                arr[1] = j;
                return arr;
            }
        }
    }
    arr[0] = -1;
    arr[1] = -1;
    return arr;
}
*/
