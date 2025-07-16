class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int evenCount = 0, oddCount = 0;
        for (int num : nums) {
            if (num % 2 == 0)
                evenCount++;
            else
                oddCount++;
        }

        int altCount = 1;
        int prev = nums[0] % 2;

        for (int i = 1; i < nums.size(); i++) {
            int curr = nums[i] % 2;
            if (curr != prev) {
                altCount++;
                prev = curr;
            }
        }

        return max({evenCount, oddCount, altCount});
    }
};
