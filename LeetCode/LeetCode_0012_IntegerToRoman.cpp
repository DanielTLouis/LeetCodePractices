/*
12. Integer to Roman
Solved
Medium

Topics
Companies
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9.
X can be placed before L (50) and C (100) to make 40 and 90.
C can be placed before D (500) and M (1000) to make 400 and 900.
Given an integer, convert it to a roman numeral.



Example 1:

Input: num = 3
Output: "III"
Explanation: 3 is represented as 3 ones.
Example 2:

Input: num = 58
Output: "LVIII"
Explanation: L = 50, V = 5, III = 3.
Example 3:

Input: num = 1994
Output: "MCMXCIV"
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.


Constraints:

1 <= num <= 3999
*/
class Solution {
public:
    string getRomanNum(int n){
        switch(n){
            case 1: return "I";
            case 5: return "V";
            case 10: return "X";
            case 50: return "L";
            case 100: return "C";
            case 500: return "D";
            case 1000: return "M";
            default: return "-1";
        }
    }
    string intToRoman(int num) {
        string roman = "";
        //1000th place
        while(num >= 1000){
            roman += "M";
            num -= 1000;
        }
        //100th place
        int hun = (num / 100);
        if(hun < 4){
            int index = hun;
            while(index){
                roman += "C";
                index -= 1;
            }
        }
        else if(hun == 4){
            roman += "CD";
        }
        else if(hun == 5){
            roman += "D";
        }
        else if(hun < 9){
            int index = hun - 5;
            roman += "D";
            while(index){
                roman += "C";
                index -= 1;
            }
        }
        else{
            roman += "CM";
        }
        if(num >= 100)
        {
            num -= (hun * 100);
        }
        //10th place
        int ten = (num / 10);
        if(ten < 4){
            int index = ten;
            while(index){
                roman += "X";
                index -= 1;
            }
        }
        else if(ten == 4){
            roman += "XL";
        }
        else if(ten == 5){
            roman += "L";
        }
        else if(ten < 9){
            int index = ten - 5;
            roman += "L";
            while(index){
                roman += "X";
                index -= 1;
            }
        }
        else{
            roman += "XC";
        }
        if(num >= 10){
            num -= (ten * 10);
        }
        //1th place
        if(num < 4){
            int index = num;
            while(index){
                roman += "I";
                index -= 1;
            }
        }
        else if(num == 4){
            roman += "IV";
        }
        else if(num == 5){
            roman += "V";
        }
        else if(num < 9){
            int index = num - 5;
            roman += "V";
            while(index){
                roman += "I";
                index -= 1;
            }
        }
        else{
            roman += "IX";
        }
        cout << roman << endl;
        return roman;
    }
};
