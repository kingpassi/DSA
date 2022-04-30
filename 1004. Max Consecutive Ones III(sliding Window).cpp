/******************************************************************************
1004. Max Consecutive Ones III

Given a binary array nums and an integer k, return the maximum number of
consecutive 1's in the array if you can flip at most k 0's.

Example 1:

Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
Output: 6
Explanation: [1,1,1,0,0,1,1,1,1,1,1]
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.

*******************************************************************************/
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int i = 0, j = 0, n = nums.size(), countZeros = 0, ans = INT_MIN;
        
        while(j < n){
            
            if(nums[j] == 0){
                countZeros++;
            }
            while(countZeros > k){
                
                if(nums[i] == 0){
                    
                    countZeros--;      
                }
                
                i++;
            }
            
            ans=max(ans, j-i + 1);
            
            j++;
            
        }
        
        return ans;
        
    }
};