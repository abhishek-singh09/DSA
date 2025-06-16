class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        // int n_max=-1;
        // for(int i=0;i<n-1;i++){
        //     for(int j=i+1;j<n;j++){
        //         int res=nums[j]-nums[i];
        //         n_max=max(n_max, res);
        //     }
        // }
        // if(n_max==0) return -1;
        // return n_max;
        int res=-1;
        int nj=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]>nj){
                res=max(nums[i]-nj, res);
            }
            if(nums[i]<nj){
                nj=nums[i];
            }
        }
        return res;
        
    }
};