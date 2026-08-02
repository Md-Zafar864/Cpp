class Solution {
public:
    void solve(int idx, vector<int> &nums, vector<vector<int>> &res, vector<int> &temp){
        if (idx == nums.size()) {
    res.push_back(temp);
    return;
}

        temp.push_back(nums[idx]);
        solve(idx+1,nums, res,temp);

        temp.pop_back();
        solve(idx+1, nums,res,temp);


    }


    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> res;
        solve(0, nums, res, temp);
        return res;
    }
};