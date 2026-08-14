class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0;
        while(i<n && k>0 &&nums[i]<0){
            nums[i]=-nums[i];
            i++;
            k--;
        }
        int sum=0;
        int minVal=INT_MAX;
        for(auto x:nums){
            sum+=x;
            minVal=min(minVal,x);
        }
        if(k%2==1){
            sum-=2*minVal;
        }
        return sum;
    }
};