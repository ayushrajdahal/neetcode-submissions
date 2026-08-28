class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> prev;
        for (int i = 0; i < nums.size(); i++) {
            int rem = target - nums[i];
            if (prev.find(rem) != prev.end()) {
                return {prev[rem], i};
            } else {
                prev[nums[i]] = i;
            }
        }
    }
};
