/*
844. Backspace String Compare
Solved
Easy

Topics
Companies
Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.

Note that after backspacing an empty text, the text will continue empty.



Example 1:

Input: s = "ab#c", t = "ad#c"
Output: true
Explanation: Both s and t become "ac".
Example 2:

Input: s = "ab##", t = "c#d#"
Output: true
Explanation: Both s and t become "".
Example 3:

Input: s = "a#c", t = "b"
Output: false
Explanation: s becomes "c" while t becomes "b".


Constraints:

1 <= s.length, t.length <= 200
s and t only contain lowercase letters and '#' characters.
*/
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char> stack1;
        vector<char> stack2;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '#' && !stack1.empty()){
                stack1.pop_back();
            }
            else if(s[i] == '#' && stack1.empty()){
                continue;
            }
            else{
                stack1.push_back(s[i]);
            }
        }
        for(int i = 0; i < t.size(); i++){
            if(t[i] == '#' && !stack2.empty()){
                stack2.pop_back();
            }
            else if(t[i] == '#' && stack2.empty()){
                continue;
            }
            else{
                stack2.push_back(t[i]);
            }
        }
        cout << stack1.size() << " " << stack2.size();
        if(stack1.size() != stack2.size()){
            return false;
        }
        for(int i = 0; i < stack1.size(); i++){
           if(stack1[i] != stack2[i]){
               return false;
           }
        }
        return true;
    }
};
