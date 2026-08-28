class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagram_maps;
        vector<vector<string>> anagram_groups;
        
        for (string s: strs) {
            string sorted_s = s;
            sort(sorted_s.begin(), sorted_s.end());
            anagram_maps[sorted_s].push_back(s);
        }

        for (pair<string, vector<string>> elem: anagram_maps) {
            anagram_groups.push_back(elem.second);
        }

        return anagram_groups;
    }
};
