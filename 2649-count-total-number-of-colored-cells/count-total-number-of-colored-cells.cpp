class Solution {
public:
    long long coloredCells(int n) {
        return (long long)(2LL * n * (n - 1) + 1);
    }
};
