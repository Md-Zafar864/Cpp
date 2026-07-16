class Solution {
public:
    string removeDuplicates(string s) {
        stack<int> st;
        int n=s.length();
        for(int i=0; i<n; i++){
            if(!st.empty() && s[i]==st.top()){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        string res;
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};