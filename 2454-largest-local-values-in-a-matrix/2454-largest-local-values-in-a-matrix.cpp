class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
          int n = grid.size();
    vector<vector<int>> result(n - 2, vector<int>(n - 2));

     for (int i = 0; i < n - 2; i++) {
        for (int j = 0; j < n - 2; j++) {
            int maxVal = 0;
            for (int r = i; r < i + 3; r++) {
                for (int c = j; c < j + 3; c++) {
                    maxVal = max(maxVal, grid[r][c]);
                }
            }

            result[i][j] = maxVal;
        }
    }

    return result;
    }
};