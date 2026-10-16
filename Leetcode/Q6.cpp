
class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.length()) {
            return s;
        }

        string result = "";
        int cycleLen = 2 * (numRows - 1);

        for (int row = 0; row < numRows; row++) {
            for (int i = row; i < s.length(); i += cycleLen) {
                result += s[i];

                int diagonal = i + cycleLen - 2 * row;

                if (row != 0 && row != numRows - 1
                    && diagonal < s.length()) {
                    result += s[diagonal];
                }
            }
        }

        return result;
    }
};
