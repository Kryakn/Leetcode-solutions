class Solution {
public:
    void solve(vector<int>& candidates, int target, int i,
               vector<int>& ans, vector<vector<int>>& res) {
        if (target == 0) {
            res.push_back(ans);
            return;
        }
        if (i == candidates.size() || target < 0) {
            return;
        }

        // include: i same rahega (reuse allowed)
        ans.push_back(candidates[i]);
        solve(candidates, target - candidates[i], i, ans, res);
        ans.pop_back();

        // exclude: next element par jao
        solve(candidates, target, i + 1, ans, res);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> ans;
        solve(candidates, target, 0, ans, res);
        return res;
    }
};