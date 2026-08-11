class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,bool> visited;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(visited[nums[i]]) return nums[i];
            visited[nums[i]]=true;
        }
        return -1;
    }
};
