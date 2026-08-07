class Solution {
public:
    int similarPairs(vector<string>& words) {
        unordered_map<int, int> cnt;  // bitmask -> kitni baar aaya
        int ans = 0;
        
        for (auto& w : words) {
            int mask = 0;
            
            // Har character ke liye corresponding bit set karo
            for (char c : w) {
                mask |= (1 << (c - 'a'));
            }
            
            // Is bitmask wale saare previous words ke saath pair banega
            ans += cnt[mask];
            
            // Ab is bitmask ka count badha
            cnt[mask]++;
        }
        
        return ans;
    }
};