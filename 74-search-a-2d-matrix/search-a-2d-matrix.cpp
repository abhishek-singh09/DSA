class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int s1=matrix.size();
        int s2= matrix[0].size();
        int low=0;
        int high=s1*s2-1;

        while(low<=high){
            int mid= low+(high-low)/2;
            int row=mid/s2;
            int col=mid%s2;
            if(matrix[row][col]==target) return true;

            if(matrix[row][col]<target) low=mid+1;
            else high=mid-1;
        }
        return false;
    }
};