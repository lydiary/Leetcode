class Solution {
public:
    int findComplement(int num) {
        int mask = 1;
        int tmp = num;
        
        while (tmp > 0) {
            tmp >>= 1;
            mask <<= 1;
        }
        
        return num ^ (mask - 1);
    }
};