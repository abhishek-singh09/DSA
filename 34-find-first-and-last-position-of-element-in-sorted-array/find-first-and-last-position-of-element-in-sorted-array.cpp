class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0;
        int h=n-1;
        vector<int>arr(2,-1);

        while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]>=target){
                if(nums[mid]==target) arr[0]=mid;
                h=mid-1;
            }else{
                l=mid+1;
            }
        }

        int m=0;
        int o=n-1;
        while(m<=o){
            int mid=m+(o-m)/2;
            if(nums[mid]<=target){
                if(nums[mid]==target) arr[1]=mid;
                m=mid+1;
            }else{
                o=mid-1;
            }
        }
        return arr;
    }
};