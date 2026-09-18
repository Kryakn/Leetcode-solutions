class Solution {
public:
    bool canmakeboq(vector<int>&bloomday,int m,int k,int mid){
      int boq=0;
      int flower=0;
      for(auto x:bloomday){
        if(x<=mid){
           flower++; 
        
        if(flower==k){
            boq++;
            flower=0;
        
        if(boq>=m) return true;
        }
        }
        else{
            flower=0;
        }
      }  
      return false;
    }

    int minDays(vector<int>& bloomday, int m, int k) {
        if((long)m*k > bloomday.size()){
            return -1;
        }
        int low=*min_element(bloomday.begin(),bloomday.end());
        int high=*max_element(bloomday.begin(),bloomday.end());
        while(low<=high){
            int mid = low + (high-low)/2;
            if(canmakeboq(bloomday,m,k,mid)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};