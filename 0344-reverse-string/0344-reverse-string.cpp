class Solution {
public:
    void reverseString(vector<char>& vec) {
        int n=vec.size();
        int i=0;
        int j=n-1;

        while(i<j){
            swap(vec[i],vec[j]);
            i++;
            j--;
        }
        
    }
};