class Solution {
public:
    vector<int> dp;
    int check(vector<vector<int>>& grid, int i, int j,vector<vector<int>>& dp){
        if(i==grid.size()-1 && j==grid[0].size()-1) return grid[i][j];
        if(i>=grid.size() || j>=grid[0].size()) return INT_MAX;
        if(dp[i][j]!=-1) return dp[i][j];

        int left=check(grid, i+1,j,dp);
        int right=check(grid, i,j+1,dp);
        
        return dp[i][j]=grid[i][j]+min(left,right);
    }
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> dp(grid.size(),vector<int>(grid[0].size(),-1));
        return check(grid, 0 ,0, dp);
        
    }
};