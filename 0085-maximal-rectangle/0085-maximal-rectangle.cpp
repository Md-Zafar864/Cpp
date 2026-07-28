class Solution {
public:
    vector<int> nse(vector<int> arr){
        int n=arr.size();
        stack<int> st;
        vector<int> vv(n);
        for(int i=n-1; i>=0; i--){
            while(!st.empty() && arr[i]<=arr[st.top()]){
                st.pop();
            }
            if(!st.empty()){
                vv[i]=st.top();
            }
            else{
                vv[i]=n;
            }
             st.push(i);
        }
        return vv;
    }
    vector<int> pse(vector<int> arr){
         int n=arr.size();
        stack<int> st;
   vector<int> vv(n);
        for(int i=0; i<n; i++){
            while(!st.empty() && arr[i]<=arr[st.top()]){
                st.pop();
            }
            if(!st.empty()){
                vv[i]=st.top();
            }
            else{
                vv[i]=-1;
            }
            st.push(i);
        }
        return vv;
    }
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        int rows=matrix.size();
        int col=matrix[0].size();
        vector<int> v(col,0);
        int res = 0;

for(int i = 0; i < rows; i++) {

    for(int j = 0; j < col; j++) {
        if(matrix[i][j] == '1')
            v[j]++;
        else
            v[j] = 0;
    }

    vector<int> nxts = nse(v);
    vector<int> prvs = pse(v);

    for(int j = 0; j < col; j++) {
        int area = (nxts[j] - prvs[j] - 1) * v[j];
        res = max(res, area);
    }
}

return res;

    }
};