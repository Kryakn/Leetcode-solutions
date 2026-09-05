class Solution {
public:
    int findRange(vector<int>& nums,int target,bool FindFirst){
        int left=0 , right=nums.size()-1;
        int res=-1;
        while(left<=right){
            int mid=right+(left-right)/2;
            if(nums[mid]==target){
                res=mid;
                if(FindFirst){
                    right=mid-1;
                }
                else {
                    left=mid+1;
                }
            }
            else if(nums[mid]<target){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findRange(nums,target,true);
        int second = findRange(nums,target,false);
        return {first,second};
    }
};