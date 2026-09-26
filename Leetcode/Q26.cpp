class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int k = 1;
        for (int x : nums) {
            if (x != nums[k - 1]) {
                nums[k] = x;
                k++;
            }
        }
        return k;
        
    }
    
};