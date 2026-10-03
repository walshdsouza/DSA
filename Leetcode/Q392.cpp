class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0; 
        int j=0;
        if(s.length()>t.length()){
            return false;
        }
        if(s.length()==0){
            return true;
        }
        while(j<=t.length()-1 && i<s.length()){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        if(i==s.length()){
            return true;
        }
        else{
            return false;
        }
        
    }
};