//https://leetcode.com/problems/hamming-distance/
//Time complexity : O(1)
class Solution {
    public int hammingDistance(int x, int y) {
        return Integer.bitCount(x ^ y);
    }
}





/*
class Solution {
public:
    void DtoB(int a, int* ary)
    {
        for(int i=0 ; a>0 ; i++)
        {
            ary[i]=a%2;
            a=a/2;
        }
    }
    
    int hammingDistance(int x, int y) {
        int ary1[31]={0};
        int ary2[31]={0};
        int count=0;
        DtoB(x, ary1);
        DtoB(y, ary2);
        for(int i=0 ; i<31 ; i++)
        {
            if(ary1[i] != ary2[i])
                count++;
        }
        return count;
    }
};
*/