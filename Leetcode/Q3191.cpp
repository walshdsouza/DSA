class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i =0; i<=n-3; i++){
            if(nums[i]==1){
                continue;
            }
            else{
                for(int j=i;j<i+3; j++){
                    if(nums[j]==0){
                        nums[j]=1;
                    }
                    else{
                        nums[j]=0;
                    }
                }
                count++;
                
            }
        }
        for(int k=0; k<n; k++){
            if(nums[k]==0){
                count=-1;
            }
        }
        return count;
        
    }
};