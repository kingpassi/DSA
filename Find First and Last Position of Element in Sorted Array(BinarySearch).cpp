/******************************************************************************
34. Find First and Last Position of Element in Sorted Array

Given an array of integers nums sorted in non-decreasing order,
find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].
You must write an algorithm with O(log n) runtime complexity.

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]

*******************************************************************************/
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        int first=0;
        int last=0;
        int mid=0;
        vector<int>ans;
        
        while(l<=r){
            mid=l+(r-l)/2;
            if(nums[mid]==target){
                int temp=mid;
                while(mid>0 && nums[mid-1]==target){
                    mid--;
                }
                first=mid;
                while(temp<nums.size()-1 && nums[temp+1]==target){
                    temp++;
                }
                last=temp;
                ans.push_back(first);
                ans.push_back(last);
                return ans;
            }
            else if(nums[mid]>target){
                r=mid-1;
            }
            else{
               l=mid+1;  
            }
               
        }
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
};