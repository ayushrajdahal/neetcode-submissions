class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> spiralList;

        int left = 0;
        int right = matrix[0].size() - 1;
        int up = 0;
        int down = matrix.size() - 1;

        while (left <= right && up <= down) {
            // side 1: top

            for (int i = left; i <= right; i++) {
                spiralList.push_back(matrix[up][i]);
            }
            up++;

            // side 2: right

            for (int i = up; i <= down; i++) {
                spiralList.push_back(matrix[i][right]);
            }
            right--;

            // side 3: bottom
            if (up <= down)
            {
                for (int i = right; i >= left; i--) {
                    spiralList.push_back(matrix[down][i]);
                }

                down--;
            }

            // side 4: left

            if (left <= right)
            {
                for (int i = down; i >= up; i--) {
                    spiralList.push_back(matrix[i][left]);
                }

                left++;
            }

        }
        return spiralList;
    }
};