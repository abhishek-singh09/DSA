class Solution {
public:
    void traverse(vector<vector<int>>& mat, vector<int>& res, int m, int n, int i, int j, int dir) {
        if(res.size() == m * n) return;
        res.push_back(mat[i][j]);
        int new_i = i + (dir == 1 ? -1 : 1);
        int new_j = j + (dir == 1 ? 1 : -1);
        if(new_i >= 0 && new_i < m && new_j >= 0 && new_j < n) {
            traverse(mat, res, m, n, new_i, new_j, dir);
            return;
        }
        if(dir == 1) {
            if(j + 1 < n) traverse(mat, res, m, n, i, j+1, -1); 
            else traverse(mat, res, m, n, i+1, j, -1); 
        } else {
            if(i + 1 < m) traverse(mat, res, m, n, i+1, j, 1);
            else traverse(mat, res, m, n, i, j+1, 1);
        }
    }

    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int> res;
        traverse(mat, res, m, n, 0, 0, 1);
        return res;
    }
};
