/*
66. Plus One
Solved
Easy

Topics
Companies
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.



Example 1:

Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].
Example 2:

Input: digits = [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.
Incrementing by one gives 4321 + 1 = 4322.
Thus, the result should be [4,3,2,2].
Example 3:

Input: digits = [9]
Output: [1,0]
Explanation: The array represents the integer 9.
Incrementing by one gives 9 + 1 = 10.
Thus, the result should be [1,0].


Constraints:

1 <= digits.length <= 100
0 <= digits[i] <= 9
digits does not contain any leading 0's.
*/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
            digits[digits.size() -1] += 1;
            if(digits[digits.size()-1] >= 10){
                if(digits.size() - 1 == 0){
                    digits[digits.size()-1] = 0;
                    vector<int> temp;
                    temp.push_back(1);
                    for(int i = 0; i < digits.size(); i++){
                        temp.push_back(digits[i]);
                    }
                    digits = temp;
                }
                else{
                    vector<int> temp(digits.begin(), digits.end() -1);
                    plusOne(temp);
                    digits = temp;
                    digits.push_back(0);
                }
            }
            return digits;
    }
};
