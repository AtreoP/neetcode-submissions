class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;vector<int> res;
        for(auto n:nums){
            mp[n]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(auto &x:mp){
            pq.push({x.second,x.first});
            if(pq.size()>k) pq.pop();
        }
        while(k){
            res.push_back(pq.top().second);
            pq.pop();k--;
        }
        return res;
    }
};
