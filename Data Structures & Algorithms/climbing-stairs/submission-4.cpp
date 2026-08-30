class Solution {
public:
    int climbStairs(int n) {
        int secondlast = 1;
        int last = 1;

        for (int i = 0; i < n-1; i++) {
            int temp = last + secondlast;
            last = secondlast;
            secondlast = temp;
        }

        return secondlast;
    }
};
