class Solution {
public:
    vector<int> nse(vector<int> arr){
        int n=arr.size();
        vector<int> v(n);
        stack<int> st;
        for(int i=n-1; i>=0; i--){
            while(!st.empty() && arr[i]<=arr[st.top()]){
                st.pop();
            }
            if(st.empty()){
                v[i]=n;
            }
            else{
                v[i]=st.top();
            }
            st.push(i);

        }
        return v;
    }
    vector<int> pse(vector<int> arr){
        int n=arr.size();
        vector<int> v(n);
        stack<int> st;
        for(int i=0; i<=n-1; i++){
            while(!st.empty() && arr[i]<=arr[st.top()]){
                st.pop();
            }
            if(st.empty()){
                v[i]=-1;
            }
            else{
                v[i]=st.top();
            }
            st.push(i);

        }
        return v;
    }

    int largestRectangleArea(vector<int>& heights) {
        vector<int> nxts=nse(heights);
        vector<int> prvs=pse(heights);
        int n=heights.size();
        int res=0;
        for(int i=0;i<n; i++){
            int area=(nxts[i]-prvs[i]-1)*heights[i];
            res=max(res,area);
        }
        return res;
    }
};