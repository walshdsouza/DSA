class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> result;

        for (int i = 0; i < operations.size(); i++) {

            if (operations[i] == "C") {
                result.pop_back();
            }

            else if (operations[i] == "D") {
                result.push_back(result.back() * 2);
            }

            else if (operations[i] == "+") {
                int n = result.size();
                result.push_back(result[n - 1] + result[n - 2]);
            }

            else {
                result.push_back(stoi(operations[i]));
            }
        }

        int ans = accumulate(result.begin(), result.end(), 0);

        return ans;
    }
};