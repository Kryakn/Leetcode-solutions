class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> st;

        for (auto x : nums) {
            if (x > 0)
                st.insert(x);
        }

        int n = 1;

        while (st.contains(n)) {
            n++;
        }

        return n;
    }
};