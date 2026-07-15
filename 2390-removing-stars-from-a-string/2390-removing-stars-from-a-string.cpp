class Solution {
public:
    string removeStars(string s) {
        int n = s.length();
        stack<int> st;
        for(int i=0; i<n; i++){
            if(s[i]=='*' && !st.empty()){
                st.pop();
            }
            else{
                 st.push(s[i]);
            }
           
        }
        string str;
         while (!st.empty()) {
        str.push_back(st.top()); // Get top character
        st.pop();                   // Remove from stack
    }
    reverse(str.begin(), str.end());

    return str;
    }
};