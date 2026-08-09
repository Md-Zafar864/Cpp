class Solution {
public:
     void solve( vector<vector<int>> &res, vector<int> &v, vector<int> &candidates, int target, int idx){
        if(target<0){
            return;
        }
          if(target==0){
            res.push_back(v);
            return;
        }
        if(idx==candidates.size()){
            return;
        }
        v.push_back(candidates[idx]);
        solve(res,v,candidates,target-candidates[idx],idx);
        v.pop_back();
        solve(res,v,candidates,target,idx+1);
     }


    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
         vector<vector<int>> res;
         vector<int> v;
         solve(res, v, candidates, target, 0);
         return res;

    }
};