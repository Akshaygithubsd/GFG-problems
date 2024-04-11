//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int vertex, const vector<int> adj[], vector<bool>& visited, vector<int>& result) {
    // Mark the current vertex as visited
    visited[vertex] = true;
    result.push_back(vertex); // Store the vertex in the result

    // Recursively visit all adjacent vertices that are not visited yet
    for (int adj_vertex : adj[vertex]) {
        if (!visited[adj_vertex]) {
            dfs(adj_vertex, adj, visited, result);
        }
    }
}

vector<int> dfsOfGraph(int V, vector<int> adj[]) {
    // Initialize visited array to track visited vertices
    vector<bool> visited(V, false);

    // Initialize result vector to store the DFS traversal
    vector<int> result;

    // Perform Depth First Traversal (DFS) for each vertex not visited yet
    for (int i = 0; i < V; ++i) {
        if (!visited[i]) {
            dfs(i, adj, visited, result);
        }
    }

    return result;}
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends