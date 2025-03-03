class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        vector<int>less, equal, grater;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot) less.push_back(nums[i]);
            else if(nums[i]==pivot) equal.push_back(nums[i]);
            else grater.push_back(nums[i]);
        }
        less.insert(less.end(),equal.begin(),equal.end());
        less.insert(less.end(), grater.begin(), grater.end());    
 
        return less;
        
        //vector<int>arr;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]<pivot){
        //         arr.push_back(nums[i]);
        //     }
        // }
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==pivot){
        //         arr.push_back(nums[i]);
        //     }
        // }
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]>pivot){
        //         arr.push_back(nums[i]);
        //     }
        // }
        // return arr;
        
    }
};