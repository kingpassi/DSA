/******************************************************************************
922. Sort Array By Parity II
Given an array of integers nums, half of the integers in nums are odd, and the other half are even.

Sort the array so that whenever nums[i] is odd, i is odd, and whenever nums[i] is even, i is even.

Return any answer array that satisfies this condition.

 
*******************************************************************************/
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int j=1;
        for(int i=0;i<nums.size();i+=2)
            if(nums[i]%2==1){
                while(nums[j]%2==1)
                    j+=2;
                    
            int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                    
                
            }
            
        
        return nums;
    }
};