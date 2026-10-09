
class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        vector<bool> result;

        for (int k = 0; k < queries.size(); k++) {
            int i = 0;
            int j = 0;
            bool valid = true;

            while (i < queries[k].length()) {
                if (j < pattern.length() &&
                    queries[k][i] == pattern[j]) {
                    i++;
                    j++;
                }
                else if (queries[k][i] >= 'A' &&
                         queries[k][i] <= 'Z') {
                    valid = false;
                    break;
                }
                else {
                    i++;
                }
            }

            if (j != pattern.length()) {
                valid = false;
            }

            result.push_back(valid);
        }

        return result;
    }
};