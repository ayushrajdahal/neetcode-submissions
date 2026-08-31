class Solution {
public:
    unordered_map<int, int> prev_outputs;

    int climbStairs(int n, int pos) {
        int curr_output;
        if (pos == n || pos == n-1) {
            curr_output = 1;
        } else if (prev_outputs.find(pos) != prev_outputs.end()) {
            return prev_outputs[pos];
        } else {
            curr_output = climbStairs(n, pos+1) + climbStairs(n, pos+2);
        }
        
        prev_outputs[pos] = curr_output;
        return curr_output;
    }
    int climbStairs(int n) {
        return climbStairs(n, 0);
    }
};
