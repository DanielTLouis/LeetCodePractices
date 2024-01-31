/*
50. Pow(x, n)
Solved
Medium

Topics
Companies
Implement pow(x, n), which calculates x raised to the power n (i.e., xn).



Example 1:

Input: x = 2.00000, n = 10
Output: 1024.00000
Example 2:

Input: x = 2.10000, n = 3
Output: 9.26100
Example 3:

Input: x = 2.00000, n = -2
Output: 0.25000
Explanation: 2-2 = 1/22 = 1/4 = 0.25


Constraints:

-100.0 < x < 100.0
-231 <= n <= 231-1
n is an integer.
Either x is not zero or n > 0.
-104 <= xn <= 104
*/
class Solution {
public:
    double myPow(double x, int n) {
        /*
        if(x == 1 || x == -1){
            if(x==-1 && n % 2 == 0){
                return 1;
            }
            else if(x == -1){
                return -1;
            }
            return 1;
        }
        if(n > 0){
            double total = 1;
            for(long i = 0; i < n; i++){
                total *= x;
            }
            return total;
        }
        else if(n == 0){
            return 1;
        }
        else{
            double total = 1/x;
            for(long i = 1; i < abs(long(n)); i++){
                total *= 1/x;
            }
            return total;
        }
        */

        if(n < 0) {
            x = 1 / x;
        }

        long num = labs(n);

        double pow = 1;

        while(num){ // equivalent to while(num != 0)
            if(num & 1) { // equivalent to if((num & 1) != 0)
                pow *= x;
            }

            x *= x;
            num >>= 1;
        }

        return pow;
    }
};
