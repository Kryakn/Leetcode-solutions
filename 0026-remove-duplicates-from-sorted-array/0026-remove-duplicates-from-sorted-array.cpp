class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int uni=0;
       for(int i=1;i<nums.size();i++){
        if(nums[i]!=nums[i-1]){
            uni++;
            nums[uni]=nums[i];
        }
       } 
       return uni+1;
    }
};