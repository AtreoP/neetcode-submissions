class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seq(nums.begin(),nums.end());
        int count=0;
        //seq.insert(nums[0]);
        for(auto n:seq){
            if(seq.find(n-1)==seq.end()){
                int len=1;
                while(seq.find(n+len)!=seq.end()){
                    len++;
                }
                count=max(count,len);
            }
        }
        
        return count;
    }
};
