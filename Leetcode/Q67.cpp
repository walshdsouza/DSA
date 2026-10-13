
class Solution {
public:
    string addBinary(string a, string b) {
        char carry = '0';
        int i = a.length() - 1;
        int j = b.length() - 1;
        string result = "";

        while (i >= 0 || j >= 0 || carry == '1') {
            char x = (i >= 0) ? a[i] : '0';
            char y = (j >= 0) ? b[j] : '0';

            if (x == '1' && y == '1') {
                if (carry == '1') {
                    result = '1' + result;
                } else {
                    result = '0' + result;
                }
                carry = '1';
            }
            else if (x == '1' || y == '1') {
                if (carry == '1') {
                    result = '0' + result;
                    carry = '1';
                } else {
                    result = '1' + result;
                    carry = '0';
                }
            }
            else {
                if (carry == '1') {
                    result = '1' + result;
                    carry = '0';
                } else {
                    result = '0' + result;
                }
            }

            i--;
            j--;
        }

        return result;
    }
};