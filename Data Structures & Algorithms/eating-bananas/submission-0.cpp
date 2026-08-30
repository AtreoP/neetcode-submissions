class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,r=*max_element(piles.begin(),piles.end());int res=r;
        while(l<=r){
            int m=(l+r)>>1;
            long long tot=0;
            for(int p:piles){
                tot+=ceil(static_cast<double>(p)/m);
            }
            if(tot<=h){
                res=m;
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        return res;
    }
};
