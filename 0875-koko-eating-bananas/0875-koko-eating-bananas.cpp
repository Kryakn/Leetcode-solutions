class Solution {
public:   
    long long calchours(vector<int>& piles,int k){
        long long totalhours=0;
        for(int x:piles){
            totalhours+=(x+k-1)/k;
        }
        return totalhours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int ans=0;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(calchours(piles,mid)<=h){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};