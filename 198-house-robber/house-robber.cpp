class Solution {
public:
   int arr[105];
    int solve(const vector<int>& nums, int i){
        if(i>=nums.size()) return 0;
        if(arr[i]!=-1) return arr[i];
        int p = nums[i] + solve(nums, i+2);
        int s= solve(nums, i+1);
        return arr[i]=max(p,s);
    }
    int rob(vector<int>& nums) {
        memset(arr, -1, sizeof arr);
        int a=solve(nums,0);
        return a;   
    }
};