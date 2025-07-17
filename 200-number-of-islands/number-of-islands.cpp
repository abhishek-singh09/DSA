class Solution {
public:
    // void check(vector<vector<char>> grid, int i, int j, int count){
    //     if(i==grid.size()-1 && j==grid[0].size()-1) return;
    //     if(i<0 || i>grid.size()) return;
    //     if(j<0 || j>grid[0].size()) return;
    //     if(grid[i][j]!=1) return;

    //     if(grid[i][j]=='1'){
    //         grid[i][j]='-1';
    //         check(grid, i+1, j, count);
    //         check(grid, i-1, j, count);
    //         check(grid, i, j+1, count);
    //         check(grid, i, j-1, count); 
    //     }
    //     return check(grid, i+1, j+1, count++);

    // }

    void dfs(vector<vector<char>>& arr, int i, int j){
        if(i>=arr.size()||i<0||j>=arr[0].size()||j<0||arr[i][j]=='0'){
            return ;
        }
        arr[i][j]='0';
        dfs(arr, i+1, j);
        dfs(arr, i-1, j);
        dfs(arr, i, j+1);
        dfs(arr, i, j-1);
    }



    int check(vector<vector<char>>& arr){
        int cnt=0;
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr[0].size();j++){
                if(arr[i][j]=='1'){
                    dfs(arr, i, j);
                    cnt++;

                }
            }
        }
        return cnt;
    }
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        count=check(grid);  
        return count;      
    }
};