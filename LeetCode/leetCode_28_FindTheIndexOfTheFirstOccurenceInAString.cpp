/*
28. Find the Index of the First Occurrence in a String
Easy
5.1K
308
Companies
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.



Example 1:

Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
Example 2:

Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.


Constraints:

1 <= haystack.length, needle.length <= 104
haystack and needle consist of only lowercase English characters.
*/
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length() > haystack.length()){
            return -1;
        }
        bool notFound = false;
        for(int i = 0; i < haystack.length(); i++){
            notFound = false;
            for(int j = 0; j < needle.length(); j++){
                if(i + j <= haystack.length() && haystack[i+j] != needle[j]){
                    notFound = true;
                }
            }
            if(!notFound){
                return i;
            }
        }
        return -1;
    }
};
