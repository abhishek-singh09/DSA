class Solution {
public:
    long long minimumDifference(vector<int>& nums) {
        int n = nums.size() / 3;
        int size = nums.size();

        // Prefix sums for left part using max heap
        priority_queue<int> maxHeap;
        vector<long long> leftSum(size, 0);
        long long left = 0;
        for (int i = 0; i < 2 * n; ++i) {
            maxHeap.push(nums[i]);
            left += nums[i];
            if (maxHeap.size() > n) {
                left -= maxHeap.top();
                maxHeap.pop();
            }
            if (maxHeap.size() == n)
                leftSum[i] = left;
        }

        // Suffix sums for right part using min heap
        priority_queue<int, vector<int>, greater<int>> minHeap;
        vector<long long> rightSum(size, 0);
        long long right = 0;
        for (int i = size - 1; i >= n; --i) {
            minHeap.push(nums[i]);
            right += nums[i];
            if (minHeap.size() > n) {
                right -= minHeap.top();
                minHeap.pop();
            }
            if (minHeap.size() == n)
                rightSum[i] = right;
        }

        // Find the minimum difference
        long long res = LLONG_MAX;
        for (int i = n - 1; i < 2 * n; ++i) {
            res = min(res, leftSum[i] - rightSum[i + 1]);
        }

        return res;
    }
};
