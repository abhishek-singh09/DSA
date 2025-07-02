class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n =nums.size();

        for(int i=0;i<nums.size();i++){
            if(nums[i]<=0) nums[i]=n+3;

        }

        for(int i=0;i<nums.size();i++){
            int idx = abs(nums[i])-1;
            if(idx<n && nums[idx]>0) nums[idx]= - nums[idx];

        }

        for(int i=0;i<n;i++){
            if(nums[i]>0) return i+1;
        }
        return n+1;
        
    }
};