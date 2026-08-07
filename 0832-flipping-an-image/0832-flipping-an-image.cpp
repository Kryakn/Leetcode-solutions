class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        
        for (auto& row : image) {
            int left = 0, right = n - 1;
            
            while (left <= right) {
                // Agar left aur right same position hai (middle element, odd length mein)
                if (left == right) {
                    row[left] = 1 - row[left];  // sirf invert karo
                } else {
                    // Swap karo AND invert karo dono ek saath
                    int temp = 1 - row[left];
                    row[left] = 1 - row[right];
                    row[right] = temp;
                }
                left++;
                right--;
            }
        }
        
        return image;
    }
};