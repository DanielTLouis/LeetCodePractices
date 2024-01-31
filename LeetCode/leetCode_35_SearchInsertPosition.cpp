/*
35. Search Insert Position
Solved
Easy

Topics
Companies
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.



Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4


Constraints:

1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums contains distinct values sorted in ascending order.
-104 <= target <= 104
*/
class Solution {
public:
    int binarySearch(vector<int>& arr, int p, int r, int num) {
        if (p <= r) {
            int mid = (p + r)/2;
            if (arr[mid] == num)
                return mid ;
            if (arr[mid] > num)
                return binarySearch(arr, p, mid-1, num);
            if (arr[mid] < num)
                return binarySearch(arr, mid+1, r, num);
        }
        return p;
    }
    int searchInsert(vector<int>& nums, int target) {
       return binarySearch(nums, 0, nums.size() -1, target);
    }
};
