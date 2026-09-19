class Solution {
public:
    int trap(vector<int>& h) {
        if(h.empty()) return 0;
        int n=h.size();int l=0,r=n-1;
        int leftmax=h[l],rightmax=h[r];int res=0;
        while(l<r){
            if(leftmax<rightmax){
                l++;leftmax=max(h[l],leftmax);
                res+=leftmax-h[l];
            }
            else{
                r--;rightmax=max(rightmax,h[r]);
                res+=rightmax-h[r];
            }
        }
        return res;
    }
};
