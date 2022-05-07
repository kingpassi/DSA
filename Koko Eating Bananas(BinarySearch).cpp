/******************************************************************************
875. Koko Eating Bananas

Koko loves to eat bananas. There are n piles of bananas, the ith pile has
piles[i] bananas. The guards have gone and will come back in h hours.

Koko can decide her bananas-per-hour eating speed of k. Each hour, 
she chooses some pile of bananas and eats k bananas from that pile.
If the pile has less than k bananas, she eats all of them instead and 
will not eat any more bananas during this hour.

Koko likes to eat slowly but still wants to finish eating all 
the bananas before the guards return.

Return the minimum integer k such that she can eat all the 
bananas within h hours.

 

Example 1:

Input: piles = [3,6,7,11], h = 8
Output: 4
*******************************************************************************/
class Solution {
public:
    
    bool ok(int mid , vector<int>& piles , int H){
        int n=piles.size();
        int total=0;
        for(int i=0;i<n;i++){
            int x=piles[i]/mid;
            int y=piles[i]%mid;
            if(y)
                x++;
            total+=x;
        }
        return (total<=H);
    }
    
    int minEatingSpeed(vector<int>& piles, int H) {
        int l=1;
        int r=(int)(1e9+1);
        while(l<r){
            int mid=(l+r)/2;
            if(ok(mid,piles,H))
                r=mid;
            else
                l=mid+1;
        }
        return l;
    }
};