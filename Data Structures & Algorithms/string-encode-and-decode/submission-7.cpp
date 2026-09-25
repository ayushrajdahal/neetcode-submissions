class Solution {
public:

    string encode(vector<string>& strs) {
        string joined = "";
        for (string s:strs) {
            joined += to_string(s.length()) + "#" + s;
        }
        return joined;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        int s_len = s.length();
        int curr_idx = 0;
        int initial_idx;
        int fetch_len;

        while (curr_idx < s_len) {
            initial_idx = curr_idx;
            while (s[curr_idx] != '#') {
                curr_idx++;
            }
            fetch_len = stoi(s.substr(initial_idx, curr_idx - initial_idx));
            decoded.push_back(s.substr(curr_idx+1, fetch_len));
            curr_idx = curr_idx + fetch_len + 1;
        }
        return decoded;
    }
};
