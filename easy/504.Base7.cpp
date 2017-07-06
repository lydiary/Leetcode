class Solution {
public:
    string convertToBase7(int num) {
        if (0 == num) return "0";
        
        int flag = num >= 0 ? 1 : -1;
        int kNum = flag * num;
        stack<int> bits;
        
        while (kNum) {
            bits.push(kNum % 7);
            kNum /= 7;
        }
        stringstream ss;
        if (flag == -1) ss << "-";
        while (!bits.empty()) {
            ss << bits.top();
            bits.pop();
        }
        return ss.str();
    }
};
