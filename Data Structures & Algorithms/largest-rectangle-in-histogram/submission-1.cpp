class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n=h.size();
        int maxarea=0;stack<int> st;
        for(int i=0;i<=n;i++){
            while(!st.empty() && (i==n || h[st.top()]>=h[i])){
                int height=h[st.top()];
                st.pop();
                int w=st.empty()?i:i-st.top()-1;
                maxarea=max(maxarea,height*w);
            }
            st.push(i);
        }
        return maxarea;
    }
};
