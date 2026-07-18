class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        int n=arr.size();
        stack<pair<int, int>> st;
        vector<int> v;
        for(int i=n-1; i>=0; i--){
            while(!st.empty() && st.top().first<=arr[i]){
                st.pop();

            } 
            if(!st.empty()){
                 v.push_back(st.top().second -i);
            }
            else{
                v.push_back(0);
            }
           
            st.push({arr[i],i});
        }
        reverse(v.begin(), v.end());
        return v;
    }
};