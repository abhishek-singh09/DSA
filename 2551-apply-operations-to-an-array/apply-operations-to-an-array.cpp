class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n=nums.size();
        int idx=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]!=nums[i+1]){
                nums[idx]=nums[i];
                idx++;
            }else if(nums[i]==nums[i+1]){
                nums[idx]=nums[i]+nums[i+1];
                nums[i+1]=0;
                idx++;
            }
        }
        idx=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[idx]=nums[i];
                idx++;
            }
        }

        for(int i=idx;i<n;i++){
            nums[i]=0;
        }
        return nums;
    }
};