class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        size_t maxlen = 0; // OR we could do static_cast<int>(curr.size()) below.
        vector<char> curr;

        for (char c: s) {
            while (find(curr.begin(), curr.end(), c) != curr.end()) {
                curr.erase(curr.begin());
            }
            curr.push_back(c);
            maxlen = max(maxlen, curr.size());
        }

        return maxlen;
    }
};
