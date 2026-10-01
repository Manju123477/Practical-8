#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void bfsTraversal(const vector<vector<int>>& adjList, int start) {
    int n = adjList.size();
    vector<bool> visited(n, false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    cout << "BFS Traversal starting from node " << start << ": ";

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";
        for (int neighbor : adjList[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    cout << endl;
}

int main() {
    vector<vector<int>> adjList = {
        {1, 2},
        {0, 3},
        {0, 4},
        {1, 4},
        {2, 3}
    };

    int startNode = 0;
    bfsTraversal(adjList, startNode);

    return 0;
}
