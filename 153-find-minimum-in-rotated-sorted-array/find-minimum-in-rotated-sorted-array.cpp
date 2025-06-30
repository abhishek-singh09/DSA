class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        while(low<=high-1){
            if(nums[low]>=nums[low+1]){
                int m=low+1;
                rotate(nums.begin(),nums.begin()+m, nums.end());
            }
            low++;
        }
        return nums[0];
    }
};