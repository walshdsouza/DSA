class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string s : words) {
            string original = s;
            reverse(s.begin() , s.end());
            if(s == original) {
                return s;
            }
        }
        return "";
    }
};