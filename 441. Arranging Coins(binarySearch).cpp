/******************************************************************************
441. Arranging Coins

You have n coins and you want to build a staircase with these coins. 
The staircase consists of k rows where the ith row has exactly i coins. 
The last row of the staircase may be incomplete.

Given the integer n, return the number of complete rows of the staircase
you will build.

Input: n = 5
Output: 2
Explanation: Because the 3rd row is incomplete, we return 2.

*******************************************************************************/
class Solution {
public:
    int arrangeCoins(int n) {
        int l=0;
        int r=n;
       while(l<=r){
           long mid=l+(r-l)/2;
           if(n>=(mid*(mid+1)/2)) l=mid+1;
           else r=mid -1;
       }
        return l-1;
    }
};