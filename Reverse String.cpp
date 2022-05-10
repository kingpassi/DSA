/******************************************************************************
 Reverse String
 
 Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]

*******************************************************************************/
class Solution {
public:
    void reverseString(vector<char>& s) {
        int  l=0;
       int r=s.size()-1;
       while(l<r){
           char temp=s[l];
           s[l]=s[r];
           s[r]=temp;
           l++;
           r--;
    }
    
    }
        
        
    
};
