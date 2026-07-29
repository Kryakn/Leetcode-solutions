class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>>res;
       for(auto x:strs){
        string sor = x;
        sort(sor.begin(),sor.end());
        res[sor].push_back(x);
       } 
       vector<vector<string>>result;
       for(auto pair:res){
        result.push_back(pair.second);
       }
       return result;
    }
};