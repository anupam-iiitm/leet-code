class Solution {
public:
int helper(int i,int j, vector<vector<int>>& matrix,int m, int n, vector<vector<int>>& dp){
        
        if (j < 0 || j > n) return INT_MAX; 
        if (i == m) return matrix[i][j];
        if(dp[i][j]!=1e9) return dp[i][j];

        return dp[i][j]=matrix[i][j]+ min(helper(i+1,j-1,matrix,m, n, dp),
                                        min(helper(i+1,j,matrix,m, n, dp),
                                        helper(i+1,j+1,matrix,m, n, dp)));

}
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int mini=1e9;
        
        vector<vector<int>> dp(m,vector<int>(n,1e9));
        for(int i=0;i<n;i++){
            mini=min(mini,helper(0,i,matrix,m-1,n-1,dp));
        }
        return mini;
    }
};