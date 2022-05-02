/******************************************************************************
704. Binary Search
Given an array of integers nums which is sorted in ascending order,
and an integer target, write a function to search target in nums.
If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.

Example 1:
Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation: 9 exists in nums and its index is 4

*******************************************************************************/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        int mid=0;
       
        while(l<=r){
           mid=l+(r-l)/2;
            if(target==nums[mid]){
                return mid;
             
            }
            else if(target<nums[mid]){
                r=mid-1;
            }
            else{

                l=mid+1;
            }
        }
        return -1;
    }
};