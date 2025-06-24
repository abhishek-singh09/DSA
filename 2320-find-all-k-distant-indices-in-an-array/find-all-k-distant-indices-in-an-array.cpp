class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> index;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==key){
                index.push_back(i);
            }
        }
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            int a=0;
            bool b=false;
            while(a<index.size()){
                                
                if(abs(i-index[a])<=k){
                    b=true;
                    break;
                }
                a++;   
            }
            
            if(b){
                res.push_back(i);
            }
        }

        return res;
        
    }
};