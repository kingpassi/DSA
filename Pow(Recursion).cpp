/******************************************************************************
Pow(x, n)
Implement pow(x, n), which calculates x raised to the power n (i.e., xn).
Example 1:

Input: x = 2.00000, n = 10
Output: 1024.00000
Example 2:

Input: x = 2.10000, n = 3
Output: 9.26100


*******************************************************************************/
class Solution {
public:
    double helper(double x, int n){
        if(n==0) return 1;
        
        double val = helper(x, n/2);
        if(n%2 == 0){
            return val*val;
        }
        else{
            return x*val*val;
        }
    }
    double myPow(double x, int n) {
        double val = helper(x, abs(n));
        if(n < 0) return 1 / val;
        return val;
    }
};