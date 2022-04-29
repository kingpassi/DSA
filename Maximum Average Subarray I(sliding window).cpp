/******************************************************************************
643. Maximum Average Subarray I

You are given an integer array nums consisting of n elements, and an integer k.

Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value. Any answer with a calculation error less than 10-5 will be accepted.

 

Example 1:

Input: nums = [1,12,-5,-6,50,3], k = 4
Output: 12.75000
Explanation: Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75
*******************************************************************************/
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        double res;
        for(int i=0;i<k;i++){
            sum+=nums[i];
            res=sum;
        }
        for(int i=k;i<nums.size();i++){
            sum=sum-nums[i-k];
            sum=sum+nums[i];
            
            if(sum>res){
                res=sum;
            }
        }
        
        return res/k;
        
    }
};