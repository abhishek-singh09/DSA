class Cell{
public:
    int r, c, t;

    Cell(int row, int col, int tim){
        r=row;
        c=col;
        t=tim;
    }
};

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<Cell> q;
        int rows=grid.size();
        int cols=grid[0].size();
        int time=0;

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]==2) q.push(Cell(i,j,0));
            }
        }

        while(!q.empty()){
            
            Cell curr= q.front();
            q.pop();
            int r=curr.r;
            int c=curr.c;
            int t=curr.t;
            
            time=max(time,t);

            if(r+1<rows && grid[r+1][c]==1){
                q.push(Cell(r+1,c,t+1));
                grid[r+1][c]=2;
            }
            if(r-1>=0 && grid[r-1][c]==1){
                q.push(Cell(r-1,c,t+1));
                grid[r-1][c]=2;
            }
            if(c+1<cols && grid[r][c+1]==1){
                q.push(Cell(r, c+1,t+1));
                grid[r][c+1]=2;
            }
            if(c-1>=0 && grid[r][c-1]==1){
                q.push(Cell(r,c-1,t+1));
                grid[r][c-1]=2;
            }
        }

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]==1) return -1;
            }
        }

        return time;

        
    }
};