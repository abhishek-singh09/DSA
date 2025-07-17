class Solution {
public:
    int dfs(vector<vector<int>>& arr, int i, int j){
        if(i<0||i>=arr.size()||j<0||j>=arr[0].size()||arr[i][j]==0){
            return 0;
        }
        arr[i][j]=0;
        int count=1;
        count+=dfs(arr, i+1, j);
        count+=dfs(arr, i-1, j);
        count+=dfs(arr, i, j+1);
        count+=dfs(arr, i, j-1);

        return count;

    }
    int check(vector<vector<int>>& arr, int i, int j){
        int prev=0;
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr[0].size();j++){
                if(arr[i][j]==1){
                    int count=dfs(arr, i, j);
                    prev=max(count, prev);
                }
            }
        }
        return prev;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int a= check(grid, 0, 0);
        return a;        
    }
};