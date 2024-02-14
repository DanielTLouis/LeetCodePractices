/*
5. Longest Palindromic Substring
Solved
Medium

Topics
Companies

Hint
Given a string s, return the longest
palindromic

substring
 in s.



Example 1:

Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.
Example 2:

Input: s = "cbbd"
Output: "bb"


Constraints:

1 <= s.length <= 1000
s consist of only digits and English letters.
*/
class Solution {
public:
    bool isPal(string s){
        int right = s.size() - 1;
        for(int i = 0; i < s.size()/2; i++){
            if(s[i] != s[right--]){
                return false;
            }
        }
        return true;
    }
    string longestPalindrome(string s) {
        /*
        if(s.length() <= 1){
            return s;
        }
        string temp;
        string ans = "";
        int i =0, j=0;
        while(i < s.length()){
            j=0;
            while( j < s.length()+1){
                temp = s.substr(i, j);
                if(isPal(temp)){
                    if(temp.size() > ans.size()){
                        ans = temp;
                    }
                }
                j++;
            }
            i++;
        }
        return ans;
        */
         if (s.length() <= 1) {
            return s;
        }

        int max_len = 1;
        int start = 0;
        int end = 0;
        std::vector<std::vector<bool>> dp(s.length(), std::vector<bool>(s.length(), false));

        for (int i = 0; i < s.length(); ++i) {
            dp[i][i] = true;
            for (int j = 0; j < i; ++j) {
                if (s[j] == s[i] && (i - j <= 2 || dp[j + 1][i - 1])) {
                    dp[j][i] = true;
                    if (i - j + 1 > max_len) {
                        max_len = i - j + 1;
                        start = j;
                        end = i;
                    }
                }
            }
        }

        return s.substr(start, end - start + 1);
    }
};
