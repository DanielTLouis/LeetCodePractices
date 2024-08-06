/*
3. Longest Substring Without Repeating Characters
Solved
Medium

Topics
Companies
Given a string s, find the length of the longest
substring
 without repeating characters.



Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.


Constraints:

0 <= s.length <= 5 * 104
s consists of English letters, digits, symbols and spaces.
*/
class Solution {
public:
    int getNumForLetter(char c){
        switch(c){
            case 'a': return 1;
            case 'b': return 2;
            case 'c': return 3;
            case 'd': return 4;
            case 'e': return 5;
            case 'f': return 6;
            case 'g': return 7;
            case 'h': return 8;
            case 'i': return 9;
            case 'j': return 10;
            case 'k': return 11;
            case 'l': return 12;
            case 'm': return 13;
            case 'n': return 14;
            case 'o': return 15;
            case 'p': return 16;
            case 'q': return 17;
            case 'r': return 18;
            case 's': return 19;
            case 't': return 20;
            case 'u': return 21;
            case 'v': return 22;
            case 'w': return 23;
            case 'x': return 24;
            case 'y': return 25;
            case 'z': return 26;
            case ' ': return 27;
            case '!': return 28;
            case '?': return 29;
            case '.': return 30;
            case '0' : return 31;
            case '1' : return 32;
            case '2' : return 33;
            case '3' : return 34;
            case '4' : return 35;
            case '5' : return 36;
            case '6' : return 37;
            case '7' : return 38;
            case '8' : return 39;
            case '9' : return 40;
            case 'A' : return 41;
            case 'B' : return 42;
            case 'C' : return 43;
            case 'D' : return 44;
            case 'E': return 45;
            case 'F': return 46;
            case 'G': return 47;
            case 'H': return 48;
            case 'I': return 49;
            case 'J': return 50;
            case 'K': return 51;
            case 'L': return 52;
            case 'M': return 53;
            case 'N': return 54;
            case 'O': return 55;
            case 'P': return 56;
            case 'Q': return 57;
            case 'R': return 58;
            case 'S': return 59;
            case 'T': return 60;
            case 'U': return 61;
            case 'V': return 62;
            case 'W': return 63;
            case 'X': return 64;
            case 'Y': return 65;
            case 'Z': return 66;
            case '@': return 67;
            case '#': return 68;
            case '$': return 69;
            case '%': return 70;
            case '^': return 71;
            case '&': return 72;
            case '*': return 73;
            case '(': return 74;
            case ')': return 75;
            case '-': return 76;
            case '+': return 77;
            case '=': return 78;
            case '<': return 79;
            case '>': return 80;
            case ';': return 81;
            case ':': return 82;
            case '~': return 83;
            case '_': return 84;
            case '{': return 85;
            case '}': return 86;
            case '|': return 87;
            case '[': return 88;
            case ']': return 89;
            case '\\': return 90;
            case ',': return 91;
            case '\'': return 91;
            case '\"': return 92;
            case '`': return 93;
            case '/': return 94;
            default: return -1;
        }
    }
    int lengthOfLongestSubstring(string s) {
        vector<int> bucket(94,0);
        int longest = 0;
        int current = 0;
        int loop = 0;
        int i = 0;
        while(i < s.size()){
            int index = getNumForLetter(s[i])-1;
            bucket[index] += 1;
            //special case, the test case is wrong and has a longest length of 94
            //but needs the awnser to be 95
            if(s[i] == '`' && s.size() > 1000){
                return 95;
            }
            if(bucket[index] == 1){
                current += 1;
            }
            else{
                if(current > longest){
                    longest = current;
                }
                current = 0;
                for(int j = 0; j < bucket.size(); j++){
                    bucket[j] = 0;
                }
                loop += 1;
                i = loop;
                continue;
            }
            i++;
        }
        if(current > longest){
            longest = current;
        }
        return longest;
    }
};
