class Solution {
public:
    int getSum(int a, int b) {
        
        while (b) {
            int carry = a & b;
            int xor_result = a ^ b;

            carry <<= 1;

            a = xor_result;
            b = carry;
        }

        return a;

    }
};
