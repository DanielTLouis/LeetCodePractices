/*
16. 3Sum Closest
Solved
Medium

Topics
Companies
Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to target.

Return the sum of the three integers.

You may assume that each input would have exactly one solution.



Example 1:

Input: nums = [-1,2,1,-4], target = 1
Output: 2
Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
Example 2:

Input: nums = [0,0,0], target = 1
Output: 0
Explanation: The sum that is closest to the target is 0. (0 + 0 + 0 = 0).


Constraints:

3 <= nums.length <= 500
-1000 <= nums[i] <= 1000
-104 <= target <= 104
*/
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        /*
        int closest = nums[0] + nums[1] + nums[2];
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if(j == i){
                    continue;
                }
                else{
                    for(int k = 0; k < nums.size(); k++){
                        if(k == j || k == i){
                            continue;
                        }
                        else if(nums[i] + nums[j] + nums[k] == target){
                            return target;
                        }
                        else if(abs(target - (nums[i] + nums[j] + nums[k])) < abs(target-closest)){
                            closest = (nums[i] + nums[j] + nums[k]);
                        }
                    }
                }
            }
        }
        return closest;
        */
        sort(nums.begin(), nums.end());
        int ans = INT_MAX;
        int result = 0;
        for (int i = 0; i < nums.size() - 2; i++) {
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == target) {
                    return sum;
                } else if (abs(sum - target) < abs(ans)) {
                    ans = sum - target;
                    result = sum;
                }
                if (sum > target) {
                    k--;
                } else {
                    j++;
                }
            }
        }
        return result;
    }
};
