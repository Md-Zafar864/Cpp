class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;

        for (char ch : num) {
            while (!st.empty() && k > 0 && st.top() > ch) {
                st.pop();
                k--;
            }
            st.push(ch);
        }

        // If k is still left, remove from the end
        while (k > 0) {
            st.pop();
            k--;
        }

        // Build the string
        string ans;
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        // Remove leading zeros
        int i = 0;
        while (i < ans.size() && ans[i] == '0') {
            i++;
        }

        ans = ans.substr(i);

        // If empty, return "0"
        if (ans.empty()) {
            return "0";
        }

        return ans;
    }
};