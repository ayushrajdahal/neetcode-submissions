class Solution {
public:
    bool isPalindrome(string s) {
        string filtered = "";
        string rev_filtered = "";
        for (char c: s) {
            if (isalnum(c)) {
                c = tolower(c);
                filtered += c;
                rev_filtered = c + rev_filtered;
            }
        }

        return filtered == rev_filtered;
    }
};
