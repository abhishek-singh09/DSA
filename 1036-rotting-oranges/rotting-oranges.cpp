class Cell{
public:
    int r, c, t;
    Cell(int row, int col, int tm){
        r=row;
        c=col;
        t=tm;
    }
};

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int time=0;
        int n=grid.size();
        int m=grid[0].size();
        queue<Cell> que;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    que.push(Cell(i, j, 0));
                }
            }
        }

        while(!que.empty()){
            Cell cell= que.front();
            que.pop();
            int rw=cell.r;
            int co=cell.c;
            int tim = cell.t;
            time=max(time, tim);
            
            if(rw-1>=0 && grid[rw-1][co]==1){
                grid[rw-1][co]=2;
                que.push(Cell(rw-1, co, tim+1));
            }
            if(co-1>=0 && grid[rw][co-1]==1){
                grid[rw][co-1]=2;
                que.push(Cell(rw, co-1, tim+1));
            }
            if(rw+1<n && grid[rw+1][co]==1){
                grid[rw+1][co]=2;
                que.push(Cell(rw+1, co, tim+1));
            }
            if(co+1<m && grid[rw][co+1]==1){
                grid[rw][co+1]=2;
                que.push(Cell(rw, co+1, tim+1));
            }

        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    return -1;
                }
            }
        }
        return time;
    }
};