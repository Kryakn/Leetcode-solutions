class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mx=*max_element(nums.begin(),nums.end());
        int mn=*min_element(nums.begin(),nums.end());
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int m=0;
        for(int i=mn;i<mx;i++){
            if(nums[m]!=i)ans.push_back(i);
            else m++;
        }
        return ans;
    }
};