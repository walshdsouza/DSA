class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> st;
        int i = 0;

        while (i < word.size() && word[i] != ch) {
            st.push(word[i]);
            i++;
        }

        if (i == word.size()) {
            return word;
        }

        st.push(word[i]);

        string temp = "";

        while (!st.empty()) {
            temp += st.top();
            st.pop();
        }

        return temp + word.substr(i + 1);
    }
};