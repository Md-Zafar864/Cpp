class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int m=s.length();
        int n=p.length();
        vector<int> v1(26,0);
        vector<int> v2(26,0);
        vector<int> res;
        if (n > m)
    return {};

        for(int i=0; i<n; i++){
            v1[s[i]-'a']++;
            v2[p[i]-'a']++;
        }
        if(v1==v2){
            res.push_back(0);
        }
        for(int i=n; i<m; i++){
            v1[s[i]-'a']++;
            v1[s[i-n]-'a']--;

            if(v1==v2){
                res.push_back(i-n+1);
            }
        }
        return res;
    }
};