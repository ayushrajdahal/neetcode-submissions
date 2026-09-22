class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> prev;

        for (int num: nums) {
            if (prev.contains(num)) {
                return true;
            }
            prev.insert(num);
        }
        return false;
    }
};