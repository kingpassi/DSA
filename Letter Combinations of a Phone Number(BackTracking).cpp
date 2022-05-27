/******************************************************************************
17. Letter Combinations of a Phone Number

Given a string containing digits from 2-9 inclusive, return all 
possible letter combinations that the number could represent. 
Return the answer in any order.

A mapping of digit to letters (just like on the telephone buttons)
is given below. Note that 1 does not map to any letters.

Example 1:
Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]

Example 2:
Input: digits = ""
Output: []
*******************************************************************************/
class Solution {
public:
    
    vector<string>rec(string &digits,int i, map<int,string>m){
        if(i==digits.size())return {""};
        vector<string>temp=rec(digits,i+1,m);
        vector<string>ans;
        for(auto a:m[digits[i]-'0']){
            for(auto x:temp){
                ans.push_back(a+x);
            }
        }
        return ans;
    }
       
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0) return {};
        map<int,string>m;
        m[2]="abc";
        m[3]="def";
        m[4]="ghi";
        m[5]="jkl";
        m[6]="mno";
        m[7]="pqrs";
        m[8]="tuv";
        m[9]="wxyz";
        return rec(digits,0,m);
        
        
    }
};