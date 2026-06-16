class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();//size up
        int count=0;
        for(int i=0; i<n;i++){
            if(nums[i]>nums[(i+1)%n]){
                count++;
            }
        }
        if(count>1){
            return 0;
        }
        else{
            return 1;
        }
    }
};