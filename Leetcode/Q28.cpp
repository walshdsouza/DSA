class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.length();
        int i=0;
        string sub="";
        int flag=0;
        int ans=-1;
        if(n>haystack.length()){
            flag=1;
        }
        while(i<=haystack.length()-needle.length() && flag==0){
            sub=haystack.substr(i,n);
            if(sub==needle){
                ans=i;
                flag=1;

            }
            else{
                i++;
            }


        }
        return ans;
        
    }
};