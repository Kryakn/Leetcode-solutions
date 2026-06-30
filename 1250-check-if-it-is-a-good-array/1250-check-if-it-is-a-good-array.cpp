typedef long long ll;
class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
      int g = 0;
      for (const auto& n: nums) {
        g = __gcd(g, n);
        if (g == 1) return true;
      }
      return false;
    }
};