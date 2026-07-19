class Solution {
public:
    char findTheDifference(string s, string t) {
        int n=s.length();
        int m=t.length();
        int arr[26]={0};
        
       for(int i=0; i<m; i++){
        arr[t[i]-'a']++;
        
       }
       for(int i=0; i<n; i++){
        arr[s[i]-'a']--;
       }
        for(int i=0; i<26; i++){
            if(arr[i]==1){
                return i+'a';
            }
        }
        return 'a';
    }
};