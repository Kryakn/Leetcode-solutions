class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int maX = 0;
        int ans = 0;
        for(auto x : nums){
            int a = 10 , b = 0;
            for(int y = x ; y > 0 ; y/=10){
                int digi = y % 10;
                 a = min(a,digi);
                 b = max(b,digi);

            }
            int r = b - a;
            if(maX < r){
                maX = r;
                ans = x;
            }
            else if(maX==r){
                ans+=x;
            }
        }
        return ans;
    }
};