/******************************************************************************
46. Permutations

Given an array nums of distinct integers, return all the possible permutations.
You can return the answer in any order.

Example 1:

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

Example 2:
Input: nums = [0,1]
Output: [[0,1],[1,0]]
*******************************************************************************/
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        if(nums.size()<=1) return {nums};
        
        
        vector<vector<int>>result;
        for(int i=0;i<nums.size();i++){
            vector<int>v(nums.begin(),nums.end());
            v.erase(v.begin() + i);
            auto res=permute(v);
            
            for(int j=0; j<res.size();j++){
                vector<int>k=res[j];
                    k.insert(k.begin(),nums[i]);
                result.push_back(k);
            }
        }
        return result; 
    }
};