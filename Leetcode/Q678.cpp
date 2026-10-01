class Solution {
public:
    bool checkValidString(string s) {
        int minOpen = 0;
        int maxOpen = 0;

        for (char c : s) {
            if (c == '(') {
                minOpen++;
                maxOpen++;
            }
            else if (c == ')') {
                minOpen--;
                maxOpen--;
            }
            else { 
                minOpen--;  // '*' acts as ')'
                maxOpen++;  // '*' acts as '('
            }

            // Even in the best case, there are too many ')'
            if (maxOpen < 0)
                return false;

            // We can't have fewer than 0 unmatched '('
            minOpen = max(0, minOpen);
        }

        return minOpen == 0;
    }
};