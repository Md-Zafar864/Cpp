class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> pf(n);
        vector<int> sf(n);
        pf[0]=1;
        for(int i=1; i<n; i++){
            pf[i]=nums[i-1]*pf[i-1];
        
        }
        sf[n-1]=1;
        for(int i=n-2; i>=0; i--){
            sf[i]=sf[i+1]*nums[i+1];

        }
        vector<int> ans;

for(int i = 0; i < n; i++) {
    ans.push_back(pf[i] * sf[i]);
}
    return ans;
        
    }
};