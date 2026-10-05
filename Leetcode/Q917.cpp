class Solution {
public:
    string reverseOnlyLetters(string s) {
        stack<char> st;
        for(int i=0; i<s.length(); i++){
            if((int(s[i])>=65 && int(s[i])<=90) || (int(s[i])>=97 && int(s[i])<=122)){
                st.push(s[i]);
            }
            else{
                continue;
            }
        }
        for(int i=0; i<s.length(); i++){
            if((int(s[i])>=65 && int(s[i])<=90) || (int(s[i])>=97 && int(s[i])<=122)){
                s[i]=st.top();
                st.pop();
            }
            else{
                continue;
            }
            
        }
        return s;
        
    }
};