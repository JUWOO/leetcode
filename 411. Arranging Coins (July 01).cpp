//https://leetcode.com/problems/arranging-coins/
//Time complexity : O(1)
//Space complexity : O(1)
class Solution {
public:
    int arrangeCoins(int n) {
        return (int)(sqrt(2*(long)n+0.25)-0.5);
    }
};


//Brute Force / C code
//T=O(n). S=O(1)
/*
int arrangeCoins(int n){
    
    unsigned int count=0;
    unsigned int m=0;
    while(m<n)
    {
        count++;
        m+=count;
    }
    if(m==n)
        return count;
    else
        return count-1;
}
*/