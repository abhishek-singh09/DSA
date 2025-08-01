class Solution {
public:
    void check(vector<vector<int>>& tri, int n, int l, vector<int>arr){
        if(l>n) return;
        tri[l-1].push_back(1);
        for(int i=0;i<arr.size()-1;i++){
            tri[l-1].push_back(arr[i]+arr[i+1]);
        }
        tri[l-1].push_back(1);
        return check(tri,n,l+1,tri[l-1]);
    }
    vector<vector<int>> generate(int n) {
        vector<vector<int>> tri(n);
        tri[0].push_back(1);
        if(n==1) return tri;
        tri[1].push_back(1);
        tri[1].push_back(1);
        if(n==2) return tri;
        check(tri,n,3,tri[1]);
        return tri;
        
    }
};