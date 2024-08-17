/*
67. Add Binary
Solved
Easy

Topics
Companies
Given two binary strings a and b, return their sum as a binary string.



Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"


Constraints:

1 <= a.length, b.length <= 104
a and b consist only of '0' or '1' characters.
Each string does not contain leading zeros except for the zero itself.
*/
class Solution {
public:
    string addBinary(string a, string b) {
         int x=0, y=0, rem=0;
        string res = "";
        while(!a.empty() || !b.empty()) {
            if(!a.empty()) {
                x = a[a.size()-1]-'0';
                a.pop_back();
            }
            if(!b.empty()) {
                y = b[b.size()-1]-'0';
                b.pop_back();
            }
            if(x+y+rem == 2) {
                rem = 1;
                res = "0" + res;
            }
            else if(x+y+rem == 3) {
                rem = 1;
                res = "1" + res;
            }
            else {
                res = to_string(x+y+rem) + res;
                rem = 0;
            }
            x=0;
            y=0;
        }
        if(rem==1) res = "1" + res;
        return res;
    }
};
