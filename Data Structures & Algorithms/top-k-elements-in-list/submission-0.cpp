class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> numcounts;
        vector<int> top_k;

        for (int num: nums) {
            numcounts[num]++;
        }

        for (int i = 0; i < k; i++) {
            auto max_elem = max_element(
                numcounts.begin(), numcounts.end(), [](const auto& a, const auto& b){return a.second < b.second;}
            );

            top_k.push_back(max_elem->first);

            numcounts.erase(max_elem);
        }

        return top_k;
    }
};
