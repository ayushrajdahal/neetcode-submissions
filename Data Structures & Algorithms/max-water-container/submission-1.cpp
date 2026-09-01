class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int max_area = 0;
        while (left < right) {
            int leftval = heights[left];
            int rightval = heights[right];
            int curr_area = (right - left) * min(leftval, rightval);
            
            max_area = max(max_area, curr_area);
            
            if (leftval > rightval) {
                right -= 1;
            } else {
                left += 1;
            }
        }
        return max_area;
    }
};
