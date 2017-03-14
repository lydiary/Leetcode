class Solution {
public:
    string reverseString(string s) {
        int length = s.length();
        for (int i = 0; i < length / 2; ++i) {
            swap(s[i], s[length -1 - i]);
        }
        return s;
    }
};