// class Solution {
// public:
//     bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {

//         vector<vector<int>> graph(n);
//         for(auto& edge: edges){
//             graph[edge[0]].push_back(edge[1]);
//             graph[edge[1]].push_back(edge[0]);
//         }

//         vector<bool> visited(n, false);

//         function<bool(int)> dfs = [&](int node){
//             if(node==destination) return true;
//             visited[node]=true;

//             for(int neighbour: graph[node]){
//                 if(!visited[neighbour]){
//                     if(dfs(neighbour)) return true;
//                 }
//             }
//             return false;
//         };

//         return dfs(source);     
        
//     }
// };

#include <vector>
using namespace std;

class Graph {
private:
    int nodes;
    vector<vector<int>> adjList;
    vector<bool> visited;

public:
    // Constructor to initialize the graph
    Graph(int n, vector<vector<int>>& edges) {
        nodes = n;
        adjList.resize(n);
        visited.resize(n, false);

        // Build the adjacency list
        for (auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
    }

    // DFS function
    bool dfs(int current, int destination) {
        if (current == destination) return true;
        visited[current] = true;

        for (int neighbor : adjList[current]) {
            if (!visited[neighbor]) {
                if (dfs(neighbor, destination)) return true;
            }
        }
        return false;
    }

    // Public method to check path validity
    bool hasValidPath(int source, int destination) {
        return dfs(source, destination);
    }
};

class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        Graph g(n, edges);  // create a graph object
        return g.hasValidPath(source, destination);  // use its method
    }
};
