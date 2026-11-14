class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int, vector<int>> adj;
        vector<bool> visited(numCourses, false);
        vector<bool> inrecursion(numCourses, false);

        for (auto &vec : prerequisites) {
            int a = vec[0], b = vec[1];
            adj[b].push_back(a);            
        }

        for (int i = 0; i < numCourses; i++) {
            if (!visited[i] && isCycleDFS(adj, i, visited, inrecursion))
                return false;
        }
        return true;
    }                                      

    bool isCycleDFS(unordered_map<int, vector<int>>& adj, int u,
                    vector<bool>& visited, vector<bool>& inrecursion) {
        visited[u] = true;
        inrecursion[u] = true;

        for (int &v : adj[u]) {
            if (!visited[v] && isCycleDFS(adj, v, visited, inrecursion))
                return true;
            else if (inrecursion[v])
                return true;                
        }

        inrecursion[u] = false;              
        return false;
    }                                       
};                                          