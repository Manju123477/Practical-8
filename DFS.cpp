#include <iostream>
#include <vector>
using namespace std;


void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited) {
    visited[node] = true;
    cout << char('A' + node) << " "; 

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited);
        }
    }
}

int main() {
   
    int vertices = 5;
    vector<vector<int>> adj(vertices);

   
    adj[0] = {1, 2}; 
    adj[1] = {0, 3, 4}; 
    adj[2] = {0}; 
    adj[3] = {1}; 
    adj[4] = {1}; 

    vector<bool> visited(vertices, false);

    cout << "DFS Traversal: ";
    for (int i = 0; i < vertices; i++) {
        if (!visited[i]) {
            dfs(i, adj, visited);
        }
    }
    cout << endl;

    return 0;
}
