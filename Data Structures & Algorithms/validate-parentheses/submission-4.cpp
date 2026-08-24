class Solution {
public:
    bool isValid(string s) {
        stack<char> prev;

        unordered_map<char, char> getOpener = {
            {'}', '{'},
            {']', '['},
            {')', '('}
        };

        unordered_set<char> openers = {'{', '[', '('};

        for (char c: s) {
            if (openers.contains(c)) {
                prev.push(c);
                continue;
            } else {
                if (!prev.empty() && getOpener[c] == prev.top()) {
                    prev.pop();
                } else {
                    prev.push(c);
                }
            }
        }

        return prev.empty();
    }
};
