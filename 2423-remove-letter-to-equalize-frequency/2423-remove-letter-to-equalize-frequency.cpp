class Solution {
public:
    bool equalFrequency(string word) {
        int arr[26] = {0};

        for (int i = 0; i < word.length(); i++) {
            arr[word[i] - 'a']++;
        }

        for (int k = 0; k < 26; k++) {

            if (arr[k] == 0)
                continue;

            arr[k]--;   // Remove one occurrence

            int tt = 0;

            // Find first non-zero frequency
            for (int i = 0; i < 26; i++) {
                if (arr[i] != 0) {
                    tt = arr[i];
                    break;
                }
            }

            bool ok = true;

            // Check if all non-zero frequencies are equal
            for (int i = 0; i < 26; i++) {
                if (arr[i] != 0 && arr[i] != tt) {
                    ok = false;
                    break;
                }
            }

            arr[k]++;   // Restore

            if (ok)
                return true;
        }

        return false;
    }
};