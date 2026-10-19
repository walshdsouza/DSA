
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int smaller = 0;
        int equal = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < target) {
                smaller++;
            }
            else if (nums[i] == target) {
                equal++;
            }
        }

        vector<int> result;

        for (int i = 0; i < equal; i++) {
            result.push_back(smaller + i);
        }

        return result;
    }
};
