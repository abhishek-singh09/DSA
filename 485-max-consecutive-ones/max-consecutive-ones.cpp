class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                if(count>n){
                    n=count;
                }
            }else{
                count=0;
            }
        }
        return n;
        
    }
};