class Solution {
public:
    int dp[1005][1005];
    int check(vector<vector<int>>& nums, int i, int j) {
        if(dp[i][j]!=-1) return dp[i][j];
        if (i >= nums.size() || j >= nums[0].size() || nums[i][j] == 1)
            return 0;

        if (i == nums.size() - 1 && j == nums[0].size() - 1)
            return 1;

        return dp[i][j]= check(nums, i + 1, j) + check(nums, i, j + 1);
    }

    int uniquePathsWithObstacles(vector<vector<int>>& nums) {
        memset(dp, -1, sizeof dp);
        return check(nums, 0, 0);
    }
};
