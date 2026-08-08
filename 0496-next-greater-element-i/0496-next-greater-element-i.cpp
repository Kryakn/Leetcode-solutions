class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> posi;

        int ind = 0;
        for(auto x : nums2){
            posi[x] = ind;
            ind++;
        }

        vector<int> answer;
        for(auto x : nums1){
            int pos = posi[x];
            int max = -1;

            for(int i = pos + 1; i < nums2.size(); i++){
                if(nums2[i] > x){
                    max = nums2[i];
                    break;
                }
            }
            answer.push_back(max);
        }
        return answer;
    }
};