class Solution {
public:
    int maximumGap(vector<int>& nums) {
       int n = nums.size();
       sort(nums.begin(),nums.end());
       int diff=0;
       int MaxDiff=INT_MIN;
       if(n<2) return 0;
       for(int i=1;i<n;i++){
        diff=abs(nums[i]-nums[i-1]);
        if(diff>MaxDiff){
            MaxDiff=diff;
        }
       } 
       return MaxDiff;
    }
};