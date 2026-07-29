class Solution {
public:
    int minDeletions(string s) {
      vector<int>freq(26,0);
      for(char c:s){
        freq[c-'a']++;
      }
      int del=0;
      set<int>st;
      for(int f:freq){
        while(f>0 and st.count(f)){
            f--;
            del++;
        }
        if(f>0){
            st.insert(f);
        }
      }
      return del;
    }
};