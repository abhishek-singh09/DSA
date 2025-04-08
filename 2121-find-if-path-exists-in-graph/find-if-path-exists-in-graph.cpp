class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {

        vector<vector<int>> graph(n);
        for(auto& edge: edges){
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }

        vector<bool> visited(n, false);

        function<bool(int)> dfs = [&](int node){
            if(node==destination) return true;
            visited[node]=true;

            for(int neighbour: graph[node]){
                if(!visited[neighbour]){
                    if(dfs(neighbour)) return true;
                }
            }
            return false;
        };

        return dfs(source);     
        
    }
};