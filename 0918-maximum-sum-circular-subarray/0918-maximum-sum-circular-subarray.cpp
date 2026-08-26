class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int max_sum = nums[0];
        int current_max_sum = nums[0];
        int min_sum = nums[0];
        int current_min_sum = nums[0];
        int total = nums[0];
        for (int i = 1; i < n; i++) {
            current_max_sum = max(current_max_sum + nums[i], nums[i]);
            max_sum = max(current_max_sum, max_sum);
            current_min_sum = min(current_min_sum + nums[i], nums[i]);
            min_sum = min(current_min_sum, min_sum);
            total += nums[i];
        }
        int circular_sum = total - min_sum;
        if (circular_sum == 0) {
            return max_sum;
        }
        return max(max_sum, circular_sum);
    }
};