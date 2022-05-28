/******************************************************************************
77. Combinations
Given two integers n and k, return all possible combinations of k numbers
out of the range [1, n].
You may return the answer in any order.

Example 1:
Input: n = 4, k = 2
Output:
[
  [2,4],
  [3,4],
  [2,3],
  [1,2],
  [1,3],
  [1,4],
]

Example 2:
Input: n = 1, k = 1
Output: [[1]]

*******************************************************************************/
class Solution {
public:
    void dfs(int i, int n, int k, vector<vector<int>>&res, vector<int>&curr){
        if(curr.size() == k){
            res.push_back(curr);
            return;
        }
        for(int r=i; r<n+1; r++){
            curr.push_back(r);
            dfs(r+1, n, k, res, curr);
            curr.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> curr;
        dfs(1, n, k, res, curr);
        return res;
    }
};