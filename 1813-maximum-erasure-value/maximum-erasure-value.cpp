class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
            unordered_set<int> mp;
            int l=0, r=0;
            int crr=0, sum=0;
            for(r=0;r<nums.size();r++){
                while(mp.count(nums[r])){
                    crr-=nums[l];
                    mp.erase(nums[l]);
                    l++;
                }
                mp.insert(nums[r]);
                crr+=nums[r];
                sum=max(crr, sum);
            }
            return sum;
    }
};