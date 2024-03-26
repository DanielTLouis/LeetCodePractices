/*
557. Reverse Words in a String III
Solved
Easy

Topics
Companies
Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.



Example 1:

Input: s = "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"
Example 2:

Input: s = "Mr Ding"
Output: "rM gniD"


Constraints:

1 <= s.length <= 5 * 104
s contains printable ASCII characters.
s does not contain any leading or trailing spaces.
There is at least one word in s.
All the words in s are separated by a single space.
*/
class Solution {
public:
    string reverseWord(string s){
        string temp = "";
        for(int i = s.size()-1; i >= 0; i--){
            temp += s[i];
        }
        return temp;
    }
    string reverseWords(string s) {
        vector<string> words;
        string temp = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                words.push_back(temp);
                temp = "";
            }
            else{
                temp += s[i];
            }
        }
        words.push_back(temp);
        string ans = "";
        for(int i = 0; i < words.size(); i++){
            if(i < words.size() - 1){
                ans += reverseWord(words[i]) + " ";
            }
            else{
                ans += reverseWord(words[i]);
            }
        }

        return ans;
    }
};
