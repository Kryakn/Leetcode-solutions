class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=1;
        unordered_map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        while(mp.contains(n)){
            n++;
        }
        return n;
    }
};