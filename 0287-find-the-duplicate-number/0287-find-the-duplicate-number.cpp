class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<bool>mp(n+1,false);
        for(auto x : nums){
            if(mp[x]){
                return x;
            }
            mp[x] = true;
        }
        return -1;
    }
};