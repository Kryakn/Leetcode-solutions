class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<bool> vis(nums.size()+1,false);
        for(auto num:nums){
            if(vis[num]) return num;
            vis[num]=true;
        }
        return -1;
    }
};