class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        vector<int> arr(n,0);
        stack<int> st;

        for(int i=n-1; i>=0; i--){
            while(!st.empty() && st.top()<=nums2[i]){
                st.pop();
            }
            if(st.empty()){
                arr[i]=-1;
            }
            else{
                arr[i]=st.top();
            }
            st.push(nums2[i]);
        }

        map<int,int> mp;
        vector<int>v;
        mp[0]=-1;
        for(int i=0; i<nums2.size(); i++){
            mp[nums2[i]]=arr[i];
        }
        for(int i=0; i<nums1.size(); i++){
       v.push_back(mp[nums1[i]]);
        }
        
        return v;
    }
};