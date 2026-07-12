class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        map<int, int> mp;
        mp[0]=1;
        int pf=0;
        int count=0;
        for(int i=0; i<n; i++){
            pf=pf+nums[i];
             int rem = ((pf % k) + k) % k;
            if(mp.find(rem) != mp.end()){
                count=count+mp[rem];
            }
            mp[rem]++;
        }
    return count;
    }
};