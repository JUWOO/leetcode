//https://leetcode.com/problems/plus-one/
//Time complexity : O(n)
//space complexity : O(n)
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        unsigned int number=0;
        unsigned int mul = 1;
        int n = digits.size();
        int i = 0;
        int check = 1;
        reverse(digits.begin(), digits.end());
        while(i<n)
        {
            if(check==1 && digits[i]==9)
            {
                digits[i]=0;
                check = 1;
            }
            else if(check==1)
            {
                digits[i]++;
                check = 0;
            }
            i++;
        }
        if(check == 1)
            digits.push_back(1);
        reverse(digits.begin(), digits.end());
        return digits;
    }
};
