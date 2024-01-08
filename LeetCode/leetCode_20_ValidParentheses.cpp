/*
20. Valid Parentheses
Easy
23K
1.6K
Companies
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.


Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false


Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.
*/
class Solution {
public:
    bool isValid(string s) {
        stack<char> q;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '}' || s[i] == ')' || s[i] == ']'){
                if(q.empty()){
                    return false;
                }
                char temp = q.top();
                q.pop();
                if(s[i] == '}'){
                    if(temp != '{'){
                        return false;
                    }
                }
                else if(s[i] == ']'){
                    if(temp != '['){
                        return false;
                    }
                }
                else if(s[i] == ')'){
                    if(temp != '('){
                        return false;
                    }
                }
            }
            else{
                q.push(s[i]);
            }
        }
        if(!q.empty()){
            return false;
        }
        return true;
    }
};
