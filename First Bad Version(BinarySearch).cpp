/******************************************************************************
278. First Bad Version
Easy

4740

1778

Add to List

Share
You are a product manager and currently leading a team to develop a new product. Unfortunately, the latest version of your product fails the quality check. Since each version is developed based on the previous version, all the versions after a bad version are also bad.

Suppose you have n versions [1, 2, ..., n] and you want to find out the first bad one, which causes all the following ones to be bad.

You are given an API bool isBadVersion(version) which returns whether version is bad. Implement a function to find the first bad version. You should minimize the number of calls to the API.

 

Example 1:

Input: n = 5, bad = 4
Output: 4
Explanation:
call isBadVersion(3) -> false
call isBadVersion(5) -> true
call isBadVersion(4) -> true
Then 4 is the first bad version.
*******************************************************************************/

class Solution {
public:
    int firstBadVersion(int n) {
        long int l=0;
        long int r=n;
        long int mid=0;
        long int ans =0;
        
        while(l<=r){
            mid=(l+r)/2;
            if(isBadVersion(mid)){

                ans=mid;
                r=mid-1;
                
            }
            else{
                l=mid+1;
            }
        }
        
        return ans;
    }
};