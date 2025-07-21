class Solution {
public:
    void check(vector<vector<int>>& image, int i, int j, int c,int a){
        if(i<0|| i>=image.size() || j<0 || j>=image[0].size() ||image[i][j]!=a){
            return;
        }

        if(image[i][j]==a){
            image[i][j]=c;
        }

        check(image, i+1, j, c,a);
        check(image, i-1, j, c,a);
        check(image, i, j+1, c,a);
        check(image, i,j-1, c,a);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int a= image[sr][sc];
        if(a==color) return image;
        check(image, sr, sc, color, a); 
        return image;     
    }
};