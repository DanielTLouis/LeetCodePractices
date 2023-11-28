/*
14. Longest Common Prefix
Easy
16.4K
4.3K
Companies
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".



Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.


Constraints:

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters.
*/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        /*
        if(strs.size() == 1){
            return strs[0];
        }
        else if(strs.size() == 0){
            return "";
        }
        string longestPrefix = "";
        char currentLetter = ' ';
        bool prefixFound = true;
        int indices = 0;
        while(prefixFound){
            currentLetter = strs[0][indices];
            for(int i = 0; i < strs.size(); i++){
                if(strs[i].size() == 0){
                    return "";
                }
                else if(indices > strs[i].size()){
                    prefixFound = false;
                    break;
                }
                else if(currentLetter != strs[i][indices]){
                    prefixFound = false;
                    break;
                }
            }
            if(prefixFound){
                longestPrefix += currentLetter;
                indices += 1;
            }
        }
        return longestPrefix;
        */
        string ans="";
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string first=strs[0],last=strs[n-1];
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]!=last[i]){
                return ans;
            }
            ans+=first[i];
        }
        return ans;
    }
};
