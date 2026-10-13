class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int result=1;
        int flag=-1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]-nums[i-1]>0 && flag!=0){
                flag=0;
                result++;
            }
            else if(nums[i]-nums[i-1]>0 && flag==0){
                continue;
            }
            else if(nums[i]-nums[i-1]==0){
                continue;
            }
            else if(nums[i]-nums[i-1]<0 && flag!=1){
                flag=1;
                result++;
            }
            else{
                continue;
            }


        }
        return result;
        
    }
};