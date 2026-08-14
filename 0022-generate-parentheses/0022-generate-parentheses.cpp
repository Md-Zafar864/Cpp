class Solution {
public:
    void solve(int n, int close, int open, string& curr, vector<string>& v){
        if(curr.length()==2*n){
            v.push_back(curr);
            return;
        }
        if(open<n){
            curr.push_back('(');
            solve(n,close,open + 1,curr,v);
            curr.pop_back();

        }
        if(close<open){
            curr.push_back(')');
            solve(n,close+1,open,curr,v);
            curr.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
       vector<string> v;
        string curr="";
        solve(n,0,0,curr,v);
        return v;
    }
};