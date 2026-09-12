class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int numsize = nums.size();
        vector<int> left(numsize);
        vector<int> right(numsize);
        vector<int> res(numsize);

        left[0] = 1; // mistake: previously was `right` instead of `left`
        right[numsize-1] = 1;

        for (int i = 1; i < numsize; i++) {
            left[i] = left[i-1] * nums[i-1];
            right[numsize-1-i] = right[numsize-i] * nums[numsize-i];
        }

        for(int i = 0; i < numsize; i++) {
            res[i] = left[i] * right[i];
        }

        return res;
    }
};
