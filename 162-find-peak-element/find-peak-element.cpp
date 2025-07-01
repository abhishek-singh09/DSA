class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=0;
        int h=nums.size()-1;
        // if(nums.size()<3){
        //     if(nums.size()==1) return 0;
        //     if(nums[0]>nums[1]){
        //         return 0;
        //     }else{
        //         return 1;
        //     }

        // }
        while(l<h){
            int mid=l+(h-l)/2;

            if(nums[mid] < nums[mid + 1]){
                l=mid+1;
            }else{
                h=mid;
            }
        }
        return l;        
    }
};
