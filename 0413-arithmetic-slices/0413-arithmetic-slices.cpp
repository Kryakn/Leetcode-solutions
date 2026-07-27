class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
       int n = nums.size();
       int l=0;
       int r=1;
       if(n<3){
        return 0;
       }  
       int count = 0;
       int diff = nums[r] - nums[r-1];
       r++;
       while(r<n){
        if(nums[r] - nums[r-1] == diff){
            if(r-l+1 >= 3){
                count+=(r-l-1);
            }
        }
        else{
            diff = nums[r] - nums[r-1];
            l = r-1;
        }
        r++;
       }
       return count;
    }
};