class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        for( int num : nums){
            if(num < k) return -1;
        }

        set<int> graterval;
        for(int num : nums){
            if(num>k) graterval.insert(num);
        }

        int count=0;
        while(!graterval.empty()){
            int vmax= *graterval.rbegin();
            graterval.erase(vmax);
            count++;
        }
        return count;
    }
};