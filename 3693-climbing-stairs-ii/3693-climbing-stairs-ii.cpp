class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        const int INF = 1e9;
        vector<int> dp(n + 1, INF);
        dp[0] = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = max(0, i - 3); j < i; j++) {
                dp[i] = min(dp[i],
                            dp[j] + costs[i - 1] + (i - j) * (i - j));
            }
        }
        return dp[n];
    }
};
