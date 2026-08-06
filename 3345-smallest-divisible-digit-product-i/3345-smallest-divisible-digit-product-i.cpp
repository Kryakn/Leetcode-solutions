class Solution {
public:
    int smallestNumber(int n, int t) {
        int num=n;
        while(true){
            int pro=1;
            int x=num;
        
        while(x>0){
            pro*=(x%10);
            x/=10;
        }
        if(pro%t==0){
            return num;
        }
        num++;
        }
    }
};