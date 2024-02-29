/*
263. Ugly Number
Solved
Easy

Topics
Companies
An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.

Given an integer n, return true if n is an ugly number.



Example 1:

Input: n = 6
Output: true
Explanation: 6 = 2 × 3
Example 2:

Input: n = 1
Output: true
Explanation: 1 has no prime factors, therefore all of its prime factors are limited to 2, 3, and 5.
Example 3:

Input: n = 14
Output: false
Explanation: 14 is not ugly since it includes the prime factor 7.


Constraints:

-231 <= n <= 231 - 1
*/
class Solution {
public:
    bool isPrime(int number){
        if(number % 2 == 0) return false;
        for(int i=3; (i*i)<=number; i+=2){
            if(number % i == 0 ) return false;
        }
        return true;
    }
    bool isUgly(int n) {
        if(n < 1){
            return false;
        }
        if(n<7){
            return true;
        }
        /*
        vector<int> nonUglyPrimes = {7,11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499, 503, 509, 521, 523, 541, 547, 557, 563, 569, 571, 577, 587, 593, 599, 601, 607, 613, 617, 619, 631, 641, 643, 647, 653, 659, 661, 673, 677, 683, 691, 701, 709, 719, 727, 733, 739, 743, 751, 757, 761, 769, 773, 787, 797, 809, 811, 821, 823, 827, 829, 839, 853, 857, 859, 863, 877, 881, 883, 887, 907, 911, 919, 929, 937, 941, 947, 953, 967, 971, 977, 983, 991, 997, 1233791327, 1369479539, 214797179};
        for(int i =0; i < nonUglyPrimes.size(); i++){
            if(n % nonUglyPrimes[i] == 0){
                return false;
            }
        }
        return true;
        *//*
        if(isPrime(n)){
            return false;
        }
        for(int i = 7; i <= n; i++){
            if(n % i == 0){
                if(isPrime(i)){
                    return false;
                }
            }
        }
        return true;
        */
         while (n > 1) {
            if (n % 2 == 0) {
                n /= 2;
            } else if (n % 3 == 0) {
                n /= 3;
            } else if (n % 5 == 0) {
                n /= 5;
            } else {
                return false;// if not a multiple of either of 2
                            // or 3 or 5 return false because it not ugly
            }
        }
        return true;
    }
};
