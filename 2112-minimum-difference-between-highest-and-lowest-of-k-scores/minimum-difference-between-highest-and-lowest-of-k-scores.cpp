class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int size=nums.size();

       if(size==1) return 0;
       sort(nums.begin(),nums.end());
        int mnum=INT_MAX;
       int i=0;
       while(i<=size-k){
        int diff= nums[i+k-1]-nums[i];
        i++;
        mnum=min(mnum,diff);
       }
       return mnum;        
    }
};