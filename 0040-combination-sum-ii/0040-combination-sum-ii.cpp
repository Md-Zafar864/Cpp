class Solution {
public:
    void solve(vector<vector<int>> &res, vector<int> &v, vector<int>& nums, int target, int idx  ){
        if(target==0){
            res.push_back(v);
            return;
        }
        for(int i=idx; i<nums.size(); i++){
            if(i>idx && nums[i]==nums[i-1]){
                continue;
            }
            if(nums[i]>target){
                break;
            }
            v.push_back(nums[i]);
            solve(res, v, nums,target-nums[i],i+1);
            v.pop_back();
        }


    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        vector<int> v;
        solve(res,v, nums, target,0);
        return res;

    }
};