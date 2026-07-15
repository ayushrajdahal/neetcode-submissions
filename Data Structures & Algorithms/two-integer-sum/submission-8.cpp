class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numToIndex;
        for (int i = 0; i < nums.size(); i++) {
            int currNum = nums[i];
            int diff = target - currNum;

            if (numToIndex.find(diff) != numToIndex.end()) {
                return {numToIndex[diff], i};
            }

            numToIndex[currNum] = i;
        }
    }
};
