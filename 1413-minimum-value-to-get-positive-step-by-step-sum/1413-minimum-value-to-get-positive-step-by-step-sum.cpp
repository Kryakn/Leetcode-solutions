class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int res=0;
        int minpre=0;
        for(int i=0;i<nums.size();i++){
            res+=nums[i];
            minpre=min(minpre,res);
        }
        if(minpre<1) return 1-minpre;
        return 1;
    }
};