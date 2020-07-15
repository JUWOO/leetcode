//https://leetcode.com/problems/reverse-bits/
//Time Complexity : O(1)
//Space Complexity : O(1)
class Solution {
  public:
  uint32_t reverseBits(uint32_t n) {
    uint32_t ret = 0, power = 31;
    while (n != 0) {
      ret += (n & 1) << power;
      n = n >> 1;
      power -= 1;
    }
    return ret;
  }
};

/*
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        vector<int> tmp;
        int total;
        uint32_t rev = 0;
        if(n==0)
            return n;
        else
        {
            while(n){
                if(n&1)
                    tmp.push_back(1);
                else
                    tmp.push_back(0);
                n = n>>1;
            }
            total = tmp.size();
            for(int i=0; i<total; i++)
            {
                rev = rev << 1;
                rev = rev + tmp[i];
            }
            rev = rev << (32-total);
            return rev;
            }
    }
};
*/