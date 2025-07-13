class Solution {
public:
    bool check(vector<int>& nums, int i, vector<int>& dp){
        int n=nums.size();
        if(i>=n-1) return true;
        if(dp[i]!=-1) return dp[i];
        int a= nums[i];
               
        for(int j=1;j<=a;j++){
            if(check(nums, i+j, dp)){
                return dp[i]=true;
            }
        }
        return dp[i]=false;

    }
    bool canJump(vector<int>& nums) {
        int n= nums.size();
        vector<int> dp(n, -1);
        return check(nums, 0, dp);        
    }
};