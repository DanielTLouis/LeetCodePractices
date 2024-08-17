/*
228. Summary Ranges
Easy
3.8K
2K
Companies
You are given a sorted unique integer array nums.

A range [a,b] is the set of all integers from a to b (inclusive).

Return the smallest sorted list of ranges that cover all the numbers in the array exactly. That is, each element of nums is covered by exactly one of the ranges, and there is no integer x such that x is in one of the ranges but not in nums.

Each range [a,b] in the list should be output as:

"a->b" if a != b
"a" if a == b


Example 1:

Input: nums = [0,1,2,4,5,7]
Output: ["0->2","4->5","7"]
Explanation: The ranges are:
[0,2] --> "0->2"
[4,5] --> "4->5"
[7,7] --> "7"
Example 2:

Input: nums = [0,2,3,4,6,8,9]
Output: ["0","2->4","6","8->9"]
Explanation: The ranges are:
[0,0] --> "0"
[2,4] --> "2->4"
[6,6] --> "6"
[8,9] --> "8->9"


Constraints:

0 <= nums.length <= 20
-231 <= nums[i] <= 231 - 1
All the values of nums are unique.
nums is sorted in ascending order.
*/
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        /*sort(nums.begin(), nums.end());
        vector<string> ans;
        int first = 0;
        for(int i = 0; i < nums.size(); i++){
            if(i != 0 && nums[i] - nums[i-1] > 1){
                if(first == i-1){
                    ans.push_back(to_string(nums[first]));
                    first = i;
                }
                else{
                    ans.push_back(to_string(nums[first])+"->"+to_string(nums[i-1]));
                    first = i;
                }
            }
            if(i == nums.size() - 1){
                 if(first == i){
                    ans.push_back(to_string(nums[i]));
                }
                else{
                    ans.push_back(to_string(nums[first])+"->"+to_string(nums[i]));
                }
            }
        }
        return ans;
        */
        // resultant string
        vector<string> result;

        int n = nums.size();
		// if size happens to be  zero return empty string
        if(n == 0 )
                return result;

		// assigning first element to a
        int a = nums[0];

        for(int i = 0; i<n; i++)
        {
			// if one of both is true
            if( i == n-1 || nums[i]+1 != nums[i+1])
            {
			    // if current element is not equals a
				// this means we have found a range.
                if(nums[i] != a)
                    result.push_back(to_string(a)+ "->"+ to_string(nums[i]));

				// this means we have reached to the end of string and now
				// we have to add a that should be the last element
                else
                        result.push_back(to_string(a));

				// checking  for this condition so that a got updated for next range
				// also n-1 so that a doesn't contain out of bound value
                if(i != n-1)
                    a = nums[i+1];
            }
        }
		// return result
        return result;
    }
};
