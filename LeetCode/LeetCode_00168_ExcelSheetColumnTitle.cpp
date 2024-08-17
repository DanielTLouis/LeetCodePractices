/*
168. Excel Sheet Column Title
Solved
Easy

Topics
Companies
Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.

For example:

A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28
...


Example 1:

Input: columnNumber = 1
Output: "A"
Example 2:

Input: columnNumber = 28
Output: "AB"
Example 3:

Input: columnNumber = 701
Output: "ZY"


Constraints:

1 <= columnNumber <= 231 - 1
*/
class Solution {
public:
    string charForNumber(int num){
        switch(num){
            case 1:
                return "A";
                break;
            case 2:
                return "B";
                break;
            case 3:
                return "C";
                break;
            case 4:
                return "D";
                break;
            case 5:
                return "E";
                break;
            case 6:
                return "F";
                break;
            case 7:
                return "G";
                break;
            case 8:
                return "H";
                break;
            case 9:
                return "I";
                break;
            case 10:
                return "J";
                break;
            case 11:
                return "K";
                break;
            case 12:
                return "L";
                break;
            case 13:
                return "M";
                break;
            case 14:
                return "N";
                break;
            case 15:
                return "O";
                break;
            case 16:
                return "P";
                break;
            case 17:
                return "Q";
                break;
            case 18:
                return "R";
                break;
            case 19:
                return "S";
                break;
            case 20:
                return "T";
                break;
            case 21:
                return "U";
                break;
            case 22:
                return "V";
                break;
            case 23:
                return "W";
                break;
            case 24:
                return "X";
                break;
            case 25:
                return "Y";
                break;
            case 26:
                return "Z";
                break;
            default :
                return "-1";
        }
    }
    string convertToTitle(int columnNumber) {
        string ans = "";
        if(columnNumber <= 26){
            ans += charForNumber(columnNumber);
            return ans;
        }
        else{
            int temp = columnNumber;
            while(temp > 0){
                temp--;
                int a = temp % 26;
                ans+=(a + 'A');
                temp /= 26;
            }
            reverse(ans.begin(), ans.end());
            return ans;
        }
    }
};
