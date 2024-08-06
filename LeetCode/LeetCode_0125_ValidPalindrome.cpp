/*
125. Valid Palindrome
Easy
8.5K
8K
Companies
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.



Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.


Constraints:

1 <= s.length <= 2 * 105
s consists only of printable ASCII characters.
*/
class Solution {
public:
    int iscapital(char x)
    {
        if (x >='A' && x <= 'Z')    return 1;
        else  return 0;
    }

    bool isPalindrome(string s) {
        /*
        for (int i = 0; i < s.size(); i++) {

            // Finding the character whose
            // ASCII value fall under this
            // range
            if (s[i] < 'A' || s[i] > 'Z' && s[i] < 'a'
                || s[i] > 'z' || s[i] == ' ') {
                // erase function to erase
                // the character
                s.erase(i, 1);
                i--;
            }
            if(iscapital(s[i])){
               s[i] = std::tolower(s[i]);
            }
        }
        int j = s.length() - 1;
        for(int i = 0; i < int(s.length()/2); i++){
            if(s[i] != s[j]){
                return false;
            }
            j--;
        }
        return true;
        */
        string res;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z') res += (s[i] + ('a' - 'A'));
            else if (s[i] >= 'a' && s[i] <= 'z') res += s[i];
            else if (s[i] >= '0' && s[i] <= '9') res += s[i];
        }
        int i = 0;
        int j = res.length() - 1;
        while (i < j)
        {
            if (res[i] != res[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};
