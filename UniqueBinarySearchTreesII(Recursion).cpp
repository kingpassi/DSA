/******************************************************************************
 Unique Binary Search Trees II
 
 Given an integer n, return all the structurally unique BST's 
 (binary search trees), which has exactly n nodes of unique values from 1 to n.
 Return the answer in any order
 
 Example 1:
 Input: n = 3
Output: [[1,null,2,null,3],[1,null,3,2],[2,1,3],[3,1,null,null,2],[3,2,null,1]]
*******************************************************************************/

class Solution {
public:
    vector<TreeNode*> check(int start, int end)
    {
        vector<TreeNode*> ans;
        if(start>end)
        {
            ans.push_back(NULL);
            return ans;
        }
        for(int i = start; i <= end ; i++)
        {
            vector <TreeNode *> left = check(start, i-1);
            vector <TreeNode *> right = check(i+1, end);
            for(auto l : left)
            {
                for(auto r : right)
                {
                    TreeNode *temp = new TreeNode(i);
                    temp->left = l;
                    temp->right = r;
                    ans.push_back(temp);
                }
            }
        }
        return ans;
    }
    vector<TreeNode*> generateTrees(int n) {
        return check(1,n);
    }
};