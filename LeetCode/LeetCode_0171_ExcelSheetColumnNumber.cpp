/*
171. Excel Sheet Column Number
Solved
Easy

Topics
Companies
Given a string columnTitle that represents the column title as appears in an Excel sheet, return its corresponding column number.

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

Input: columnTitle = "A"
Output: 1
Example 2:

Input: columnTitle = "AB"
Output: 28
Example 3:

Input: columnTitle = "ZY"
Output: 701


Constraints:

1 <= columnTitle.length <= 7
columnTitle consists only of uppercase English letters.
columnTitle is in the range ["A", "FXSHRXW"].
*/
class Solution {
public:
    int stringToNum(char s){
        switch(s){
            case 'A' :
                return 1;
                break;
            case 'B' :
                return 2;
                break;
            case 'C' :
                return 3;
                break;
            case 'D' :
                return 4;
                break;
            case 'E' :
                return 5;
                break;
            case 'F' :
                return 6;
                break;
            case 'G' :
                return 7;
                break;
            case 'H' :
                return 8;
                break;
            case 'I' :
                return 9;
                break;
            case 'J' :
                return 10;
                break;
            case 'K' :
                return 11;
                break;
            case 'L' :
                return 12;
                break;
            case 'M' :
                return 13;
                break;
            case 'N' :
                return 14;
                break;
            case 'O' :
                return 15;
                break;
            case 'P' :
                return 16;
                break;
            case 'Q' :
                return 17;
                break;
            case 'R' :
                return 18;
                break;
            case 'S' :
                return 19;
                break;
            case 'T' :
                return 20;
                break;
            case 'U' :
                return 21;
                break;
            case 'V' :
                return 22;
                break;
            case 'W' :
                return 23;
                break;
            case 'X' :
                return 24;
                break;
            case 'Y' :
                return 25;
                break;
            case 'Z' :
                return 26;
                break;
            default :
                return -1;
        }
    }
    int tensPlace(int num){
        switch(num){
            case 1 :
                return 1;
                break;
            case 2 :
                return 10;
                break;
            case 3 :
                return 100;
                break;
            case 4 :
                return 1000;
                break;
            case 5 :
                return 10000;
                break;
            case 6 :
                return 100000;
                break;
            case 7 :
                return 1000000;
                break;
            case 8 :
                return 10000000;
                break;
            case 9 :
                return 100000000;
                break;
            case 10 :
                return 1000000000;
                break;
            case 11 :
                return 10000000000;
                break;
            case 12 :
                return 100000000000;
                break;
            case 13 :
                return 1000000000000;
                break;
            default :
                return -1;
        }
    }
    int titleToNumber(string columnTitle) {
        /*
        int ans = 0;
        reverse(columnTitle.begin(),columnTitle.end());
        for(int i = 0; i < columnTitle.size(); i++){
            if(i != 0)
                ans += stringToNum(columnTitle[i]) *  26 * tensPlace(i);
            else
                ans += stringToNum(columnTitle[i]);
        }
        return ans;
        */

        int result = 0;
        for(char c : columnTitle)
        {
			//d = s[i](char) - 'A' + 1 (we used  s[i] -  'A' to convert the letter to a number like it's going to be C)

            int d = c - 'A' + 1;
            result = result * 26 + d;
        }
        return result;
    }
};
