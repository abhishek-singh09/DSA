class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        const int MOD = 1e9 + 7;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int> pow2(n + 1, 1);

        for (int i = 1; i <= n; i++) {
            pow2[i] = (pow2[i - 1] * 2) % MOD;
        }


        int low=0;
        int high= n-1;
        int count=0;

        while(low<=high){
            if(nums[low]+nums[high]<=target){
                count = (count + pow2[high - low]) % MOD;
                low++;
            }else if(nums[low]+nums[high]>target){
                high--;
            }

        }
        return count;

       

    }
};