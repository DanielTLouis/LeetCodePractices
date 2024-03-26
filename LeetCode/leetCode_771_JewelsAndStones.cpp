/*
771. Jewels and Stones
Solved
Easy

Topics
Companies

Hint
You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels.

Letters are case sensitive, so "a" is considered a different type of stone from "A".



Example 1:

Input: jewels = "aA", stones = "aAAbbbb"
Output: 3
Example 2:

Input: jewels = "z", stones = "ZZ"
Output: 0


Constraints:

1 <= jewels.length, stones.length <= 50
jewels and stones consist of only English letters.
All the characters of jewels are unique.
*/
class Solution {
public:
    int letterIndex(char c){
        switch(c){
            case 'a' :
                return 0;
            case 'b' :
                return 1;
            case 'c':
                return 2;
            case 'd' :
                return 3;
            case 'e' :
                return 4;
            case 'f':
                return 5;
            case 'g':
                return 6;
            case 'h' :
                return 7;
            case 'i' :
                return 8;
            case 'j' :
                return 9;
            case 'k' :
                return 10;
            case 'l' :
                return 11;
            case 'm' :
                return 12;
            case 'n' :
                return 13;
            case 'o' :
                return 14;
            case 'p' :
                return 15;
            case 'q':
                return 16;
            case 'r' :
                return 17;
            case 's' :
                return 18;
            case 't' :
                return 19;
            case 'u' :
                return 20;
            case 'v' :
                return 21;
            case 'w' :
                return 22;
            case 'x' :
                return 23;
            case 'y' :
                return 24;
            case 'z' :
                return 25;
            case 'A' :
                return 26;
            case 'B' :
                return 27;
            case 'C':
                return 28;
            case 'D' :
                return 29;
            case 'E' :
                return 30;
            case 'F':
                return 31;
            case 'G':
                return 32;
            case 'H' :
                return 33;
            case 'I' :
                return 34;
            case 'J' :
                return 35;
            case 'K' :
                return 36;
            case 'L' :
                return 37;
            case 'M' :
                return 38;
            case 'N' :
                return 39;
            case 'O' :
                return 40;
            case 'P' :
                return 41;
            case 'Q':
                return 42;
            case 'R' :
                return 43;
            case 'S' :
                return 44;
            case 'T' :
                return 45;
            case 'U' :
                return 46;
            case 'V' :
                return 47;
            case 'W' :
                return 48;
            case 'X' :
                return 49;
            case 'Y' :
                return 50;
            case 'Z' :
                return 51;
            default:
                return 0;
        }
    }
    int numJewelsInStones(string jewels, string stones) {
        vector<int> bucket (52,0);
        for(int i = 0; i < stones.size(); i++){
            bucket[letterIndex(stones[i])] += 1;
        }
        int totalNumberOfJewels = 0;
        for(int i = 0; i < jewels.size(); i++){
            totalNumberOfJewels += bucket[letterIndex(jewels[i])];
        }
        return totalNumberOfJewels;
    }
};
