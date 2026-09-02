class Solution {
public:
    int strStr(string h, string n) {
        int x = h.size();
        int m = n.size();
        

       for(int i=0;i<=x-m;i++){
        if(h.substr(i,m) == n)
        {
            return i;
        }
       }
       return -1;
    }
};