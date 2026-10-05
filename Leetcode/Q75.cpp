class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0=0;
        int count1=0;
        int count2=0;
        int idx=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                count0++;

            }
            else if(nums[i]==1){
                count1++;
            }
            else{
                count2++;
            }

        }
        while(count0>0 && idx<nums.size()){
                nums[idx]=0;
                idx++;
                count0--;
        }
        while(count1>0 && idx<nums.size()){
                nums[idx]=1;
                idx++;
                count1--;

        }
        while(count2>0 && idx<nums.size()){
                nums[idx]=2;
                idx++;
                count2--;
        }
        
    }
};