class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>m;
        for(int i=0;i<jewels.size();i++){
            m[jewels[i]]=1;
        }
        int count=0;
        for(int j=0;j<stones.size();j++){
            if(m.find(stones[j])!=m.end()){

                count++;
            }
            
        }
        return count;
    }
};
