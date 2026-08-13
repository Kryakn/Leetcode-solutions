class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> cnt;
        for (auto it : s) {
            cnt[it]++;
        }
        int ans = 0;
        bool oddfound = false;
        for (auto j : cnt) {
            if (j.second % 2 == 0) {
                ans = ans + j.second;

            } else {
                ans = ans + j.second - 1;
                oddfound = true;
            }
        }
        if (oddfound == true) {
            ans++;
        }
        return ans;
    }
};