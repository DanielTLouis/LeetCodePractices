/*
338. Counting Bits
Solved
Easy

Topics
Companies

Hint
Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.



Example 1:

Input: n = 2
Output: [0,1,1]
Explanation:
0 --> 0
1 --> 1
2 --> 10
Example 2:

Input: n = 5
Output: [0,1,1,2,1,2]
Explanation:
0 --> 0
1 --> 1
2 --> 10
3 --> 11
4 --> 100
5 --> 101
*/
class Solution {
public:
    int oneInBits(int n){
        std::string s = std::bitset< 64 >( n ).to_string(); // string conversion
        int ones = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1'){
                ones += 1;
            }
        }
        return ones;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i = 0; i <= n; i++){
            ans.push_back(oneInBits(i));
        }
        return ans;
    }
};
