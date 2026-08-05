class Solution {
public:
    string frequencySort(string s) {
      unordered_map<char,int>mp;
      for(auto x:s){
        mp[x]++;
      }  
      vector<pair<char,int>>up(mp.begin(),mp.end());
      sort(up.begin(),up.end(),[] (auto a ,auto b){
        return a.second>b.second;
      });

      string bihar="";
      for(auto z:up){
        bihar+=string(z.second,z.first);
      }
      return bihar;
    }
};