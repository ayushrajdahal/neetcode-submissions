class Solution {
public:
    int sumSquare(int num) {
        int sum_square = 0;
        while (num) {
            sum_square += pow(num % 10, 2);
            num = (int) num / 10;
        }
        return sum_square;
    }
    bool isHappy(int n) {
        unordered_set<int> seen;

        while (n != 1) {
            if (seen.find(n) != seen.end()) {
                return false; // not happy
            }

            seen.insert(n);

            n = sumSquare(n);
        }

        return true;
    }
};
