/*
238. Product of Array Except Self
Solved
Medium

Topics
Companies
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.



Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]


Constraints:

2 <= nums.length <= 105
-30 <= nums[i] <= 30
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

*/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int total = 1;
        vector<int> ans(nums.size());
        for(int i = 0; i < nums.size(); i++){
            total *= nums[i];
        }
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                total = 1;
                for(int j = 0; j<nums.size(); j++){
                    if(j!=i){
                        ans[j] = 0;
                        total *= nums[j];
                    }
                }
                ans[i] = total;
                return ans;
            }
            else{
                ans[i] = total / nums[i];
            }
        }
        return ans;
    }
};
