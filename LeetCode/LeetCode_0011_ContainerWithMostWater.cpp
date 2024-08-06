/*
11. Container With Most Water
Solved
Medium

Topics
Companies

Hint
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.



Example 1:


Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
Example 2:

Input: height = [1,1]
Output: 1


Constraints:

n == height.length
2 <= n <= 105
0 <= height[i] <= 104
*/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int area;
        int n = height.size();
        //to slow
        /*for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(height[j] > height[i]){
                    area = (j-i) * height[i];
                }
                else{
                    area = (j-i) * height[j];
                }
                if(area > ans){
                    ans = area;
                }
            }
        }
        */
        int j = n - 1;
        int i = 0;
        /*
        * Hint 2: Try to use two-pointers. Set one pointer to the left and one to the
        * right of the array. Always move the pointer that points to the lower line.
        */
        while(i != j){
            if(height[i] <= height[j]){
                area = (j-i) * height[i];
                i++;
            }
            else{
                area = (j-i) * height[j];
                j--;
            }
            if(area > ans){
                    ans = area;
                }
        }
        return ans;
    }
};
