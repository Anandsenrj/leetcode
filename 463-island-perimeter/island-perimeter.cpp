class Solution {
private:
    int n, m;
    vector<vector<int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    int bfs(vector<vector<int>>& grid, int i, int j) {
        int perimeter = 0;
        queue<pair<int, int>> que;
        que.push({i, j});
        grid[i][j] = -1;

        while (!que.empty()) {
            auto it = que.front();
            que.pop();

            int curr_r = it.first;
            int curr_c = it.second;

            for (const auto& dir : directions) {
                int nx = curr_r + dir[0]; // Use popped coordinates
                int ny = curr_c + dir[1];

                if (nx < 0 || nx >= m || ny < 0 || ny >= n || grid[nx][ny] == 0) {
                    perimeter++;
                } else if (grid[nx][ny] == 1) {
                    grid[nx][ny] = -1;
                    que.push({nx, ny});
                }
            }
        }
        return perimeter;
    }

public:
    int islandPerimeter(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    return bfs(grid, i, j);
                }
            }
        }
        return 0;
    }
};