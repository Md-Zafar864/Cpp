class Solution {
public:
    int climbStairs(int n) {
          int prev2 = 1;  // ways for 0 stairs
        int prev1 = 1;  // ways for 1 stair

        for (int i = 2; i <= n; i++) {
            int curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }
};