class Solution {
  public:
   int dfs(int u, int c,vector<vector<int>>& adj, vector<int>& vis){
        vis[u]=c;
        for(auto x: adj[u]){
            if(vis[x]==-1){
                if(dfs(x, 1-c,adj, vis)){
                    return 1;
                }
            }else if(vis[x]==c) return 1;
        }
        return 0;
    }
   
    bool isBipartite(vector<vector<int>>& adj) {
        int n=adj.size();
        vector<int> vis(n,-1);
        for(int i=0;i<n;i++){
            if(vis[i]==-1){
                if(dfs(i,0,adj,vis)) return 0;
            }
        }
        return 1;
        
    }
};