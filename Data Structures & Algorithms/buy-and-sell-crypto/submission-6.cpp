class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxdiff = 0;
        int left = 0;

        for (int right = 1; right < prices.size(); right++) {
            int currdiff = prices[right] - prices[left];
            maxdiff = max(maxdiff, currdiff);
            if (currdiff < 0) {
                left = right;
            }
        }
        
        return maxdiff;
    }
};
