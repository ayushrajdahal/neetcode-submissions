class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> zeroColumnIndices, zeroRowIndices;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    zeroRowIndices.push_back(i);
                    zeroColumnIndices.push_back(j);
                }
            }
        }

        for (int zeroRowIndex: zeroRowIndices) {
            zeroRow(zeroRowIndex, n, matrix);
        }

        for (int zeroColIndex: zeroColumnIndices) {
            zeroCol(zeroColIndex, m, matrix);
        }
    }

    void zeroCol(int index, int numRows, vector<vector<int>>& matrix) {
        for (int i = 0; i < numRows; i++) {
            matrix[i][index] = 0;
        }
    }

    void zeroRow(int index, int numCols, vector<vector<int>>& matrix) {
        for (int i = 0; i < numCols; i++) {
            matrix[index][i] = 0;
        }
    }
};
