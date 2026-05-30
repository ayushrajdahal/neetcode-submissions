class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int numsSize = nums.size();
        int prefix = nums[0];
        int maxSum = nums[0];
        for (int i = 1; i < numsSize; i++) {
            int currNum = nums[i];
            prefix = max(currNum + prefix, currNum);
            maxSum = max(maxSum, prefix);
        }
        return maxSum;
    }
};
