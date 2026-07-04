class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int maxperi=0;
        for(int i=0;i<n-2;i++){
            if(nums[i+2]<nums[i]+nums[i+1]){
                int sum = nums[i]+nums[i+1]+nums[i+2];
                maxperi=max(maxperi,sum);
            }
        }
        return maxperi;
    }
};