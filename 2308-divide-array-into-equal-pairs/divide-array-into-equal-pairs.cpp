class Solution {
public:
    bool divideArray(vector<int>& nums) {
        vector<int> arr(501, 0);
        for (int a : nums) {
            arr[a]++;
        }
        for (int freq : arr) {
            if (freq % 2 != 0) {
                return false;
            }
        }
        return true;
    }
};
