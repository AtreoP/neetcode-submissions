class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> res(n,0);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && temperatures[st.top()]<temperatures[i]){
                res[st.top()]=abs(st.top()-i);
                st.pop();
            }
            st.push(i);
        }
        return res;
    }
};
