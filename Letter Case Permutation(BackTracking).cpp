/******************************************************************************
784. Letter Case Permutation

Given a string s, you can transform every letter individually to be lowercase 
or uppercase to create another string.

Return a list of all possible strings we could create. 
Return the output in any order.

Example 1:
Input: s = "a1b2"
Output: ["a1b2","a1B2","A1b2","A1B2"]

Example 2:
Input: s = "3z4"
Output: ["3z4","3Z4"]

*******************************************************************************/
class Solution {
public:
    
   vector<string> ans;
    void ok(string &s,string curr,int indx){
        if((int)curr.size()==((int)s.size())){
            ans.push_back(curr);
            return;
        }
        if(s[indx]>='0' &&s[indx]<='9'){
            ok(s,curr+s[indx],indx+1);    
        }
        else{
         ok(s,curr+(char)(toupper(s[indx])),indx+1);
         ok(s,curr+(char)(tolower(s[indx])),indx+1);
        }
        return;
        
    }
    
     vector<string> letterCasePermutation(string s) {
        
        int n=s.size();
        string curr="";
        ok(s,curr,0);
        return ans;
    }
};
    