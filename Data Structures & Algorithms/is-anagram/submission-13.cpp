class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> sCounts;
        unordered_map<char, int> tCounts;

        if (s.size() != t.size()) {
            return false;
        }

        for (int i = 0; i < s.size(); i++) {
            sCounts[s[i]]++;
            tCounts[t[i]]++;
        }

        return sCounts == tCounts;
    }
};
