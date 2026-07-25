class Solution {
public:
    string makeGood(string s) {
        int n= s.length();
        stack<char> st;

        for(int i=0; i<n; i++){
            if(!st.empty() && s[i] == st.top()-'a'+ 'A' ){
                st.pop();
            }
            else if(!st.empty() && s[i] == st.top()-'A'+ 'a'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        string str;
        while(!st.empty()){
            str.push_back(st.top());
            st.pop();
        }
         reverse(str.begin(), str.end());
         return str;
    }
};