class Solution {
public:
    int islandPerimeter(vector<vector<int>>& arr) {
        int sum = 0;
        for(int i = 0; i < arr.size(); i++) {
            for(int j = 0; j < arr[0].size(); j++) {
                if(arr[i][j] == 1) {
                    if(i == 0 || arr[i-1][j] == 0) sum++;
                    if(i == arr.size()-1 || arr[i+1][j] == 0) sum++;
                    if(j == 0 || arr[i][j-1] == 0) sum++;
                    if(j == arr[0].size()-1 || arr[i][j+1] == 0) sum++;
                }
            }
        }
        return sum;
    }
};