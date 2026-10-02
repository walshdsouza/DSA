class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        queue<int> q;
        int count=0;
        int i=0;
        for(int t=0; t<nums.size(); t++){
            q.push(nums[t]);
        }
        while(!q.empty()){
            if(q.front()==0){
                count++;
                q.pop();
            }
            else{
                nums[i]=q.front();
                q.pop();
                i++;
            }

        }
        for(int j=i; j<nums.size(); j++){
            nums[j]=0;
        }
        
    }
};