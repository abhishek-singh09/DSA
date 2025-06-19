class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int i= 0;
        int count=0;
        while(i<nums.size()){
            int start=nums[i];
            i++;
            count++;
            while(i< nums.size() &&(nums[i]-start)<=k){
                i++;
            }
        }
        return count;
    }
};