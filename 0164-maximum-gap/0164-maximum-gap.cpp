class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return 0;
        
        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());
        
        if (mn == mx) return 0;  // saare elements same hain
        
        // Bucket size = average gap (kam se kam 1)
        int bucketSize = max(1, (mx - mn) / (n - 1));
        int bucketCount = (mx - mn) / bucketSize + 1;
        
        vector<int> bucketMin(bucketCount, INT_MAX);
        vector<int> bucketMax(bucketCount, INT_MIN);
        
        // Har number ko uske bucket mein daalo, sirf min/max update karo
        for (int num : nums) {
            int idx = (num - mn) / bucketSize;
            bucketMin[idx] = min(bucketMin[idx], num);
            bucketMax[idx] = max(bucketMax[idx], num);
        }
        
        int maxGap = 0;
        int prevMax = mn;  // sabse pehle bucket se pehle "mn" hi hai
        
        for (int i = 0; i < bucketCount; i++) {
            if (bucketMin[i] == INT_MAX) continue;  // khaali bucket skip karo
            
            maxGap = max(maxGap, bucketMin[i] - prevMax);
            prevMax = bucketMax[i];
        }
        
        return maxGap;
    }
};