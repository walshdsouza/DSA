class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(), nums.end());
        long long result=0;
        for(int i=nums.size()/2; i<nums.size(); i++){
            result= result+(nums[i]);
        }
        for(int i=0;i<nums.size()/2;i++){
            result=result-(nums[i]);
        }
        return result;
        
    }
};