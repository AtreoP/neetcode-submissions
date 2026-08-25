class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n=h.size();
        int maxar=0;stack<int> st;
        for(int i=0;i<=n;i++){
            while(!st.empty() && (i==n || h[st.top()]>=h[i])){
                int height=h[st.top()];
                st.pop();
                int w=st.empty()?i:i-st.top()-1;
                maxar=max(maxar,height*w);
            }
            st.push(i);
        }
        return maxar;
    }
};
