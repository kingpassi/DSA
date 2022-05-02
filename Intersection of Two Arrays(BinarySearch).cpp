/******************************************************************************
349. Intersection of Two Arrays
Given two integer arrays nums1 and nums2,
return an array of their intersection. Each element in the
result must be unique and you may return the result in any order.

Example 1:
Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]

*******************************************************************************/
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      
        set<int>s;
       
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int n=nums1.size();
        int m=nums2.size();
        int i=0;
        int j=0;
        while(i<n && j<m){
            if(nums1[i]>nums2[j]) j++;
           else if(nums1[i]<nums2[j]) i++;
            
            else{
                s.insert(nums1[i]);
                i++;
                j++;
                
            }
        }
         vector<int>ans;
      for(auto i:s) ans.push_back(i);    
        return ans;
    }
};