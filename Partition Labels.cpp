/******************************************************************************
763. Partition Labels
You are given a string s. We want to partition the string into as many parts as
possible so that each letter appears in at most one part.

Note that the partition is done so that after concatenating all the parts in
order, the resultant string should be s.

Return a list of integers representing the size of these parts.

Input: s = "ababcbacadefegdehijhklij"
Output: [9,7,8]
Explanation:
The partition is "ababcbaca", "defegde", "hijhklij".
This is a partition so that each letter appears in at most one part.
A partition like "ababcbacadefegde", "hijhklij" is incorrect, because it splits s into less parts.
*******************************************************************************/
class Solution {
public:
    vector<int> partitionLabels(string S) {
        vector<int>a(26);
        int n=S.size();
        for(int i=0;i<n;i++){
            a[S[i]-'a']=i;
        }
        int last=0;
        int maxi=-1;
        vector<int>ans;
        for(int i=0;i<n;i++){
            maxi=max(maxi,a[S[i]-'a']);
            if(i==maxi){
                ans.push_back(i-last+1);
                last=i+1;
            }
        }
        return ans;
    }
};