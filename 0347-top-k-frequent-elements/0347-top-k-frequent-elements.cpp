class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        vector<int>ele;
        for(auto i:freq){
            ele.push_back(i.first);
        }
        sort(ele.begin(),ele.end(), [&](int a, int b){
            return freq[a]>freq[b];
        });
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(ele[i]);
        }
        return ans;
    }
};
