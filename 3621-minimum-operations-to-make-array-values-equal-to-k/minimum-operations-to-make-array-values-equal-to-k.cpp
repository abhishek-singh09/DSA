class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        for(int num : nums){
            if(num<k) return -1;
        }

        set<int> uniqueval;

        for(int num : nums){
            if(num>k) uniqueval.insert(num);
        }

        int count=0;
        while(!uniqueval.empty()){
            int vmax = *uniqueval.rbegin();
            uniqueval.erase(vmax);
            count++;
        }

        return count;
    }
};