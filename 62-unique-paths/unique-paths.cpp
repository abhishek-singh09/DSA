class Solution {
public:
   int arr[105][105];
   int solve(int i, int j, int m, int n){
    if(i>=m || j>=n) return 0;
    if(arr[i][j]!=-1) return arr[i][j];
    if(i==m-1 || j==n-1) return 1;
    if(arr[i][j]!=-1) return arr[i][j];
    return arr[i][j]=solve(i, j+1, m,n)+solve(i+1, j, m,n);
   }
   
    int uniquePaths(int m, int n) {

        memset(arr, -1, sizeof arr);
        return solve(0, 0, m, n);        
    }
};