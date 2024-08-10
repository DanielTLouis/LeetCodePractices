/*
4. Median of Two Sorted Arrays
Solved
Hard

Topics
Companies
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).



Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.


Constraints:

nums1.length == m
nums2.length == n
0 <= m <= 1000
0 <= n <= 1000
1 <= m + n <= 2000
-106 <= nums1[i], nums2[i] <= 106
*/
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> combinedNums;
        int index1 = 0, index2 = 0;
        while(index1 < nums1.size() && index2 < nums2.size()){
            if(nums1[index1] <= nums2[index2]){
                combinedNums.push_back(nums1[index1]);
                index1++;
            }
            else{
                combinedNums.push_back(nums2[index2]);
                index2++;
            }
        }
        while(index1 < nums1.size()){
            combinedNums.push_back(nums1[index1]);
            index1++;
        }
        while(index2 < nums2.size()){
            combinedNums.push_back(nums2[index2]);
            index2++;
        }
        if(combinedNums.size() % 2 != 0){
            return combinedNums[combinedNums.size()/2];
        }
        else{
            //return double(combinedNums[combinedNums.size() / 2] + combinedNums[combinedNums.size() / 2 - 1]) / 2.0;
            return double(combinedNums[combinedNums.size()/2]+combinedNums[(combinedNums.size()/2)-1]) / 2.0;
        }
    }
};
