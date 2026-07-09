class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int arr[n];
        arr[0]=gain[0];
        int ans=0;
        for(int i=1; i<n; i++){
            arr[i]=arr[i-1]+gain[i];
        }
        for(int i=0; i<n; i++){
            ans=max(ans,arr[i]);
        }
        return ans;
    }
};