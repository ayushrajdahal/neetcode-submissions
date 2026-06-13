class Solution {
public:
    bool isValid(string s) {
        stack<char> charStack;
        unordered_map<char, char> getFront = { // NOTE: c++ maps have different formatting than python dicts
            {')', '('},
            {'}', '{'},
            {']', '['}
        };
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            if (!charStack.empty() && (charStack.top() == getFront[c])) { // if we don't check for emptiness first, .pop() will throw a Runtime Error (Segmentation Fault)
                charStack.pop();
            } else {
                charStack.push(c);
            }
        }
        return charStack.empty();
    }
};
