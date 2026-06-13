class Solution {
public:
    bool isValid(string s) {
        stack<char> charStack;
        unordered_map<char, char> getFront = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            if (!charStack.empty() && (charStack.top() == getFront[c])) {
                charStack.pop();
            } else {
                charStack.push(c);
            }
        }
        return charStack.empty();
    }
};
