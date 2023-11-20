/*
169. Majority Element
Easy
17.5K
521
Companies
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.



Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2


Constraints:

n == nums.length
1 <= n <= 5 * 104
-109 <= nums[i] <= 109


Follow-up: Could you solve the problem in linear time and in O(1) space?
*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int largest = -10000;
        int majorityElement = 0;
        std::map<int,int> bucket;
        for(int i = 0; i < nums.size(); i++){
            if(bucket.find(nums[i]) == bucket.end()){
                bucket.insert(std::pair<int,int>(nums[i], 1));
            }
            else{
                bucket[nums[i]] = bucket.find(nums[i])->second + 1;
            }
            if(largest < bucket.find(nums[i])->second){
                largest = bucket.find(nums[i])->second;
                majorityElement = nums[i];
            }
        }
        return majorityElement;
    }
};
