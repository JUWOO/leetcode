//https://leetcode.com/problems/ugly-number-ii/
//Time complex : O(n)
//Space complexity : S(n)
class Solution {
public:
    int nthUglyNumber(int n) {
        int L1 = 0; //index of L1
        int L2 = 0;
        int L3 = 0;
        int ary[1690] = {0};
        int i = 0;
        ary[0] = 1;
        i++;
        while(i!=n)
        {
            if(ary[L1]*2<=ary[L2]*3 && ary[L1]*2<=ary[L3]*5)
                ary[i] = ary[L1]*2;
            else if(ary[L2]*3<=ary[L1]*2 && ary[L2]*3<=ary[L3]*5)
                ary[i] = ary[L2]*3;

            else if(ary[L3]*5<=ary[L1]*2 && ary[L3]*5<=ary[L2]*3)
                ary[i] = ary[L3]*5;
            if(ary[i]==ary[L1]*2)
                L1++;
            if(ary[i]==ary[L2]*3)
                L2++;
            if(ary[i]==ary[L3]*5)
                L3++;
            i++;
        }
        return ary[n-1];
    }
};