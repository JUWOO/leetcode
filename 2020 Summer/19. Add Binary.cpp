//https://leetcode.com/problems/add-binary/
//Time Complexity : O(n)
//help....
class Solution {
public:
    string addBinary(string a, string b) {
        int alen = a.size()-1;
        int blen = b.size()-1;
        int k=0;
        string res = "";
        bool carry = 0;
        while(k<=alen || k<=blen)
        {
            int val = (k<=alen && a[alen-k]=='1') + (k<=blen && b[blen-k]=='1') + carry;
            res = to_string(val%2)+res;
            carry = val >= 2;
            k++;
        }
        return (carry ? to_string(carry) : "") + res;
    }
};