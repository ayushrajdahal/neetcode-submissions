class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // sorted(nums.begin(), nums.end());
        set<int> nums_hashed(nums.begin(), nums.end());
        int longest = 0;
        int length;

        for (int num: nums_hashed) {
            if (!nums_hashed.contains(num - 1)) {
                length = 0;
                while (nums_hashed.contains(num+length)) {
                    length++;
                }
                longest = max(longest, length);
            }
        }

        return longest;

    }
};
