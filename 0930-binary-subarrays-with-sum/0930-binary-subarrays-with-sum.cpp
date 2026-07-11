class Solution {
public:
    int numSubarraysWithSum(vector<int>& v, int k) {
       vector<int> pf(v.size());
    map<int,int> mp;
    mp[0]=1;
    pf[0]=v[0];
    for(int i=1; i<v.size(); i++){
        pf[i]=pf[i-1]+v[i];
    }
    int count=0;

    for(int i=0; i<pf.size(); i++){
        if(mp.find(pf[i]-k) != mp.end()){
            count = count + mp[pf[i]-k];
        }
        mp[pf[i]]++;
    }
    return count;
        
    }
};