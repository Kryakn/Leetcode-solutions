class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele=0;
        int cnt=0;
        for(auto x:nums){
            if(x==ele){
                cnt++;
            }
            else if(cnt==0){
                ele=x;
                cnt++;
            }
            else{
                cnt--;
            }
        }
        return ele;
    }
};