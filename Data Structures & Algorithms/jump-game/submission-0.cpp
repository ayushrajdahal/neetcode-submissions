class Solution {
public:
    bool canJump(vector<int>& nums) {
        int farthest = 0;
        int lastIndex = nums.size() - 1;

        for (int i = 0; i <= lastIndex; i++) {
            if (i > farthest) {
                return false;
            }
            
            farthest = max(farthest, i + nums[i]);
            
            if (farthest >= lastIndex) {
                return true;
            }
        }
    }
};
