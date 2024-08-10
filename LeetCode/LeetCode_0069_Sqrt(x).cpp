/*
69. Sqrt(x)
Solved
Easy

Topics
Companies

Hint
Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.

For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.


Example 1:

Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.
Example 2:

Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.


Constraints:

0 <= x <= 231 - 1
*/
class Solution {
public:
    int mySqrt(int x) {
       unsigned res = 0;
        unsigned bit = 1u << (sizeof(x) * CHAR_BIT - 2);

        // "bit" starts at the highest power of four <= the argument.
        while (bit > x) {
            bit >>= 2;
        }

        while (bit > 0) {
            if (x >= res + bit) {
            x -= res + bit;
            res = (res >> 1) + bit;  // Key difference between this and OP's code
            } else {
            res >>= 1;
            }
            bit >>= 2;
        }

        return int(res);
    }
};
