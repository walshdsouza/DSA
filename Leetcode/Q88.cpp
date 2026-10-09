class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;
        int count=0;
        vector<int> temp(m+n);
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                temp[count]=nums1[i];
                i++;
                count++;
                
            }
            else{
                temp[count]=nums2[j];
                j++;
                count++;

            }
        }
        while(i<m){
            temp[count]=nums1[i];
            count++;
            i++;
        }
        while(j<n){
            temp[count]=nums2[j];
            count++;
            j++;
        }
        for(int k=0; k<m+n; k++){
            nums1[k]=temp[k];
        }
        
    }
};