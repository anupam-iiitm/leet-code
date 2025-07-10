class Solution {
public:
    int helper(vector<vector<int>>& triangle, int i, int j, vector<vector<int>>& dp) {
        if (i >= triangle.size()) return 0;
        if (dp[i][j] != INT_MAX) return dp[i][j];

        int down = helper(triangle, i + 1, j, dp);
        int diag = helper(triangle, i + 1, j + 1, dp);

        return dp[i][j] = triangle[i][j] + min(down, diag);
    }

    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>> dp(n, vector<int>(n, INT_MAX));

        return helper(triangle, 0, 0, dp);
    }
};
