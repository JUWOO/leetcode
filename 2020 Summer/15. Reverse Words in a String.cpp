//https://leetcode.com/problems/reverse-words-in-a-string/
class Solution {
public:
    string reverseWords(string s) {
        stringstream total(s); 
        string word, ans = "";
        while (total >> word)
            ans = word + " " + ans;
        return ans.substr(0,ans.length()-1);
    }
};