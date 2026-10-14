class Solution {
public:
void getsubsets(vector<int>&ans,vector<int>nums,vector<vector<int>>&allsubsets,int i){
    if(i==nums.size()){
        allsubsets.push_back(ans);
        return;
    }

    ans.push_back(nums[i]);
    getsubsets(ans,nums,allsubsets,i+1);
    ans.pop_back();
    while(i+1 < nums.size() && nums[i]==nums[i+1]){
        i++;
    }
    getsubsets(ans,nums,allsubsets,i+1);

}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>allsubsets;
        vector<int>ans;
        getsubsets(ans,nums,allsubsets,0);
        return allsubsets;
    }
};