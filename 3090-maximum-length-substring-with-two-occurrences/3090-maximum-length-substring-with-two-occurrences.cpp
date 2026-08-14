class Solution {
public:
    int maximumLengthSubstring(string s) {
        int res=0;
        int l=0;
        vector<int>alph(26,0);
        for(int r=0;r<s.size();r++){
            alph[s[r]-'a']++;
            while(alph[s[r]-'a']>2){
                alph[s[l]-'a']--;
                l++;
            }
            res=max(res,r-l+1);
        }
        return res;
    }
};