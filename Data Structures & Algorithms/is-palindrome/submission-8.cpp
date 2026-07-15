class Solution {
public:
    bool isPalindrome(string s) {
        string loweredString = "";
        string loweredReverseString = "";

        for (char c: s) {
            if (isalnum(c)) {
                loweredString.push_back(tolower(c));
                loweredReverseString.insert(0, 1, tolower(c));
            }
        }

        return loweredString == loweredReverseString;
    }
};
