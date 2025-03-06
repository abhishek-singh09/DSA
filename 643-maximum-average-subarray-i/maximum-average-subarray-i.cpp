class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        double avg = (double)sum/k;

        for(int i=k;i<nums.size();i++){
            int rem = nums[i-k];
            int add = nums[i];
            sum = sum - rem + add;
            double av = (double)sum/k;
            avg = max(avg, av);
        }
        return avg;
    }
};