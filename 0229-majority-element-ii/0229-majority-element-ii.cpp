class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>inputs;
        for(int x:nums){
            mp[x]++;
        }
        for(auto i:mp){
            if(i.second>(int)(nums.size()/3)){
                inputs.push_back(i.first);
            }
        }
        return inputs;
    }
};