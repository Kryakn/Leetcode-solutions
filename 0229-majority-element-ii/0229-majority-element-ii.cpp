class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int ele1=0;
        int ele2=0;
        int cnt1=0;
        int cnt2=0;
        for(auto x:nums){
            if(x==ele1){
                cnt1++;
            }
            else if(x==ele2){
                cnt2++;
            }
            else if(cnt1==0){
                ele1=x;
                cnt1++;
            }
            else if(cnt2==0){
                ele2=x;
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }


        cnt1=0,cnt2=0;
        vector<int>res;
        int n=nums.size();
        for(int num:nums){
            if(num==ele1) cnt1++;
            else if(num==ele2) cnt2++;
        }
        
        if(cnt1 > n/3){
            res.push_back(ele1);
        }
        if(cnt2 > n/3){
            res.push_back(ele2);
        }
        
        return res;
    }
};