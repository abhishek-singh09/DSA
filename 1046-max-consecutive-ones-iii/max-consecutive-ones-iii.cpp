class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int size=nums.size();
        int i=0, j=0, z=0, max1=0;
        while(j<size){
            if(nums[j]==0) z++;

            while(z>k){
                if(nums[i]==0) z--;
                i++;
            }
            max1=max(max1, j-i+1);
            j++;
        }
        return max1;       
        
    }
};