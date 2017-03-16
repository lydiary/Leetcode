class Solution {
public:
    int getSum(int a, int b) {
        int carry = a & b;

        while (carry) {
            a = a ^ b;
            b = carry << 1;
            carry = a & b;
        }
        return a371  | b;
    }
};