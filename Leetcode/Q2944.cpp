class Solution {
public:
    int minimumCoins(vector<int>& prices) {
        int n = prices.size();
        vector<int> dp(n + 1, 0);
        deque<int> dq; 

        dq.push_back(n); 
        
        for (int i = n - 1; i >= 0; --i) {
            while (!dq.empty() && dq.front() > (i + 1) * 2) {
                dq.pop_front();
            }
            dp[i] = prices[i] + dp[dq.front()];
            while (!dq.empty() && dp[dq.back()] >= dp[i]) {
                dq.pop_back();
            }

            dq.push_back(i);
        }
        
        return dp[0];
    }
};