class Solution {
public:
    int heightChecker(vector<int>& heights) {
      vector<int>ex=heights;
      
      sort(ex.begin(),ex.end());
      int j=0;
      int cnt=0;
      for(int i=0;i<heights.size();i++){
        if(heights[i]!=ex[j]){
            cnt++;
        }
        j++;
      }
      return cnt;
    }
};