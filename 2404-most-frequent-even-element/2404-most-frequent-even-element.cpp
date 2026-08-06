class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(auto x:nums){
            if(x%2==0) freq[x]++;
        }
        int ans=-1;
        int maxFreq=0;
        for(auto&[x,count]:freq){
            if(count>maxFreq||(count==maxFreq && x<ans)){
                maxFreq=count;
                ans=x;
            }
        }
        return ans;
    }
};