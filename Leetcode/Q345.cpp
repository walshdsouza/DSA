class Solution {
public:
    string reverseVowels(string s) {
        stack<char> c;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                c.push(s[i]);
            }
            else{
                continue;
            }

        }
        for(int i=0; i<s.length(); i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                s[i]=c.top();
                c.pop();
            }

        }
        return s;

        
    }
};