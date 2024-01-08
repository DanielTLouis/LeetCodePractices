/*
242. Valid Anagram
Easy
11.4K
359
Companies
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.



Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false


Constraints:

1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.


Follow up: What if the inputs contain Unicode characters? How would you adapt your solution to such a case?
*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        vector<char> s2;
        vector<char> t2;
        for(int i = 0; i < s.size(); i++){
            s2.push_back(s[i]);
            t2.push_back(t[i]);
        }
        sort(s2.begin(), s2.end());
        sort(t2.begin(), t2.end());
        for(int i = 0; i < s2.size(); i++){
            if(s2[i] != t2[i]){
                return false;
            }
        }
        return true;
    }
};
