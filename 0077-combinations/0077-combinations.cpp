class Solution {
public:
    vector<int>temp;
    vector<vector<int>> res;

    void solve(int idx, int n, int k){
        if(temp.size()==k){
            res.push_back(temp);
            return;
        }
        if(idx>n){
            return;
        }
        temp.push_back(idx);
        solve(idx+1,n,k);
        temp.pop_back();
        solve(idx+1, n,k);

    }

    vector<vector<int>> combine(int n, int k) {
        solve(1,n,k);
        return res;
        
    }
};