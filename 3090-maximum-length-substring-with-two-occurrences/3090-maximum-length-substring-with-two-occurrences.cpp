class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char, int> cnt;  // character -> uska count is window mein
        int ans = 0;
        int left = 0;
        
        for (int right = 0; right < s.size(); right++) {
            cnt[s[right]]++;
            
            while (cnt[s[right]] > 2) {
                cnt[s[left]]--;
                left++;
            }
            
            ans = max(ans, right - left + 1);
        }
        
        return ans;
    }
};