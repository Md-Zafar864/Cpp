class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int k=0;
            vector<int> pf(nums.size());
    map<int, int> mp;

    mp[0] = -1;
       if(nums[0]==0){
            nums[0]=-1;
        }

    pf[0] = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        if(nums[i]==0){
            nums[i]=-1;
        }
        pf[i] = pf[i - 1] + nums[i];
    }

    int maxLen = 0;

    for (int i = 0; i < pf.size(); i++) {

        if (mp.find(pf[i] - k) != mp.end()) {
            maxLen = max(maxLen, i - mp[pf[i] - k]);
        }

        // Store only the first occurrence
        if (mp.find(pf[i]) == mp.end()) {
            mp[pf[i]] = i;
        }
    }

    return maxLen;
}
    
};