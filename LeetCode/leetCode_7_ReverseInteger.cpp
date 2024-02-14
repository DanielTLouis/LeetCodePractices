/*
7. Reverse Integer
Solved
Medium

Topics
Companies
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).



Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21


Constraints:

-231 <= x <= 231 - 1
*/
class Solution {
public:
    int reverse(int x) {
        string s = to_string(x);
        cout << s << " : " << endl;
        string ans = "";
        if(x < 0){
            ans += "-";
        }
        for(int i = s.size() -1; i >= 0; i--){
            ans += s[i];
        }
        cout << ans;
        try{
            int a = stoi(ans);
            return a;
        }
        catch(...){
            return 0;
        }
    }
};
