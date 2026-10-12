class Solution {
public:
    int islandPerimeter(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int res = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 1) {
                    res += 4;

                    if (i >= 1 && mat[i - 1][j] == 1)
                        res -= 2;

                    if (j >= 1 && mat[i][j - 1] == 1)
                        res -= 2;
                }
            }
        }

        return res;
    }
};