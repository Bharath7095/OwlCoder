class Solution {
public:
    int path(int n,int m,vector<vector<int>>&grid,vector<vector<int>>&dp)
    {
        if(n==0 and m==0) return grid[n][m];
        if(n<0 or m<0) return INT_MAX;
        if(dp[n][m]!=-1) return dp[n][m];
        int a,b;
        a=path(n-1,m,grid,dp);
        b=path(n,m-1,grid,dp);
        return dp[n][m]=grid[n][m]+min(a,b);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return path(n-1,m-1,grid,dp);
    }
};
