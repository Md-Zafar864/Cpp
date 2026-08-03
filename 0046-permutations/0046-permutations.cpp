class Solution {
public:
 set<int> st;

    void solve(vector<vector<int>> &res, vector<int> &temp, vector<int> &nums,int n){
        if(temp.size()==n){
            res.push_back(temp);
            return;
        }

        for(int i=0; i<n; i++){
            if(st.find(nums[i])==st.end()){
                temp.push_back(nums[i]);
                st.insert(nums[i]);
                solve(res,temp,nums,n);
                temp.pop_back();
                st.erase(nums[i]);

            }
        }
        
    }


    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        int n=nums.size();
        vector<int> v;
        solve(res,v, nums,n);
        return res;
    }
};