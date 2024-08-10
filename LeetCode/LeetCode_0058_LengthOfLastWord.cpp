/*
58. Length of Last Word
Easy
4.3K
220
Companies
Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal
substring
 consisting of non-space characters only.



Example 1:

Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.
Example 2:

Input: s = "   fly me   to   the moon  "
Output: 4
Explanation: The last word is "moon" with length 4.
Example 3:

Input: s = "luffy is still joyboy"
Output: 6
Explanation: The last word is "joyboy" with length 6.


Constraints:

1 <= s.length <= 104
s consists of only English letters and spaces ' '.
There will be at least one word in s.
*/
class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string> words;
        string word = "";
        for(int i = 0; i < s.length(); i++){
            if(s[i] == ' '){
                words.push_back(word);
                word = "";
            }
            else{
                word += s[i];
            }
        }
        words.push_back(word);
        while(words[words.size() - 1] == " " || words[words.size() - 1] == ""){
            words.erase(words.begin() + words.size() - 1);
        }
        //cout << "words is " << words[words.size() - 1];
        return words[words.size() - 1].length();
    }
};
